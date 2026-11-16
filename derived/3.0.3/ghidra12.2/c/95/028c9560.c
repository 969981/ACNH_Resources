
void FUN_028c9560(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
    *param_1 = 0;
  }
  puVar2 = PTR_DAT_04bb2698;
  uVar6 = 0;
  do {
    plVar5 = *(long **)((long)param_1 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3) + 8);
    if (plVar5 != (long *)0x0) {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        *plVar5 = 0;
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[1] + 8))();
        plVar5[1] = 0;
      }
      if ((long *)plVar5[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[2] + 8))();
        plVar5[2] = 0;
      }
      if ((long *)plVar5[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[3] + 8))();
        plVar5[3] = 0;
      }
      if ((long *)plVar5[4] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[4] + 8))();
      }
      lVar3 = *(long *)puVar2;
      if (lVar3 == 0) {
        free(plVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(lVar3,plVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,plVar5);
        }
      }
      param_1[(long)(int)uVar6 + 1] = 0;
    }
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
  } while (uVar1 != 8);
  plVar5 = (long *)param_1[9];
  if (plVar5 != (long *)0x0) {
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 8))();
      *plVar5 = 0;
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[1] + 8))();
      plVar5[1] = 0;
    }
    if ((long *)plVar5[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[2] + 8))();
      plVar5[2] = 0;
    }
    if ((long *)plVar5[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[3] + 8))();
      plVar5[3] = 0;
    }
    if ((long *)plVar5[4] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[4] + 8))();
    }
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(plVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,plVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar5);
      }
    }
    param_1[9] = 0;
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
    param_1[10] = 0;
  }
  return;
}

