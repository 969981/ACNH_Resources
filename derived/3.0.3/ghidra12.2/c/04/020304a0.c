
/* WARNING: Removing unreachable block (ram,0x020306c4) */
/* WARNING: Removing unreachable block (ram,0x020306d4) */

void FUN_020304a0(long param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
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
  
  lVar16 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar16 == 0) {
    uVar21 = 0;
    uVar17 = 0;
    uVar18 = 0x10;
    uVar23 = 0x10;
  }
  else {
    uVar17 = *(uint *)(lVar16 + 0xd88);
    uVar21 = *(uint *)(lVar16 + 0xd8c);
    uVar18 = *(uint *)(lVar16 + 0xd98);
    uVar23 = *(uint *)(lVar16 + 0xd9c);
  }
  puVar1 = (ushort *)(param_1 + 0x5858);
  uVar6 = (int)((float)(int)*(float *)PTR_DAT_04bb76e8 / 5.0) -
          (uint)(*(float *)PTR_DAT_04bb76e8 < 0.0);
  uVar7 = (int)((float)(int)*(float *)(PTR_DAT_04bb76e8 + 8) / 5.0) -
          (uint)(*(float *)(PTR_DAT_04bb76e8 + 8) < 0.0);
  if ((int)(uVar18 - uVar17) < 0x19) {
    uVar24 = uVar21;
    uVar19 = uVar18;
    uVar15 = uVar23;
    uVar22 = uVar17;
    if ((int)(uVar23 - uVar21) < 0x15) goto LAB_020305ec;
  }
  uVar22 = uVar6 - 0xc;
  if ((int)uVar22 < (int)uVar17) {
    uVar19 = uVar17 + 0x18;
    if ((int)uVar18 <= (int)(uVar17 + 0x18)) {
      uVar19 = uVar18;
    }
    uVar22 = uVar17;
  }
  else {
    uVar19 = uVar6 + 0xc;
    if ((int)uVar18 < (int)(uVar6 + 0xc)) {
      uVar22 = uVar18 - 0x18;
      if ((int)(uVar18 - 0x18) <= (int)uVar17) {
        uVar22 = uVar17;
      }
      uVar19 = uVar18;
    }
  }
  uVar5 = uVar23 - 0x14;
  if ((int)(uVar23 - 0x14) <= (int)uVar21) {
    uVar5 = uVar21;
  }
  uVar24 = uVar7 - 10;
  uVar15 = uVar7 + 10;
  if ((int)uVar23 < (int)(uVar7 + 10)) {
    uVar24 = uVar5;
    uVar15 = uVar23;
  }
  uVar5 = uVar21 + 0x14;
  if ((int)uVar23 <= (int)(uVar21 + 0x14)) {
    uVar5 = uVar23;
  }
  if ((int)(uVar7 - 10) < (int)uVar21) {
    uVar24 = uVar21;
    uVar15 = uVar5;
  }
