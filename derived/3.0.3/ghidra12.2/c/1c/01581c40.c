
undefined8 FUN_01581c40(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((*(ushort *)(param_1 + 4) >> 1 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if ((*(int *)(lVar6 + 0x3c) == 5) || (*(int *)(lVar6 + 0x3c) == 6)) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar6 + 0x30);
    *(ushort *)(param_1 + 4) =
         *(ushort *)(param_1 + 4) & 0xffef | (ushort)(*(int *)(lVar6 + 0x3c) == 6) << 4;
    iVar4 = FUN_01581d70(*(undefined4 *)(lVar6 + 0x80));
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x18) = iVar2;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(DAT_05231900 + 0x148);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    puVar3 = PTR_DAT_04bb4b48;
    *(undefined8 *)(lVar6 + 0x24) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x80) = 0;
    *(undefined2 *)(lVar6 + 0x38) = 0;
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)puVar3;
    *(undefined4 *)(lVar6 + 0x3c) = 0;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x490));
    plVar1 = (long *)(*(int *)(lVar7 + 0x46c) + lVar6);
    lVar6 = *(long *)(lVar7 + 0x458);
    *(long **)(lVar7 + 0x458) = plVar1;
    *plVar1 = lVar6;
    plVar1[1] = lVar7 + 0x458;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar7 + 0x468) = *(int *)(lVar7 + 0x468) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x490));
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfffd;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

