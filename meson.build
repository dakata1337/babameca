project('babameca', 'c',
  default_options: [
    # 'b_sanitize=address,undefined',
    'buildtype=release',
    'warning_level=3',
    'werror=true',
  ],
  version: '0.1.0',
)

src = [
  'src/main.c',
]

inc = include_directories('include')
deps = []

executable(
  meson.project_name(),
  src,
  include_directories: [inc],
  dependencies: deps,
)
