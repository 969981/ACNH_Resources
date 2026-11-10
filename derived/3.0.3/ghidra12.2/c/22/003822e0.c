
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003822e0(long *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float __x;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  FUN_00382630();
  lVar8 = param_1[0xb];
  if (param_3 == 2) {
    local_b8 = *(undefined4 *)(lVar8 + 100);
    local_b4 = *(undefined4 *)(lVar8 + 0x68);
    local_d0 = *(float *)(lVar8 + 0x5c);
    local_cc = *(float *)(lVar8 + 0x60);
    local_c8 = *(undefined8 *)(lVar8 + 0x4c);
    uStack_c0 = *(undefined8 *)(lVar8 + 0x54);
  }
  else {
    if (param_3 == 1) {
      local_b8 = *(undefined4 *)(lVar8 + 0x44);
      local_b4 = *(undefined4 *)(lVar8 + 0x48);
      local_c8 = *(undefined8 *)(lVar8 + 0x34);
      uStack_c0 = *(undefined8 *)(lVar8 + 0x3c);
    }
    else {
      if (param_3 != 0) goto LAB_00382388;
      local_c8 = *(undefined8 *)(lVar8 + 0x24);
      uStack_c0 = *(undefined8 *)(lVar8 + 0x2c);
      local_b4 = *(undefined4 *)(lVar8 + 0x20);
      local_b8 = 0x42c80000;
    }
    local_d0 = 0.0;
    local_cc = 0.0;
  }
LAB_00382388:
  fVar13 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + 0xc));
  fVar10 = *(float *)(*param_1 + 0x50);
  fVar12 = *(float *)(*param_1 + 0x54);
  local_d8 = fVar10 + fVar13 * 2.0;
  fStack_d4 = fVar12 + fVar13 * 2.0;
  if (((*(byte *)(lVar8 + 8) >> 5 & 1) == 0) || ((char)param_1[0x13] == '\0')) {
    local_e8 = local_d8 / fVar10;
    lVar8 = (ulong)param_3 * 4;
    local_e0 = local_d8 * -0.5;
    fStack_dc = fStack_d4 * 0.5;
    puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) +
                      (long)*(int *)((long)param_1 + lVar8 + 0x9c));
    fStack_e4 = fStack_d4 / fVar12;
    local_f0 = (local_e8 + -1.0) * 0.5;
    fStack_ec = (fStack_e4 + -1.0) * 0.5;
    local_80 = 0.0 - local_f0;
    fStack_7c = 0.0 - fStack_ec;
    local_78 = local_f0 + 1.0;
    fStack_6c = fStack_ec + 1.0;
    fStack_74 = fStack_7c;
    local_70 = local_80;
    local_68 = local_78;
    fStack_64 = fStack_6c;
    FUN_00364a10(param_2,puVar1,&local_e0,&local_d8,1,&local_80);
    fVar12 = fStack_dc + (fStack_dc - fStack_d4);
    fVar10 = local_e0 + local_e0 + local_d8;
    fVar11 = 1.0 / ((fStack_dc - fStack_d4) - fStack_dc);
    fVar13 = 1.0 / ((local_e0 + local_d8) - local_e0);
    FUN_0038cdc0(&local_b0,param_2);
    puVar1[1] = (ulong)(uint)-(fVar10 * fVar13) << 0x20;
    *puVar1 = (ulong)(uint)(fVar13 + fVar13);
    puVar1[3] = (ulong)(uint)-(fVar12 * fVar11) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
    uVar6 = _DAT_04102620;
    uVar5 = DAT_04102218;
    uVar4 = DAT_04102210;
    puVar1[5] = _UNK_04102628;
    puVar1[4] = uVar6;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    puVar1[0xd] = uStack_88;
    puVar1[0xc] = local_90;
    puVar1[9] = uStack_a8;
    puVar1[8] = CONCAT44(fStack_ac,local_b0);
    puVar1[0xb] = uStack_98;
    puVar1[10] = uStack_a0;
    FUN_00382084(param_1,param_2,*(undefined4 *)((long)param_1 + lVar8 + 0xa8),&local_d0,&local_e0,
                 &local_d8,&local_e8,&local_f0);
    fVar12 = (float)uStack_a0;
    iVar7 = FUN_00381b20(param_1,param_2,*(undefined4 *)((long)param_1 + lVar8 + 0xc0),&local_d0);
    lVar8 = param_1[0xb];
    if (lVar8 == 0) goto LAB_003825f8;
  }
  else {
    iVar7 = 0;
  }
  if ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0) {
    iVar2 = *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xb4);
    lVar8 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    fVar13 = (float)FUN_0037d114(*param_1);
    fVar10 = local_cc;
    lVar9 = *param_1;
    fVar12 = fVar12 + (fStack_d4 - *(float *)(lVar9 + 0x54)) * 0.5;
    fVar13 = fVar13 - (local_d8 - *(float *)(lVar9 + 0x50)) * 0.5;
    local_b0 = fVar13;
    fStack_ac = fVar12;
    if (0.0 < local_cc) {
      __x = local_d0 * (*(float *)PTR_FloatPi_04bcedc8 / *(float *)PTR_FloatDegree180_04bcedf8);
      fVar11 = cosf(__x);
      local_b0 = fVar13 - fVar10 * fVar11;
      fVar13 = sinf(__x);
      fStack_ac = fVar12 - fVar10 * fVar13;
      lVar9 = *param_1;
    }
    lVar8 = lVar8 + iVar2;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + 0x5a));
    *(float *)(lVar8 + 0xdc) = (fVar10 / 255.0) / 255.0;
    FUN_00364a10(param_2,lVar8,&local_b0,&local_d8,1,&DAT_04134eb8);
  }
LAB_003825f8:
  uVar3 = iVar7 - 1U >> 2;
  if (iVar7 < 1) {
    uVar3 = 0;
  }
  return uVar3;
}

