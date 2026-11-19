
void FUN_038a5120(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  
  FUN_038a8f10();
  *param_1 = &PTR_LAB_04b62620;
  puVar6 = PTR_DAT_04bd0d40;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x2e] = puVar6 + 0x10;
  param_1[0x2f] = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar7 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar1);
    param_1[0x2f] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar13 = (long *)(lVar7 + 0x70);
      lVar10 = *plVar13;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar13 = (long)plVar8;
      *plVar8 = lVar10;
      plVar8[1] = (long)plVar13;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  puVar4 = PTR_DAT_04bc1068;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar5 = PTR_DAT_04bcbb98;
  lVar7 = *(long *)puVar3;
  param_1[0x34] = puVar1;
  param_1[0x35] = 0;
  puVar1 = param_1 + 0x3a;
  param_1[0x2e] = puVar4 + 0x10;
  param_1[0x3a] = puVar6 + 0x10;
  param_1[0x3b] = 0;
  param_1[0x36] = puVar5 + 0x10;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar1);
    param_1[0x3b] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar13 = (long *)(lVar7 + 0x70);
      lVar10 = *plVar13;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar1);
      *plVar13 = (long)plVar8;
      *plVar8 = lVar10;
      plVar8[1] = (long)plVar13;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x3a] = puVar4 + 0x10;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = puVar1;
  param_1[0x46] = 0xa0000000a;
  param_1[0x47] = 0xa0000000a;
  param_1[0x41] = 0;
  param_1[0x42] = puVar5 + 0x10;
  *(undefined4 *)(param_1 + 0x48) = 10;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  uVar11 = *(undefined8 *)(param_2 + 1);
  uVar12 = *(undefined8 *)(param_2 + 3);
  *(int *)(param_1 + 0x48) = param_2[5];
  param_1[0x47] = uVar12;
  param_1[0x46] = uVar11;
  iVar2 = *param_2;
  if (0 < iVar2) {
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      pvVar9 = malloc((long)iVar2 << 3);
    }
    else {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar7 + 8);
      if (lVar14 != 0) {
        plVar8 = (long *)(lVar14 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_038a534c;
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar2 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      param_1[0x4a] = pvVar9;
      *(undefined4 *)(param_1 + 0x49) = 0;
      *(int *)((long)param_1 + 0x24c) = iVar2;
    }
  }
LAB_038a534c:
  FUN_038a8740(param_1 + 0x4b,1,0,8);
  return;
}

