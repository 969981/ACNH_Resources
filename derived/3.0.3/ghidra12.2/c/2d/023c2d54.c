
void FUN_023c2d54(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_7c [10];
  undefined1 local_72;
  undefined8 local_70;
  undefined **local_68;
  undefined8 *puStack_60;
  int local_58;
  int iStack_54;
  undefined8 *local_50;
  int local_48;
  int iStack_44;
  undefined2 local_40;
  undefined4 local_3e;
  undefined1 local_3a;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar1 + 0x420) = 0x100000000;
  *(undefined4 *)(lVar1 + 0x4c0) = 0;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  fVar8 = (float)*(int *)(param_1 + 0x1908) * 0.001 + -2.5;
  fVar9 = (float)*(int *)(param_1 + 0x190e) * 0.001 + -2.5;
  uVar7 = (uint)bVar2;
  bVar4 = 7 < uVar7;
  if (bVar4) {
    uVar7 = 0xff;
  }
  local_58 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  uVar3 = *(undefined2 *)PTR_DAT_04bb6298;
  iStack_54 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  if (bVar4) {
    uVar7 = 0xffffffff;
  }
  local_48 = local_58 + 1;
  iStack_44 = iStack_54 + 1;
  *(uint *)(lVar1 + 0x4d4) = uVar7;
  if (bVar2 < 8) {
    *(byte *)(lVar1 + 0x4d8) = bVar2;
  }
  *(undefined1 *)(lVar1 + 0x4d9) = 1;
  local_38 = 0xffffffffffffffff;
  local_3a = 0;
  local_30 = 0;
  local_70 = CONCAT62(local_70._2_6_,uVar3);
  local_3e = 0x100;
  local_50 = &DAT_048f9750;
  local_68 = &PTR_FUN_0498d548;
  puStack_60 = &DAT_048f9750;
  local_2c = 0x41200000;
  local_24 = 0xff00;
  local_40 = 0xff00;
  if (*(int *)(lVar1 + 0x4d0) == 0x15) {
    local_40 = 0x1400;
  }
  local_72 = 2;
  uVar5 = FUN_023016c0(lVar1 + 0x4c8,&local_70,auStack_7c);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar5 & 1) == 0) {
      local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
      local_70 = CONCAT35(local_70._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_70);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
    iVar6 = (int)((float)(int)*(short *)(param_1 + 0x190c) * 0.25 * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x198c) = (short)iVar6;
    local_70 = CONCAT44(local_70._4_4_,0xc4);
    *(int *)(param_1 + 0x198e) = (int)((float)*(int *)(param_1 + 0x190e) * 0.001 * 999.99994);
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
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,0xc4);
  }
  return;
}

