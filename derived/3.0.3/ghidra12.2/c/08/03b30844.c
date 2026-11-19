
void FUN_03b30844(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_88;
  long lStack_80;
  long local_78;
  undefined ***local_70;
  long local_68;
  long lStack_60;
  undefined **local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  
  if ((((*(byte *)(param_1 + 0x58) & 1) == 0) ||
      (plVar4 = *(long **)(param_2 + 0x1a0), plVar4 == (long *)0x0)) ||
     (*(char *)(param_1 + 0x5a) == '\0')) {
    FUN_0037e140(param_1,param_2,param_3);
    return;
  }
  local_58 = &PTR_LAB_04b65888;
  local_40 = DAT_05ae77d0;
  local_3c = 0x3f80000000000000;
  lVar3 = *plVar4;
  if ((char)plVar4[5] == '\0') {
    fVar6 = *(float *)(lVar3 + 8) / *(float *)(*(long *)(param_2 + 0xc0) + 0x28);
    fVar5 = *(float *)(lVar3 + 0xc) / *(float *)(*(long *)(param_2 + 0xc0) + 0x2c);
  }
  else {
    fVar5 = 1.0;
    fVar6 = 1.0;
  }
  fVar8 = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x70);
  bVar1 = *(byte *)(param_1 + 0x5b) & 3;
  fVar7 = -(*(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x70));
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar8 = fVar6 * fVar7 * 0.5;
  fVar9 = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x84);
  fVar6 = fVar6 * *(float *)(param_1 + 0x7c);
  fVar7 = -(*(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x84));
  if (0.0 <= fVar9) {
    fVar7 = fVar9;
  }
  if (bVar1 == 2) {
    fVar6 = fVar6 - fVar8;
  }
  else if (bVar1 == 1) {
    fVar6 = fVar6 + fVar8;
  }
  fVar7 = fVar5 * fVar7 * 0.5;
  fVar5 = fVar5 * *(float *)(param_1 + 0x8c);
  bVar1 = *(byte *)(param_1 + 0x5b) >> 2 & 3;
  if (bVar1 == 2) {
    fVar5 = fVar5 + fVar7;
  }
  else if (bVar1 == 1) {
    fVar5 = fVar5 - fVar7;
  }
  fVar9 = *(float *)(lVar3 + 8);
  fVar10 = *(float *)(lVar3 + 0xc);
  lVar3 = plVar4[3];
  fVar5 = fVar5 + fVar10 * 0.5;
  fVar6 = fVar6 + fVar9 * 0.5;
  fVar12 = fVar5 - fVar7;
  fVar7 = fVar7 + fVar5;
  fVar11 = fVar6 - fVar8;
  fVar8 = fVar8 + fVar6;
  fVar5 = 0.0;
  if (0.0 <= fVar11) {
    fVar5 = fVar11;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar12) {
    fVar6 = fVar12;
  }
  fVar11 = fVar9;
  if (fVar8 <= fVar9) {
    fVar11 = fVar8;
  }
  fVar8 = fVar10;
  if (fVar7 <= fVar10) {
    fVar8 = fVar7;
  }
  bVar2 = fVar9 <= fVar11 - fVar5;
  if (bVar2) {
    fVar5 = 0.0;
  }
  if (bVar2) {
    fVar11 = fVar9;
  }
  if (fVar10 <= fVar8 - fVar6) {
    fVar6 = 0.0;
    fVar8 = fVar10;
  }
  fVar7 = fVar11;
  fVar9 = fVar5;
  if (lVar3 != 0) {
    fVar9 = *(float *)(lVar3 + 8);
    if (*(float *)(lVar3 + 8) <= fVar5) {
      fVar9 = fVar5;
    }
    fVar5 = *(float *)(lVar3 + 0xc);
    if (*(float *)(lVar3 + 0xc) <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = fVar5;
    fVar7 = *(float *)(lVar3 + 0x10);
    if (fVar11 <= *(float *)(lVar3 + 0x10)) {
      fVar7 = fVar11;
    }
    fVar5 = *(float *)(lVar3 + 0x14);
    if (*(float *)(lVar3 + 0x14) < fVar8) goto LAB_03b30a20;
  }
  fVar5 = fVar8;
LAB_03b30a20:
  local_50 = (float)NEON_ucvtf((int)(fVar9 + 0.5));
  local_48 = (float)NEON_ucvtf((int)(fVar7 + 0.5));
  fStack_4c = (float)NEON_ucvtf((int)(fVar6 + 0.5));
  fStack_44 = (float)NEON_ucvtf((int)(fVar5 + 0.5));
  bVar2 = false;
  if ((local_50 < local_48) && (bVar2 = false, !NAN(fStack_4c) && !NAN(fStack_44))) {
    bVar2 = fStack_4c < fStack_44;
  }
  if (bVar2) {
    local_78 = plVar4[2];
    local_68 = plVar4[4];
    lStack_60 = plVar4[5];
    local_88 = *plVar4;
    lStack_80 = plVar4[1];
    local_70 = &local_58;
    FUN_038e7c94(&local_58);
    *(long **)(param_2 + 0x1a0) = &local_88;
    FUN_0037e140(param_1,param_2,param_3);
    *(long **)(param_2 + 0x1a0) = plVar4;
    lVar3 = plVar4[3];
    if (lVar3 == 0) {
      lVar3 = plVar4[2];
    }
    FUN_038e7c94(lVar3,plVar4[4],*plVar4);
  }
  return;
}

