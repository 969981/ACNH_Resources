
void FUN_02078bbc(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined2 *)(param_1 + 0x1d1) = 0;
  uVar4 = DAT_04c9a0c8;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = 0;
  bVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0xa0) = bVar3;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3c;
  *(bool *)(param_1 + 0x1d0) = param_3 != (undefined8 *)0x0;
  if (param_3 == (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x1ce) != '\0') goto LAB_02078cb4;
    uVar5 = 0xbf800000;
    uVar4 = 0x420c0000;
    uVar6 = 0x42480000;
    uVar7 = 0xbf800000;
    uVar8 = 0xbf800000;
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)param_3 + 0x1c);
    if (*(char *)(param_1 + 0x1ce) != '\0') goto LAB_02078cb4;
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar7 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined2 *)(param_1 + 0x1ce) = 0x101;
LAB_02078cb4:
  if (*(char *)(param_1 + 0x1cf) == '\0') {
    uVar4 = FUN_0207a578(param_1);
  }
  else {
    uVar4 = FUN_02079c40(param_1);
  }
  FUN_03ebb160(param_1 + 0x50,uVar4);
  return;
}

