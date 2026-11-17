
void FUN_02c69cb4(long param_1,short *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  plVar6 = *(long **)(param_1 + 0x1c670);
  if (plVar6 != (long *)0x0) {
    local_68 = PTR_DAT_04bc4f00 + 0x10;
    local_60 = 3;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    uVar3 = (**(code **)(plVar6[3] + 0x50))(plVar6[1]);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  puVar2 = PTR_DAT_04bb3170;
  puVar1 = PTR_DAT_04bb2230;
  if (*(int *)(param_1 + 0x22598) == 0 || *param_2 == -2) {
    if (*(char *)(param_1 + 0x1c678) == '\0') {
      return;
    }
    FUN_033ba890(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),0);
    *(undefined1 *)(param_1 + 0x1c678) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x1c678) != '\0') goto LAB_02c69e60;
  local_60 = 0;
  local_68 = (undefined *)0xfffe00000000;
  FUN_0277d4ac((ulong)&local_68 | 4);
  local_5c = *(undefined2 *)puVar2;
  local_58 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c764)) {
  case 0:
    lVar5 = param_1 + 0x1c1c8;
    break;
  case 1:
    lVar5 = param_1 + 0x1c2e0;
    break;
  case 2:
    lVar5 = param_1 + 0x1c3f8;
    break;
  case 3:
    lVar5 = param_1 + 0x1c510;
    break;
  default:
    uVar4 = 0;
    goto LAB_02c69e08;
  }
  uVar4 = *(undefined4 *)(lVar5 + 0x30);
LAB_02c69e08:
  local_60 = *(undefined4 *)(param_2 + 2);
  local_68 = (undefined *)CONCAT44(*(undefined4 *)param_2,uVar4);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "/L_LoadingIcon_00";
  local_58 = FUN_02bcb9a0(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_50);
  FUN_033bd990(*(undefined8 *)(*(long *)puVar1 + 0x30),&local_68);
  *(undefined1 *)(param_1 + 0x1c678) = 1;
LAB_02c69e60:
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  local_60 = CONCAT22(local_60._2_2_,*(undefined2 *)puVar2);
  local_68 = *(undefined **)param_2;
  FUN_033ba168(*(undefined8 *)(*(long *)puVar1 + 0x30),&local_68);
  return;
}

