
void FUN_0204f004(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  if ((param_2 & 1) == 0) {
    if (*(int *)(lVar1 + 0x360) != 0x13) goto LAB_0204f0b0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x360) == 0x13) goto LAB_0204f0b0;
    uVar2 = 0x13;
  }
  local_24 = 0;
  local_28 = 0;
  FUN_01e5a930(0x40000000,lVar1,uVar2,PTR_DAT_04bb2150,&local_24,&local_28,PTR_DAT_04bc1600,6);
LAB_0204f0b0:
  *(byte *)(param_1 + 0xb7) = param_2 & 1;
  return;
}

