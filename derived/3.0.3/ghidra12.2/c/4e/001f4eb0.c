
undefined8 FUN_001f4eb0(long param_1,uint param_2,void *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  long lStack_b8;
  undefined1 auStack_b0 [2];
  undefined1 auStack_ae [126];
  undefined2 local_24 [2];
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    return 0xfffffed2;
  }
  if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
    return 0xfffffed2;
  }
  if (param_4 < 0x7c) {
    if ((param_2 & 0xffff) == 0) {
      lStack_b8 = 0;
    }
    else {
      local_24[0] = FUN_001f63d0(param_2);
      memcpy(auStack_b0,local_24,2);
      memcpy(auStack_ae,param_3,param_4);
      lStack_b8 = param_4 + 2;
    }
    local_c8[0] = 8;
    local_c0 = auStack_b0;
    uVar1 = FUN_001f4fa0(param_1,local_c8);
    if ((int)uVar1 == 0) {
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
      return uVar1;
    }
  }
  else {
    uVar1 = 0xfffffed4;
  }
  return uVar1;
}

