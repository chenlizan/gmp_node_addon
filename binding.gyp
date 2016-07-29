{
  "targets": [
    {
      "target_name": "Math",
      "sources": [ "src/math_node_addon.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
         ]
    }
  ]
}
