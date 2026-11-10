
uint FUN_001f63d0(uint param_1)

{
  return ((param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8) & 0xffff;
}

