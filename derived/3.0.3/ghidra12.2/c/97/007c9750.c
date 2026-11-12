
long * FUN_007c9750(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      param_1[1] = *plVar5;
    }
    puVar1 = PTR_DAT_04bb2020;
    *plVar5 = (long)&PTR_LAB_049163b8;
    plVar5[4] = (long)(puVar1 + 0x10);
    plVar5[5] = (long)"invalid_name";
    uVar2 = FUN_006bd550("invalid_name",0);
    *(undefined4 *)(plVar5 + 6) = uVar2;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)&PTR_LAB_04916390;
    plVar5[1] = 0;
    lVar3 = *param_3;
    plVar5[8] = (long)param_1;
    plVar4 = plVar5 + 7;
    *plVar4 = lVar3;
    plVar5[5] = *(long *)(param_2 + 8);
    *(undefined4 *)(plVar5 + 6) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar3 = FUN_007ca12c(param_1,*param_1,plVar5);
    *param_1 = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 1;
  }
  else {
    lVar3 = *param_1;
    plVar4 = (long *)0x0;
    if (lVar3 != 0) {
      do {
        if (*(uint *)(param_2 + 0x10) < *(uint *)(lVar3 + 0x30)) {
          plVar4 = (long *)(lVar3 + 8);
        }
        else {
          if (*(uint *)(param_2 + 0x10) <= *(uint *)(lVar3 + 0x30)) {
            *(long *)(lVar3 + 0x38) = *param_3;
            return (long *)(lVar3 + 0x38);
          }
          plVar4 = (long *)(lVar3 + 0x10);
        }
        lVar3 = *plVar4;
        plVar4 = (long *)0x0;
      } while (lVar3 != 0);
    }
  }
  return plVar4;
}

