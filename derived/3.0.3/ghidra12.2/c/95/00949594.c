
uint FUN_00949594(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_8 [2];
  
  local_8[0] = 0;
  local_24 = 0;
  local_2c = 0;
  local_28 = 0;
  uVar2 = FUN_00948e68(param_1,param_2,local_8,&local_24,&local_28,&local_2c);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    if ((((local_8[0] < 0x49) &&
         ((*(uint *)(param_3 + (long)((int)local_8[0] >> 5) * 4) >> (ulong)(local_8[0] & 0x1f) & 1)
          != 0)) && (local_24 < 0x49)) &&
       ((((*(uint *)(param_3 + (long)((int)local_24 >> 5) * 4) >> (ulong)(local_24 & 0x1f) & 1) != 0
         && (local_28 < 0x49)) &&
        (((*(uint *)(param_3 + (long)((int)local_28 >> 5) * 4) >> (ulong)(local_28 & 0x1f) & 1) != 0
         && (local_2c < 0x49)))))) {
      uVar1 = *(uint *)(param_3 + (long)((int)local_2c >> 5) * 4) >> (ulong)(local_2c & 0x1f) & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

