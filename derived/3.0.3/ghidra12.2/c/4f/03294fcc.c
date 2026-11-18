
undefined8 * FUN_03294fcc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  param_1[3] = param_2[3];
  param_1[5] = param_2[5];
  param_1[7] = param_2[7];
  param_1[9] = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[0xd] = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
  }
  plVar1 = (long *)param_2[0x14];
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x15);
  }
  param_1[0x14] = uVar2;
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 8))();
  }
  plVar1 = (long *)param_2[0x1a];
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x1b);
  }
  param_1[0x1a] = uVar2;
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
  }
  plVar1 = (long *)param_2[0x20];
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x21);
  }
  param_1[0x20] = uVar2;
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
  }
  plVar1 = (long *)param_2[0x26];
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x27);
  }
  param_1[0x26] = uVar2;
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)((long)param_2 + 0x15c);
  param_1[0x2d] = param_2[0x2d];
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
  return param_1;
}

