
void FUN_0207832c(long param_1,long param_2,undefined8 *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar4 = PTR_DAT_04bb32e0;
  puVar3 = PTR_DAT_04bb3238;
  bVar5 = true;
  if ((*param_4 == 0.0) && (param_4[1] == 0.0)) {
    bVar5 = param_4[2] != 0.0;
  }
  *(bool *)(param_1 + 0x1d1) = bVar5;
  *(undefined2 *)(param_1 + 0x1d2) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  bVar6 = *puVar4;
  *(long *)(param_1 + 0x178) = param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  uVar8 = *(undefined4 *)puVar3;
  *(byte *)(param_1 + 0xa0) = bVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  *(float *)(param_1 + 0x19c) = *param_4;
  *(float *)(param_1 + 0x1a0) = param_4[1];
  fVar7 = param_4[2];
  *(undefined4 *)(param_1 + 0x1b8) = 0x3c;
  *(bool *)(param_1 + 0x1d0) = param_3 != (undefined8 *)0x0;
  *(float *)(param_1 + 0x1a4) = fVar7;
  if (param_3 == (undefined8 *)0x0) {
    uVar8 = 0xbf800000;
    uVar9 = 0x41c80000;
    uVar10 = 0x41800000;
    uVar11 = 0xbf800000;
    uVar12 = 0xbf800000;
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    uVar12 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)param_3 + 0x1c);
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    uVar11 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar12;
  *(undefined2 *)(param_1 + 0x1ce) = 1;
  if (param_2 == 0) {
    uVar8 = FUN_0207a578(param_1);
  }
  else {
    uVar8 = FUN_020795a8();
  }
  FUN_03ebb160(param_1 + 0x50,uVar8);
  return;
}

