
undefined8 FUN_022e3504(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined2 local_150 [4];
  undefined **local_148;
  undefined8 *puStack_140;
  int local_138;
  int iStack_134;
  undefined8 *local_130;
  int local_128;
  int iStack_124;
  undefined2 local_120;
  undefined4 local_11e;
  undefined1 local_11a;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined2 local_104;
  undefined1 local_100 [4];
  undefined2 uStack_fc;
  undefined1 uStack_f9;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  
  _local_100 = *(undefined8 *)(param_2 + 8);
  local_f8 = *(undefined4 *)(param_2 + 0x10);
  local_e8 = 0;
  local_ec = *(undefined4 *)(param_2 + 0x1c);
  local_d4 = 0;
  local_f4 = *(undefined8 *)(param_2 + 0x14);
  local_d8 = *(undefined1 *)(param_2 + 0x2c);
  FUN_022ebe80(param_1 + 0x18,local_100);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(int *)(param_1 + 0x40) == 0) {
      _local_100 = CONCAT44(_uStack_fc,*(int *)(param_1 + 0x38));
      if (*(int *)(param_1 + 0x38) != 0) goto LAB_022e35a0;
    }
  }
  else if (*(uint *)(param_1 + 0x28) < 2) {
LAB_022e35a0:
    iVar2 = (int)((float)(int)*(float *)(param_2 + 8) / 10.0) -
            (uint)(*(float *)(param_2 + 8) < 0.0);
    iVar3 = (int)((float)(int)*(float *)(param_2 + 0x10) / 10.0) -
            (uint)(*(float *)(param_2 + 0x10) < 0.0);
    fVar11 = (float)iVar2 * 10.0;
    fVar13 = (float)iVar3 * 10.0;
    fVar12 = fVar11 + 2.5;
    fVar14 = fVar13 + 2.5;
    fVar11 = fVar11 + 10.0 + -2.5;
    fVar13 = fVar13 + 10.0 + -2.5;
    iVar4 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar6 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar1 = iVar4;
    if (iVar5 <= iVar4) {
      iVar1 = iVar5;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar5 = iVar6;
    if (iVar7 <= iVar6) {
      iVar5 = iVar7;
    }
    if (iVar6 <= iVar7) {
      iVar6 = iVar7;
    }
    FUN_0131a4e4(&local_f8);
    uVar8 = _local_100;
    bVar10 = *(byte *)(param_1 + 0x10);
    uStack_f9 = SUB81(uVar8,7);
    _local_100 = (uint7)CONCAT24((short)iVar3,CONCAT22((short)iVar2,local_100._0_2_));
    local_6c = 2;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_6a = *(undefined2 *)PTR_DAT_04bb3170;
    _local_100 = CONCAT71(stack0xffffffffffffff01,bVar10);
    local_68 = 0;
    local_120 = 0xff00;
    local_11e = 0;
    local_11a = 0;
    local_110 = 0;
    local_104 = 0xff00;
    local_130 = &DAT_048f9750;
    local_148 = &PTR_FUN_0498d548;
    puStack_140 = &DAT_048f9750;
    local_118 = 0xffffffffffffffff;
    local_10c = 0x41200000;
    local_150[0] = *(undefined2 *)PTR_DAT_04bb6298;
    local_138 = iVar1;
    iStack_134 = iVar5;
    local_128 = iVar4;
    iStack_124 = iVar6;
    uVar9 = FUN_022e39a0(param_1,local_150,local_100);
    if ((uVar9 & 1) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x1c);
    return 0;
  }
  return 2;
}

