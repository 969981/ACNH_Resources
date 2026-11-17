
void FUN_02e25b24(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined8 *puStack_48;
  
  plVar5 = param_2 + 4;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  puVar1 = PTR_DAT_04bb2020;
  if (((char *)param_2[5] != "") && (*(char *)param_2[5] != '\0')) {
    return;
  }
  if (((DAT_05694e48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05694e48), iVar3 != 0)) {
    DAT_05694e28 = puVar1 + 0x10;
    DAT_05694e30 = &DAT_040fe5ab;
    DAT_05694e40 = &DAT_0407ebb1;
    DAT_05694e38 = DAT_05694e28;
    __cxa_guard_release(&DAT_05694e48);
  }
  if (((DAT_05694e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05694e60), iVar3 != 0)) {
    DAT_05694e50 = 0x100000002;
    DAT_05694e58 = &DAT_05694e28;
    __cxa_guard_release(&DAT_05694e60);
  }
  if (param_2[1] != 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_58 = 0;
    pcStack_78 = (char *)*param_2;
    local_60 = &DAT_05694e50;
    lVar6 = *(long *)(param_2[1] + 0x10);
    local_80 = *(undefined **)PTR_PTR_04bc4e50;
    FUN_0386e230(lVar6 + 0x200,lVar6,&local_80);
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x48);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x48,8);
    }
  }
  uVar7 = *param_2;
  *(undefined1 *)(plVar5 + 3) = 0;
  plVar5[2] = 0;
  puVar2 = PTR_DAT_04bc6998;
  puVar1 = puVar1 + 0x10;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  *(undefined1 *)((long)plVar5 + 0x44) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[1] = 0;
  *(undefined4 *)(plVar5 + 8) = 0x3f800000;
  pcStack_78 = "In;<Out";
  puStack_48 = &DAT_0407ebb1;
  local_80 = puVar1;
  local_50 = puVar1;
  lVar6 = FUN_03c68d44(uVar7,&local_80,&local_50);
  plVar5[4] = lVar6;
  pcStack_78 = "Out;<In";
  puStack_48 = &DAT_0407ebb1;
  local_80 = puVar1;
  local_50 = puVar1;
  lVar6 = FUN_03c68d44(uVar7,&local_80,&local_50);
  plVar5[5] = lVar6;
  *(long **)(*(long *)(param_2[1] + 8) + 0x1b0) = plVar5;
  return;
}

