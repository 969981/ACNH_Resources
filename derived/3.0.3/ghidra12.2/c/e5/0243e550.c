
undefined8 FUN_0243e550(long param_1,float *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_7c [10];
  undefined1 local_72;
  undefined4 local_70 [2];
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
  
  if ((*(byte *)(param_1 + 0x17d4) >> 5 & 1) != 0) {
    return 0;
  }
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar1 + 0x420) = 0x100000000;
  *(undefined4 *)(lVar1 + 0x4c0) = 0;
  uVar5 = DAT_04c487d4;
  fVar12 = *param_2 + -2.55;
  fVar11 = param_2[2] + -2.55;
  fVar9 = *param_2 + 2.55;
  fVar10 = param_2[2] + 2.55;
  local_48 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iStack_44 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar3 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  local_58 = local_48;
  if (iVar4 <= local_48) {
    local_58 = iVar4;
  }
  if (local_48 <= iVar4) {
    local_48 = iVar4;
  }
  iStack_54 = iStack_44;
  if (iVar3 <= iStack_44) {
    iStack_54 = iVar3;
  }
  if (iStack_44 <= iVar3) {
    iStack_44 = iVar3;
  }
  uVar8 = (uint)bVar2;
  if (7 < uVar8) {
    uVar8 = 0xffffffff;
  }
  *(uint *)(lVar1 + 0x4d4) = uVar8;
  if (bVar2 < 8) {
    *(byte *)(lVar1 + 0x4d8) = bVar2;
  }
  *(undefined1 *)(lVar1 + 0x4d9) = 1;
  local_38 = 0xffffffffffffffff;
  local_3a = 0;
  local_30 = 0;
  local_70[0] = CONCAT22(local_70[0]._2_2_,uVar5);
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
  local_72 = 0;
  uVar6 = FUN_023016c0(lVar1 + 0x4c8,local_70,auStack_7c);
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x20;
    local_70[0] = 6;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,6);
    uVar7 = 1;
  }
  return uVar7;
}

