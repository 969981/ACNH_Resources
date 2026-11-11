
undefined8
FUN_0065e6d0(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,long *param_5,
            long *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined **local_230;
  long lStack_228;
  long local_220;
  long local_218;
  long lStack_210;
  uint local_208;
  uint local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  long *local_1f8;
  uint local_1f0;
  char local_1ec;
  undefined1 auStack_1d8 [12];
  uint local_1cc;
  uint local_1c8;
  undefined4 local_1c0;
  long *local_1b8;
  long local_a8;
  long local_a0;
  undefined1 auStack_88 [12];
  uint local_7c;
  uint uStack_78;
  undefined4 local_70;
  
  uVar22 = param_1[2];
  if (uVar22 != 0) {
    uVar19 = param_1[1];
    uVar26 = 0;
    uVar24 = uVar19;
    do {
      if (uVar24 != 0) {
        uVar24 = *param_1;
        uVar22 = 0;
        do {
          if (uVar24 != 0) {
            uVar19 = 0;
            do {
              uVar24 = param_1[3] >> (ulong)(uVar19 & 0x1f);
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              uVar2 = param_1[4] >> (ulong)(uVar19 & 0x1f);
              uVar3 = (uint)param_2[3] >> (ulong)(uVar19 & 0x1f);
              if (uVar3 < 2) {
                uVar3 = 1;
              }
              uVar10 = FUN_0065b190(param_2[6]);
              uVar8 = 0;
              if (uVar10 != 0) {
                uVar8 = (uVar3 - 1) / uVar10;
              }
              uVar3 = (uint)param_2[4] >> (ulong)(uVar19 & 0x1f);
              uVar8 = uVar8 + 1;
              if (uVar3 < 2) {
                uVar3 = 1;
              }
              uVar11 = FUN_0065b1b0(param_2[6]);
              uVar10 = 0;
              if (uVar11 != 0) {
                uVar10 = (uVar3 - 1) / uVar11;
              }
              uVar3 = uVar10 + 1;
              iVar12 = FUN_0065b190(param_4);
              iVar13 = FUN_0065b1b0(param_4);
              uVar7 = iVar13 * uVar3;
              uVar11 = param_1[3] >> (ulong)(uVar19 & 0x1f);
              if (uVar11 < 2) {
                uVar11 = 1;
              }
              uVar14 = FUN_0065b1f0(param_1[6],uVar11);
              uVar15 = FUN_0065b070(param_3);
              uVar16 = FUN_0065b130(param_4);
              FUN_0065a590(auStack_88);
              local_7c = iVar12 * uVar8;
              uStack_78 = uVar7;
              local_70 = param_3;
              FUN_0065a5b0(auStack_1d8);
              FUN_0065a5f0(auStack_1d8,auStack_88);
              if (uVar2 < 2) {
                uVar2 = 1;
              }
              uVar11 = 0;
              do {
                if (uVar7 != 0) {
                  local_254 = 0;
                  do {
                    uVar6 = local_254;
                    if (uVar2 - 1 <= local_254) {
                      uVar6 = uVar2 - 1;
                    }
                    uVar25 = local_1cc;
                    if (local_1cc < 2) {
                      uVar25 = 1;
                    }
                    uVar1 = local_1c8;
                    if (local_1c8 < 2) {
                      uVar1 = 1;
                    }
                    lVar21 = local_a8 + *local_1b8;
                    uVar17 = FUN_0065b270(local_1c0,uVar25,uVar1,0,local_254,0);
                    uVar25 = param_1[3] >> (ulong)(uVar19 & 0x1f);
                    if (uVar25 < 2) {
                      uVar25 = 1;
                    }
                    uVar1 = param_1[4] >> (ulong)(uVar19 & 0x1f);
                    if (uVar1 < 2) {
                      uVar1 = 1;
                    }
                    uVar4 = uVar19 + (uVar22 + param_1[1] * uVar26) * *param_1;
                    lVar20 = *(long *)(*(long *)(param_1 + 8) +
                                      (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar4 << 4));
                    lVar23 = *(long *)(param_1 + 0x4c);
                    uVar18 = FUN_0065b270(param_1[6],uVar25,uVar1,0,uVar6,uVar11);
                    FUN_0043a3b0(lVar21 + (uVar17 & 0xffffffff),
                                 lVar23 + lVar20 + (uVar18 & 0xffffffff),uVar14);
                    for (uVar25 = uVar24; uVar25 < iVar12 * uVar8; uVar25 = uVar25 + 1) {
                      uVar1 = local_1cc;
                      if (local_1cc < 2) {
                        uVar1 = 1;
                      }
                      uVar4 = local_1c8;
                      if (local_1c8 < 2) {
                        uVar4 = 1;
                      }
                      lVar21 = local_a8 + *local_1b8;
                      uVar17 = FUN_0065b270(local_1c0,uVar1,uVar4,uVar25,local_254,0);
                      uVar1 = param_1[3] >> (ulong)(uVar19 & 0x1f);
                      if (uVar1 < 2) {
                        uVar1 = 1;
                      }
                      uVar4 = param_1[4] >> (ulong)(uVar19 & 0x1f);
                      if (uVar4 < 2) {
                        uVar4 = 1;
                      }
                      uVar5 = uVar19 + (uVar22 + param_1[1] * uVar26) * *param_1;
                      lVar20 = *(long *)(*(long *)(param_1 + 8) +
                                        (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar5 << 4));
                      lVar23 = *(long *)(param_1 + 0x4c);
                      uVar18 = FUN_0065b270(param_1[6],uVar1,uVar4,uVar24 - 1,uVar6,uVar11);
                      FUN_0043a3b0(lVar21 + (uVar17 & 0xffffffff),
                                   lVar23 + lVar20 + (uVar18 & 0xffffffff),
                                   (uint)(uVar15 >> 3) & 0x1fffffff);
                    }
                    local_254 = local_254 + 1;
                  } while (local_254 != uVar7);
                }
                local_230 = &PTR_LAB_048e81e0;
                lStack_228 = local_a8;
                local_220 = local_a0 + local_a8;
                local_218 = 0;
                lStack_210 = 0;
                uVar6 = uVar19 + (uVar22 + param_2[1] * uVar26) * *param_2;
                lVar21 = *(long *)(param_2 + 0x4c);
                lVar20 = *(long *)(*(long *)(param_2 + 8) +
                                  (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4)
                                  );
                uVar6 = (uint)param_2[3] >> (ulong)(uVar19 & 0x1f);
                if (uVar6 < 2) {
                  uVar6 = 1;
                }
                uVar25 = (uint)param_2[4] >> (ulong)(uVar19 & 0x1f);
                if (uVar25 < 2) {
                  uVar25 = 1;
                }
                iVar13 = FUN_0065b220(param_2[6],uVar6,uVar25);
                lVar21 = (ulong)(iVar13 * uVar11) + lVar21 + lVar20;
                FUN_0065b190(param_2[6]);
                FUN_0065b1b0(param_2[6]);
                FUN_0065b070(param_2[6]);
                lStack_210 = lVar21 + (ulong)(uVar3 * uVar8 * (int)((uVar16 & 0xffffffff) >> 3));
                local_1ec = '\0';
                local_218 = lVar21;
                local_208 = uVar8;
                local_204 = uVar3;
                local_200 = param_3;
                local_1fc = param_4;
                local_1f8 = param_5;
                if ((param_6 == (long *)0x0) ||
                   (uVar17 = (**(code **)(*param_5 + 0x18))(param_5), (uVar17 & 1) == 0)) {
                  local_240 = 0;
                  uStack_238 = 0;
                  local_250 = 0;
                  uStack_248 = 0;
                  local_1f0 = uVar3;
                  FUN_0065f1a0(&local_230,&local_250);
                  cVar9 = local_1ec;
                  FUN_00481af0(&local_230);
                }
                else {
                  uVar6 = 0;
                  if (uVar8 != 0) {
                    uVar6 = 0x80 / uVar8;
                  }
                  if (0x80 < uVar8) {
                    uVar6 = 1;
                  }
                  uVar25 = 0;
                  if (uVar6 != 0) {
                    uVar25 = uVar3 / uVar6;
                  }
                  if (0x1f < uVar25) {
                    uVar25 = 0x20;
                  }
                  if (uVar3 < uVar6) {
                    uVar25 = 1;
                  }
                  local_1f0 = 0;
                  if (uVar25 != 0) {
                    local_1f0 = uVar10 / uVar25;
                  }
                  local_1f0 = local_1f0 + 1;
                  uVar6 = 0;
                  if (local_1f0 != 0) {
                    uVar6 = uVar10 / local_1f0;
                  }
                  (**(code **)(*param_6 + 0x18))(param_6,&local_250,1,8);
                  (**(code **)(*param_6 + 0x28))(param_6,local_250,&local_230,0x40);
                  (**(code **)(*param_6 + 0x38))(param_6,local_250,uVar6 + 1,0);
                  (**(code **)(*param_6 + 0x50))(param_6,&local_250,1,0,8);
                  (**(code **)(*param_6 + 0xa8))(param_6,local_250);
                  cVar9 = local_1ec;
                  FUN_00481af0(&local_230);
                }
                if (cVar9 != '\0') {
                  FUN_0065a920(auStack_1d8);
                  return 0x80040200;
                }
                uVar6 = param_1[5] >> (ulong)(uVar19 & 0x1f);
                uVar11 = uVar11 + 1;
                if (uVar6 < 2) {
                  uVar6 = 1;
                }
              } while (uVar11 < uVar6);
              FUN_0065a920(auStack_1d8);
              uVar24 = *param_1;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar24);
            uVar19 = param_1[1];
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar19);
        uVar22 = param_1[2];
        uVar24 = uVar19;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < uVar22);
  }
  return 0;
}

