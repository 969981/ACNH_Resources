
void FUN_0065dc00(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  
  bVar1 = DAT_04c7e3f8 != 0;
  DAT_04c7e3f8 = 0;
  fVar30 = DAT_04102ec4;
  puVar6 = PTR_DAT_048607b8;
  plVar7 = DAT_04c7e190;
  if (bVar1) {
    DAT_04c7e3f8 = 0;
    FUN_0043d590(&DAT_04c7e400);
    fVar30 = DAT_04102ec4;
    puVar6 = PTR_DAT_048607b8;
    plVar7 = DAT_04c7e190;
  }
  do {
    puVar10 = PTR_DAT_048607b8;
    fVar29 = DAT_04102ec4;
    DAT_04102ec4 = fVar30;
    PTR_DAT_048607b8 = puVar6;
    if (plVar7 == (long *)0x0) {
      uVar21 = 0;
      uVar20 = 0;
      do {
        local_88 = uVar21 | uVar20;
        local_a0 = 0;
        local_98 = CONCAT44((int)uVar20,(int)uVar20);
        fVar30 = (float)FUN_0065b0d0(uVar20 & 0xffffffff);
        fVar29 = (float)FUN_0065b0d0(uVar20 & 0xffffffff);
        fVar26 = fVar30 + fVar29;
        local_90 = CONCAT44(fVar26,1);
        uVar12 = FUN_0065b1d0(uVar20 & 0xffffffff);
        if ((((uVar12 & 1) == 0) && (uVar12 = FUN_0065b1d0(uVar20 & 0xffffffff), (uVar12 & 1) == 0))
           && ((uVar19 = (uint)fVar30, uVar19 == 0 ||
               ((((uVar19 - 1 & uVar19) != 0 || (uVar19 = (uint)fVar29, uVar19 == 0)) ||
                ((uVar19 - 1 & uVar19) != 0)))))) {
          local_90 = CONCAT44(fVar26 + fVar26,(undefined4)local_90);
        }
        FUN_0065e1b0(&local_88,&local_a0);
        puVar6 = PTR_DAT_048607b8;
        fVar30 = DAT_04102ec4;
        uVar20 = uVar20 + 1;
        uVar21 = uVar21 + 0x100000000;
      } while (uVar20 != 0x116);
      local_a8 = 0;
      uVar20 = 1;
      do {
        lVar13 = 0;
        uVar21 = 1;
        do {
          if (((uVar20 != uVar21) &&
              (lVar14 = FUN_006621b0(uVar21 & 0xffffffff,uVar20 & 0xffffffff), lVar14 != 0)) &&
             (*(float *)(DAT_04c7e3f0 + (long)*(int *)(lVar14 + 4) * 0x20 + 0x1c) < fVar30)) {
            lVar14 = 0;
            uVar12 = 0x100000000;
LAB_0065df3c:
            do {
              if ((lVar13 != lVar14) && (local_a8 != lVar14)) {
                uVar25 = uVar12 | uVar21;
                local_88 = uVar25;
                lVar15 = FUN_006621b0(uVar20 & 0xffffffff,(int)lVar14 + 1);
                if ((lVar15 != 0) &&
                   (*(float *)(DAT_04c7e3f0 + (long)*(int *)(lVar15 + 4) * 0x20 + 0x1c) < fVar30)) {
                  local_a0 = 0;
                  local_98 = 0;
                  local_90 = 0x7f7fffee00000000;
                  lVar16 = FUN_006621b0(uVar21 & 0xffffffff,uVar20 & 0xffffffff);
                  lVar11 = DAT_04c7e3f0;
                  if (lVar16 == 0) {
                    puVar24 = &local_a0;
                  }
                  else {
                    puVar24 = (ulong *)(DAT_04c7e3f0 + (long)*(int *)(lVar16 + 4) * 0x20 + 8);
                  }
                  iVar5 = *(int *)(lVar15 + 4);
                  fVar29 = (float)FUN_0065b0d0((int)puVar24[1]);
                  fVar26 = (float)FUN_0065b0d0(*(undefined4 *)((long)puVar24 + 0xc));
                  if (fVar26 < fVar29) {
                    lVar15 = lVar11 + (long)iVar5 * 0x20;
                    fVar29 = (float)FUN_0065b0d0(*(undefined4 *)(lVar15 + 0x10));
                    fVar26 = (float)FUN_0065b0d0(*(undefined4 *)(lVar15 + 0x14));
                    if (fVar29 < fVar26) goto joined_r0x0065e01c;
                  }
                  fVar29 = *(float *)((long)puVar24 + 0x14) +
                           *(float *)(lVar11 + (long)iVar5 * 0x20 + 0x1c);
                  if (fVar29 < fVar30) {
                    uVar8 = puVar24[1];
                    uVar23 = *puVar24;
                    uVar2 = *(undefined4 *)((long)puVar24 + 0xc);
                    uVar9 = puVar24[2];
                    lVar15 = FUN_006621b0(uVar21 & 0xffffffff,uVar25 >> 0x20);
                    fVar26 = fVar30;
                    if (lVar15 != 0) {
                      fVar26 = *(float *)(DAT_04c7e3f0 + (long)*(int *)(lVar15 + 4) * 0x20 + 0x1c);
                    }
                    if (fVar29 < fVar26) {
                      uVar19 = FUN_00662260(&local_88);
                      if (DAT_04c7e3f8 != uVar19) {
                        lVar15 = DAT_04c7e3f0 + ((long)((ulong)uVar19 << 0x20) >> 0x1b);
                        *(ulong *)(lVar15 + 8) = uVar23;
                        *(int *)(lVar15 + 0x10) = (int)uVar8;
                        *(undefined4 *)(lVar15 + 0x14) = uVar2;
                        *(int *)(lVar15 + 0x18) = (int)uVar9;
                        *(float *)(lVar15 + 0x1c) = fVar29;
                        lVar14 = lVar14 + 1;
                        uVar12 = uVar12 + 0x100000000;
                        if (lVar14 == 0x115) break;
                        goto LAB_0065df3c;
                      }
                      if ((DAT_04c7e3fc & 0x3fffffff) == uVar19) {
                        FUN_00426990(puVar6,&DAT_04c7e3f0,0x20);
                        uVar19 = DAT_04c7e3f8;
                      }
                      puVar24 = (ulong *)(DAT_04c7e3f0 + (long)(int)uVar19 * 0x20);
                      DAT_04c7e3f8 = uVar19 + 1;
                      *puVar24 = uVar25;
                      puVar24[1] = uVar23;
                      *(int *)(puVar24 + 2) = (int)uVar8;
                      *(undefined4 *)((long)puVar24 + 0x14) = uVar2;
                      *(int *)(puVar24 + 3) = (int)uVar9;
                      *(float *)((long)puVar24 + 0x1c) = fVar29;
                    }
                  }
                }
              }
joined_r0x0065e01c:
              uVar12 = uVar12 + 0x100000000;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0x115);
          }
          uVar21 = uVar21 + 1;
          lVar13 = lVar13 + 1;
        } while (uVar21 != 0x116);
        uVar20 = uVar20 + 1;
        local_a8 = local_a8 + 1;
        if (uVar20 == 0x116) {
          DAT_04c7e1e8 = 1;
          return;
        }
      } while( true );
    }
    auVar31 = (**(code **)(*plVar7 + 0x10))(plVar7);
    iVar5 = (int)((ulong)(auVar31._8_8_ - auVar31._0_8_) >> 2) * -0x55555555;
    if (iVar5 != 0) {
      iVar22 = 0;
      do {
        while( true ) {
          puVar24 = (ulong *)(auVar31._0_8_ + (long)iVar22 * 0xc);
          uVar21 = *puVar24;
          uVar3 = *(undefined4 *)((long)puVar24 + 4);
          uVar20 = *puVar24;
          uVar2 = (undefined4)*puVar24;
          uVar4 = *(undefined4 *)((long)puVar24 + 4);
          local_a0 = uVar20;
          fVar26 = (float)FUN_0065b0d0(uVar2);
          fVar27 = (float)FUN_0065b0d0(uVar4);
          fVar28 = fVar26 + fVar27;
          uVar19 = (uint)puVar24[1];
          fVar30 = fVar28 + fVar28;
          if ((uVar19 & 1) != 0) {
            fVar30 = fVar28;
          }
          uVar12 = FUN_0065b1d0(uVar2);
          if ((((uVar12 & 1) == 0) && (uVar12 = FUN_0065b1d0(uVar4), (uVar12 & 1) == 0)) &&
             ((uVar17 = (uint)fVar26, uVar17 == 0 ||
              ((uVar18 = (uint)fVar27, (uVar17 - 1 & uVar17) != 0 || uVar18 == 0 ||
               ((uVar18 - 1 & uVar18) != 0)))))) {
            fVar30 = fVar30 + fVar30;
          }
          lVar13 = FUN_006621b0((int)uVar21,uVar3);
          fVar26 = fVar29;
          if (lVar13 != 0) {
            fVar26 = *(float *)(DAT_04c7e3f0 + (long)*(int *)(lVar13 + 4) * 0x20 + 0x1c);
          }
          if (fVar30 < fVar26) break;
LAB_0065de0c:
          iVar22 = iVar22 + 1;
          if (iVar5 == iVar22) goto LAB_0065de18;
        }
        uVar17 = FUN_00662260(&local_a0);
        if (DAT_04c7e3f8 == uVar17) {
          if ((DAT_04c7e3fc & 0x3fffffff) == uVar17) {
            FUN_00426990(puVar10,&DAT_04c7e3f0,0x20);
            uVar17 = DAT_04c7e3f8;
          }
          puVar24 = (ulong *)(DAT_04c7e3f0 + (long)(int)uVar17 * 0x20);
          DAT_04c7e3f8 = uVar17 + 1;
          *puVar24 = uVar20;
          puVar24[1] = (ulong)plVar7;
          *(undefined4 *)(puVar24 + 2) = uVar2;
          *(undefined4 *)((long)puVar24 + 0x14) = uVar4;
          *(uint *)(puVar24 + 3) = uVar19;
          *(float *)((long)puVar24 + 0x1c) = fVar30;
          goto LAB_0065de0c;
        }
        lVar13 = DAT_04c7e3f0 + ((long)((ulong)uVar17 << 0x20) >> 0x1b);
        *(long **)(lVar13 + 8) = plVar7;
        *(undefined4 *)(lVar13 + 0x10) = uVar2;
        *(undefined4 *)(lVar13 + 0x14) = uVar4;
        *(uint *)(lVar13 + 0x18) = uVar19;
        *(float *)(lVar13 + 0x1c) = fVar30;
        iVar22 = iVar22 + 1;
      } while (iVar5 != iVar22);
    }
LAB_0065de18:
    fVar30 = DAT_04102ec4;
    puVar6 = PTR_DAT_048607b8;
    plVar7 = (long *)plVar7[1];
    PTR_DAT_048607b8 = puVar10;
    DAT_04102ec4 = fVar29;
  } while( true );
}

