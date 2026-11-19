
void FUN_03b0de50(long param_1,long *param_2)

{
  size_t __size;
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong *puVar15;
  undefined *puStack_17148;
  undefined8 uStack_17140;
  undefined8 uStack_17138;
  undefined1 uStack_17130;
  
  puVar3 = PTR_DAT_04bbd7c0;
  pcVar10 = *(code **)(*(long *)PTR_DAT_04bbd7c0 + 0x20);
  if (pcVar10 == (code *)0x0) {
    nn::os::LockMutex((MutexType *)(*(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x28) + 0x28));
  }
  else {
    (*pcVar10)(1);
  }
  memcpy(&puStack_17148,(void *)param_2[1],0x170e0);
  puVar4 = PTR_DAT_04bb2698;
  plVar5 = (long *)*param_2;
  uStack_17140 = PTR_LAB_04bd1da0;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  uStack_17138 = plVar5;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x1ec8);
  }
  else {
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1ec8,8);
  }
  FUN_00353970();
  lVar11 = *(long *)puVar3;
  *(void **)(param_1 + 0x10) = pvVar7;
  FUN_00353c00(pvVar7,*(undefined8 *)(lVar11 + 0x48),&puStack_17148,0,0,0);
  FUN_00354f4c(*(undefined8 *)(param_1 + 0x10),PTR_LAB_04bd1da8,0);
  puVar3 = PTR_DAT_04bb2020;
  uVar2 = *(uint *)(param_2 + 3);
  if ((int)uVar2 < 1) {
LAB_03b0e03c:
    uVar2 = *(uint *)(param_1 + 0x18);
    puVar12 = *(ulong **)(param_1 + 0x20);
  }
  else {
    lVar11 = *(long *)puVar4;
    __size = (ulong)uVar2 * 0x48 + 8;
    if (lVar11 == 0) {
      puVar8 = malloc(__size);
    }
    else {
      plVar5 = (long *)*param_2;
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03b0e03c;
      }
      puVar8 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (puVar8 == (ulong *)0x0) goto LAB_03b0e03c;
    puVar12 = puVar8 + 1;
    *puVar8 = (ulong)uVar2;
    puVar4 = PTR_DAT_04bb2120;
    puVar8 = puVar12;
    do {
      puVar15 = puVar8 + 9;
      *puVar8 = (ulong)(puVar3 + 0x10);
      puVar8[1] = (ulong)puVar4;
      FUN_003522e4(puVar8 + 2);
      puVar8 = puVar15;
    } while (puVar15 != puVar12 + (ulong)uVar2 * 9);
    *(uint *)(param_1 + 0x18) = uVar2;
    *(ulong **)(param_1 + 0x20) = puVar12;
  }
  if (uVar2 != 0) {
    uVar14 = 0;
    do {
      puVar8 = (ulong *)(param_2[2] + (long)(int)uVar14 * 0x18);
      puVar12[(long)(int)uVar14 * 9 + 1] = *puVar8;
      FUN_003522cc(&puStack_17148);
      puStack_17148 = *(undefined **)(param_1 + 0x10);
      uStack_17140 = (char *)CONCAT26(uStack_17140._6_2_,(int6)puVar8[1]);
      uStack_17130 = 0;
      uStack_17140 = (char *)CONCAT17(1,(undefined7)uStack_17140);
      uVar1 = 0x3f;
      if (*(ushort *)((long)puVar8 + 0x14) != 0) {
        uVar1 = (uint)*(ushort *)((long)puVar8 + 0x14);
      }
      uStack_17138 = (long *)CONCAT44((int)puVar8[2],uVar1);
      FUN_00352370(puVar12 + (long)(int)uVar14 * 9 + 2,&puStack_17148);
      uVar14 = uVar14 + 1;
    } while (uVar2 != uVar14);
  }
  FUN_003552d0(*(undefined8 *)(param_1 + 0x10));
  FUN_00355d50(*(undefined8 *)(param_1 + 0x10));
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar9 = malloc(0x118);
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_03b0e168;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x118,8);
  }
LAB_03b0e168:
  puVar3 = PTR_DAT_04bbd7c0;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  puStack_17148 = PTR_DAT_04bb2020 + 0x10;
  uStack_17140 = "UpdateTextureCacheThread";
  FUN_038e1f88(puVar9,&puStack_17148,*param_2,*(undefined4 *)((long)param_2 + 0x1c),0,0x7fffffff,
               0x8000,0x20);
  puVar9[0x21] = uVar13;
  *puVar9 = &PTR_FUN_04b73260;
  *(undefined1 *)(puVar9 + 0x22) = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar9;
  uVar2 = *(uint *)(param_2 + 4);
  *(uint *)(puVar9 + 0x1a) = uVar2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)puVar9[0x1d],-1,(ulong)uVar2);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  pcVar10 = *(code **)(*(long *)puVar3 + 0x20);
  if (pcVar10 == (code *)0x0) {
    nn::os::UnlockMutex((MutexType *)(*(long *)(*(long *)puVar3 + 0x28) + 0x28));
  }
  else {
    (*pcVar10)(0);
  }
  return;
}

