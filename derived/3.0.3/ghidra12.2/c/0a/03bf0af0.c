
void FUN_03bf0af0(long param_1,undefined4 param_2,uint param_3,uint param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined **local_70;
  long lStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  ulong local_58;
  long lStack_50;
  undefined1 local_48;
  
  if (param_5 == 0) {
    return;
  }
  plVar4 = (long *)(*(long *)(*(uint **)(param_1 + 0x10) + 2) + (long)(int)param_3 * 0x28);
  if (**(uint **)(param_1 + 0x10) <= param_3) {
    plVar4 = (long *)0x0;
  }
  plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18) + 0x10)
                   )();
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_4);
  if ((uVar2 & 1) != 0) {
    pcVar3 = (char *)(**(code **)(*plVar1 + 0x28))(plVar1,param_4);
    lVar5 = *(long *)(param_1 + 8);
    if (*pcVar3 != '\0') {
      lVar5 = (**(code **)(**(long **)(lVar5 + 0x38) + 0x10))(*(long **)(lVar5 + 0x38),pcVar3);
      *plVar4 = lVar5;
      *(undefined1 *)(plVar4 + 1) = 1;
      if (lVar5 != 0) goto LAB_03bf0bbc;
      lVar5 = *(long *)(param_1 + 8);
    }
    lVar6 = *(long *)(lVar5 + 0x40);
    *(undefined1 *)(plVar4 + 1) = *(undefined1 *)(lVar5 + 0x48);
    *plVar4 = lVar6;
  }
LAB_03bf0bbc:
  local_60 = 0;
  local_70 = &PTR_LAB_04b7beb0;
  lStack_50 = *plVar4;
  local_48 = (undefined1)plVar4[1];
  uVar2 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)param_4;
  local_58 = uVar2 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)param_4) {
    local_58 = uVar2;
  }
  lStack_68 = param_5;
  local_5c = param_2;
  FUN_03bf47b0(*(undefined8 *)(param_1 + 8),&local_70,plVar4 + 2);
  return;
}

