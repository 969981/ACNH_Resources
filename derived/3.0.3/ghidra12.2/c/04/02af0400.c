
/* WARNING: Removing unreachable block (ram,0x02af07b0) */
/* WARNING: Removing unreachable block (ram,0x02af0a64) */

void FUN_02af0400(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  uint *puVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  undefined *local_78;
  long local_70;
  int local_64;
  
  puVar11 = (undefined8 *)(param_1 + 0x10);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar25 = (long *)PTR_DAT_04bb5008;
  lVar27 = *(long *)PTR_DAT_04bb5008;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar5 = PTR_DAT_04bc4628;
  uVar21 = (uint)*(ushort *)(lVar27 + 0x7f0);
  uVar1 = *(short *)(lVar27 + 0x7f2) + 1;
  if (*(ushort *)(lVar27 + 0x7f0) != uVar1) {
    puVar2 = PTR_DAT_04bc4888 + 0x10;
    pbVar12 = PTR_DAT_04bc4840;
    puVar17 = (uint *)PTR_DAT_04bc4838;
    pcVar26 = PTR_DAT_04bc4620;
    do {
      uVar13 = uVar21 & 0xffff;
      uVar21 = uVar13 - *(ushort *)(lVar27 + 0x7f0);
      if (((uVar21 < *(uint *)(lVar27 + 2000)) &&
          (puVar20 = *(uint **)(*(long *)(lVar27 + 0x7d8) + (long)(int)uVar21 * 8),
          puVar20 != (uint *)0x0)) || (puVar20 = puVar17, (*pbVar12 & 1) != 0)) {
        uVar21 = *puVar20;
      }
      else {
        iVar9 = __cxa_guard_acquire();
        puVar20 = (uint *)PTR_DAT_04bc4838;
        if (iVar9 == 0) {
          pbVar12 = PTR_DAT_04bc4840;
        }
        else {
          *(undefined4 *)PTR_DAT_04bc4838 = 0;
          pbVar12 = PTR_DAT_04bc4840;
          __cxa_guard_release(PTR_DAT_04bc4840);
        }
        uVar21 = *puVar20;
        plVar25 = (long *)PTR_DAT_04bb5008;
        puVar17 = puVar20;
        pcVar26 = PTR_DAT_04bc4620;
      }
      if (uVar21 != 0) {
        cVar23 = *pcVar26;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *pcVar26 = '\x01';
            *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar21 = *(uint *)(puVar5 + 0x18);
            if (-1 < (int)uVar21) {
              if ((ushort *)((ulong)uVar21 + (long)puVar20) != (ushort *)0x0) {
                uVar21 = (uint)*(ushort *)((ulong)uVar21 + (long)puVar20);
                goto LAB_02af06d4;
              }
              break;
            }
            if (uVar21 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)*puVar20;
          uVar21 = 0;
          if ((*puVar20 == 0) || (puVar20 == puVar24)) goto LAB_02af06d4;
          lVar18 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar24)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar20 + (lVar18 - (long)puVar24);
          if (lVar18 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar24));
          *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar19 = (int *)(lVar18 + 4);
          while (piVar19[-1] != 0x54706054) {
            piVar19 = piVar19 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02af06d0;
          }
          iVar9 = 0;
          if (*piVar19 != -1) {
            iVar9 = *piVar19;
          }
          *(int *)(puVar5 + 0x18) = iVar9;
          if (*puVar20 == 0) break;
        } while( true );
      }
LAB_02af06d0:
      uVar21 = 0;
