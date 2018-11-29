{
  'targets': [
    {
      'target_name': 'libgmp',
      'type': 'none',
      'conditions': [
         ['OS=="linux"', {
            'actions': [{
               'action_name': 'build_gmp_lib',
               'inputs': [''],
               'outputs': [''],
               'action': ['sh', 'scripts/build.sh']
            }]
         }]
      ]
    },
    {
      'target_name': 'gmp',
      'dependencies': ['libgmp'],
      'sources': [ 'src/gmp_node_addon.cc' ],
      'conditions': [
         ['OS=="linux"', {
            'cxxflags': ['-fPIC'],
            'include_dirs': [
               "<!(node -e \"require('nan')\")",
               '<(module_root_dir)/src/gmp/include'
            ],
            'libraries': ['<(module_root_dir)/src/gmp/lib/libgmp.a']
         }]
      ]
    },
    {
      'target_name': 'build',
      'type': 'none',
      'dependencies': ['gmp'],
      'copies': [
         {
            'destination': '<(module_root_dir)/lib/binding/node-linux-<(target_arch)',
            'files': ['<(PRODUCT_DIR)/gmp.node']
         }
      ]
    }
  ]
}
