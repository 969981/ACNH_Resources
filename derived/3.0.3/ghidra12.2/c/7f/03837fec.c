
void FUN_03837fec(float param_1,byte *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  
  if ((((*param_2 >> 2 & 1) != 0) && (0.0 <= param_1)) && (13689.0 <= param_1)) {
    FUN_03f45838(param_2 + 0x1420);
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 3) {
      if (*(int *)(param_2 + 0x1428) == 3) {
        iVar2 = 2;
LAB_038380b0:
        *(int *)(param_2 + 4) = iVar2;
      }
      else if (*(int *)(param_2 + 0x1428) == 2) goto LAB_03838094;
    }
    else if (iVar2 == 6) {
      iVar2 = *(int *)(param_2 + 0x1428);
      if (iVar2 == 3) {
LAB_03838094:
        param_2[4] = 4;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        *param_2 = *param_2 | 2;
      }
      else if (iVar2 == 2) goto LAB_038380b0;
    }
    else if (iVar2 == 5) {
      (**(code **)(**(long **)(param_2 + 0x10) + 0x1a8))();
      iVar2 = 4;
      goto LAB_038380b0;
    }
    if (*(long **)(param_2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x10) + 0x180))();
    }
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_03f45838(param_2 + 0x1420);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 3) {
    if (*(int *)(param_2 + 0x1428) == 3) {
      iVar2 = 2;
LAB_0383816c:
      *(int *)(param_2 + 4) = iVar2;
      plVar1 = *(long **)(param_2 + 0x10);
      goto joined_r0x03838150;
    }
    if (*(int *)(param_2 + 0x1428) == 2) goto LAB_03838138;
  }
  else if (iVar2 == 6) {
    iVar2 = *(int *)(param_2 + 0x1428);
    if (iVar2 == 3) {
LAB_03838138:
      param_2[4] = 4;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *param_2 = *param_2 | 2;
    }
    else if (iVar2 == 2) goto LAB_0383816c;
  }
  else if (iVar2 == 5) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x1a8))();
    iVar2 = 4;
    goto LAB_0383816c;
  }
  plVar1 = *(long **)(param_2 + 0x10);
joined_r0x03838150:
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03838164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x180))();
  return;
}

