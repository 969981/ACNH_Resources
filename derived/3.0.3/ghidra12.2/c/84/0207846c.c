
undefined8 FUN_0207846c(long *param_1,float *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  puVar5 = PTR_DAT_04bb32e0;
  lVar7 = *(long *)(*param_1 + 0x68);
  fVar8 = *(float *)(lVar7 + 0x278);
  fVar9 = fVar8 + 2.5;
  uVar1 = ((uint)(*param_2 < 0.0) - (int)((float)(int)*param_2 / 5.0)) +
          ((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0) & 0xffff);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (0x18 < uVar2) {
    return 0;
  }
  fVar9 = *(float *)(lVar7 + 0x280);
  fVar10 = fVar9 + 2.5;
  uVar1 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0) & 0xffff;
  if (param_2[2] < 0.0) {
    uVar1 = uVar1 + 1;
  }
  uVar1 = uVar1 - (int)((float)(int)param_2[2] / 5.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (0x14 < uVar2) {
    return 0;
  }
  uVar11 = *(undefined4 *)(lVar7 + 0x27c);
  *(undefined1 *)((long)param_1 + 0x1d3) = 0;
  *(undefined2 *)((long)param_1 + 0x1d1) = 1;
  *(undefined1 *)((long)param_1 + 0x1ce) = 0;
  bVar6 = *puVar5;
  *(undefined8 *)(param_1[2] + 0x38) = 0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  param_1[0x2f] = 0;
  *(float *)(param_1 + 0x32) = fVar8;
  *(float *)(param_1 + 0x33) = fVar9;
  *(undefined4 *)((long)param_1 + 0x194) = uVar11;
  *(byte *)(param_1 + 0x14) = bVar6;
  *(undefined4 *)((long)param_1 + 0xa4) = DAT_04c9a0c8;
  *(float *)((long)param_1 + 0x19c) = *param_2;
  *(float *)(param_1 + 0x34) = param_2[1];
  fVar8 = param_2[2];
  *(undefined4 *)(param_1 + 0x37) = 0x3c;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(float *)((long)param_1 + 0x1a4) = fVar8;
  if (param_3 == (undefined8 *)0x0) {
    *(undefined8 *)((long)param_1 + 0x2c) = 0x412000003f000000;
    *(undefined8 *)((long)param_1 + 0x34) = 0xbf800000bf800000;
    *(undefined4 *)((long)param_1 + 0x3c) = 0xbf800000;
  }
  else {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)((long)param_1 + 0x2c) = uVar3;
    *(undefined8 *)((long)param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_3 + 0x1c);
  }
  if (*(char *)((long)param_1 + 0x1ce) == '\0') {
    param_1[3] = *(long *)((long)param_1 + 0x2c);
    param_1[4] = *(long *)((long)param_1 + 0x34);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x3c);
    *(undefined2 *)((long)param_1 + 0x1ce) = 1;
  }
  else if (*(char *)((long)param_1 + 0x1cf) != '\0') {
    uVar11 = FUN_02079c40();
    goto LAB_02078658;
  }
  uVar11 = FUN_0207a578();
LAB_02078658:
  FUN_03ebb160(param_1 + 10,uVar11);
  return 1;
}

