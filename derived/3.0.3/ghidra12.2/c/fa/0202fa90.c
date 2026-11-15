
/* WARNING: Removing unreachable block (ram,0x0202fb24) */
/* WARNING: Removing unreachable block (ram,0x0202fb34) */

void FUN_0202fa90(long param_1)

{
  float *pfVar1;
  uint uVar2;
  ushort *puVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *local_b8;
  ushort *puStack_b0;
  undefined8 *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  long lStack_68;
  
  puVar3 = (ushort *)(param_1 + 0x5858);
  lVar15 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar15 == 0) {
    iVar22 = 0;
    iVar17 = 0;
    iVar18 = 0x10;
    iVar23 = 0x10;
  }
  else {
    iVar17 = *(int *)(lVar15 + 0xd88);
    iVar22 = *(int *)(lVar15 + 0xd8c);
    iVar18 = *(int *)(lVar15 + 0xd98);
    iVar23 = *(int *)(lVar15 + 0xd9c);
  }
  uVar24 = iVar17 - 4;
  uVar8 = iVar22 - 4;
  uVar2 = iVar18 + 4;
  uVar19 = iVar23 + 8;
  local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_78 = 0;
  local_a8 = &local_70;
  puStack_a0 = PTR_DAT_04bbc1a0 + 0x10;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  uStack_90 = 0;
  uStack_80 = 0;
  lStack_68 = *(long *)PTR_DAT_04bb27c8;
  local_b8 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  *(ushort *)(param_1 + 0x585c) = (ushort)uVar24;
  *(short *)(param_1 + 0x585e) = (short)uVar8;
  *(ushort *)(param_1 + 0x5860) = (ushort)uVar2;
  *(short *)(param_1 + 0x5862) = (short)uVar19;
  lStack_68 = lStack_68 + 0x28;
  uVar5 = (ushort)uVar24;
  if ((uVar2 & 0xffff) <= (uVar24 & 0xffff)) {
    uVar5 = (ushort)uVar2;
  }
  *puVar3 = uVar5;
  uVar4 = (short)uVar8;
  if ((uVar19 & 0xffff) <= (uVar8 & 0xffff)) {
    uVar4 = (short)uVar19;
  }
  *(undefined2 *)(param_1 + 0x585a) = uVar4;
  puStack_b0 = puVar3;
  local_88 = local_98;
  memset((void *)(param_1 + 0xef98),2,0x3c1);
  memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
  *(undefined4 *)(param_1 + 0xf378) = 0;
  FUN_035a4230(puVar3);
  uVar16 = *(ulong *)(param_1 + 0x5870);
  if (uVar16 != 0) {
    uVar5 = *puVar3;
    uVar21 = (uint)uVar5;
    uVar20 = 0;
    iVar13 = *(int *)(param_1 + 0x5864);
    uVar25 = (uint)*(ushort *)(param_1 + 0x585a);
    do {
      iVar9 = uVar21 - *puVar3;
      if ((((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x5864))) &&
          (iVar10 = uVar25 - *(ushort *)(param_1 + 0x585a), -1 < iVar10)) &&
         ((iVar10 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
        (*(code *)*local_b8)
                  (&local_b8,
                   *(long *)(param_1 + 0x5878) +
                   (long)(iVar9 + *(int *)(param_1 + 0x5864) * iVar10) * 0x28);
        uVar16 = *(ulong *)(param_1 + 0x5870);
      }
      uVar20 = uVar20 + 1;
      if (uVar21 + 1 == iVar13 + (uint)uVar5) {
        uVar25 = uVar25 + 1;
        uVar21 = (uint)uVar5;
      }
      else {
        uVar21 = uVar21 + 1;
      }
    } while (uVar20 < uVar16);
  }
  FUN_035a56c0(puVar3,0);
  puVar11 = PTR_DAT_04bb2720;
  fVar28 = *(float *)PTR_DAT_04bb76e8;
  fVar26 = *(float *)(PTR_DAT_04bb76e8 + 8);
  if (((fVar28 == 0.0) && (*(float *)(PTR_DAT_04bb76e8 + 4) == 0.0)) && (fVar26 == 0.0)) {
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0x330) != 0)) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar13 = FUN_006bd550(*puVar14,0);
      if ((iVar13 == 0x758f7eaf) &&
         ((((*(long *)puVar11 != 0 && (lVar15 = *(long *)(*(long *)puVar11 + 0x330), lVar15 != 0))
           && (*(int *)(lVar15 + 0x260) != 0)) &&
          ((lVar15 = *(long *)(lVar15 + 600), lVar15 != 0 && (lVar15 != 0x40)))))) {
        fVar26 = (float)NEON_ucvtf(*(undefined4 *)(lVar15 + -0x20));
        fVar27 = *(float *)(lVar15 + -0x1c) + *(float *)(lVar15 + -0x24) * 0.5 + 0.0;
        pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                          ((ulong)(long)(fVar26 * 11930465.0) >> 0x18 & 0xff) * 0x10);
        fVar26 = (float)((uint)(long)(fVar26 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar28 = *(float *)(lVar15 + -0x34) + fVar27 * (*pfVar1 + fVar26 * pfVar1[1]);
        fVar26 = *(float *)(lVar15 + -0x2c) + fVar27 * (pfVar1[2] + fVar26 * pfVar1[3]);
        goto LAB_0202fe14;
      }
    }
    lVar15 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar15 == 0) {
      fVar26 = 40.0;
      fVar28 = 40.0;
    }
    else {
      fVar28 = *(float *)(lVar15 + 0xd74);
      fVar26 = *(float *)(lVar15 + 0xd7c);
    }
  }
