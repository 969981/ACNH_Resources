
void FUN_006e66b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *local_50;
  char *pcStack_48;
  
  uVar7 = param_2[1];
  uVar10 = param_2[2];
  puVar9 = param_1 + 6;
  uVar11 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  param_1[1] = uVar7;
  uVar7 = *param_2;
  *param_1 = uVar7;
  param_1[5] = uVar7;
  FUN_03ebac90(puVar9,7,1,uVar7,0);
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,0,&local_50);
  puVar8 = (undefined8 *)param_1[0xc];
  puVar8[4] = &LAB_006e6a1c;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_048fbdd8;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,1,&local_50);
  puVar8 = (undefined8 *)(param_1[0xc] + (ulong)(1 < *(uint *)(param_1 + 0xb)) * 0x40);
  puVar8[2] = &LAB_006e6a20;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_048fbdd8;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_006e6a24;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cGetHeader";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,3,&local_50);
  lVar12 = 0xc0;
  if (*(uint *)(param_1 + 0xb) < 4) {
    lVar12 = 0;
  }
  puVar9 = (undefined8 *)(param_1[0xc] + lVar12);
  puVar9[2] = &LAB_006e6ca8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fbdd8;
  puVar9[1] = param_1;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &LAB_006e6d74;
  puVar9[5] = 0;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  uVar2 = *(uint *)(param_1 + 9);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x3c);
  *(uint *)(param_1 + 7) = uVar2;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xb) <= uVar2) {
      uVar2 = 0;
    }
    puVar9 = *(undefined8 **)(param_1[0xc] + (long)(int)uVar2 * 0x40);
    if (puVar9 != (undefined8 *)0x0) {
      (*(code *)*puVar9)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar6 = malloc(0x20);
  }
  else {
    plVar4 = (long *)param_1[5];
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  FUN_006e7064(pvVar6,param_1[1],*(undefined4 *)(param_1 + 4),param_1[5]);
  param_1[0x14] = pvVar6;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    puVar9 = malloc(0x70);
  }
  else {
    plVar4 = (long *)param_1[5];
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x70,8);
  }
  *puVar9 = 0;
  puVar9[1] = 0x200000;
  puVar9[2] = 0x1000;
  puVar9[3] = 0x1000;
  puVar9[4] = 0x1000;
  puVar9[5] = 0x1000;
  puVar1 = PTR_DAT_04bb2c20 + 0x10;
  puVar9[6] = 0;
  puVar9[7] = puVar1;
  puVar9[0xc] = puVar9 + 0xb;
  puVar9[0xd] = 0x800000000;
  puVar9[0xb] = puVar9 + 0xb;
  uVar7 = param_1[1];
  lVar12 = param_1[2];
  uVar10 = param_1[5];
  uVar11 = param_1[3];
  param_1[0x10014] = puVar9;
  lVar5 = lVar12 * 6 + 0x80000;
  puVar9[2] = uVar7;
  puVar9[3] = lVar12;
  local_50 = puVar3 + 0x10;
  puVar9[4] = uVar11;
  puVar9[5] = uVar7;
  *puVar9 = uVar10;
  puVar9[1] = lVar5;
  pcStack_48 = "ParallelWork";
  uVar7 = FUN_038c6d48(lVar5,&local_50,*puVar9,8,1,0);
  puVar9[6] = uVar7;
  lVar12 = param_1[0x10014];
  *(undefined ***)(lVar12 + 0x38) = &PTR_LAB_048fbe00;
  *(undefined8 **)(lVar12 + 0x40) = param_1;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_006e6e40;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  if (0 < *(int *)(param_1 + 0x15)) {
    lVar12 = 0;
    puVar9 = (undefined8 *)param_1[0x17];
    do {
      puVar8 = *(undefined8 **)(param_1[0x16] + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar8 = puVar9;
      param_1[0x17] = puVar8;
      puVar9 = puVar8;
    } while (lVar12 < *(int *)(param_1 + 0x15));
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0xfe19) = 0;
  *(undefined4 *)(param_1 + 0xfe1e) = 0;
  return;
}