LAB_02af06d4:
      lVar18 = *plVar25;
      uVar22 = uVar21 - *(ushort *)(lVar18 + 0x7f0);
      local_78 = puVar2;
      if (((uVar22 < *(uint *)(lVar18 + 2000)) &&
          (local_70 = *(long *)(*(long *)(lVar18 + 0x7d8) + (long)(int)uVar22 * 8), local_70 != 0))
         && ((local_64 = FUN_02af77b0(&local_78), pbVar12 = PTR_DAT_04bc4840,
             puVar17 = (uint *)PTR_DAT_04bc4838, plVar25 = (long *)PTR_DAT_04bb5008, local_64 == 1
             && ((0xc < uVar21 || ((1 << (ulong)(uVar21 & 0x1f) & 0x1070U) == 0)))))) {
        if (0x1ff < uVar21) break;
        lVar18 = (ulong)(uVar21 >> 5) * 4;
        *(uint *)((long)puVar11 + lVar18) =
             *(uint *)((long)puVar11 + lVar18) | 1 << (ulong)(uVar21 & 0x1f);
      }
      uVar22 = uVar13;
      if (uVar13 <= *(ushort *)(lVar27 + 0x7f2)) {
        uVar22 = (uint)*(ushort *)(lVar27 + 0x7f2);
      }
      uVar21 = uVar13;
      do {
        while( true ) {
          if (uVar22 == uVar21) {
            uVar21 = uVar13 + 1;
            goto LAB_02af0568;
          }
          uVar14 = (uVar21 + 1 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x7f0);
          if (uVar14 < *(uint *)(lVar27 + 2000)) break;
          uVar21 = uVar21 + 1;
        }
        uVar21 = uVar21 + 1;
      } while (*(long *)(*(long *)(lVar27 + 0x7d8) + (long)(int)uVar14 * 8) == 0);
LAB_02af0568:
    } while ((uint)uVar1 != (uVar21 & 0xffff));
  }
  iVar9 = FUN_0266c940(param_2);
  local_64 = 5;
  if (4 < iVar9) {
    local_78._0_4_ = iVar9;
    uVar10 = FUN_0266c940(param_2);
    puVar8 = PTR_DAT_04bc4840;
    puVar7 = PTR_DAT_04bc4838;
    puVar6 = PTR_DAT_04bc46c0;
    puVar2 = PTR_DAT_04bc4628;
    puVar5 = PTR_DAT_04bc4620;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar10);
    uVar22 = 4;
    uVar14 = 0x1c;
    uVar21 = 0xc;
    uVar13 = 0x3c;
    switch(uVar10) {
    case 2:
      break;
    case 7:
    case 8:
      uVar13 = 0x7c;
    case 6:
      uVar14 = uVar13;
    case 5:
      uVar21 = uVar14;
    case 3:
    case 4:
      uVar22 = uVar21;
      break;
    default:
      uVar22 = 0;
    }
    lVar27 = *(long *)PTR_DAT_04bb5008;
    uVar21 = (uint)*(ushort *)(lVar27 + 0x7f0);
    uVar1 = *(short *)(lVar27 + 0x7f2) + 1;
    if (*(ushort *)(lVar27 + 0x7f0) != uVar1) {
      plVar25 = (long *)PTR_DAT_04bb5008;
      do {
        uVar13 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x7f0);
        if (((uVar13 < *(uint *)(lVar27 + 2000)) &&
            (puVar17 = *(uint **)(*(long *)(lVar27 + 0x7d8) + (long)(int)uVar13 * 8),
            puVar17 != (uint *)0x0)) || (puVar17 = (uint *)puVar7, (*puVar8 & 1) != 0)) {
          uVar15 = (ulong)*puVar17;
          if (*puVar17 != 0) goto LAB_02af0874;
        }
        else {
          iVar9 = __cxa_guard_acquire();
          if (iVar9 != 0) {
            *(undefined4 *)puVar7 = 0;
            __cxa_guard_release(puVar8);
          }
          plVar25 = (long *)PTR_DAT_04bb5008;
          if (*(int *)puVar7 == 0) {
            uVar15 = 0;
          }
          else {
LAB_02af0874:
            cVar23 = *puVar5;
            do {
              if (cVar23 != '\0') {
                uVar13 = *(uint *)(puVar2 + 0x18);
                if ((int)uVar13 < 0) {
                  if (uVar13 == 0xffffffff) goto LAB_02af08a4;
LAB_02af091c:
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  if ((ushort *)((ulong)uVar13 + (long)puVar17) != (ushort *)0x0) {
                    uVar15 = (ulong)*(ushort *)((ulong)uVar13 + (long)puVar17);
                  }
                }
                goto LAB_02af0930;
              }
              cVar23 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
LAB_02af08a4:
              puVar20 = (uint *)(ulong)*puVar17;
              uVar15 = 0;
              if ((*puVar17 == 0) || (puVar17 == puVar20)) goto LAB_02af0930;
              lVar18 = 0xc;
              if (*(char *)((long)puVar17 + (10 - (long)puVar20)) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar17 + (lVar18 - (long)puVar20);
              if (lVar18 == 0) goto LAB_02af091c;
              uVar16 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar20));
              *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
              uVar15 = 0;
              if (uVar16 == 0) goto LAB_02af0930;
              piVar19 = (int *)(lVar18 + 4);
              while (piVar19[-1] != 0x54706054) {
                piVar19 = piVar19 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) {
                  uVar15 = 0;
                  goto LAB_02af0930;
                }
              }
              iVar9 = 0;
              if (*piVar19 != -1) {
                iVar9 = *piVar19;
              }
              *(int *)(puVar2 + 0x18) = iVar9;
            } while (*puVar17 != 0);
            uVar15 = 0;
          }
        }
