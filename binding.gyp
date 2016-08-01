{
  "targets": [
    {
      "target_name": "Math",
      "dependencies": ['libgmp'],
      "sources": [ "src/math_node_addon.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
         ]
    },
    {
      "target_name": "libgmp",
      "type": "none",
      "actions": [{
         "action_name": 'build_gmp_lib',
         "inputs": [''],
         "outputs": [''],
         "action": ['sh', 'scripts/build.sh']
      }]
    }
  ]
}
