
void FUN_006dddf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined *local_60;
  char *pcStack_58;
  
  uVar11 = *param_2;
  uVar2 = param_2[1];
  puVar10 = param_1 + 5;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar11;
  param_1[1] = uVar2;
  param_1[4] = uVar11;
  FUN_03ebac90(puVar10,7,1,uVar11,0);
  puVar5 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cSleep";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,0,&local_60);
  puVar9 = (undefined8 *)param_1[0xb];
  puVar9[4] = &LAB_006de3ec;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cIdle";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,1,&local_60);
  puVar9 = (undefined8 *)(param_1[0xb] + (ulong)(1 < *(uint *)(param_1 + 10)) * 0x40);
  puVar9[2] = &LAB_006de3f0;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_006de400;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cGetId";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,2,&local_60);
  puVar9 = (undefined8 *)(param_1[0xb] + (ulong)(2 < *(uint *)(param_1 + 10)) * 0x80);
  puVar9[2] = &LAB_006de6a0;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_006de824;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cGetHeader";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,3,&local_60);
  lVar12 = 0xc0;
  if (*(uint *)(param_1 + 10) < 4) {
    lVar12 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0xb] + lVar12);
  puVar9[2] = &LAB_006de900;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_006dea84;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cGetMeta";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,4,&local_60);
  puVar9 = (undefined8 *)(param_1[0xb] + (ulong)(4 < *(uint *)(param_1 + 10)) * 0x100);
  puVar9[2] = &LAB_006deb58;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_006dec20;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cGetBody";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,5,&local_60);
  lVar12 = 0x140;
  if (*(uint *)(param_1 + 10) < 6) {
    lVar12 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0xb] + lVar12);
  puVar9[2] = &LAB_006dece8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fb358;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_006dedb0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_58 = "State::cReadyToNext";
  local_60 = puVar1;
  FUN_03ebaf40(puVar10,6,&local_60);
  lVar12 = 0x180;
  if (*(uint *)(param_1 + 10) < 7) {
    lVar12 = 0;
  }
  puVar10 = (undefined8 *)(param_1[0xb] + lVar12);
  puVar10[2] = &LAB_006dee78;
  puVar10[3] = 0;
  *puVar10 = &PTR_LAB_048fb358;
  puVar10[1] = param_1;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &LAB_006dee7c;
  puVar10[5] = 0;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  uVar4 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_1 + 0x34);
  *(uint *)(param_1 + 6) = uVar4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 10) <= uVar4) {
      uVar4 = 0;
    }
    puVar10 = *(undefined8 **)(param_1[0xb] + (long)(int)uVar4 * 0x40);
    if (puVar10 != (undefined8 *)0x0) {
      (*(code *)*puVar10)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar8 = malloc(0x20);
  }
  else {
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
  }
  FUN_006df6b4(pvVar8,*(undefined4 *)(param_1 + 3),param_1[4]);
  param_1[0x13] = pvVar8;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar8 = malloc(0x20);
  }
  else {
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x20,8);
  }
  FUN_006df3e4(pvVar8,param_1[1],*(undefined4 *)((long)param_1 + 0x1c),param_1[4]);
  param_1[0x14] = pvVar8;
  iVar14 = (int)param_1[1];
  plVar6 = (long *)param_1[4];
  if (0 < iVar14) {
    lVar12 = *(long *)puVar1;
    uVar13 = param_1[1] & 0xffffffff;
    if (lVar12 == 0) {
      pvVar8 = malloc(uVar13);
joined_r0x006de3d4:
      if (pvVar8 != (void *)0x0) {
        *(int *)(param_1 + 0x16) = iVar14;
        param_1[0x17] = pvVar8;
      }
    }
    else {
      if (plVar6 != (long *)0x0) {
LAB_006de1ec:
        pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar13,8);
        goto joined_r0x006de3d4;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_006de1ec;
    }
    plVar6 = (long *)param_1[4];
  }
  iVar14 = (int)param_1[2];
  if (0 < iVar14) {
    lVar12 = *(long *)puVar1;
    uVar13 = param_1[2] & 0xffffffff;
    if (lVar12 == 0) {
      pvVar8 = malloc(uVar13);
    }
    else {
      if (plVar6 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_006de280;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar13,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(int *)(param_1 + 0x1a) = iVar14;
      param_1[0x1b] = pvVar8;
    }
  }
LAB_006de280:
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    puVar10 = malloc(0x58);
  }
  else {
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x58,8);
  }
  *puVar10 = 0;
  puVar10[1] = 0x200000;
  puVar10[2] = 0x1000;
  puVar10[3] = 0;
  puVar10[4] = PTR_DAT_04bb2ae0 + 0x10;
  puVar10[8] = puVar10 + 8;
  puVar10[9] = puVar10 + 8;
  puVar10[10] = 0x800000000;
  param_1[0x7487] = puVar10;
  uVar11 = param_1[4];
  puVar10[2] = param_1[2];
  *puVar10 = uVar11;
  puVar10[1] = 0x200000;
  local_60 = puVar5 + 0x10;
  pcStack_58 = "ParallelWork";
  uVar11 = FUN_038c6d48(0x200000,&local_60,*puVar10,8,1,0);
  puVar10[3] = uVar11;
  lVar12 = param_1[0x7487];
  *(undefined ***)(lVar12 + 0x20) = &PTR_LAB_048fb380;
  *(undefined8 **)(lVar12 + 0x28) = param_1;
  *(undefined1 **)(lVar12 + 0x30) = &LAB_006dee80;
  *(undefined8 *)(lVar12 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x1d)) {
    lVar12 = 0;
    puVar10 = (undefined8 *)param_1[0x1f];
    do {
      puVar9 = *(undefined8 **)(param_1[0x1e] + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar9 = puVar10;
      param_1[0x1f] = puVar9;
      puVar10 = puVar9;
    } while (lVar12 < *(int *)(param_1 + 0x1d));
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x73a1) = 0;
  *(undefined4 *)(param_1 + 0x73af) = 0;
  return;
}

