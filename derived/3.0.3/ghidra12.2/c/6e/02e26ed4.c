
void FUN_02e26ed4(long param_1,undefined8 *param_2)

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
  undefined *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined4 local_68;
  
  plVar8 = param_2 + 4;
  (**(code **)(*plVar8 + 0x18))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  puVar2 = PTR_DAT_04bb2020;
  if (((char *)param_2[5] != "") && (*(char *)param_2[5] != '\0')) {
    return;
  }
  if (((DAT_05694fe8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05694fe8), iVar6 != 0)) {
    DAT_05694fa8 = puVar2 + 0x10;
    DAT_05694fb0 = "DemoWait1";
    DAT_05694fc0 = &DAT_0407ebb1;
    DAT_05694fd0 = &DAT_040fe5ab;
    DAT_05694fe0 = &DAT_0407ebb1;
    DAT_05694fb8 = DAT_05694fa8;
    DAT_05694fc8 = DAT_05694fa8;
    DAT_05694fd8 = DAT_05694fa8;
    __cxa_guard_release(&DAT_05694fe8);
  }
  if (((DAT_05695000 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05695000), iVar6 != 0)) {
    DAT_05694ff0 = 0x200000002;
    DAT_05694ff8 = &DAT_05694fa8;
    __cxa_guard_release(&DAT_05695000);
  }
  if (param_2[1] != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_68 = 0;
    puStack_88 = (undefined8 *)*param_2;
    local_70 = &DAT_05694ff0;
    lVar9 = *(long *)(param_2[1] + 0x10);
    local_90 = *(undefined **)PTR_PTR_04bc4e50;
    FUN_0386e230(lVar9 + 0x200,lVar9,&local_90);
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
  puVar5 = PTR_DAT_04bc6998;
  puVar1 = puVar2 + 0x10;
  pcStack_98 = "JobIn";
  uVar10 = *param_2;
  pcStack_a8 = "JobOut";
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined1 *)((long)plVar8 + 0x44) = 0;
  *(undefined4 *)(plVar8 + 8) = 0x3f800000;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_90);
  plVar8[4] = lVar9;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_90);
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
  puVar1 = puVar2 + 0x10;
  pcStack_98 = "DemoIn2";
  pcStack_a8 = "DemoOut2";
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
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_90);
  plVar8[4] = lVar9;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_90);
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
  uVar10 = *param_2;
  puVar1 = puVar2 + 0x10;
  pcStack_98 = "DemoIn1";
  pcStack_a8 = "DemoOut1";
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
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_90);
  plVar8[4] = lVar9;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_90);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x580) = plVar8;
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
  puVar1 = puVar2 + 0x10;
  pcStack_98 = "DemoIn3";
  pcStack_a8 = "DemoOut3";
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
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_90);
  plVar8[4] = lVar9;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_90);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x588) = plVar8;
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
  pcStack_98 = "DemoIn4";
  pcStack_a8 = "DemoOut4";
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
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_90 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_a0,&local_90);
  plVar8[4] = lVar9;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar2;
  lVar9 = FUN_03c68d44(uVar10,&local_b0,&local_90);
  plVar8[5] = lVar9;
  *(long **)(param_1 + 0x590) = plVar8;
  *(undefined8 *)(*(long *)(param_2[1] + 8) + 0x1b0) = *(undefined8 *)(param_1 + 0x570);
  return;
}

