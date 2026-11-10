
void FUN_00210820(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_04bccd60 + 0x10);
  while (plVar3 != param_1 + 2) {
    if ((long *)plVar3[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[5] + 8))();
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  plVar3 = (long *)param_1[4];
  while (plVar3 != param_1 + 5) {
    if ((long *)plVar3[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[5] + 8))();
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  FUN_00202254(param_1 + 4,param_1[5]);
  FUN_00202254(param_1 + 1,param_1[2]);
  return;
}

