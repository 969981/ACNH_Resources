
void FUN_02078080(long *param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined1 *)((long)param_1 + 0x1d3) = 0;
  *(undefined2 *)((long)param_1 + 0x1d1) = 0;
  *(undefined1 *)((long)param_1 + 0x1ce) = 0;
  *(undefined8 *)(param_1[2] + 0x38) = 0;
  bVar3 = *param_2;
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = DAT_04c9a0c8;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x14) = bVar3;
  lVar4 = *(long *)(*param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar4 + 0x278);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(lVar4 + 0x27c);
  uVar5 = *(undefined4 *)(lVar4 + 0x280);
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3c;
  *(bool *)(param_1 + 0x3a) = param_3 != (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x33) = uVar5;
  if (param_3 == (undefined8 *)0x0) {
    if (*(char *)((long)param_1 + 0x1ce) != '\0') goto LAB_02078190;
    uVar5 = 0xbf800000;
    uVar6 = 0x41c80000;
    uVar7 = 0x41800000;
    uVar8 = 0xbf800000;
    uVar9 = 0xbf800000;
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)((long)param_1 + 0x34) = uVar2;
    *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_3 + 0x1c);
    if (*(char *)((long)param_1 + 0x1ce) != '\0') goto LAB_02078190;
    uVar7 = *(undefined4 *)((long)param_1 + 0x2c);
    uVar6 = (undefined4)param_1[6];
    uVar9 = *(undefined4 *)((long)param_1 + 0x3c);
    uVar5 = *(undefined4 *)((long)param_1 + 0x34);
    uVar8 = (undefined4)param_1[7];
  }
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((long)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined2 *)((long)param_1 + 0x1ce) = 1;
LAB_02078190:
  if (*(char *)((long)param_1 + 0x1cf) == '\0') {
    uVar5 = FUN_0207a578(param_1);
  }
  else {
    uVar5 = FUN_02079c40(param_1);
  }
  FUN_03ebb160(param_1 + 10,uVar5);
  return;
}

