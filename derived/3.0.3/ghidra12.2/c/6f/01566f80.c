
void FUN_01566f80(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  long *plVar32;
  byte *pbVar33;
  ulong uVar34;
  undefined8 local_1b8;
  byte *local_1b0;
  undefined *local_1a8;
  byte *local_1a0;
  int local_198;
  byte local_194 [127];
  undefined1 local_115;
  uint local_110;
  undefined *local_108;
  byte *local_100;
  int local_f8;
  byte abStack_f4 [127];
  undefined1 local_75;
  uint local_70;
  
  puVar10 = PTR_DAT_04bb2d88;
  if ((param_2 != 0) && (uVar6 = *(uint *)(param_2 + 0x30), 0 < (int)uVar6)) {
    lVar28 = *(long *)(param_1 + 0x40);
    uVar25 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2e90 + 0x10;
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    puVar4 = PTR_DAT_04bb4448 + 0x10;
    do {
      plVar32 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + uVar25 * 8);
      if (((plVar32 != (long *)0x0) &&
          (uVar12 = (**(code **)(*plVar32 + 0xb8))(plVar32), 0 < (int)uVar12)) &&
         (lVar19 = plVar32[0x24], lVar19 != 0)) {
        uVar34 = 0;
joined_r0x015670b8:
        if (lVar19 != 0) {
          plVar15 = (long *)(lVar19 + uVar34 * 0x80);
          lVar19 = *plVar15;
          bVar7 = *(byte *)(lVar19 + 0x9d);
          if ((ulong)bVar7 != 0) {
            plVar5 = plVar15 + 0xb;
            uVar31 = 0;
            do {
              lVar19 = *(long *)(*(long *)(*plVar15 + 0x30) + uVar31 * 8);
              pbVar33 = (byte *)(lVar19 + 2);
              if ((param_3 & 1) == 0) {
                FUN_03f2d924(param_1 + 0x58);
                puVar14 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x58);
                if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar13 != 0)) {
                  *(undefined **)PTR_DAT_04bb4be0 = puVar4;
                  __cxa_guard_release(PTR_DAT_04bb4be8);
                }
                (**(code **)*puVar14)(puVar14,PTR_DAT_04bb4be0);
                if ((*(long *)(puVar14[6] + 8) != 0) &&
                   (lVar19 = *(long *)(*(long *)(puVar14[6] + 8) + 0x20), lVar19 != 0)) {
                  lVar19 = FUN_038fe510(lVar19,pbVar33);
joined_r0x015671ec:
                  if (lVar19 != 0) {
                    lVar20 = *(long *)(lVar19 + 0x88);
                    uVar30 = *(undefined8 *)(lVar19 + 0x90);
                    lVar19 = uVar31 * 8;
                    lVar24 = *plVar5;
                    lVar29 = *(long *)(plVar15[10] + lVar19);
                    *(long *)(plVar15[10] + lVar19) = lVar20;
                    *(undefined8 *)(*plVar5 + lVar19) = uVar30;
                    if (((code *)plVar15[0xf] != (code *)0x0) &&
                       ((lVar29 != lVar20 ||
                        (*(long *)(lVar24 + lVar19) != *(long *)(*plVar5 + lVar19))))) {
                      (*(code *)plVar15[0xf])(plVar15,uVar31 & 0xffffffff);
                    }
                  }
                }
              }
              else {
                local_115 = 0;
                local_198 = 0x80;
                local_1a0 = local_194;
                if (local_194 != pbVar33) {
                  lVar20 = 0;
                  do {
                    lVar24 = lVar19 + lVar20;
                    if (*(char *)(lVar24 + 2) == '\0') {
LAB_015671f8:
                      iVar13 = (int)lVar20;
joined_r0x015671fc:
                      if (0x7f < iVar13) {
                        iVar13 = 0x7f;
                      }
                      goto LAB_01567204;
                    }
                    if (*(char *)(lVar24 + 3) == '\0') {
                      lVar20 = lVar20 + 1;
                      goto LAB_015671f8;
                    }
                    if (*(char *)(lVar24 + 4) == '\0') {
                      iVar13 = (int)lVar20 + 2;
                      goto joined_r0x015671fc;
                    }
                    lVar20 = lVar20 + 3;
                  } while (lVar20 != 0x80001);
                  iVar13 = 0;
LAB_01567204:
                  local_1a8 = puVar2;
                  memcpy(local_194,pbVar33,(long)iVar13);
                  local_194[iVar13] = 0;
                }
                pbVar21 = local_1a0;
                bVar8 = *pbVar33;
                if (bVar8 == 0) {
                  uVar17 = 0;
                  uVar27 = 0;
                }
                else {
                  uVar22 = 0;
                  uVar17 = 0;
                  pbVar26 = pbVar33;
                  do {
                    uVar23 = (uint)bVar8;
                    iVar13 = (int)uVar22;
                    uVar27 = iVar13 + 1;
                    if (pbVar33[uVar27] == 0) {
                      uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
LAB_01567300:
                      uVar17 = uVar23 * 0x1b873593 ^ uVar17;
                      break;
                    }
                    uVar27 = iVar13 + 2;
                    if (pbVar33[uVar27] == 0) {
                      uVar23 = (uint)CONCAT11(pbVar26[1],bVar8);
LAB_015672f4:
                      uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
                      goto LAB_01567300;
                    }
                    uVar27 = iVar13 + 3;
                    if (pbVar33[uVar27] == 0) {
                      uVar23 = uVar23 | (uint)pbVar26[2] << 0x10 | (uint)pbVar26[1] << 8;
                      goto LAB_015672f4;
                    }
                    iVar18 = *(int *)pbVar26;
                    uVar27 = iVar13 + 4;
                    uVar22 = (ulong)uVar27;
                    pbVar26 = pbVar33 + uVar22;
                    uVar17 = (iVar18 * 0x16a88000 | (uint)(iVar18 * -0x3361d2af) >> 0x11) *
                             0x1b873593 ^ uVar17;
                    bVar8 = *pbVar26;
                    uVar17 = (uVar17 >> 0x13 | uVar17 << 0xd) * 5 + 0xe6546b64;
                  } while (bVar8 != 0);
                }
                local_75 = 0;
                uVar27 = (uVar27 ^ uVar17 ^ (uVar27 ^ uVar17) >> 0x10) * -0x7a143595;
                local_110 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
                local_110 = local_110 ^ local_110 >> 0x10;
                local_f8 = 0x80;
                local_108 = PTR_DAT_04bb2e90 + 0x10;
                local_1a0[(long)local_198 + -1] = 0;
                local_1a8 = puVar3;
                local_100 = abStack_f4;
                if (abStack_f4 != local_1a0) {
                  (**(code **)(puVar10 + 0x28))(&local_1a8);
                  lVar19 = 0;
                  do {
                    if (local_1a0[lVar19] == 0) goto LAB_015673cc;
                    if (local_1a0[lVar19 + 1] == 0) {
                      lVar19 = lVar19 + 1;
                      goto LAB_015673cc;
                    }
                    if (local_1a0[lVar19 + 2] == 0) {
                      lVar19 = lVar19 + 2;
                      goto LAB_015673cc;
                    }
                    lVar19 = lVar19 + 3;
                  } while (lVar19 != 0x80001);
                  lVar19 = 0;
LAB_015673cc:
                  iVar13 = (int)lVar19;
                  if (local_f8 <= (int)lVar19) {
                    iVar13 = local_f8 + -1;
                  }
                  memcpy(abStack_f4,pbVar21,(long)iVar13);
                  abStack_f4[iVar13] = 0;
                }
                local_70 = local_110;
                for (lVar20 = *(long *)(param_1 + 0x9e8); lVar20 != 0;
                    lVar20 = *(long *)(lVar20 + 0x10)) {
                  while (local_110 < *(uint *)(lVar20 + 0xb8)) {
                    lVar20 = *(long *)(lVar20 + 8);
                    if (lVar20 == 0) goto LAB_01567104;
                  }
                  if (local_110 <= *(uint *)(lVar20 + 0xb8)) {
                    lVar19 = *(long *)(lVar20 + 0xc0);
                    *(int *)(lVar20 + 200) = *(int *)(lVar20 + 200) + 1;
                    goto joined_r0x015671ec;
                  }
                }
              }
LAB_01567104:
              uVar31 = uVar31 + 1;
            } while (uVar31 != bVar7);
            lVar19 = *plVar15;
          }
          local_100 = (byte *)(*(long *)(lVar19 + 8) + 2);
          local_108 = puVar1;
          if (lVar28 == 0) goto LAB_01567944;
          lVar20 = 0;
          local_1a8 = PTR_DAT_04bb2020 + 0x10;
          local_1a0 = (byte *)0x40b5759;
          do {
            lVar24 = *(long *)(lVar19 + 8) + lVar20;
            if (*(char *)(lVar24 + 2) == '\0') {
LAB_01567550:
              iVar13 = (int)lVar20;
joined_r0x01567554:
              if (5 < iVar13) {
                uVar31 = 0;
                goto LAB_01567580;
              }
              break;
            }
            if (*(char *)(lVar24 + 3) == '\0') {
              lVar20 = lVar20 + 1;
              goto LAB_01567550;
            }
            if (*(char *)(lVar24 + 4) == '\0') {
              iVar13 = (int)lVar20 + 2;
              goto joined_r0x01567554;
            }
            lVar20 = lVar20 + 3;
          } while (lVar20 != 0x80001);
          goto LAB_01567620;
        }
        goto LAB_01567944;
      }
