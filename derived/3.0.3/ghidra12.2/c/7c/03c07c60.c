
void FUN_03c07c60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  void *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  lVar8 = param_1 + 0x18;
  FUN_03ebac90(lVar8,7,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,0,&local_50);
  puVar7 = *(undefined8 **)(param_1 + 0x48);
  puVar7[4] = &LAB_03c08018;
  puVar7[5] = 0;
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cWaitErrorAuthority";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,1,&local_50);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(1 < *(uint *)(param_1 + 0x40)) * 0x40)
  ;
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c0801c;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cDispErrorViewer";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,2,&local_50);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(2 < *(uint *)(param_1 + 0x40)) * 0x80)
  ;
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c080a0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cDispErrorNifm";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,3,&local_50);
  lVar5 = 0xc0;
  if (*(uint *)(param_1 + 0x40) < 4) {
    lVar5 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c08198;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cDispErrorScreen";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,4,&local_50);
  puVar7 = (undefined8 *)
           (*(long *)(param_1 + 0x48) + (ulong)(4 < *(uint *)(param_1 + 0x40)) * 0x100);
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c0826c;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cWaitErrorSolve";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x40) < 6) {
    lVar5 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c08340;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_48 = "State::cChangeScene";
  local_50 = puVar1;
  FUN_03ebaf40(lVar8,6,&local_50);
  lVar8 = 0x180;
  if (*(uint *)(param_1 + 0x40) < 7) {
    lVar8 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar8);
  *puVar7 = &PTR_LAB_04b7c950;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c08394;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x40) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x48) + (long)(int)uVar3 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x60);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar7 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x60,8);
  }
  FUN_03c087b4();
  *(void **)(param_1 + 0x60) = pvVar6;
  plVar9 = *(long **)PTR_DAT_04bb2640;
  uVar4 = (**(code **)(*plVar9 + 0x70))(plVar9);
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x18))(plVar9,uVar4);
  pvVar6 = (void *)*puVar7;
  __dest = *(void **)(param_1 + 0xd0);
  if (__dest != pvVar6) {
    lVar8 = 0;
    do {
      if (*(char *)((long)pvVar6 + lVar8) == '\0') goto LAB_03c07fdc;
      if (*(char *)((long)pvVar6 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03c07fdc;
      }
      if (*(char *)((long)pvVar6 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03c07fdc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03c07fdc:
    iVar2 = (int)lVar8;
    if (*(int *)(param_1 + 0xd8) <= (int)lVar8) {
      iVar2 = *(int *)(param_1 + 0xd8) + -1;
    }
    memcpy(__dest,pvVar6,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return;
}

