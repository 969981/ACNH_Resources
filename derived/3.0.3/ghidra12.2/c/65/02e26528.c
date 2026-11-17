
void FUN_02e26528(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined *local_70;
  char *pcStack_68;
  
  plVar8 = param_2 + 4;
  (**(code **)(*plVar8 + 0x18))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  puVar2 = PTR_DAT_04bb2020;
  if (((char *)param_2[5] != "") && (*(char *)param_2[5] != '\0')) {
    return;
  }
  if (((DAT_05694f28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05694f28), iVar6 != 0)) {
    DAT_05694f08 = puVar2 + 0x10;
    DAT_05694f10 = &DAT_040fe5ab;
    DAT_05694f20 = &DAT_0407ebb1;
    DAT_05694f18 = DAT_05694f08;
    __cxa_guard_release(&DAT_05694f28);
  }
  if (((DAT_05694f40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05694f40), iVar6 != 0)) {
    DAT_05694f30 = 0x100000002;
    DAT_05694f38 = &DAT_05694f08;
    __cxa_guard_release(&DAT_05694f40);
  }
  if (param_2[1] != 0) {
    local_90 = 0;
    uStack_88 = 0;
    local_78 = 0;
    pcStack_98 = (char *)*param_2;
    local_80 = &DAT_05694f30;
    lVar9 = *(long *)(param_2[1] + 0x10);
    local_a0 = *(undefined **)PTR_PTR_04bc4e50;
    FUN_0386e230(lVar9 + 0x200,lVar9,&local_a0);
  }
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar8 = malloc(0x48);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar9 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x48,8);
    }
  }
  uVar10 = *param_2;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[2] = 0;
  puVar5 = PTR_DAT_04bc6998;
  puVar1 = puVar2 + 0x10;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  *(undefined1 *)((long)plVar8 + 0x44) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 8) = 0x3f800000;
  pcStack_98 = "In;<Out";
  pcStack_68 = "";
  local_a0 = puVar1;
  local_70 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_70);
  plVar8[4] = lVar9;
  pcStack_98 = "Out;<In";
  pcStack_68 = "";
  local_a0 = puVar1;
  local_70 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_70);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x570) = plVar8;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar8 = malloc(0x48);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar9 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x48,8);
    }
  }
  uVar10 = *param_2;
  puVar2 = puVar2 + 0x10;
  pcStack_a8 = "OutAppClose";
  pcStack_68 = "InAppClose";
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined1 *)(plVar8 + 3) = 0;
  *(undefined4 *)(plVar8 + 8) = 0x3f800000;
  *(undefined1 *)((long)plVar8 + 0x44) = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  pcStack_98 = "";
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_70 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_70,&local_a0);
  plVar8[4] = lVar9;
  pcStack_98 = "";
  local_a0 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_a0);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x578) = plVar8;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar8 = malloc(0x48);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar9 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x48,8);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  uVar10 = *param_2;
  *(undefined1 *)(plVar8 + 3) = 0;
  *(undefined1 *)((long)plVar8 + 0x44) = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  puVar2 = puVar2 + 0x10;
  plVar8[6] = 0;
  plVar8[7] = 0;
  pcStack_a8 = "OutAppCloseMyDesignList";
  pcStack_68 = "InAppClose";
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar8 + 8) = 0x3f800000;
  plVar8[1] = 0;
  plVar8[2] = 0;
  pcStack_98 = "";
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_70 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_70,&local_a0);
  plVar8[4] = lVar9;
  pcStack_98 = "";
  local_a0 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_a0);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x580) = plVar8;
  *(undefined8 *)(*(long *)(param_2[1] + 8) + 0x1b0) = *(undefined8 *)(param_1 + 0x570);
  return;
}

