
void FUN_006d7540(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_50;
  char *pcStack_48;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  puVar9 = param_1 + 5;
  uVar10 = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[1] = uVar3;
  param_1[2] = uVar10;
  *param_1 = uVar2;
  param_1[4] = uVar2;
  FUN_03ebac90(puVar9,5,1,uVar2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,0,&local_50);
  puVar8 = (undefined8 *)param_1[0xb];
  puVar8[4] = &LAB_006d7858;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_048fac50;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,1,&local_50);
  puVar8 = (undefined8 *)(param_1[0xb] + (ulong)(1 < *(uint *)(param_1 + 10)) * 0x40);
  puVar8[2] = &LAB_006d785c;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_048fac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_006d7860;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cGetHeader";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,2,&local_50);
  puVar8 = (undefined8 *)(param_1[0xb] + (ulong)(2 < *(uint *)(param_1 + 10)) * 0x80);
  puVar8[2] = &LAB_006d7a10;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_048fac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_006d7b6c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cGetMeta";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,3,&local_50);
  lVar11 = 0xc0;
  if (*(uint *)(param_1 + 10) < 4) {
    lVar11 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0xb] + lVar11);
  puVar8[2] = &LAB_006d7c4c;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_048fac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_006d7d08;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cGetBody";
  local_50 = puVar1;
  FUN_03ebaf40(puVar9,4,&local_50);
  puVar9 = (undefined8 *)(param_1[0xb] + (ulong)(4 < *(uint *)(param_1 + 10)) * 0x100);
  puVar9[2] = &LAB_006d7de8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_048fac50;
  puVar9[1] = param_1;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &LAB_006d7ea4;
  puVar9[5] = 0;
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
    puVar9 = *(undefined8 **)(param_1[0xb] + (long)(int)uVar4 * 0x40);
    if (puVar9 != (undefined8 *)0x0) {
      (*(code *)*puVar9)();
    }
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar7 = malloc(0x20);
  }
  else {
    plVar5 = (long *)param_1[4];
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  FUN_006d8240(pvVar7,*(undefined4 *)(param_1 + 3),param_1[4]);
  param_1[0x13] = pvVar7;
  param_1[0x14] = param_2[1];
  param_1[0x15] = param_2[2];
  if (0 < *(int *)(param_1 + 0x16)) {
    lVar11 = 0;
    puVar9 = (undefined8 *)param_1[0x18];
    do {
      puVar8 = *(undefined8 **)(param_1[0x17] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar8 = puVar9;
      param_1[0x18] = puVar8;
      puVar9 = puVar8;
    } while (lVar11 < *(int *)(param_1 + 0x16));
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1d31a) = 0;
  *(undefined4 *)(param_1 + 0x1d327) = 0;
  return;
}

