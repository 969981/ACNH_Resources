
void FUN_022c3a44(undefined4 *param_1,ulong param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  byte bVar14;
  undefined8 local_110;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  byte local_f4 [4];
  char *local_f0;
  undefined1 auStack_e8 [8];
  undefined6 local_e0;
  byte bStack_da;
  undefined1 uStack_d9;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  if ((*(byte *)((long)param_1 + 0x1a) >> 2 & 1) == 0) {
    local_d0 = 0xfffe;
    FUN_0277d4ac(&local_d0);
    local_d0 = *(undefined8 *)(param_1 + 1);
    lVar13 = *(long *)PTR_DAT_04bbbc68;
    if ((((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar13 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)) {
      uVar8 = FUN_0277d6c4(&local_d0);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        FUN_0124c030(auStack_e8,&local_d0);
        uVar10 = FUN_01250da8(auStack_e8,2);
        if ((((uVar10 & 1) != 0) || ((param_2 & 1) != 0)) &&
           (((uVar10 = FUN_01250da8(auStack_e8,2), (uVar10 & 1) == 0 ||
             ((*(byte *)(param_1 + 7) >> 4 & 1) == 0)) &&
            ((uVar10 = FUN_01250da8(auStack_e8,2), (uVar10 & 1) == 0 ||
             ((uVar10 = FUN_01957514(), (uVar10 & 1) != 0 ||
              (*(char *)((long)param_1 + 0x1b) < '\0')))))))) {
          uVar10 = FUN_012509c0(auStack_e8,0);
          if ((uVar10 & 1) == 0) {
            iVar9 = FUN_0277d6c4(&local_e0);
            if (((iVar9 == 0xec9a) || (iVar9 = FUN_0277d6c4(&local_e0), iVar9 == 0xec97)) &&
               (uVar10 = FUN_01250d50(auStack_e8), (uVar10 & 1) == 0)) {
              return;
            }
          }
          pbVar5 = PTR_DAT_04bb5038 + (uint)(int)*(char *)((long)param_1 + 0x17);
          if (7 < (uint)(int)*(char *)((long)param_1 + 0x17)) {
            pbVar5 = PTR_DAT_04bb32e0;
          }
          local_f0 = (char *)0xfffe;
          FUN_0277d4ac(&local_f0);
          iVar9 = FUN_0277d6c4(&local_e0);
          if (((((iVar9 == 0xec9a) || (iVar9 = FUN_0277d6c4(&local_e0), iVar9 == 0xec97)) ||
               (uVar10 = FUN_012509c0(auStack_e8,0), (uVar10 & 1) != 0)) && ((bStack_da & 1) != 0))
             || (((iVar9 = FUN_0277d6c4(&local_e0), iVar9 == 0xec9a ||
                  (iVar9 = FUN_0277d6c4(&local_e0), iVar9 == 0xec97)) && ((bStack_da & 1) != 0)))) {
            uVar7 = FUN_01250cb0(auStack_e8);
            local_c8 = (char *)(ulong)uVar7;
            FUN_0277d4ac(&local_c8);
            local_f0 = local_c8;
            iVar9 = FUN_0277d6c4(&local_f0);
            if ((iVar9 == 0x165f) || (iVar9 = FUN_0277d6c4(&local_f0), iVar9 == 0x1660)) {
              puVar6 = PTR_DAT_04bb43c0;
              local_b8 = 0;
              local_c8 = PTR_DAT_04bc0510 + 0x10;
              local_c0 = local_f0;
              lVar13 = *(long *)PTR_DAT_04bb43c0;
              uVar8 = FUN_0277d6c4(&local_c0);
              if (*(long *)puVar6 != 0) {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                  lVar13 = *(long *)PTR_DAT_04bc0428;
                  uVar8 = FUN_0277d6c4(&local_f0);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                  if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
                     (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
                     lVar13 != 0)) {
                    local_b8 = lVar13;
                  }
                }
              }
              FUN_01b152b8(&local_c8);
              local_f0 = local_c0;
            }
            iVar9 = FUN_0277d6c4(&local_f0);
            if (iVar9 == 0x839) {
              local_f4[0] = *pbVar5;
              if (7 < local_f4[0]) {
                local_f4[0] = 0xff;
              }
              lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_f4,1);
              if (lVar13 != 0) {
                local_c8 = (char *)CONCAT44(local_c8._4_4_,3);
                uVar10 = FUN_0290cbcc(&local_c8);
                if ((uVar10 & 1) != 0) {
                  local_c8 = PTR_DAT_04bb2020 + 0x10;
                  local_c0 = "TodayFortune";
                  iVar9 = FUN_0274bce0(pbVar5,&local_c8);
                  if (iVar9 == 1) {
                    local_c8 = (char *)0x83b;
                    FUN_0277d4ac(&local_c8);
                    local_f0 = local_c8;
                  }
                }
              }
            }
          }
          else {
            puVar6 = PTR_DAT_04bb27d0;
            if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
              local_c8 = PTR_DAT_04bb2020 + 0x10;
              local_c0 = "ValidatePlayerSaveFlag";
              iVar9 = FUN_0274bce0(pbVar5,&local_c8);
              if ((iVar9 == 0) && (-1 < *(char *)((long)param_1 + 0x1b))) {
                return;
              }
            }
            if ((1 < *(byte *)(**(long **)puVar6 + 0x476)) && (-1 < *(char *)((long)param_1 + 0x1b))
               ) {
              return;
            }
          }
          uVar11 = DAT_0514cb60;
          uVar8 = DAT_0514cb5c;
          if (*(char *)((long)param_1 + 0x1b) < '\0') {
            uVar4 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
            DAT_0514cb58 = DAT_0514cb5c;
            DAT_0514cb5c = DAT_0514cb60;
            uVar4 = uVar4 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar4 ^ DAT_0514cb64;
            DAT_0514cb60 = DAT_0514cb64;
            if (0x1d < (uint)((ulong)uVar4 * 100 >> 0x20)) {
              DAT_0514cb58 = uVar8;
              DAT_0514cb5c = uVar11;
              DAT_0514cb64 = uVar4;
              return;
            }
            local_c8 = (char *)0x9c4;
            DAT_0514cb64 = uVar4;
            FUN_0277d4ac(&local_c8);
            local_f0 = local_c8;
          }
          else {
            local_c8._0_2_ = (short)local_f0;
          }
          puVar6 = PTR_DAT_04bb37e0;
          if (((short)local_c8 != -2) && ((int)DAT_0547b48c <= DAT_0547b490)) {
            pcVar2 = PTR_DAT_04bc2e90 + 0x10;
            puVar3 = PTR_DAT_04bb2010 + 0x10;
            uVar8 = DAT_0547b48c;
            do {
              uStack_b0 = *(undefined4 *)(puVar6 + 4);
              local_c0 = (char *)(ulong)uVar8;
              bVar14 = *PTR_DAT_04bb32e0;
              local_ac = 0xfffe;
              if (7 < bVar14) {
                bVar14 = 0xff;
              }
              local_b8 = CONCAT71((int7)(CONCAT44(*(undefined4 *)puVar6,(int)local_b8) >> 8),bVar14)
                         & 0xffffffffffff00ff;
              local_c8 = pcVar2;
              FUN_0277d4ac(&local_ac);
              local_a4 = 0xfffe;
              FUN_0277d4ac(&local_a4);
              local_9c = 0;
              uStack_94 = 0;
              local_78 = 0x2400000000;
              bVar14 = *pbVar5;
              local_8c = 0;
              uStack_80 = 0;
              uVar11 = (uint)bVar14;
              local_70 = 0;
              local_6c = 0;
              if (7 < uVar11) {
                uVar11 = 0xffffffff;
              }
              local_c0 = (char *)CONCAT44(uVar11,(uint)local_c0);
              if (bVar14 < 8) {
                local_b8 = CONCAT71(local_b8._1_7_,bVar14);
              }
              local_b8._0_2_ = CONCAT11(1,(undefined1)local_b8);
              local_108 = (undefined *)CONCAT44(local_108._4_4_,(uint)local_c0);
              lVar13 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
              uVar4 = (uint)local_c0;
              if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= (uint)local_c0) {
                uVar4 = 0;
              }
              puVar12 = *(uint **)(lVar13 + (long)(int)uVar4 * 0x18 + 0x10);
              local_88 = puVar3;
              if ((0 < (int)*puVar12) && (uVar11 < *(uint *)(lVar13 + (long)(int)uVar4 * 0x18 + 8)))
              {
                uVar10 = 0;
                lVar13 = 0x2c;
                do {
                  if (((uVar10 < puVar12[(long)(int)uVar11 * 4]) &&
                      (*(long *)(puVar12 + (long)(int)uVar11 * 4 + 2) != 0)) &&
                     (*(int *)(*(long *)(puVar12 + (long)(int)uVar11 * 4 + 2) + lVar13) == 0)) {
                    if (-1 < (int)uVar10) {
                      if (uVar8 == 0) {
                        return;
                      }
                      FUN_022a6204(&local_c8,uVar8);
                      bVar14 = *pbVar5;
                      uVar11 = (uint)bVar14;
                      if (7 < uVar11) {
                        uVar11 = 0xffffffff;
                      }
                      local_c0 = (char *)CONCAT44(uVar11,(uint)local_c0);
                      if (bVar14 < 8) {
                        local_b8 = CONCAT71(local_b8._1_7_,bVar14);
                      }
                      local_b8._0_2_ = CONCAT11(1,(undefined1)local_b8);
                      local_100 = (int)*(short *)(param_1 + 3);
                      iStack_fc = (int)*(short *)((long)param_1 + 0xe);
                      local_108 = PTR_DAT_04bb2010 + 0x10;
                      uVar10 = FUN_022b80d0(param_1[4],&local_c8,uVar8,*param_1,&local_f0,
                                            *(undefined2 *)(param_1 + 5),&local_108,
                                            *(byte *)(param_1 + 6) >> 3 & 1);
                      if ((uVar10 & 1) != 0) {
                        if (-1 < *(char *)((long)param_1 + 0x1b)) {
                          FUN_01250bf0(auStack_e8);
                          *(ulong *)(param_1 + 1) = CONCAT17(uStack_d9,CONCAT16(bStack_da,local_e0))
                          ;
                        }
                        *(byte *)((long)param_1 + 0x19) =
                             *(byte *)((long)param_1 + 0x19) & 0x1f | 0x40;
                        *(char *)(param_1 + 8) = (char)uVar8;
                        return;
                      }
                      uVar10 = FUN_01250da8(auStack_e8,2);
                      if ((uVar10 & 1) != 0) {
                        FUN_0255028c(pbVar5);
                      }
                      if (*(char *)((long)param_1 + 0x1b) < '\0') {
                        return;
                      }
                      uVar10 = FUN_0277d9a8(&local_f0);
                      if ((uVar10 & 1) == 0) {
                        return;
                      }
                      local_110 = 0x9c4;
                      FUN_0277d4ac(&local_110);
                      uVar10 = FUN_0277d7b4(&local_f0,&local_110);
                      if (((((uVar10 & 1) == 0) &&
                           (iVar9 = FUN_0277d6c4(&local_f0), iVar9 != 0x165f)) &&
                          ((iVar9 = FUN_0277d6c4(&local_f0), iVar9 != 0x1660 &&
                           ((iVar9 = FUN_0277d6c4(&local_f0), iVar9 != 0x1662 &&
                            (iVar9 = FUN_0277d6c4(&local_f0), iVar9 != 0x1663)))))) &&
                         (iVar9 = FUN_0277d6c4(&local_f0), iVar9 != 0x1664)) {
                        return;
                      }
                      FUN_01250bf0(auStack_e8);
                      *(ulong *)(param_1 + 1) = CONCAT17(uStack_d9,CONCAT16(bStack_da,local_e0));
                      return;
                    }
                    break;
                  }
                  uVar10 = uVar10 + 1;
                  lVar13 = lVar13 + 0x518;
                } while (*puVar12 != uVar10);
              }
              bVar1 = (int)uVar8 < DAT_0547b490;
              uVar8 = uVar8 + 1;
            } while (bVar1);
          }
        }
      }
    }
  }
  return;
}

