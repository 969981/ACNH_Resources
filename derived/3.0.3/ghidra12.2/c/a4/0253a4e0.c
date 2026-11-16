
undefined8 FUN_0253a4e0(long param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  int *piVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  
  puVar12 = PTR_DAT_04bb4948;
  puVar10 = PTR_DAT_04bb27a8;
  bVar7 = *param_2;
  lVar22 = *(long *)PTR_DAT_04bb4948;
  bVar9 = bVar7;
  if (7 < bVar7) {
    bVar9 = 0xff;
  }
  if (((lVar22 == 0) || (lVar23 = *(long *)PTR_DAT_04bb27a8, lVar23 == 0)) ||
     ((*(ushort *)(lVar23 + 0x4b68) & 1) == 0)) {
    uVar17 = 0;
  }
  else {
    iVar1 = *(int *)(lVar23 + 0x4b6c);
    iVar3 = *(int *)(lVar23 + 0x4b70);
    piVar18 = (int *)(**(code **)(*(long *)(lVar22 + 0x218) + 0xf0))(lVar22 + 0x218);
    uVar17 = 0;
    if (bVar7 < 8) {
      lVar22 = *(long *)puVar12;
      if ((int)(char)bVar9 < *(int *)(lVar22 + 0x3d8)) {
        iVar2 = *piVar18;
        iVar27 = piVar18[1];
        lVar23 = (ulong)(uint)(int)(char)bVar9 * 8;
        plVar25 = (long *)(*(long *)(*(long *)(lVar22 + 0x3e0) + lVar23) + 0x30);
        piVar18 = (int *)(**(code **)(*plVar25 + 0xf0))(plVar25);
        iVar5 = *piVar18;
        lVar19 = (**(code **)(*plVar25 + 0xf0))(plVar25);
        iVar5 = iVar2 + iVar1 * 0x20 + iVar5;
        iVar1 = iVar27 + iVar3 * 0x20 + *(int *)(lVar19 + 4);
        puVar20 = (undefined1 *)
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar22 + 0x3e0) + lVar23) + 0x68) +
                              0xf0))();
        puVar11 = PTR_DAT_04bb43c0;
        uVar8 = *puVar20;
        local_a8 = 0;
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = *param_3;
        uStack_ac = param_3[1];
        lVar22 = *(long *)PTR_DAT_04bb43c0;
        uVar16 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar11 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar22 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar22 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(param_3);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar22 + 0x1d8)) &&
               (lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8), lVar22 != 0))
            {
              local_a8 = lVar22;
            }
          }
        }
        FUN_01afade0(&local_b8,uVar8);
        local_e8 = local_b0;
        uStack_e4 = uStack_ac;
        local_e0 = PTR_DAT_04bbc1a0 + 0x10;
        local_d0 = 0;
        local_d8 = PTR_DAT_04bb2010 + 0x10;
        local_c0 = 0;
        local_c8 = local_d8;
        FUN_0277f02c(&local_e8,&local_e0);
        iVar3 = (int)local_c0 + iVar5;
        iVar2 = local_c0._4_4_ + iVar1;
        iVar5 = (int)local_d0 + iVar5 + -1;
        iVar27 = local_d0._4_4_ + iVar1 + -1;
        iVar1 = iVar5;
        if (iVar3 <= iVar5) {
          iVar1 = iVar3;
        }
        if (iVar5 <= iVar3) {
          iVar5 = iVar3;
        }
        iVar3 = iVar27;
        if (iVar2 <= iVar27) {
          iVar3 = iVar2;
        }
        if (iVar27 <= iVar2) {
          iVar27 = iVar2;
        }
        iVar2 = iVar1;
        if (iVar5 + 1 <= iVar1) {
          iVar2 = iVar5 + 1;
        }
        if (iVar1 <= iVar5 + 1) {
          iVar1 = iVar5 + 1;
        }
        lVar22 = *(long *)puVar12;
        iVar5 = iVar3;
        if (iVar27 + 1 <= iVar3) {
          iVar5 = iVar27 + 1;
        }
        if (iVar3 <= iVar27 + 1) {
          iVar3 = iVar27 + 1;
        }
        if (((lVar22 == 0) || (lVar23 = *(long *)puVar10, lVar23 == 0)) ||
           ((*(ushort *)(lVar23 + 0x4b68) & 1) == 0)) {
          iVar27 = 0;
          iVar26 = 0;
        }
        else {
          iVar27 = *(int *)(lVar23 + 0x4b6c);
          iVar26 = *(int *)(lVar23 + 0x4b70);
          lVar23 = 0x170;
          lVar19 = lVar22 + 0x170;
          if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
            lVar23 = 0x138;
            lVar19 = lVar22 + 0x138;
          }
          piVar18 = (int *)(**(code **)(*(long *)(lVar22 + lVar23) + 0xf0))(lVar19);
          iVar27 = *piVar18 + iVar27 * 0x20;
          iVar26 = piVar18[1] + iVar26 * 0x20;
        }
        FUN_02507c6c(&local_e0,7,1,0,0);
        puVar11 = PTR_DAT_04bc31b8;
        puVar12 = PTR_DAT_04bc31b0;
        puVar10 = PTR_DAT_04bb5038;
        uVar16 = (uint)(byte)local_e0;
        local_b8 = (undefined *)CONCAT44(local_e0._4_4_,(undefined4)local_b8);
        bVar9 = 0xff;
        if ((byte)local_e0 < 8) {
          bVar9 = (byte)local_e0;
        }
        local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar9);
        local_b0 = CONCAT22(local_b0._2_2_,local_d8._0_2_);
        if ((byte)local_e0 < 8) {
          fVar31 = (float)iVar5 * 5.0;
          fVar33 = (float)iVar3 * 5.0 + 5.0;
          fVar32 = (float)iVar1 * 5.0 + 5.0;
          fVar34 = (float)(iVar27 + 1) * 5.0 + 5.0;
          fVar35 = (float)(iVar26 + 1) * 5.0 + 5.0;
          fVar36 = (float)iVar26 * 5.0;
          while( true ) {
            if (*param_2 < 8 && *param_2 == uVar16) {
              uVar28 = (ulong)uVar16;
            }
            else {
              uVar28 = (ulong)uVar16;
              lVar22 = DAT_054f5738 + uVar28 * 0x80;
              uVar6 = *(undefined4 *)(puVar12 + (ulong)uVar16 * 0x30 + 0x1f);
              uVar17 = *(undefined8 *)(puVar12 + (ulong)uVar16 * 0x30 + 8);
              uVar4 = *(undefined8 *)(puVar12 + (ulong)uVar16 * 0x30 + 0x10);
              *(undefined8 *)(lVar22 + 0x2f8) =
                   *(undefined8 *)(puVar12 + (ulong)uVar16 * 0x30 + 0x18);
              *(undefined8 *)(lVar22 + 0x2f0) = uVar4;
              *(undefined8 *)(lVar22 + 0x2e8) = uVar17;
              *(undefined4 *)(lVar22 + 0x2ff) = uVar6;
              uVar17 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x30);
              uVar4 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x38);
              uVar24 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x28);
              *(undefined8 *)(lVar22 + 800) = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x20)
              ;
              *(undefined8 *)(lVar22 + 0x338) = uVar4;
              *(undefined8 *)(lVar22 + 0x330) = uVar17;
              *(undefined8 *)(lVar22 + 0x328) = uVar24;
              uVar17 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x48);
              uVar4 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x50);
              uVar24 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x56);
              *(undefined8 *)(lVar22 + 0x340) =
                   *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x40);
              *(undefined8 *)(lVar22 + 0x356) = uVar24;
              *(undefined8 *)(lVar22 + 0x350) = uVar4;
              *(undefined8 *)(lVar22 + 0x348) = uVar17;
              uVar17 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 8);
              uVar4 = *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x10);
              fVar30 = (float)*(int *)(lVar22 + 0x2ed) * 0.001;
              fVar29 = (float)*(int *)(lVar22 + 0x2f3) * 0.001;
              *(undefined8 *)(lVar22 + 0x318) =
                   *(undefined8 *)(puVar11 + (ulong)uVar16 * 0x70 + 0x18);
              *(undefined8 *)(lVar22 + 0x310) = uVar4;
              *(undefined8 *)(lVar22 + 0x308) = uVar17;
              bVar13 = false;
              if (((float)iVar2 * 5.0 <= fVar30) && (bVar13 = false, !NAN(fVar30) && !NAN(fVar32)))
              {
                bVar13 = fVar30 < fVar32;
              }
              bVar14 = false;
              bVar15 = true;
              if (bVar13) {
                bVar14 = false;
                bVar15 = true;
                if (!NAN(fVar31) && !NAN(fVar29)) {
                  bVar14 = fVar31 == fVar29;
                  bVar15 = fVar29 <= fVar31;
                }
              }
              bVar13 = false;
              if ((!bVar15 || bVar14) && (bVar13 = false, !NAN(fVar29) && !NAN(fVar33))) {
                bVar13 = fVar29 < fVar33;
              }
              if (bVar13) {
                iVar1 = *(int *)(param_1 + 0x23b0);
                iVar3 = *(int *)(param_1 + 0x23a8);
                if (iVar1 < iVar3) {
                  *(int *)(param_1 + 0x23b0) = iVar1 + 1;
                  iVar1 = *(int *)(param_1 + 0x23ac) + iVar1;
                  iVar5 = 0;
                  if (iVar3 <= iVar1) {
                    iVar5 = iVar3;
                  }
                  *(char *)(*(long *)(param_1 + 0x23a0) + (long)(iVar1 - iVar5)) = (char)uVar16;
                }
              }
              bVar13 = false;
              if (((float)iVar27 * 5.0 <= fVar30) && (bVar13 = false, !NAN(fVar30) && !NAN(fVar34)))
              {
                bVar13 = fVar30 < fVar34;
              }
              bVar14 = false;
              bVar15 = true;
              if (bVar13) {
                bVar14 = false;
                bVar15 = true;
                if (!NAN(fVar36) && !NAN(fVar29)) {
                  bVar14 = fVar36 == fVar29;
                  bVar15 = fVar29 <= fVar36;
                }
              }
              bVar13 = false;
              if ((!bVar15 || bVar14) && (bVar13 = false, !NAN(fVar29) && !NAN(fVar35))) {
                bVar13 = fVar29 < fVar35;
              }
              if (bVar13) {
                iVar1 = *(int *)(param_1 + 0x23b0);
                iVar3 = *(int *)(param_1 + 0x23a8);
                if (iVar1 < iVar3) {
                  *(int *)(param_1 + 0x23b0) = iVar1 + 1;
                  iVar1 = *(int *)(param_1 + 0x23ac) + iVar1;
                  iVar5 = 0;
                  if (iVar3 <= iVar1) {
                    iVar5 = iVar3;
                  }
                  *(char *)(*(long *)(param_1 + 0x23a0) + (long)(iVar1 - iVar5)) = (char)uVar16;
                }
              }
            }
            do {
              if (uVar28 == 7) goto LAB_0253a7d4;
              uVar28 = uVar28 + 1;
              uVar21 = FUN_02507924(&local_b8,puVar10 + uVar28);
            } while ((uVar21 & 1) == 0);
            bVar9 = puVar10[uVar28];
            uVar16 = (uint)bVar9;
            if (7 < uVar16) break;
            local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar9);
          }
        }
LAB_0253a7d4:
        uVar17 = 1;
      }
    }
  }
  return uVar17;
}

