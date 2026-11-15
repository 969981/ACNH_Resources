
undefined8 FUN_01dff734(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  char *__dest;
  long lVar7;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  long local_28;
  
  puVar2 = PTR_DAT_04bb21d0;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (*(int *)(*(long *)puVar2 + 0x78) == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 2) == 0) {
    if (*(long *)(param_1 + 0x2a8) == 0) {
      return 0;
    }
    uVar6 = FUN_01d77c78();
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    lVar7 = *(long *)(param_1 + 0x2a8);
    uVar6 = FUN_01d77c78(lVar7);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (*(char *)(lVar7 + 0xc) != '\0') {
      return 0;
    }
    bVar3 = FUN_01e06398(DAT_0538adc8,lVar7 + 0xd,lVar7);
    *(byte *)(lVar7 + 0xc) = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      return 0;
    }
    iVar5 = FUN_01d78590(*(undefined8 *)(param_1 + 0x2a8),&local_28);
    if (iVar5 != 0) {
      return 0;
    }
  }
  else {
    local_28 = *(long *)(param_2 + 2);
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x2f0);
  if (lVar7 == 0) {
    return 0;
  }
  iVar5 = *param_2;
  *(long *)(lVar7 + 0x50) = local_28;
  **(undefined1 **)(lVar7 + 0x60) = 0;
  __dest = *(char **)(lVar7 + 0x60);
  if (__dest != "download") {
    iVar1 = 8;
    if (*(int *)(lVar7 + 0x68) < 9) {
      iVar1 = *(int *)(lVar7 + 0x68) + -1;
    }
    memcpy(__dest,"download",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  puVar2 = PTR_DAT_04bb2950;
  *(long *)(lVar7 + 0x90) = (long)iVar5;
  *(undefined1 *)(lVar7 + 0x4c) = *puVar2;
  local_50 = PTR_LAB_04bb2a30;
  *(undefined2 *)(lVar7 + 0x4d) = 0;
  local_60 = PTR_DAT_04bb2a38 + 0x10;
  uStack_48 = 0;
  lStack_58 = lVar7;
  uVar4 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,
                       (undefined1 *)(lVar7 + 0x4c),0,0,0);
  *(undefined4 *)(lVar7 + 0x44) = uVar4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x658));
  FUN_03ebb160(param_1 + 8,0x15);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
  return 1;
}

