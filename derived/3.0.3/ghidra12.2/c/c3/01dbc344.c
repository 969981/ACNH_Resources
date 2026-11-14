
void FUN_01dbc344(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar4 = PTR_DAT_04bc1368;
  lVar8 = *(long *)PTR_DAT_04bc1368;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if (lVar8 != 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x38);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,8);
    }
  }
  lVar8 = *(long *)puVar2;
  plVar6 = (long *)((long)pvVar7 + 0x18);
  *plVar6 = (long)(PTR_DAT_04bd0d40 + 0x10);
  *(undefined8 *)((long)pvVar7 + 0x28) = 0;
  *(undefined8 *)((long)pvVar7 + 0x30) = 0;
  *(long *)((long)pvVar7 + 0x20) = 0;
  if (lVar8 != 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar1 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0xa8);
    }
    lVar8 = *plVar1;
    *(long *)((long)pvVar7 + 0x20) = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar6);
      *plVar10 = (long)plVar1;
      *plVar1 = lVar9;
      plVar1[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar1;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar5 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      }
    }
  }
  *(long **)PTR_DAT_04bc1360 = plVar6;
  puVar2 = PTR_DAT_04bc1358;
  *(void **)pvVar7 = pvVar7;
  *(void **)((long)pvVar7 + 8) = pvVar7;
  *(void **)puVar4 = pvVar7;
  *(undefined8 *)((long)pvVar7 + 0x10) = 0x800000000;
  *(undefined **)((long)pvVar7 + 0x18) = puVar2 + 0x10;
  return;
}

