
long * FUN_02cc5860(long *param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
      param_1[1] = *plVar3;
    }
    puVar1 = PTR_DAT_04bc6260;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = (long)param_1;
    plVar4 = plVar3 + 5;
    *plVar4 = (long)(puVar1 + 0x10);
    *plVar3 = (long)&PTR_LAB_04ab71e8;
    plVar3[1] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0xffffffff;
    plVar3[10] = 0;
    plVar3[0xb] = -1;
    *(int *)(plVar3 + 4) = *param_2;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar2 = FUN_029ce080(param_1,*param_1);
    *param_1 = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 1;
  }
  else {
    lVar2 = *param_1;
    plVar4 = (long *)0x0;
    if (lVar2 != 0) {
      do {
        if (*param_2 < *(int *)(lVar2 + 0x20)) {
          plVar4 = (long *)(lVar2 + 8);
        }
        else {
          if (*param_2 <= *(int *)(lVar2 + 0x20)) {
            *(long *)(lVar2 + 0x28) = (long)&PTR_LAB_04ac2638;
            *(undefined8 *)(lVar2 + 0x40) = 0;
            *(undefined8 *)(lVar2 + 0x48) = 0xffffffff;
            *(undefined8 *)(lVar2 + 0x30) = 0;
            *(undefined8 *)(lVar2 + 0x38) = 0;
            *(undefined8 *)(lVar2 + 0x50) = 0;
            *(undefined8 *)(lVar2 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(lVar2 + 0x60) = 0;
            return (long *)(lVar2 + 0x28);
          }
          plVar4 = (long *)(lVar2 + 0x10);
        }
        lVar2 = *plVar4;
        plVar4 = (long *)0x0;
      } while (lVar2 != 0);
    }
  }
  return plVar4;
}

