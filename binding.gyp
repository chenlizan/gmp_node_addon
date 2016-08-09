{
  "targets": [
    {
      "target_name": "Gmp",
      "cflags": ['-fPIC'],
      "dependencies": ['libgmp'],
      "sources": [ "src/gmp_node_addon.cc" ],
      "conditions": [
         ['OS=="linux"', {
            "include_dirs": [
               "<!(node -e \"require('nan')\")",
               '<(module_root_dir)/src/gmp/include'
            ],
            "libraries": ['<(module_root_dir)/src/gmp/lib/libgmp.a']
         }]
      ]
    },
    {
      "target_name": "libgmp",
      "type": "none",
      "conditions": [
         ['OS=="linux"', {
            "actions": [{
               "action_name": 'build_gmp_lib',
               "inputs": [''],
               "outputs": [''],
               "action": ['sh', 'scripts/build.sh']
            }]
         }]
      ]
    }
  ]
}
