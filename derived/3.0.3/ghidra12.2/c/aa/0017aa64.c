
uint FUN_0017aa64(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + param_2) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + param_2) & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}

