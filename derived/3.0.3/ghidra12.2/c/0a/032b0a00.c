
void FUN_032b0a00(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long local_20;
  undefined4 local_18;
  
  local_18 = 2;
  if (*(char *)(param_1 + 0x61) == '\0') {
    plVar2 = *(long **)(param_1 + 0x18);
    for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if ((*(char *)(param_1 + 99) != '\0' || *(int *)(param_2 + 0x20) < *(int *)(*plVar1 + 0x20))
         && (uVar3 = *(uint *)(*plVar1 + 0x24),
            uVar3 < 7 && (1 << (ulong)(uVar3 & 0x1f) & 0x5cU) != 0)) {
        *(undefined4 *)(plVar1 + 1) = 1;
      }
    }
  }
  local_20 = param_2;
  if ((*(long **)(param_1 + 0x18) == *(long **)(param_1 + 0x10)) ||
     (*(int *)(**(long **)(param_1 + 0x10) + 0x24) == 1)) {
    FUN_032b0d20(param_1 + 8,&local_20);
  }
  else {
    FUN_032b0ad0(param_1 + 8,&local_20);
  }
  return;
}

