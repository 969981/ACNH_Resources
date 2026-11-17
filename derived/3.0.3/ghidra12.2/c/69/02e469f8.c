
void FUN_02e469f8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 5);
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  *param_1 = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x34);
  uVar5 = *(undefined8 *)((long)param_2 + 0x3c);
  uVar2 = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined4 *)((long)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = 4;
  bVar1 = *(byte *)((long)param_2 + 0x6e) & 6;
  if (bVar1 == 6) {
    uVar2 = 0;
  }
  else if (bVar1 == 4) {
    uVar2 = 2;
  }
  else if (bVar1 == 2) {
    uVar2 = 1;
  }
  else {
    if ((*(byte *)((long)param_2 + 0x6e) & 1) == 0) goto LAB_02e46a90;
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 7) = uVar2;
LAB_02e46a90:
  param_1[0x29] = *param_2;
  param_1[0x2a] = param_2[1];
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x159) = *(undefined1 *)((long)param_2 + 0x61);
  *(undefined1 *)((long)param_1 + 0x15a) = *(undefined1 *)((long)param_2 + 0x62);
  *(undefined1 *)((long)param_1 + 0x15b) = *(undefined1 *)((long)param_2 + 99);
  *(undefined1 *)((long)param_1 + 0x15c) = *(undefined1 *)((long)param_2 + 100);
  *(undefined1 *)((long)param_1 + 0x15d) = *(undefined1 *)((long)param_2 + 0x65);
  *(undefined1 *)((long)param_1 + 0x15e) = *(undefined1 *)((long)param_2 + 0x66);
  *(undefined1 *)((long)param_1 + 0x15f) = *(undefined1 *)((long)param_2 + 0x67);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0xd);
  *(undefined2 *)((long)param_1 + 0x162) = *(undefined2 *)((long)param_2 + 0x6a);
  plVar6 = param_1 + 9;
  (**(code **)(*plVar6 + 0x28))(plVar6,param_3 + 2);
  (**(code **)(*plVar6 + 0x30))(plVar6,param_3 + 2);
  *(undefined4 *)(param_1 + 8) = *param_3;
  *(undefined4 *)(param_1 + 0x28) = param_3[0x40];
  return;
}

