
void FUN_0214f030(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int local_4;
  
  local_4 = 0x22;
  if ((*(long *)(param_1 + 0x1f0) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x1f0) + 4), iVar1 - 0x14U < 6 || iVar1 == 0x1b)) {
    local_4 = iVar1;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)(param_1 + 0x70)) {
    plVar3 = plVar2 + -2;
    do {
      iVar1 = *(int *)((long)plVar3 + 4);
      if ((iVar1 == local_4) || (5 < iVar1 - 0x14U && iVar1 != 0x1b)) {
        plVar2 = (long *)plVar2[1];
      }
      else {
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        *plVar3 = *(long *)(param_1 + 0x88);
        *(long **)(param_1 + 0x88) = plVar3;
        plVar2 = *(long **)(param_1 + 0x78);
      }
      plVar3 = plVar2 + -2;
    } while (plVar3 != (long *)(param_1 + 0x60));
  }
  if (local_4 == 0x22) {
    return;
  }
  FUN_0214eb90(param_1,param_2,1);
  return;
}

