
undefined8 FUN_0011f810(long param_1,uint param_2,char param_3,long *param_4)

{
  uint uVar1;
  
  *param_4 = 0;
  if ((((param_1 != 0) && ((param_2 & 0xffff) != 0)) && (param_3 == '\0')) &&
     (uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8,
     (uVar1 >> 0x10 | uVar1 << 0x10) == 0x30000)) {
    *param_4 = param_1 + ((ulong)*(byte *)(param_1 + 0x5a) << 0x18 |
                          (ulong)*(byte *)(param_1 + 0x5b) << 0x10 |
                          (ulong)*(byte *)(param_1 + 0x5c) << 8 | (ulong)*(byte *)(param_1 + 0x5d))
               + (long)(int)((CONCAT11(*(undefined1 *)(param_1 + 0x1c),
                                       *(undefined1 *)(param_1 + 0x1d)) + 7 >> 3) *
                            ((param_2 & 0xffff) - 1));
  }
  return 0;
}

