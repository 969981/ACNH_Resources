
void FUN_028c0b60(long *param_1,uint *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
      param_1[1] = *plVar3;
    }
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = (long)&PTR_LAB_04a92428;
    plVar3[1] = 0;
    uVar1 = *param_3;
    plVar3[5] = (long)param_1;
    *(undefined1 *)((long)plVar3 + 0x24) = uVar1;
    *(uint *)(plVar3 + 4) = *param_2;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar2 = FUN_028c13b8(param_1,*param_1,plVar3);
    *param_1 = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 1;
  }
  else {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      do {
        if (*param_2 < *(uint *)(lVar2 + 0x20)) {
          plVar3 = (long *)(lVar2 + 8);
        }
        else {
          if (*param_2 <= *(uint *)(lVar2 + 0x20)) {
            *(undefined1 *)(lVar2 + 0x24) = *param_3;
            return;
          }
          plVar3 = (long *)(lVar2 + 0x10);
        }
        lVar2 = *plVar3;
      } while (lVar2 != 0);
    }
  }
  return;
}