LAB_01567060:
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar6);
  }
  return;
  while (uVar31 = uVar31 + 1, iVar13 - 5 != uVar31) {
LAB_01567580:
    pbVar33 = local_100 + uVar31;
    (**(code **)(local_1a8 + 0x18))(&local_1a8);
    if ((pbVar33 == local_1a0) ||
       ((*pbVar33 == *local_1a0 &&
        ((*pbVar33 == 0 ||
         ((pbVar33[1] == local_1a0[1] &&
          ((pbVar33[1] == 0 ||
           ((pbVar33[2] == local_1a0[2] &&
            ((pbVar33[2] == 0 ||
             ((pbVar33[3] == local_1a0[3] &&
              ((pbVar33[3] == 0 ||
               ((pbVar33[4] == local_1a0[4] && ((pbVar33[4] == 0 || (pbVar33[5] == local_1a0[5])))))
               ))))))))))))))))) {
      if ((int)uVar31 != -1) goto LAB_01567794;
      break;
    }
  }
LAB_01567620:
  local_1b8 = PTR_DAT_04bb2020 + 0x10;
  local_1b0 = (byte *)0x40f457e;
  (**(code **)(local_108 + 0x18))(&local_108);
  lVar19 = 0;
  do {
    if (local_100[lVar19] == 0) goto LAB_0156768c;
    if (local_100[lVar19 + 1] == 0) {
      lVar19 = lVar19 + 1;
      goto LAB_0156768c;
    }
    if (local_100[lVar19 + 2] == 0) {
      lVar19 = lVar19 + 2;
      goto LAB_0156768c;
    }
    lVar19 = lVar19 + 3;
  } while (lVar19 != 0x80001);
  lVar19 = 0;