LAB_0202fe14:
  uVar25 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0) & 0xffff;
  uVar21 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0) & 0xffff;
  *(undefined1 *)(param_1 + 0x58a0) = 1;
  FUN_035a8968(puVar3,uVar25,uVar21);
  FUN_035a81f0(puVar3,uVar25,uVar21,0);
  *(undefined1 *)(param_1 + 0x58a0) = 0;
  if (((int)uVar24 <= (int)uVar2) && ((int)uVar8 <= (int)uVar19)) {
    do {
      uVar19 = uVar8;
      do {
        if (((((int)uVar19 <= iVar22 || ((int)uVar24 <= iVar17 || iVar18 < (int)uVar24)) ||
             (iVar23 < (int)uVar19)) && (uVar5 = *puVar3, (uint)uVar5 <= (uVar24 & 0xffff))) &&
           ((((uVar24 & 0xffff) <=
              (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x5864)) - 1 & 0xffff) &&
             (uVar6 = *(ushort *)(param_1 + 0x585a), (uint)uVar6 <= (uVar19 & 0xffff))) &&
            ((uVar19 & 0xffff) <= (((uint)uVar6 + (uint)*(ushort *)(param_1 + 0x5868)) - 1 & 0xffff)
            )))) {
          lVar15 = *(long *)(param_1 + 0x5898);
          uVar7 = (uVar24 - uVar5) + *(int *)(lVar15 + 0x1c) * (uVar19 - uVar6);
          uVar21 = 1 << (ulong)(uVar7 & 0x1f);
          uVar25 = *(uint *)(*(long *)(lVar15 + 0x10) + (long)((int)uVar7 >> 5) * 4);
          if ((uVar21 & uVar25) != 0) {
            *(uint *)(*(long *)(lVar15 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4) =
                 uVar25 & (uVar21 ^ 0xffffffff);
            *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
          }
        }
        uVar19 = uVar19 + 1;
      } while ((-0xd - iVar23) + uVar19 != -4);
      bVar12 = uVar24 != uVar2;
      uVar24 = uVar24 + 1;
    } while (bVar12);
  }
  return;
}