LAB_02af0930:
        uVar13 = uVar21 & 0xffff;
        lVar18 = *plVar25;
        uVar14 = (uint)uVar15;
        uVar21 = uVar14 - *(ushort *)(lVar18 + 0x7f0);
        if ((uVar21 < *(uint *)(lVar18 + 2000)) &&
           (puVar17 = *(uint **)(*(long *)(lVar18 + 0x7d8) + (long)(int)uVar21 * 8),
           puVar17 != (uint *)0x0)) {
          uVar21 = *puVar17;
          if (uVar21 == 0 || puVar17 == (uint *)(ulong)uVar21) {
LAB_02af09d0:
            uVar21 = 0;
          }
          else {
            puVar20 = (uint *)((long)puVar17 - (long)(ulong)uVar21);
            if (((*puVar20 == 0) || (uVar21 = puVar20[1], uVar21 == 0)) ||
               ((ulong)(ushort)puVar20[2] == 0)) goto LAB_02af09d0;
            lVar18 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar20 + lVar18 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar18 == 0) goto LAB_02af09d0;
            uVar3 = 0;
            if ((ulong)uVar21 != 0) {
              uVar3 = (uint)((ulong)((long)puVar17 - lVar18) / (ulong)uVar21);
            }
            if (*puVar20 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((*(uint *)puVar6 <= uVar3) ||
               (uVar4 = *(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
               uVar21 = (uint)uVar4, 6 < uVar4)) goto LAB_02af09d0;
          }
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar21);
          if ((uVar21 < 7) && ((uVar22 >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
            if (0x1ff < uVar14) {
              return;
            }
            lVar18 = (uVar15 >> 5) * 4;
            *(uint *)((long)puVar11 + lVar18) =
                 *(uint *)((long)puVar11 + lVar18) | 1 << (ulong)(uVar14 & 0x1f);
          }
        }
        uVar14 = uVar13;
        if (uVar13 <= *(ushort *)(lVar27 + 0x7f2)) {
          uVar14 = (uint)*(ushort *)(lVar27 + 0x7f2);
        }
        uVar21 = uVar13;
        do {
          while( true ) {
            if (uVar14 == uVar21) {
              uVar21 = uVar13 + 1;
              goto LAB_02af0834;
            }
            uVar3 = (uVar21 + 1 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x7f0);
            if (uVar3 < *(uint *)(lVar27 + 2000)) break;
            uVar21 = uVar21 + 1;
          }
          uVar21 = uVar21 + 1;
        } while (*(long *)(*(long *)(lVar27 + 0x7d8) + (long)(int)uVar3 * 8) == 0);
LAB_02af0834:
      } while ((uint)uVar1 != (uVar21 & 0xffff));
    }
  }
  return;
}

