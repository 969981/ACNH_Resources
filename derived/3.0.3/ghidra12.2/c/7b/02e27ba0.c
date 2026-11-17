
void FUN_02e27ba0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  if (((char *)param_2[5] != "") && (*(char *)param_2[5] != '\0')) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar7 = malloc(0x48);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x48,8);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  uVar9 = *param_2;
  *(undefined1 *)(plVar7 + 3) = 0;
  puVar5 = PTR_DAT_04bc6998;
  puVar1 = puVar2 + 0x10;
  pcStack_78 = "DeleteIn";
  pcStack_88 = "DeleteOut";
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined1 *)((long)plVar7 + 0x44) = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  puStack_68 = &DAT_0407ebb1;
  *(undefined4 *)(plVar7 + 8) = 0x3f800000;
  local_90 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  lVar8 = FUN_03c68d44(uVar9,&local_80,&local_70);
  plVar7[4] = lVar8;
  puStack_68 = &DAT_0407ebb1;
  local_70 = puVar1;
  lVar8 = FUN_03c68d44(uVar9,&local_90,&local_70);
  plVar7[5] = lVar8;
  *(long **)(param_1 + 0x570) = plVar7;
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    plVar7 = malloc(0x48);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x48,8);
    }
  }
  uVar9 = *param_2;
  puVar2 = puVar2 + 0x10;
  pcStack_78 = "OutputIn";
  pcStack_88 = "OutputOut";
  *plVar7 = (long)(puVar5 + 0x10);
  *(undefined1 *)(plVar7 + 3) = 0;
  *(undefined4 *)(plVar7 + 8) = 0x3f800000;
  *(undefined1 *)((long)plVar7 + 0x44) = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  puStack_68 = &DAT_0407ebb1;
  local_90 = puVar2;
  local_80 = puVar2;
  local_70 = puVar2;
  lVar8 = FUN_03c68d44(uVar9,&local_80,&local_70);
  plVar7[4] = lVar8;
  puStack_68 = &DAT_0407ebb1;
  local_70 = puVar2;
  lVar8 = FUN_03c68d44(uVar9,&local_90,&local_70);
  plVar7[5] = lVar8;
  *(long **)(param_1 + 0x578) = plVar7;
  *(undefined8 *)(*(long *)(param_2[1] + 8) + 0x1b0) = *(undefined8 *)(param_1 + 0x570);
  return;
}

