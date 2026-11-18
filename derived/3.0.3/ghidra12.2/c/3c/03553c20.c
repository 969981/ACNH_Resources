
undefined8 FUN_03553c20(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  uint uVar9;
  void *__s;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  uint *puVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  int local_390;
  undefined4 uStack_38c;
  undefined8 ***local_388;
  undefined8 local_380;
  undefined8 ***local_378;
  undefined8 ***local_370;
  undefined8 ***pppuStack_368;
  undefined8 local_360;
  undefined8 *local_358;
  undefined8 ****local_350;
  undefined8 ****ppppuStack_348;
  undefined8 ****local_340 [5];
  undefined8 ****local_318 [5];
  undefined8 ****local_2f0 [5];
  undefined8 ****local_2c8 [5];
  undefined8 ****local_2a0 [5];
  undefined8 ****local_278 [5];
  undefined8 ****local_250 [5];
  undefined8 ****local_228 [5];
  undefined8 ****local_200 [5];
  undefined8 ****local_1d8 [5];
  undefined8 ****local_1b0 [5];
  undefined8 ***local_188 [5];
  undefined8 **local_160 [5];
  undefined8 *local_138 [5];
  undefined8 local_110 [5];
  undefined8 local_e8 [15];
  uint local_70;
  undefined4 local_6c;
  
  lVar18 = *(long *)(param_1 + 8);
  memcpy((void *)(lVar18 + 0x107110),(void *)(lVar18 + 0x1069a0),0x754);
  local_360 = CONCAT44(local_360._4_4_,0xd);
  FUN_0354ba60(*(undefined4 *)(lVar18 + 0x23c),lVar18 + 0x107108,&local_360);
  local_340[0] = local_318;
  local_318[0] = local_2f0;
  local_110[0] = 0;
  local_2f0[0] = local_2c8;
  local_350 = local_340;
  local_2a0[0] = local_278;
  local_2c8[0] = local_2a0;
  local_250[0] = local_228;
  local_200[0] = local_1d8;
  local_278[0] = local_250;
  local_1b0[0] = local_188;
  local_228[0] = local_200;
  local_160[0] = local_138;
  local_1d8[0] = local_1b0;
  local_138[0] = local_110;
  local_188[0] = local_160;
  local_360 = 0;
  local_358 = (undefined8 *)0x0;
  if (local_e8 != (undefined8 *)0x0) {
    local_360 = 0xf00000000;
    local_358 = local_e8;
  }
  plVar1 = (long *)(lVar18 + 0x107878);
  plVar2 = (long *)(lVar18 + 0x106998);
  uVar20 = *(uint *)(lVar18 + 0x23c);
  if (uVar20 < 4) {
    puVar19 = (undefined4 *)(&PTR_DAT_04b38760)[(int)uVar20];
    uVar20 = *(uint *)(&DAT_04102760 + (long)(int)uVar20 * 4);
  }
  else {
    uVar20 = 9;
    puVar19 = &DAT_0576cb44;
  }
  iVar14 = 0;
  uVar21 = 0;
  ppppuStack_348 = local_350;
  do {
    piVar11 = (int *)((long)puVar19 + ((long)((ulong)uVar21 << 0x20) >> 0x1e));
    iVar5 = *piVar11;
    if ((iVar5 != 0 && iVar5 != 0xc) && (iVar5 != 0x78)) {
      local_390 = *(int *)(lVar18 + 0x23c);
      if (local_390 == 1) {
        local_388 = (undefined8 ***)CONCAT44(local_388._4_4_,2);
        local_380 = &PTR_FUN_04b37f00;
        local_378 = (undefined8 ***)CONCAT44(local_378._4_4_,iVar5);
      }
      else {
        FUN_033fd270(&local_388,piVar11,1);
        iVar14 = (int)local_360;
      }
      ppppuVar7 = local_350;
      if (iVar14 < local_360._4_4_) {
        if (local_350 != (undefined8 ****)0x0) {
          local_350 = (undefined8 ****)*local_350;
        }
        *ppppuVar7 = local_388;
        ppppuVar7[3] = local_370;
        ppppuVar7[4] = pppuStack_368;
        ppppuVar7[1] = (undefined8 ***)local_380;
        ppppuVar7[2] = local_378;
        iVar14 = (int)local_360;
        if ((int)local_360 < local_360._4_4_) {
          local_358[(int)local_360] = ppppuVar7;
          iVar14 = (int)local_360 + 1;
          local_360 = CONCAT44(local_360._4_4_,iVar14);
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar20 != uVar21);
  __s = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
  memset(__s,0,0x754);
  lVar10 = (**(code **)(*plVar2 + 0x20))(plVar2);
  puVar6 = PTR_DAT_04bb43c0;
  lVar15 = 0;
  uVar20 = 0;
  do {
    puVar17 = (uint *)(lVar10 + lVar15);
    lVar15 = lVar15 + 4;
    uVar21 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
    uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
    uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
    uVar21 = uVar21 + (uVar21 >> 8);
    uVar20 = (uVar21 + (uVar21 >> 0x10) & 0x3f) + uVar20;
  } while (lVar15 != 0x754);
  if (uVar20 != 0) {
    uVar21 = 1;
    pppuVar3 = (undefined8 ***)(PTR_DAT_04bc0510 + 0x10);
    do {
      FUN_00889f80(&local_390,plVar2,uVar21);
      lVar15 = (**(code **)(*plVar2 + 0x20))(plVar2);
      uVar9 = FUN_0277d6c4(&local_390);
      if (((uVar9 >> 3 & 0x1fff) < 0x753) &&
         ((*(uint *)(lVar15 + (ulong)((uVar9 & 0xffff) >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0
         )) {
        lVar15 = *(long *)puVar6;
        uVar9 = FUN_0277d6c4(&local_390);
        lVar10 = *(long *)puVar6;
        if (lVar10 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_378 = (undefined8 ***)0x0;
            local_380 = (undefined **)CONCAT44(uStack_38c,local_390);
            local_388 = pppuVar3;
            uVar9 = FUN_0277d6c4(&local_380);
            if (*(long *)puVar6 == 0) {
LAB_0355414c:
              local_70 = 0x4f;
LAB_03554174:
              local_6c = 0x9c;
              if (local_70 != 0x9c) {
                if ((int)local_360 != 0) {
                  lVar15 = (long)(int)local_360 << 3;
                  puVar22 = local_358;
                  do {
                    iVar14 = *(int *)*puVar22;
                    if ((iVar14 != 1) &&
                       ((iVar14 == 0 ||
                        (piVar11 = (int *)*puVar22 + 2,
                        uVar12 = (*(code *)**(undefined8 **)piVar11)(piVar11,&local_390),
                        (uVar12 & 1) != 0)))) goto LAB_03553ef4;
                    puVar22 = puVar22 + 1;
                    lVar15 = lVar15 + -8;
                  } while (lVar15 != 0);
                }
              }
            }
            else {
              lVar15 = *(long *)(lVar10 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_0355414c;
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_390);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
                 (pppuVar16 = *(undefined8 ****)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                 pppuVar16 == (undefined8 ***)0x0)) goto LAB_0355414c;
              local_70 = 0;
              local_6c = 0x98;
              uVar9 = *(uint *)pppuVar16;
              if ((uVar9 != 0) && (pppuVar16 != (undefined8 ***)(ulong)uVar9)) {
                puVar17 = (uint *)((long)pppuVar16 - (long)(ulong)uVar9);
                local_70 = 0;
                if (*puVar17 != 0) {
                  uVar9 = puVar17[1];
                  if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar17 + 10) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
                    if (lVar15 != 0) {
                      uVar4 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar4 = (uint)((ulong)((long)pppuVar16 - lVar15) / (ulong)uVar9);
                      }
                      if (*puVar17 <= uVar4) {
                        uVar4 = 0xffffffff;
                      }
                      if ((uVar4 < *(uint *)PTR_DAT_04bc0178) &&
                         (local_70 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc0178 + 8) + (long)(int)uVar4 * 2)
                         , local_70 < 0x100)) goto LAB_035540a0;
                    }
                  }
                  local_70 = 0;
                }
              }
LAB_035540a0:
              local_378 = pppuVar16;
              if (local_70 != 0x98) {
                local_70 = 0;
                uVar9 = *(uint *)pppuVar16;
                if ((uVar9 != 0) && (pppuVar16 != (undefined8 ***)(ulong)uVar9)) {
                  puVar17 = (uint *)((long)pppuVar16 - (long)(ulong)uVar9);
                  local_70 = 0;
                  if (*puVar17 != 0) {
                    uVar9 = puVar17[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                      lVar15 = 0xc;
                      if (*(char *)((long)puVar17 + 10) != '\0') {
                        lVar15 = 0x1c;
                      }
                      lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
                      if (lVar15 != 0) {
                        uVar4 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar4 = (uint)((ulong)((long)pppuVar16 - lVar15) / (ulong)uVar9);
                        }
                        if (*puVar17 <= uVar4) {
                          uVar4 = 0xffffffff;
                        }
                        if ((uVar4 < *(uint *)PTR_DAT_04bc0178) &&
                           (local_70 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc0178 + 8) +
                                              (long)(int)uVar4 * 2), local_70 < 0x100))
                        goto LAB_03554174;
                      }
                    }
                    local_70 = 0;
                  }
                }
                goto LAB_03554174;
              }
            }
            FUN_0277dedc(&local_390);
            lVar15 = (**(code **)(*plVar1 + 0x18))(plVar1);
            uVar9 = FUN_0277d6c4(&local_390);
            if ((uVar9 >> 3 & 0x1fff) < 0x753) {
              lVar10 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
              *(uint *)(lVar15 + lVar10) = *(uint *)(lVar15 + lVar10) | 1 << (ulong)(uVar9 & 0x1f);
            }
          }
        }
      }
LAB_03553ef4:
      bVar8 = uVar21 < uVar20;
      uVar21 = uVar21 + 1;
    } while (bVar8);
  }
  uVar20 = *(uint *)(lVar18 + 0x1c288);
  uVar13 = 0xffffffff;
  if ((-1 < (int)uVar20) && ((int)uVar20 < *(int *)(lVar18 + 0x1c270))) {
    lVar15 = lVar18 + 0x1c260;
    uVar21 = uVar20 + 1 & 3;
    if (2 < uVar20) {
      uVar20 = uVar20 + 1 & 0xfffffffc;
      do {
        uVar20 = uVar20 - 4;
        lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
      } while (uVar20 != 0);
    }
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      lVar15 = *(long *)(lVar15 + 8);
    }
    uVar13 = 0xffffffff;
    if ((lVar15 != 0) && (lVar15 = lVar15 - *(int *)(lVar18 + 0x1c274), lVar15 != 0)) {
      uVar13 = *(undefined4 *)(lVar15 + 0x270);
    }
  }
  FUN_0354adc0(lVar18,uVar13);
  FUN_0354f100(lVar18,*(undefined2 *)(param_1 + 0x10));
  return 1;
}