LAB_020305ec:
  uVar5 = uVar6 - 0x18;
  if ((int)(uVar6 - uVar22) < 0x1a) {
    uVar5 = uVar22;
  }
  uVar25 = uVar22;
  uVar10 = uVar19;
  if ((int)uVar19 < (int)uVar6) {
    uVar25 = uVar5;
    uVar10 = uVar6;
  }
  uVar5 = uVar6 + 0x18;
  if ((int)(uVar19 - uVar6) < 0x1a) {
    uVar5 = uVar19;
  }
  if ((int)uVar6 < (int)uVar22) {
    uVar25 = uVar6;
    uVar10 = uVar5;
  }
  if ((int)uVar7 < (int)uVar24) {
    uVar22 = uVar7 + 0x14;
    if ((int)(uVar15 - uVar7) < 0x16) {
      uVar22 = uVar15;
    }
    uVar19 = uVar7;
    uVar15 = uVar22;
  }
  else {
    uVar19 = uVar24;
    if ((int)uVar15 < (int)uVar7) {
      uVar19 = uVar7 - 0x14;
      if ((int)(uVar7 - uVar24) < 0x16) {
        uVar19 = uVar24;
      }
      uVar15 = uVar7;
    }
  }
  *(ushort *)(param_1 + 0x5860) = (ushort)uVar10;
  *(short *)(param_1 + 0x5862) = (short)uVar15;
  puVar12 = PTR_DAT_04bb27c8;
  puVar11 = PTR_DAT_04bb27a8;
  uVar4 = (ushort)uVar25;
  if ((uVar10 & 0xffff) <= (uVar25 & 0xffff)) {
    uVar4 = (ushort)uVar10;
  }
  uVar2 = (short)uVar19;
  if ((uVar15 & 0xffff) <= (uVar19 & 0xffff)) {
    uVar2 = (short)uVar15;
  }
  *(ushort *)(param_1 + 0x585c) = (ushort)uVar25;
  *(short *)(param_1 + 0x585e) = (short)uVar19;
  *puVar1 = uVar4;
  *(undefined2 *)(param_1 + 0x585a) = uVar2;
  lStack_68 = *(long *)puVar12 + 0x28;
  local_70 = *(undefined8 *)(*(long *)puVar11 + 0x1f8);
  local_a8 = &local_70;
  puStack_a0 = PTR_DAT_04bbc1a0 + 0x10;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  uStack_90 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_b8 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  puStack_b0 = puVar1;
  local_88 = local_98;
  memset((void *)(param_1 + 0xef98),2,0x3c1);
  memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
  *(undefined4 *)(param_1 + 0xf378) = 0;
  FUN_035a4230(puVar1);
  uVar14 = *(ulong *)(param_1 + 0x5870);
  if (uVar14 != 0) {
    uVar4 = *puVar1;
    uVar24 = (uint)uVar4;
    uVar20 = 0;
    iVar3 = *(int *)(param_1 + 0x5864);
    uVar22 = (uint)*(ushort *)(param_1 + 0x585a);
    do {
      iVar8 = uVar24 - *puVar1;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x5864))) &&
          (iVar9 = uVar22 - *(ushort *)(param_1 + 0x585a), -1 < iVar9)) &&
         ((iVar9 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
        (*(code *)*local_b8)
                  (&local_b8,
                   *(long *)(param_1 + 0x5878) +
                   (long)(iVar8 + *(int *)(param_1 + 0x5864) * iVar9) * 0x28);
        uVar14 = *(ulong *)(param_1 + 0x5870);
      }
      uVar20 = uVar20 + 1;
      if (uVar24 + 1 == iVar3 + (uint)uVar4) {
        uVar22 = uVar22 + 1;
        uVar24 = (uint)uVar4;
      }
      else {
        uVar24 = uVar24 + 1;
      }
    } while (uVar20 < uVar14);
  }
  FUN_035a56c0(puVar1,0);
  *(undefined1 *)(param_1 + 0x58a0) = 1;
  FUN_035a8968(puVar1,uVar6 & 0xffff,uVar7 & 0xffff);
  FUN_035a81f0(puVar1,uVar6 & 0xffff,uVar7 & 0xffff,0);
  *(undefined1 *)(param_1 + 0x58a0) = 0;
  uVar6 = uVar19;
  if ((int)uVar19 <= (int)(uVar19 + 0x14)) {
    uVar6 = uVar19 + 0x14;
  }
  uVar7 = uVar25;
  if ((int)uVar25 <= (int)(uVar25 + 0x18)) {
    uVar7 = uVar25 + 0x18;
  }
  do {
    uVar22 = uVar19;
    do {
      lVar16 = *(long *)(param_1 + 0x5898);
      uVar5 = (uVar25 - *puVar1) +
              *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
      uVar15 = 1 << (ulong)(uVar5 & 0x1f);
      uVar24 = *(uint *)(*(long *)(lVar16 + 0x10) + (long)((int)uVar5 >> 5) * 4);
      if (((uVar15 & uVar24) != 0) &&
         (((int)uVar22 < (int)uVar21 || ((int)uVar25 < (int)uVar17 || (int)uVar18 < (int)uVar25) ||
          ((int)uVar23 < (int)uVar22)))) {
        *(uint *)(*(long *)(lVar16 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
             uVar24 & (uVar15 ^ 0xffffffff);
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
      }
      uVar22 = uVar22 + 1;
    } while (uVar6 + 1 != uVar22);
    bVar13 = uVar25 != uVar7;
    uVar25 = uVar25 + 1;
  } while (bVar13);
  return;
}

