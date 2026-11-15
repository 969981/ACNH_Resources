
/* WARNING: Removing unreachable block (ram,0x02030980) */
/* WARNING: Removing unreachable block (ram,0x02030990) */

void FUN_02030920(long param_1,long param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_ec [4];
  float local_dc [2];
  float local_d4;
  undefined8 *local_d0;
  ushort *puStack_c8;
  undefined8 *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  long lStack_80;
  
  puVar14 = PTR_DAT_04bb7f20;
  puVar2 = (ushort *)(param_1 + 0x5858);
  iVar18 = *(int *)(param_2 + 0xc);
  uVar10 = *(int *)(param_2 + 8) - 3;
  uVar11 = iVar18 - 3;
  local_88 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_c0 = &local_88;
  local_90 = 0;
  uVar1 = *(int *)(param_2 + 8) + 2;
  puStack_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  uStack_a8 = 0;
  uStack_98 = 0;
  lStack_80 = *(long *)PTR_DAT_04bb27c8;
  uVar9 = (undefined2)(iVar18 + 2U);
  *(undefined2 *)(param_1 + 0x5862) = uVar9;
  *(ushort *)(param_1 + 0x585c) = (ushort)uVar10;
  lStack_80 = lStack_80 + 0x28;
  local_d0 = (undefined8 *)(puVar14 + 0x10);
  *(short *)(param_1 + 0x585e) = (short)uVar11;
  *(ushort *)(param_1 + 0x5860) = (ushort)uVar1;
  uVar6 = (ushort)uVar10;
  if ((uVar1 & 0xffff) <= (uVar10 & 0xffff)) {
    uVar6 = (ushort)uVar1;
  }
  uVar3 = (short)uVar11;
  if ((iVar18 + 2U & 0xffff) <= (uVar11 & 0xffff)) {
    uVar3 = uVar9;
  }
  *puVar2 = uVar6;
  *(undefined2 *)(param_1 + 0x585a) = uVar3;
  puStack_c8 = puVar2;
  local_a0 = local_b0;
  memset((void *)(param_1 + 0xef98),2,0x3c1);
  memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
  *(undefined4 *)(param_1 + 0xf378) = 0;
  FUN_035a4230(puVar2);
  uVar15 = *(ulong *)(param_1 + 0x5870);
  if (uVar15 != 0) {
    uVar6 = *puVar2;
    uVar21 = (uint)uVar6;
    uVar20 = 0;
    iVar4 = *(int *)(param_1 + 0x5864);
    uVar22 = (uint)*(ushort *)(param_1 + 0x585a);
    do {
      iVar12 = uVar21 - *puVar2;
      if ((((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x5864))) &&
          (iVar13 = uVar22 - *(ushort *)(param_1 + 0x585a), -1 < iVar13)) &&
         ((iVar13 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
        (*(code *)*local_d0)
                  (&local_d0,
                   *(long *)(param_1 + 0x5878) +
                   (long)(iVar12 + *(int *)(param_1 + 0x5864) * iVar13) * 0x28);
        uVar15 = *(ulong *)(param_1 + 0x5870);
      }
      uVar20 = uVar20 + 1;
      if (uVar21 + 1 == iVar4 + (uint)uVar6) {
        uVar22 = uVar22 + 1;
        uVar21 = (uint)uVar6;
      }
      else {
        uVar21 = uVar21 + 1;
      }
    } while (uVar20 < uVar15);
  }
  FUN_035a56c0(puVar2,0);
  FUN_035a81f0(puVar2,uVar10,uVar11,0);
  lVar16 = *(long *)PTR_DAT_04bb27c8;
  local_d4 = (float)*(int *)(param_2 + 0xc) * 5.0;
  local_dc[0] = (float)*(int *)(param_2 + 8) * 5.0;
  fVar23 = (float)FUN_0093a950(lVar16 + 0x28,local_dc,0);
  uVar22 = iVar18 + 3;
  uVar21 = uVar11;
  uVar19 = uVar10;
  do {
    fVar24 = (float)FUN_0093a950(lVar16 + 0x28,local_dc,0);
    fVar24 = fVar24 - fVar23;
    fVar25 = -fVar24;
    if (0.0 <= fVar24) {
      fVar25 = fVar24;
    }
    if (5.0 <= fVar25) {
      lVar17 = *(long *)(param_1 + 0x5898);
      uVar8 = (uVar19 - *puVar2) +
              *(int *)(lVar17 + 0x1c) * (uVar21 - *(ushort *)(param_1 + 0x585a));
      uVar7 = 1 << (ulong)(uVar8 & 0x1f);
      uVar5 = *(uint *)(*(long *)(lVar17 + 0x10) + (long)((int)uVar8 >> 5) * 4);
      if ((uVar7 & uVar5) != 0) {
        *(uint *)(*(long *)(lVar17 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
             uVar5 & (uVar7 ^ 0xffffffff);
        iVar18 = -1;
LAB_02030c60:
        *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + iVar18;
      }
    }
    else if (*(long *)(param_1 + 0x5878) != 0) {
      iVar18 = uVar19 - *puVar2;
      iVar4 = uVar21 - *(ushort *)(param_1 + 0x585a);
      if (*(char *)(*(long *)(param_1 + 0x5878) +
                    (long)(iVar18 + iVar4 * *(int *)(param_1 + 0x5864)) * 0x28 + 6) != '\x03') {
        lVar17 = *(long *)(param_1 + 0x5898);
        uVar8 = iVar18 + *(int *)(lVar17 + 0x1c) * iVar4;
        uVar7 = 1 << (ulong)(uVar8 & 0x1f);
        uVar5 = *(uint *)(*(long *)(lVar17 + 0x10) + (long)((int)uVar8 >> 5) * 4);
        if ((uVar7 & uVar5) == 0) {
          *(uint *)(*(long *)(lVar17 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
               uVar7 | uVar5;
          iVar18 = 1;
          goto LAB_02030c60;
        }
      }
    }
    if ((int)uVar19 < (int)uVar1) {
      uVar19 = uVar19 + 1;
    }
    else {
      uVar21 = uVar21 + 1;
      uVar19 = uVar10;
    }
  } while ((uVar10 != uVar19) || (uVar22 != uVar21));
  uVar21 = uVar11;
  uVar19 = uVar10;
  do {
    if ((uVar19 - uVar10 == 0) || (uVar21 == uVar11)) {
LAB_02030d64:
      uVar7 = (uVar19 - uVar10) + (uVar21 - uVar11) * 6;
      uVar5 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar5 & local_ec[(int)uVar7 >> 5]) != 0) {
        local_ec[(long)((ulong)uVar7 << 0x20) >> 0x25] =
             local_ec[(int)uVar7 >> 5] & (uVar5 ^ 0xffffffff);
      }
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0x5898) + 0x1c);
      iVar18 = uVar19 + ~(uint)*puVar2;
      iVar12 = iVar4 * (uVar21 + ~(uint)*(ushort *)(param_1 + 0x585a));
      lVar16 = *(long *)(*(long *)(param_1 + 0x5898) + 0x10);
      uVar5 = iVar12 + iVar18;
      if (((*(uint *)(lVar16 + (long)((int)uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0) ||
         (((iVar4 = iVar4 * (uVar21 - *(ushort *)(param_1 + 0x585a)), uVar5 = iVar4 + iVar18,
           (*(uint *)(lVar16 + (long)((int)uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0 ||
           (iVar18 = uVar19 - *puVar2, uVar5 = iVar12 + iVar18,
           (*(uint *)(lVar16 + (long)((int)uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0)) ||
          (uVar5 = iVar4 + iVar18,
          (*(uint *)(lVar16 + (long)((int)uVar5 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) == 0))))
      goto LAB_02030d64;
    }
    if ((int)uVar19 < (int)uVar1) {
      uVar19 = uVar19 + 1;
    }
    else {
      uVar21 = uVar21 + 1;
      uVar19 = uVar10;
    }
    if ((uVar10 == uVar19) && (uVar22 == uVar21)) {
      uVar19 = uVar10;
      uVar21 = uVar11;
      do {
        uVar5 = (uVar19 - uVar10) + (uVar21 - uVar11) * 6;
        if ((local_ec[(int)uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) == 0) {
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar8 = (uVar19 - *puVar2) +
                  *(int *)(lVar16 + 0x1c) * (uVar21 - *(ushort *)(param_1 + 0x585a));
          uVar7 = 1 << (ulong)(uVar8 & 0x1f);
          uVar5 = *(uint *)(*(long *)(lVar16 + 0x10) + (long)((int)uVar8 >> 5) * 4);
          if ((uVar7 & uVar5) != 0) {
            *(uint *)(*(long *)(lVar16 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
                 uVar5 & (uVar7 ^ 0xffffffff);
            *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          }
        }
        if ((int)uVar19 < (int)uVar1) {
          uVar19 = uVar19 + 1;
        }
        else {
          uVar21 = uVar21 + 1;
          uVar19 = uVar10;
        }
      } while ((uVar10 != uVar19) || (uVar22 != uVar21));
      return;
    }
  } while( true );
}

