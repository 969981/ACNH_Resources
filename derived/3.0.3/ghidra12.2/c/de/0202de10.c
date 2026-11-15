
/* WARNING: Removing unreachable block (ram,0x0202de80) */
/* WARNING: Removing unreachable block (ram,0x0202de90) */

void FUN_0202de10(long param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined8 *local_d8;
  ushort *puStack_d0;
  undefined8 *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  long lStack_88;
  
  puVar1 = (ushort *)(param_1 + 0x5858);
  lVar14 = *(long *)PTR_DAT_04bb5c90;
  fVar23 = *(float *)(lVar14 + 0x40);
  fVar24 = *(float *)(lVar14 + 0x48);
  local_90 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_c8 = &local_90;
  puStack_c0 = PTR_DAT_04bbc1a0 + 0x10;
  lStack_88 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  uStack_b0 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_d8 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  uVar21 = *(uint *)(lVar14 + 0x38) & 0xffff;
  uVar9 = (ushort)*(uint *)(lVar14 + 0x38);
  uVar22 = *(uint *)(lVar14 + 0x3c) & 0xffff;
  uVar2 = (ushort)*(uint *)(lVar14 + 0x3c);
  uVar5 = *(uint *)(lVar14 + 0x28);
  uVar6 = *(uint *)(lVar14 + 0x2c);
  *(ushort *)(param_1 + 0x5860) = uVar9;
  uVar7 = *puVar1;
  *(ushort *)(param_1 + 0x5862) = uVar2;
  uVar8 = *(ushort *)(param_1 + 0x585a);
  uVar18 = uVar5 & 0xffff;
  uVar10 = (ushort)uVar5;
  *(ushort *)(param_1 + 0x585c) = uVar10;
  uVar11 = (ushort)uVar6;
  *(ushort *)(param_1 + 0x585e) = uVar11;
  uVar3 = uVar7;
  if (uVar21 <= uVar7) {
    uVar3 = uVar9;
  }
  uVar4 = uVar10;
  if (uVar18 <= uVar7) {
    uVar4 = uVar3;
  }
  *puVar1 = uVar4;
  uVar6 = uVar6 & 0xffff;
  uVar3 = uVar8;
  if (uVar22 <= uVar8) {
    uVar3 = uVar2;
  }
  uVar7 = uVar11;
  if (uVar6 <= uVar8) {
    uVar7 = uVar3;
  }
  *(ushort *)(param_1 + 0x585a) = uVar7;
  uVar7 = *(ushort *)(lVar14 + 0x28);
  uVar8 = *(ushort *)(lVar14 + 0x2c);
  uVar3 = uVar7;
  if (uVar21 <= uVar7) {
    uVar3 = uVar9;
  }
  if (uVar18 <= uVar7) {
    uVar10 = uVar3;
  }
  *puVar1 = uVar10;
  uVar9 = uVar8;
  if (uVar22 <= uVar8) {
    uVar9 = uVar2;
  }
  if (uVar6 <= uVar8) {
    uVar11 = uVar9;
  }
  *(ushort *)(param_1 + 0x585a) = uVar11;
  puStack_d0 = puVar1;
  local_a8 = local_b8;
  memset((void *)(param_1 + 0xef98),2,0x3c1);
  memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
  *(undefined4 *)(param_1 + 0xf378) = 0;
  FUN_035a4230(puVar1);
  uVar15 = *(ulong *)(param_1 + 0x5870);
  if (uVar15 != 0) {
    uVar9 = *puVar1;
    uVar17 = 0;
    iVar19 = *(int *)(param_1 + 0x5864);
    uVar21 = (uint)*(ushort *)(param_1 + 0x585a);
    uVar22 = (uint)uVar9;
    do {
      iVar20 = uVar22 - *puVar1;
      if ((((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 0x5864))) &&
          (iVar12 = uVar21 - *(ushort *)(param_1 + 0x585a), -1 < iVar12)) &&
         ((iVar12 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
        (*(code *)*local_d8)
                  (&local_d8,
                   *(long *)(param_1 + 0x5878) +
                   (long)(iVar20 + *(int *)(param_1 + 0x5864) * iVar12) * 0x28);
        uVar15 = *(ulong *)(param_1 + 0x5870);
      }
      uVar17 = uVar17 + 1;
      bVar13 = uVar22 + 1 == iVar19 + (uint)uVar9;
      if (bVar13) {
        uVar21 = uVar21 + 1;
      }
      uVar18 = (uint)uVar9;
      if (!bVar13) {
        uVar18 = uVar22 + 1;
      }
      uVar22 = uVar18;
    } while (uVar17 < uVar15);
  }
  lVar14 = *(long *)(param_1 + 0x11060);
  if (lVar14 != param_1 + 0x11058) {
    lVar16 = lVar14 + -0xd8;
    do {
      iVar19 = -2;
      if (0.0 <= *(float *)(lVar16 + 8)) {
        iVar19 = -1;
      }
      iVar19 = iVar19 + (int)((float)(int)*(float *)(lVar16 + 8) / 5.0);
      iVar20 = -2;
      if (0.0 <= *(float *)(lVar16 + 0x10)) {
        iVar20 = -1;
      }
      iVar20 = iVar20 + (int)((float)(int)*(float *)(lVar16 + 0x10) / 5.0);
      FUN_035a4360(puVar1,iVar19,iVar20,0);
      FUN_035a4360(puVar1,iVar19,iVar20 + (uint)DAT_057763a8,0);
      FUN_035a4360(puVar1,iVar19 + (uint)DAT_057763b0,iVar20,0);
      FUN_035a4360(puVar1,iVar19 + (uint)DAT_057763b8,iVar20 + (uint)DAT_057763c0,0);
      lVar14 = *(long *)(lVar14 + 8);
      lVar16 = lVar14 + -0xd8;
    } while (lVar16 != param_1 + 0x10f80);
  }
  iVar19 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  iVar20 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  FUN_035a56c0(puVar1,0);
  *(undefined1 *)(param_1 + 0x58a0) = 1;
  FUN_035a8968(puVar1,iVar20,iVar19);
  FUN_035a81f0(puVar1,iVar20,iVar19,0);
  *(undefined1 *)(param_1 + 0x58a0) = 0;
  return;
}