LAB_0156768c:
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  lVar20 = 0;
  do {
    iVar13 = (int)lVar19;
    if (local_1b0[lVar20] == 0) {
LAB_015676d8:
      iVar18 = (int)lVar20;
      if (iVar13 < iVar18) goto LAB_01567944;
LAB_015676f0:
      if ((int)lVar20 < 1) goto LAB_01567774;
      uVar31 = 0;
      goto LAB_01567704;
    }
    if (local_1b0[lVar20 + 1] == 0) {
      lVar20 = lVar20 + 1;
      goto LAB_015676d8;
    }
    if (local_1b0[lVar20 + 2] == 0) {
      lVar20 = lVar20 + 2;
      iVar18 = (int)lVar20;
      if (iVar18 <= iVar13) goto LAB_015676f0;
      goto LAB_01567944;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  if (-1 < iVar13) {
LAB_01567774:
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
LAB_01567794:
    uVar30 = *(undefined8 *)PTR_DAT_04bb30a0;
    local_1b8 = (undefined *)FUN_00a8c31c(uVar30);
    if ((char)((ulong)local_1b8 >> 0x20) < '\x05') {
      lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1b8);
      local_1a8 = (undefined *)(lVar19 + -0x15180);
      local_1b8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1a8);
    }
    uVar22 = (ulong)local_1b8 >> 0x10;
    uVar31 = (ulong)local_1b8 >> 0x30;
    uVar16 = (ulong)local_1b8 >> 0x18;
    local_1b8._0_6_ = CONCAT24(5,(undefined4)local_1b8);
    local_1b8 = (undefined *)(CONCAT26((short)uVar31,(undefined6)local_1b8) & 0xff00ffffffffffff);
    cVar11 = FUN_00a8ae20(uVar30,uVar22,uVar16,4);
    puVar9 = PTR_DAT_04bb2020;
    if ((cVar11 == '\x02') && ((param_3 & 1) != 0)) {
      local_1a8 = PTR_DAT_04bb2020 + 0x10;
      local_1a0 = (byte *)0x408662d;
      uVar30 = (**(code **)(*(long *)(lVar28 + 600) + 0xf0))();
      iVar13 = (**(code **)(*plVar32 + 0xd0))(plVar32,uVar34 & 0xffffffff,&local_1a8);
      if (iVar13 != -1) {
        (**(code **)(*plVar32 + 0x158))(plVar32,uVar34 & 0xffffffff,iVar13,uVar30);
      }
      plVar15 = (long *)(lVar28 + 0x298);
    }
    else {
      local_1a8 = PTR_DAT_04bb2020 + 0x10;
      local_1a0 = (byte *)0x408662d;
      uVar30 = (**(code **)(*(long *)(lVar28 + 0x1d8) + 0xf0))();
      iVar13 = (**(code **)(*plVar32 + 0xd0))(plVar32,uVar34 & 0xffffffff,&local_1a8);
      if (iVar13 != -1) {
        (**(code **)(*plVar32 + 0x158))(plVar32,uVar34 & 0xffffffff,iVar13,uVar30);
      }
      plVar15 = (long *)(lVar28 + 0x218);
    }
    local_1a8 = puVar9 + 0x10;
    local_1a0 = (byte *)0x40d4198;
    uVar30 = (**(code **)(*plVar15 + 0xf0))();
    iVar13 = (**(code **)(*plVar32 + 0xd0))(plVar32,uVar34 & 0xffffffff,&local_1a8);
    if (iVar13 != -1) {
      (**(code **)(*plVar32 + 0x158))(plVar32,uVar34 & 0xffffffff,iVar13,uVar30);
    }
  }
LAB_01567944:
  uVar34 = uVar34 + 1;
  if (uVar34 == uVar12) goto LAB_01567060;
  lVar19 = plVar32[0x24];
  goto joined_r0x015670b8;
  while( true ) {
    pbVar21 = local_1b0;
    lVar19 = lVar20;
    while( true ) {
      lVar19 = lVar19 + -1;
      if (pbVar33[uVar31] != *pbVar21) break;
      if ((pbVar33[uVar31] == 0) || (pbVar33 = pbVar33 + 1, pbVar21 = pbVar21 + 1, lVar19 == 0))
      goto LAB_01567788;
    }
    uVar31 = uVar31 + 1;
    if (uVar31 == (iVar13 - iVar18) + 1) break;
LAB_01567704:
    pbVar33 = local_100;
    pbVar21 = local_100 + uVar31;
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    if (pbVar21 == local_1b0) {
LAB_01567788:
      if ((int)uVar31 != -1) goto LAB_01567794;
      break;
    }
  }
  goto LAB_01567944;
}

