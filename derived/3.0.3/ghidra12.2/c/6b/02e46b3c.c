
void FUN_02e46b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)((long)param_2 + 0x24);
  uVar4 = *(undefined8 *)((long)param_2 + 0x2c);
  uVar1 = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  plVar5 = param_1 + 9;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x24) = uVar2;
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2 + 9);
  (**(code **)(*plVar5 + 0x30))(plVar5,param_2 + 9);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)((long)param_1 + 0x159) = *(undefined1 *)((long)param_2 + 0x159);
  *(undefined1 *)((long)param_1 + 0x15a) = *(undefined1 *)((long)param_2 + 0x15a);
  *(undefined1 *)((long)param_1 + 0x15b) = *(undefined1 *)((long)param_2 + 0x15b);
  *(undefined1 *)((long)param_1 + 0x15c) = *(undefined1 *)((long)param_2 + 0x15c);
  *(undefined1 *)((long)param_1 + 0x15d) = *(undefined1 *)((long)param_2 + 0x15d);
  *(undefined1 *)((long)param_1 + 0x15e) = *(undefined1 *)((long)param_2 + 0x15e);
  *(undefined1 *)((long)param_1 + 0x15f) = *(undefined1 *)((long)param_2 + 0x15f);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined2 *)((long)param_1 + 0x162) = *(undefined2 *)((long)param_2 + 0x162);
  return;
}

