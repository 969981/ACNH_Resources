
void FUN_01ee01c8(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined *local_a0;
  float local_98;
  undefined4 uStack_94;
  long local_90;
  uint local_84;
  
  puVar8 = PTR_DAT_04bb43c0;
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 3) {
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
    local_b0 = (ulong)(uint)local_b0._4_4_ << 0x20;
    lVar12 = *(long *)(param_1 + 0x10);
    local_84 = 0;
    local_98 = (float)*(int *)(param_1 + 0x781c) * 5.0 + 2.5;
    local_a0 = (undefined *)(ulong)(uint)((float)*(int *)(param_1 + 0x7818) * 5.0 + 2.5);
    FUN_01e5a930(0x40000000,lVar12,0x18,&local_a0,&local_b0,&local_84,PTR_DAT_04bc1600,6);
    *(undefined2 *)(lVar12 + 0x408) = *(undefined2 *)(param_1 + 0x7840);
    *(undefined1 *)(lVar12 + 0x40a) = *(undefined1 *)(param_1 + 0x7842);
    *(undefined1 *)(lVar12 + 0x40b) = *(undefined1 *)(param_1 + 0x7843);
    *(undefined4 *)(lVar12 + 0x40c) = *(undefined4 *)(param_1 + 0x7844);
    return;
  }
  local_90 = 0;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  local_98 = *(float *)(param_1 + 0x7840);
  uStack_94 = *(undefined4 *)(param_1 + 0x7844);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar8 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4((float *)(param_1 + 0x7840));
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8), lVar12 != 0)) {
        local_90 = lVar12;
      }
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0x7830);
  local_a8 = *(float *)(param_1 + 0x7838);
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    fVar15 = -500.0;
  }
  else {
    fVar15 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_b0,0);
  }
  if ((*(int *)(param_1 + 0x7828) - *(int *)(param_1 + 0x7818)) + 1 < 4) {
    fVar29 = 10.0;
  }
  else {
    fVar29 = 10.0;
    if (3 < (*(int *)(param_1 + 0x782c) - *(int *)(param_1 + 0x781c)) + 1) {
      fVar29 = 15.0;
    }
  }
  local_b0._4_4_ = fVar15;
  iVar10 = FUN_01ae98d0(&local_a0);
  puVar8 = PTR_DAT_04bb2d00;
  uVar11 = (ulong)((float)iVar10 * 90.0 * 11930465.0);
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar11 >> 0x19 & 0x7f) * 0x10);
  fVar15 = (float)((uint)uVar11 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar17 = *pfVar2 + fVar15 * pfVar2[1];
  fVar15 = pfVar2[2] + fVar15 * pfVar2[3];
  fVar18 = fVar17 * 0.0;
  fVar21 = fVar17 * (fVar17 + fVar17);
  fVar15 = fVar15 + fVar15;
  fVar19 = (fVar17 + fVar17) * fVar18;
  fVar26 = fVar18 * (fVar18 + fVar18);
  fVar24 = fVar17 * (fVar18 + fVar18);
  fVar18 = fVar15 * fVar18;
  fVar17 = fVar17 * fVar15;
  fVar22 = (fVar24 - fVar18) * 0.0 + ((1.0 - fVar21) - fVar26) * 0.0 + fVar29 * (fVar17 + fVar26);
  fVar24 = ((1.0 - fVar26) - fVar26) * 0.0 + (fVar18 + fVar24) * 0.0 + fVar29 * (fVar19 - fVar18);
  fVar28 = (fVar18 + fVar19) * 0.0 + (fVar26 - fVar17) * 0.0 + fVar29 * ((1.0 - fVar26) - fVar21);
  iVar10 = FUN_01ae98d0(&local_a0);
  fVar17 = local_a8;
  fVar29 = local_b0._4_4_;
  fVar15 = (float)local_b0;
  uVar11 = (ulong)((float)iVar10 * 90.0 * 11930465.0);
  pfVar2 = (float *)(puVar8 + (uVar11 >> 0x19 & 0x7f) * 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  fVar18 = (float)((uint)uVar11 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar21 = *pfVar2 + fVar18 * pfVar2[1];
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar18 = pfVar2[2] + fVar18 * pfVar2[3];
  fVar26 = fVar21 * 0.0;
  fVar23 = fVar21 * (fVar21 + fVar21);
  fVar18 = fVar18 + fVar18;
  fVar20 = (fVar21 + fVar21) * fVar26;
  fVar27 = fVar26 * (fVar26 + fVar26);
  fVar25 = fVar21 * (fVar26 + fVar26);
  fVar26 = fVar18 * fVar26;
  fVar21 = fVar21 * fVar18;
  fVar19 = local_a8 +
           (fVar26 + fVar20) * 0.0 + (fVar27 - fVar21) * 5.0 + ((1.0 - fVar27) - fVar23) * 0.0;
  fVar18 = (float)local_b0 +
           (fVar25 - fVar26) * 0.0 + ((1.0 - fVar23) - fVar27) * 5.0 + (fVar21 + fVar27) * 0.0;
  fVar21 = local_b0._4_4_ +
           ((1.0 - fVar27) - fVar27) * 0.0 + (fVar26 + fVar25) * 5.0 + (fVar20 - fVar26) * 0.0;
  uVar11 = FUN_02085a50(lVar12,3,0);
  if ((uVar11 & 1) != 0) {
    lVar1 = lVar12 + 0x10;
    *(undefined1 *)(lVar12 + 0x801) = 1;
    lVar3 = lVar1 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar12 + 0x294)) {
      lVar3 = lVar1;
    }
    *(float *)(lVar3 + 0xc) = fVar15;
    *(float *)(lVar3 + 0x10) = fVar29 + 5.0;
    *(float *)(lVar3 + 0x14) = fVar17;
    lVar3 = lVar1 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar12 + 0x294)) {
      lVar3 = lVar1;
    }
    *(undefined1 *)(lVar3 + 0x7e) = 1;
  }
  fVar17 = fVar28 + fVar19;
  fVar19 = fVar19 - fVar28;
  fVar15 = fVar21 - fVar24;
  fVar29 = fVar22 + fVar18;
  fVar18 = fVar18 - fVar22;
  local_84 = FUN_01ae98d0(&local_a0);
  bVar6 = *(byte *)(param_1 + 0x7868);
  cVar7 = *(char *)(param_1 + 0x789d);
  uVar9 = (uint)bVar6 - (bVar6 >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
  local_b4 = (int)(long)((float)(int)local_84 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
  if (uVar9 == 1) {
    if ((bVar6 & 1) == 0) {
      if ((bVar6 >> 2 & 1) == 0) {
        return;
      }
      goto LAB_01ee06b8;
    }
  }
  else {
    if (uVar9 != 2) {
      return;
    }
    fVar26 = *(float *)(lVar13 + 0x278);
    fVar20 = fVar26 - fVar29;
    fVar22 = *(float *)(lVar13 + 0x280);
    fVar23 = fVar22 - fVar17;
    fVar26 = fVar26 - fVar18;
    fVar22 = fVar22 - fVar19;
    if (fVar22 * fVar22 + fVar26 * fVar26 <= fVar23 * fVar23 + fVar20 * fVar20) {
LAB_01ee06b8:
      puVar14 = &local_b4;
      goto LAB_01ee06d8;
    }
  }
  fVar15 = fVar24 + fVar21;
  puVar14 = &local_84;
  *(undefined1 *)(param_1 + 0x789c) = 1;
  fVar18 = fVar29;
  fVar19 = fVar17;
LAB_01ee06d8:
  FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
  *(float *)(param_1 + 0xa9f0) = fVar18;
  *(float *)(param_1 + 0xa9f4) = fVar15;
  *(float *)(param_1 + 0xa9f8) = fVar19;
  puVar4 = (undefined8 *)(param_1 + 0xaa24);
  if (cVar7 != '\0') {
    puVar4 = (undefined8 *)(param_1 + 0x7848);
  }
  *(undefined4 *)(param_1 + 0xa9fc) = 0;
  *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(puVar4 + 2);
  uVar5 = puVar4[1];
  *(undefined8 *)(param_1 + 0xaa04) = *puVar4;
  *(undefined8 *)(param_1 + 0xaa0c) = uVar5;
  *(undefined4 *)(param_1 + 0xaa18) = *(undefined4 *)((long)puVar4 + 0x14);
  *(undefined4 *)(param_1 + 0xaa1c) = *(undefined4 *)(puVar4 + 3);
  uVar16 = *(undefined4 *)((long)puVar4 + 0x1c);
  *(undefined1 *)(param_1 + 0xaa44) = 0;
  *(undefined4 *)(param_1 + 0xaa00) = 1;
  *(undefined4 *)(param_1 + 0xaa20) = uVar16;
  *(uint *)(param_1 + 0x787c) = *puVar14;
  return;
}

