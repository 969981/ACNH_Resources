
bool FUN_015d32f4(int *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == -1) {
    return false;
  }
  uVar5 = *(ushort *)(param_1 + 1);
  if (((uVar5 >> 1 & 1) != 0) &&
     ((lVar6 = *(long *)(param_1 + 4), *(int *)(lVar6 + 0x3c) == 5 || (*(int *)(lVar6 + 0x3c) == 6))
     )) {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar6 + 0x30);
    *(ushort *)(param_1 + 1) = uVar5 & 0xffef | (ushort)(*(int *)(lVar6 + 0x3c) == 6) << 4;
    iVar4 = FUN_015d3550(*(undefined4 *)(lVar6 + 0x80));
    puVar3 = PTR_DAT_04bb2200;
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    lVar6 = *(long *)(param_1 + 4);
    param_1[6] = iVar2;
    lVar7 = *(long *)(*(long *)puVar3 + 0x140);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined4 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined2 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined4 *)(lVar6 + 0x3c) = 0;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x4a0));
    plVar1 = (long *)(*(int *)(lVar7 + 0x47c) + lVar6);
    lVar6 = *(long *)(lVar7 + 0x468);
    *(long **)(lVar7 + 0x468) = plVar1;
    *plVar1 = lVar6;
    plVar1[1] = lVar7 + 0x468;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(lVar7 + 0x478) = *(int *)(lVar7 + 0x478) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x4a0));
    param_1[4] = 0;
    param_1[5] = 0;
    uVar5 = *(ushort *)(param_1 + 1) & 0xfffd;
    *(ushort *)(param_1 + 1) = uVar5;
  }
  return *(long *)(param_1 + 2) != 0 && (uVar5 & 0x10) == 0;
}

