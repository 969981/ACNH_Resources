
undefined8 FUN_00429a60(long *param_1,long param_2)

{
  byte *pbVar2;
  byte *pbVar1;
  
  if ((byte *)*param_1 == (byte *)param_1[1]) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  do {
    pbVar1 = pbVar2 + 1;
    if ((1 << (ulong)(*pbVar2 & 0x1f) & *(uint *)(param_2 + ((ulong)(*pbVar2 >> 3) & 0x1c))) != 0) {
      return 1;
    }
    pbVar2 = pbVar1;
  } while ((byte *)param_1[1] != pbVar1);
  return 0;
}

