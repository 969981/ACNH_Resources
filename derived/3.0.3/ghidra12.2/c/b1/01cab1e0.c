
void FUN_01cab1e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = param_1 + 2;
  plVar2 = (long *)param_1[3];
  while (plVar2 != plVar1) {
    plVar4 = (long *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2 = plVar4;
  }
  param_1[2] = (long)plVar1;
  param_1[3] = (long)plVar1;
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar2 = (long *)param_1[6];
  while (plVar2 != plVar1) {
    plVar4 = (long *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2 = plVar4;
  }
  param_1[5] = (long)plVar1;
  param_1[6] = (long)plVar1;
  plVar1 = param_1 + 8;
  *(undefined4 *)(param_1 + 7) = 0;
  plVar2 = (long *)param_1[9];
  while (plVar2 != plVar1) {
    plVar4 = (long *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2 = plVar4;
  }
  param_1[8] = (long)plVar1;
  param_1[9] = (long)plVar1;
  plVar1 = param_1 + 0xb;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar2 = (long *)param_1[0xc];
  while (plVar2 != plVar1) {
    plVar4 = (long *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2 = plVar4;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = (long)plVar1;
  param_1[0xc] = (long)plVar1;
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x58))();
  }
  lVar3 = param_1[0xe];
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined2 *)(lVar3 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return;
}

