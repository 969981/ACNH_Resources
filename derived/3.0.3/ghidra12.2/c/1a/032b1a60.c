
void FUN_032b1a60(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  lVar4 = (**(code **)(*param_1 + 0x38))();
  local_28 = 2;
  if (*(char *)(lVar4 + 0x61) == '\0') {
    plVar2 = *(long **)(lVar4 + 0x18);
    for (plVar1 = *(long **)(lVar4 + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if ((*(char *)(lVar4 + 99) != '\0' || (int)param_1[4] < *(int *)(*plVar1 + 0x20)) &&
         (uVar3 = *(uint *)(*plVar1 + 0x24), uVar3 < 7 && (1 << (ulong)(uVar3 & 0x1f) & 0x5cU) != 0)
         ) {
        *(undefined4 *)(plVar1 + 1) = 1;
      }
    }
  }
  local_30 = param_1;
  if ((*(long **)(lVar4 + 0x18) == *(long **)(lVar4 + 0x10)) ||
     (*(int *)(**(long **)(lVar4 + 0x10) + 0x24) == 1)) {
    FUN_032b0d20(lVar4 + 8,&local_30);
  }
  else {
    FUN_032b0ad0(lVar4 + 8,&local_30);
  }
  return;
}

