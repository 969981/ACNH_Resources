
/* WARNING: Removing unreachable block (ram,0x0257e588) */
/* WARNING: Removing unreachable block (ram,0x0257e598) */
/* WARNING: Removing unreachable block (ram,0x0257e5a4) */

void FUN_0257e3f0(long param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  short *psVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
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
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined4 local_94;
  
  if (SQRT(param_3[1] * param_3[1] + *param_3 * *param_3) <= 0.2) {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    return;
  }
  fVar24 = *(float *)(*(long *)(param_2 + 0x68) + 0x278);
  fVar25 = *(float *)(*(long *)(param_2 + 0x68) + 0x280);
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bb6268 + 0x10;
  fVar17 = fVar24 + -5.0;
  fVar16 = fVar25 + -5.0;
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar14 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar9 = iVar14 + 3;
  iVar15 = iVar4;
  do {
    local_b8 = 0;
    local_c8 = 0xfffe;
    local_c0 = puVar1;
    FUN_0277d4ac(&local_c8);
    lVar13 = *(long *)PTR_DAT_04bb2720;
    local_a8 = 0;
    local_d8 = puVar1;
    local_d0 = iVar15;
    iStack_cc = iVar14;
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x330) == 0)) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar6 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
    local_a4 = *(undefined4 *)(puVar10 + 7);
    local_a0 = FUN_017baf44();
    local_a0 = local_a0 & 1;
    local_94 = 0;
    local_b0 = puVar2;
    if ((((((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
           (psVar11 = (short *)FUN_01a5190c(&local_b0,0,&local_d8,&local_c0), *psVar11 != -2)) &&
          (lVar13 = *(long *)PTR_DAT_04bbbc68, lVar13 != 0)) &&
         ((*(long *)(lVar13 + 0xb0) != 0 && (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)))) &&
        ((*(long *)(lVar13 + 0x488) != 0 &&
         ((*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0 && (*(long *)(lVar13 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)) {
      uVar7 = FUN_0277d6c4();
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (uVar12 = FUN_016d948c(psVar11), (uVar12 & 1) != 0)) {
        sVar5 = psVar11[1];
        local_c8 = CONCAT53(local_c8._3_5_,*(undefined3 *)psVar11);
        fVar16 = ((float)(int)local_b8 * 5.0 + 2.5 + 2.5) - fVar24;
        fVar17 = ((float)local_b8._4_4_ * 5.0 + 2.5 + 2.5) - fVar25;
        if (SQRT(fVar17 * fVar17 + fVar16 * fVar16) < 10.2) {
          fVar18 = 0.0;
          uVar3 = *(undefined1 *)((long)psVar11 + 3);
          fVar20 = 0.0;
          uVar8 = *(undefined4 *)(psVar11 + 2);
          *(short *)(param_1 + 0x38) = *psVar11;
          *(char *)(param_1 + 0x3a) = (char)sVar5;
          *(undefined1 *)(param_1 + 0x3b) = uVar3;
          *(undefined4 *)(param_1 + 0x3c) = uVar8;
          fVar22 = SQRT(fVar16 * fVar16 + 0.0 + fVar17 * fVar17);
          fVar19 = fVar16;
          fVar21 = fVar17;
          if (0.0 < fVar22) {
            fVar22 = 1.0 / fVar22;
            fVar19 = fVar16 * fVar22;
            fVar20 = fVar22 * 0.0;
            fVar21 = fVar17 * fVar22;
          }
          fVar22 = *param_3;
          fVar26 = param_3[1];
          fVar23 = -fVar26;
          fVar26 = SQRT(fVar22 * fVar22 + 0.0 + fVar26 * fVar26);
          if (0.0 < fVar26) {
            fVar26 = 1.0 / fVar26;
            fVar22 = fVar22 * fVar26;
            fVar18 = fVar26 * 0.0;
            fVar23 = fVar26 * fVar23;
          }
          if (0.95 < fVar20 * fVar18 + fVar22 * fVar19 + fVar23 * fVar21) {
            if ((*(int *)(param_1 + 8) != (int)local_b8) ||
               (*(int *)(param_1 + 0xc) != local_b8._4_4_)) {
              *(int *)(param_1 + 8) = (int)local_b8;
              *(int *)(param_1 + 0xc) = local_b8._4_4_;
              *(undefined8 *)(param_1 + 0x20) = 0;
              *(undefined2 *)(param_1 + 0x2c) = 0x100;
              *(undefined4 *)(param_1 + 0x28) = 10;
              return;
            }
            if (*(char *)(param_1 + 0x2d) != '\0') {
              uVar8 = (**(code **)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(param_1 + 0x2c) * 8)
                      )((long *)(param_1 + 0x18));
              *(undefined4 *)(param_1 + 0x20) = uVar8;
            }
            iVar9 = FUN_006f0400(fVar16,fVar17);
            *(uint *)(param_1 + 0x10) =
                 (uint)(long)((float)(iVar9 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0) ^ 0x80000000
            ;
            return;
          }
        }
      }
    }
    if (iVar15 < iVar4 + 2) {
      iVar15 = iVar15 + 1;
    }
    else {
      iVar14 = iVar14 + 1;
      iVar15 = iVar4;
    }
    if ((iVar4 == iVar15) && (iVar9 == iVar14)) {
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
      return;
    }
  } while( true );
}

