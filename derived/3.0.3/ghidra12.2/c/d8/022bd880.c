
void FUN_022bd880(long param_1,float *param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_f8;
  undefined **local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined4 local_a4 [3];
  undefined2 local_98;
  undefined2 local_96;
  short local_90;
  undefined1 local_8e;
  byte local_8d;
  byte local_8c;
  undefined1 local_8b;
  byte local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined **local_80;
  uint local_78;
  uint local_74;
  
  fVar13 = *param_2;
  pbVar2 = (byte *)(param_1 + 0x10);
  fVar15 = param_2[2];
  uVar3 = 0;
  if (param_5 < 3) {
    uVar3 = param_5;
  }
  lVar9 = FUN_0251b3b0(pbVar2,0);
  if (lVar9 == 0) {
    return;
  }
  uVar14 = *(undefined4 *)(lVar9 + 4);
  local_f8 = (float)(int)((int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0)) * 10.0 + 5.0;
  local_f0 = (undefined **)
             CONCAT44(local_f0._4_4_,
                      (float)(int)((int)((float)(int)fVar15 / 10.0) - (uint)(fVar15 < 0.0)) * 10.0 +
                      5.0);
  fVar13 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_f8,0);
  fVar13 = *(float *)(lVar9 + 4) - fVar13;
  bVar1 = fVar13 <= 7.5;
  bVar6 = -7.5 <= fVar13;
  if ((uVar3 == 0) && (!bVar6 || !bVar1)) {
    return;
  }
  local_78 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_74 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  local_80 = &PTR_FUN_04986b58;
  if ((local_78 & 1) != 0) {
    local_78 = local_78 - 1;
  }
  if ((local_74 & 1) != 0) {
    local_74 = local_74 - 1;
  }
  lVar9 = FUN_0251bdc4(pbVar2,0);
  if (lVar9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(int *)(lVar9 + 4) + 0x10000000U >> 0x1d;
  }
  uVar14 = FUN_0122b5b4(uVar14,&local_80);
  uVar10 = FUN_011dab84(&local_80,uVar3,uVar12,uVar14,bVar6 && bVar1);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (DAT_04c487d4 == -1) {
LAB_022bdaac:
    bVar11 = 0;
  }
  else {
    local_f8 = 4.2039e-45;
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 3 & 1) == 0) goto LAB_022bdaac;
    iVar8 = FUN_0277d6c4(param_4);
    bVar11 = (iVar8 == 0x2155) << 3;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  local_8d = *pbVar2;
  local_8e = 0x12;
  local_84 = 0;
  local_8b = 0;
  local_98 = (undefined2)local_78;
  if (7 < local_8d) {
    local_8d = 0xff;
  }
  local_96 = (undefined2)local_74;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar2 = (byte *)(lVar9 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      bVar7 = *(byte *)(lVar9 + 0x472) != bVar5;
      goto LAB_022bdb40;
    }
  }
  bVar7 = false;
LAB_022bdb40:
  local_8c = (byte)(uVar12 << 5) | bVar7;
  local_a4[0] = 0;
  local_86 = 0;
  local_85 = (undefined1)uVar14;
  local_88 = 0x80;
  if (!bVar6 || !bVar1) {
    local_88 = 0;
  }
  local_88 = bVar11 | (byte)(uVar3 << 5) | local_88;
  local_e0 = 0;
  local_c6 = 0;
  local_c2 = 0;
  local_b8 = 0;
  uVar3 = (uint)local_f8 >> 0x10;
  local_f8 = (float)CONCAT22((short)uVar3,DAT_04c487d4);
  local_f0 = &PTR_FUN_0498d548;
  puStack_e8 = &DAT_048f9750;
  local_c0 = 0xffffffffffffffff;
  local_b4 = 0x41200000;
  local_d8 = &DAT_048f9750;
  uStack_d0 = 0;
  local_c8 = 0xff00;
  local_ac = 0xff00;
  local_90 = DAT_04c487d4;
  FUN_022b1cb0(param_1,&local_f8,local_a4);
  return;
}

