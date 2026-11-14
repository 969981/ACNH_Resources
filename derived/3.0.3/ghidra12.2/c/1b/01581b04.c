
bool FUN_01581b04(int *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  
  if (*param_1 == DAT_04cb0c60) {
    bVar4 = false;
  }
  else {
    uVar6 = *(ushort *)(param_1 + 1);
    if (((uVar6 >> 1 & 1) != 0) &&
       ((lVar7 = *(long *)(param_1 + 4), *(int *)(lVar7 + 0x3c) == 5 ||
        (*(int *)(lVar7 + 0x3c) == 6)))) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar7 + 0x30);
      *(ushort *)(param_1 + 1) = uVar6 & 0xffef | (ushort)(*(int *)(lVar7 + 0x3c) == 6) << 4;
      iVar5 = FUN_01581d70(*(undefined4 *)(lVar7 + 0x80));
      puVar3 = PTR_DAT_04bb2200;
      iVar2 = 0;
      if (iVar5 != -1) {
        iVar2 = iVar5;
      }
      lVar7 = *(long *)(param_1 + 4);
      param_1[6] = iVar2;
      iVar2 = DAT_04cb0c60;
      lVar8 = *(long *)(*(long *)puVar3 + 0x148);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x24) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined4 *)(lVar7 + 0x80) = 0;
      *(undefined2 *)(lVar7 + 0x38) = 0;
      *(int *)(lVar7 + 0x20) = iVar2;
      *(undefined4 *)(lVar7 + 0x3c) = 0;
      nn::os::LockMutex((MutexType *)(lVar8 + 0x490));
      plVar1 = (long *)(*(int *)(lVar8 + 0x46c) + lVar7);
      lVar7 = *(long *)(lVar8 + 0x458);
      *(long **)(lVar8 + 0x458) = plVar1;
      *plVar1 = lVar7;
      plVar1[1] = lVar8 + 0x458;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar1;
      }
      *(int *)(lVar8 + 0x468) = *(int *)(lVar8 + 0x468) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x490));
      param_1[4] = 0;
      param_1[5] = 0;
      uVar6 = *(ushort *)(param_1 + 1) & 0xfffd;
      *(ushort *)(param_1 + 1) = uVar6;
    }
    bVar4 = *(long *)(param_1 + 2) != 0 && (uVar6 & 0x10) == 0;
  }
  return bVar4;
}

