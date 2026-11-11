
undefined8
FUN_0065ecb0(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint local_190;
  uint local_18c;
  uint local_17c;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 auStack_168 [264];
  
  puVar6 = PTR_DAT_048607b8;
  uVar19 = param_1[2];
  if (uVar19 != 0) {
    local_190 = 0;
    uVar17 = param_1[1];
    uVar21 = uVar17;
    do {
      if (uVar21 != 0) {
        uVar19 = *param_1;
        local_18c = 0;
        do {
          if (uVar19 != 0) {
            uVar17 = 0;
            do {
              uVar19 = (uint)param_2[3] >> (ulong)(uVar17 & 0x1f);
              if (uVar19 < 2) {
                uVar19 = 1;
              }
              uVar21 = (uint)param_2[4] >> (ulong)(uVar17 & 0x1f);
              if (uVar21 < 2) {
                uVar21 = 1;
              }
              uVar7 = FUN_0065b190(param_3);
              uVar8 = FUN_0065b1b0(param_3);
              uVar24 = param_1[3] >> (ulong)(uVar17 & 0x1f);
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              uVar9 = FUN_0065b190(param_1[6]);
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = (uVar24 - 1) / uVar9;
              }
              uVar24 = param_1[4] >> (ulong)(uVar17 & 0x1f);
              iVar1 = uVar4 + 1;
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              uVar9 = FUN_0065b1b0(param_1[6]);
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = (uVar24 - 1) / uVar9;
              }
              uVar24 = (uint)param_2[3] >> (ulong)(uVar17 & 0x1f);
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              uVar14 = FUN_0065b1f0(param_2[6],uVar24);
              uVar15 = FUN_0065b070(param_4);
              uVar24 = (uint)(uVar15 >> 3) & 0x1fffffff;
              uVar15 = FUN_0065b130(param_3);
              local_170 = -0x7fffff0000000000;
              iVar10 = uVar24 * uVar8 * uVar7 * iVar1;
              if (iVar10 < 0x101) {
                local_170._0_4_ = 0;
                local_178 = auStack_168;
              }
              else {
                local_178 = (undefined1 *)
                            FUN_00426720(puVar6,iVar10,1,auStack_168,0,(long)&local_170 + 4);
              }
              if ((int)local_170 != iVar10) {
                local_170 = CONCAT44(local_170._4_4_,iVar10);
              }
              local_17c = 0;
              do {
                if (uVar4 != 0xffffffff) {
                  uVar9 = 0;
                  do {
                    lVar18 = *(long *)(param_1 + 0x4c);
                    uVar2 = uVar17 + (local_18c + param_1[1] * local_190) * *param_1;
                    lVar20 = *(long *)(*(long *)(param_1 + 8) +
                                      (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar2 << 4));
                    uVar2 = param_1[3] >> (ulong)(uVar17 & 0x1f);
                    if (uVar2 < 2) {
                      uVar2 = 1;
                    }
                    uVar11 = param_1[4] >> (ulong)(uVar17 & 0x1f);
                    if (uVar11 < 2) {
                      uVar11 = 1;
                    }
                    iVar10 = FUN_0065b220(param_1[6],uVar2,uVar11);
                    uVar11 = FUN_0065b190(param_1[6]);
                    iVar12 = FUN_0065b1b0(param_1[6]);
                    iVar13 = FUN_0065b070(param_1[6]);
                    uVar2 = param_1[3] >> (ulong)(uVar17 & 0x1f);
                    if (uVar2 < 2) {
                      uVar2 = 1;
                    }
                    uVar22 = 0;
                    if (uVar11 != 0) {
                      uVar22 = uVar2 / uVar11;
                    }
                    lVar18 = (ulong)(iVar10 * local_17c) + lVar18 + lVar20 +
                             (ulong)(uVar11 * uVar9 * iVar12 * iVar13 * uVar22 >> 3);
                    iVar10 = (**(code **)(*param_5 + 0x20))
                                       (param_5,lVar18,
                                        lVar18 + (ulong)(uint)((int)((uVar15 & 0xffffffff) >> 3) *
                                                              iVar1),local_178,
                                        local_178 + (int)local_170,iVar1,param_3,param_4);
                    if (iVar10 < 0) {
                      bVar5 = true;
                      uVar19 = local_170._4_4_;
                      lVar18 = local_170;
                      goto joined_r0x0065f124;
                    }
                    if (iVar1 != 0) {
                      iVar10 = uVar9 * uVar8;
                      uVar2 = uVar8;
                      if (uVar21 - iVar10 <= uVar8) {
                        uVar2 = uVar21 - iVar10;
                      }
                      if (uVar2 == 0) {
                        iVar13 = 0;
                        iVar12 = 0;
                        do {
                          uVar2 = (uint)param_2[3] >> (ulong)(uVar17 & 0x1f);
                          if (uVar2 < 2) {
                            uVar2 = 1;
                          }
                          uVar11 = (uint)param_2[4] >> (ulong)(uVar17 & 0x1f);
                          if (uVar11 < 2) {
                            uVar11 = 1;
                          }
                          FUN_0065b270(param_2[6],uVar2,uVar11,iVar13,iVar10,local_17c);
                          iVar12 = iVar12 + 1;
                          iVar13 = iVar13 + uVar7;
                        } while (iVar12 != iVar1);
                      }
                      else {
                        iVar13 = 0;
                        iVar12 = 0;
                        do {
                          uVar11 = (uint)param_2[3] >> (ulong)(uVar17 & 0x1f);
                          if (uVar11 < 2) {
                            uVar11 = 1;
                          }
                          uVar22 = (uint)param_2[4] >> (ulong)(uVar17 & 0x1f);
                          if (uVar22 < 2) {
                            uVar22 = 1;
                          }
                          uVar3 = uVar17 + (local_18c + param_2[1] * local_190) * *param_2;
                          lVar18 = *(long *)(*(long *)(param_2 + 8) +
                                            (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)uVar3 << 4));
                          lVar20 = *(long *)(param_2 + 0x4c);
                          uVar16 = FUN_0065b270(param_2[6],uVar11,uVar22,iVar12 * uVar7,iVar10,
                                                local_17c);
                          uVar22 = uVar19 - iVar12 * uVar7;
                          uVar11 = uVar7;
                          if (uVar22 <= uVar7) {
                            uVar11 = uVar22;
                          }
                          lVar18 = lVar20 + lVar18 + (uVar16 & 0xffffffff);
                          uVar22 = 0;
                          iVar23 = iVar13;
                          do {
                            FUN_0043a3b0(lVar18,local_178 + iVar23,uVar11 * uVar24);
                            uVar22 = uVar22 + 1;
                            lVar18 = lVar18 + (uVar14 & 0xffffffff);
                            iVar23 = iVar23 + uVar8 * uVar24;
                          } while (uVar22 < uVar2);
                          iVar12 = iVar12 + 1;
                          iVar13 = iVar13 + uVar8 * uVar7 * uVar24;
                        } while (iVar12 != iVar1);
                      }
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar4 + 1);
                }
                uVar9 = param_1[5] >> (ulong)(uVar17 & 0x1f);
                local_17c = local_17c + 1;
                if (uVar9 < 2) {
                  uVar9 = 1;
                }
              } while (local_17c < uVar9);
              bVar5 = false;
              uVar19 = local_170._4_4_;
              lVar18 = local_170;
joined_r0x0065f124:
              local_170 = (ulong)uVar19 << 0x20;
              if ((-1 < lVar18) && (local_178 != (undefined1 *)0x0)) {
                FUN_00421f90(puVar6,local_178,1,uVar19 & 0x3fffffff);
              }
              if (bVar5) {
                return 0x80040200;
              }
              uVar19 = *param_1;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar19);
            uVar17 = param_1[1];
          }
          local_18c = local_18c + 1;
        } while (local_18c < uVar17);
        uVar19 = param_1[2];
        uVar21 = uVar17;
      }
      local_190 = local_190 + 1;
    } while (local_190 < uVar19);
  }
  return 0;
}

