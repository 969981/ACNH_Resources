
uint FUN_024e9964(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_8c [10];
  undefined1 local_82;
  undefined4 local_80 [2];
  undefined **local_78;
  undefined8 *puStack_70;
  int local_68;
  int iStack_64;
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined1 local_4a;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  
  local_58 = *(int *)(param_1 + 0xd18);
  if (*(int *)(param_1 + 0xd40) <= *(int *)(param_1 + 0xd18)) {
    local_58 = *(int *)(param_1 + 0xd40);
  }
  iStack_54 = *(int *)(param_1 + 0xd1c);
  if (*(int *)(param_1 + 0xd44) <= *(int *)(param_1 + 0xd1c)) {
    iStack_54 = *(int *)(param_1 + 0xd44);
  }
  iVar6 = *(int *)(param_1 + 0xd28);
  if (*(int *)(param_1 + 0xd28) <= *(int *)(param_1 + 0xd50)) {
    iVar6 = *(int *)(param_1 + 0xd50);
  }
  iVar1 = *(int *)(param_1 + 0xd2c);
  if (*(int *)(param_1 + 0xd2c) <= *(int *)(param_1 + 0xd54)) {
    iVar1 = *(int *)(param_1 + 0xd54);
  }
  local_68 = local_58;
  if (iVar6 <= local_58) {
    local_68 = iVar6;
  }
  if (local_58 <= iVar6) {
    local_58 = iVar6;
  }
  iStack_64 = iStack_54;
  if (iVar1 <= iStack_54) {
    iStack_64 = iVar1;
  }
  if (iStack_54 <= iVar1) {
    iStack_54 = iVar1;
  }
  lVar5 = DAT_055021a0 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar5 = DAT_055021a0 + 0x20;
  }
  *(undefined8 *)(lVar5 + 0x420) = 0x100000000;
  *(undefined4 *)(lVar5 + 0x4c0) = 0;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar3 = *(undefined2 *)PTR_DAT_04bb6298;
  uVar4 = (uint)bVar2;
  if (7 < uVar4) {
    uVar4 = 0xffffffff;
  }
  *(uint *)(lVar5 + 0x4d4) = uVar4;
  if (bVar2 < 8) {
    *(byte *)(lVar5 + 0x4d8) = bVar2;
  }
  *(undefined1 *)(lVar5 + 0x4d9) = 1;
  local_48 = 0xffffffffffffffff;
  local_4a = 0;
  local_40 = 0;
  local_80[0] = CONCAT22(local_80[0]._2_2_,uVar3);
  local_4e = 0x100;
  local_60 = &DAT_048f9750;
  local_78 = &PTR_FUN_0498d548;
  puStack_70 = &DAT_048f9750;
  local_3c = 0x41200000;
  local_34 = 0xff00;
  local_50 = 0xff00;
  if (*(int *)(lVar5 + 0x4d0) == 0x15) {
    local_50 = 0x1400;
  }
  local_82 = 2;
  uVar4 = FUN_023016c0(lVar5 + 0x4c8,local_80,auStack_8c);
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x198c) = (int)(((float)*(int *)(param_1 + 0xd18) * 5.0 + 5.0) * 999.99994);
    *(int *)(param_1 + 0x1992) = (int)(((float)*(int *)(param_1 + 0xd1c) * 5.0 + 5.0) * 999.99994);
    lVar5 = *(long *)(param_1 + 0x68);
    iVar6 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    fVar7 = *(float *)(lVar5 + 0x280);
    *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar6;
    *(int *)(param_1 + 0x1986) = (int)(fVar7 * 999.99994);
    *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(lVar5 + 0x2b6);
    local_80[0] = 0x126;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0x126);
  }
  return uVar4 & 1;
}

