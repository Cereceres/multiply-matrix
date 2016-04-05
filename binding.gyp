

{
  "targets": [
    {
      "target_name": "multiply",
      "sources": [
        "multiply.cc"
      ],'cflags': [''],
      "include_dirs": ["<!(node -e \"require('nan')\")"
      ],
      "libraries": ["-L/usr/local/lib"]
    }
  ]
}
