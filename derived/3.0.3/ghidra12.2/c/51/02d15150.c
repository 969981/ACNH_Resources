
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02d15150(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined *puVar11;
  short sVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  char cVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  uint local_27c;
  undefined8 local_270;
  undefined1 *local_268;
  undefined1 local_260 [288];
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130 [24];
  uint local_6c;
  
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar11 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar10 = *(undefined2 *)puVar11;
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  uVar17 = *(undefined4 *)(puVar11 + 4);
  *(undefined2 *)(param_1 + 0xbc) = uVar10;
  *(undefined1 *)(param_1 + 0xbe) = uVar6;
  *(undefined1 *)(param_1 + 0xbf) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = uVar17;
  *(undefined2 *)(param_1 + 0xc4) = uVar10;
  *(undefined1 *)(param_1 + 0xc6) = uVar6;
  *(undefined1 *)(param_1 + 199) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar17;
  *(undefined2 *)(param_1 + 0xcc) = uVar10;
  *(undefined1 *)(param_1 + 0xce) = uVar6;
  *(undefined1 *)(param_1 + 0xcf) = uVar7;
  *(undefined4 *)(param_1 + 0xd0) = uVar17;
  sVar12 = DAT_04c487d4;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  if (sVar12 != -1) {
    local_270 = CONCAT44(local_270._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
    if (0xff < (uint)(int)sVar12) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 3 & 1) != 0) {
      FUN_0252d4c8(&local_270);
      lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_270,1);
      if (lVar18 == 0) {
        iVar15 = -1;
      }
      else {
        if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
           (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar19 == (undefined8 *)0x0)) {
          uVar14 = 1;
        }
        else {
          uVar14 = (**(code **)*puVar19)();
          uVar14 = uVar14 ^ 1;
        }
        bVar8 = *(byte *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x10);
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        iVar15 = (int)(char)bVar8;
        if ((((uVar14 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
      }
      *(int *)(param_1 + 0xd8) = iVar15;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      uVar14 = FUN_0266b870(iVar15);
      puVar11 = PTR_DAT_04bb46b0;
      if (uVar14 != 0) {
        uVar30 = 0;
        lVar18 = 0x3f28;
        do {
          if (((*(long *)puVar11 != 0) &&
              (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), uVar30 < 8)) && (lVar20 != 0)) {
            if ((*(long **)(lVar20 + lVar18) == (long *)0x0) ||
               (puVar19 = (undefined8 *)**(long **)(lVar20 + lVar18), puVar19 == (undefined8 *)0x0))
            {
              uVar16 = 1;
            }
            else {
              uVar16 = (**(code **)*puVar19)();
              uVar16 = uVar16 ^ 1;
            }
            uVar21 = FUN_026e9ac0(*(long *)(lVar20 + lVar18 + -0x18) +
                                  *(long *)(lVar20 + lVar18 + -0x20));
            if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + lVar18) != 0)) &&
               (puVar19 = *(undefined8 **)(*(long *)(lVar20 + lVar18) + 8),
               puVar19 != (undefined8 *)0x0)) {
              (**(code **)*puVar19)();
            }
            if ((uVar21 & 1) != 0) {
              if (*(long *)puVar11 == 0) {
LAB_02d15618:
                uVar21 = 0xffffffff;
LAB_02d1561c:
                if (uVar30 == uVar21) goto LAB_02d154b0;
              }
              else {
                lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15);
                if (lVar20 == 0) {
LAB_02d155d4:
                  if ((*(long *)puVar11 == 0) ||
                     (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), lVar20 == 0))
                  goto LAB_02d15618;
                  if ((*(long **)(lVar20 + 0x161a8) == (long *)0x0) ||
                     (puVar19 = (undefined8 *)**(long **)(lVar20 + 0x161a8),
                     puVar19 == (undefined8 *)0x0)) {
                    uVar16 = 1;
                  }
                  else {
                    uVar16 = (**(code **)*puVar19)();
                    uVar16 = uVar16 ^ 1;
                  }
                  bVar8 = *(byte *)(*(long *)(lVar20 + 0x16190) + *(long *)(lVar20 + 0x16188));
                  if (7 < bVar8) {
                    bVar8 = 0xff;
                  }
                  uVar21 = (ulong)(uint)(int)(char)bVar8;
                  if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + 0x161a8) != 0)) &&
                     (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x161a8) + 8),
                     puVar19 != (undefined8 *)0x0)) {
                    (**(code **)*puVar19)();
                  }
                  goto LAB_02d1561c;
                }
                if ((*(long **)(lVar20 + 0x161a8) == (long *)0x0) ||
                   (puVar19 = (undefined8 *)**(long **)(lVar20 + 0x161a8),
                   puVar19 == (undefined8 *)0x0)) {
                  uVar16 = 1;
                }
                else {
                  uVar16 = (**(code **)*puVar19)();
                  uVar16 = uVar16 ^ 1;
                }
                pbVar2 = (byte *)(*(long *)(lVar20 + 0x16190) + *(long *)(lVar20 + 0x16188));
                bVar8 = pbVar2[1];
                bVar9 = *pbVar2;
                if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + 0x161a8) != 0)) &&
                   (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x161a8) + 8),
                   puVar19 != (undefined8 *)0x0)) {
                  (**(code **)*puVar19)();
                }
                if (bVar8 != 0 && bVar9 < 8) goto LAB_02d155d4;
              }
              if ((*(long *)puVar11 == 0) ||
                 (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), lVar20 == 0)) {
                lVar20 = 0;
              }
              else {
                lVar20 = lVar20 + lVar18 + -0x28;
              }
              if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
                *(long *)(*(long *)(param_1 + 0xf0) + (long)*(int *)(param_1 + 0xe8) * 8) = lVar20;
                *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
              }
            }
          }
LAB_02d154b0:
          uVar30 = uVar30 + 1;
          lVar18 = lVar18 + 0x2450;
        } while (uVar14 != uVar30);
      }
      if (*(int *)(param_1 + 0xe8) < 1) {
        return;
      }
      goto LAB_02d159a8;
    }
  }
  if (DAT_05aed670 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar15 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar15 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  uVar17 = *(undefined4 *)(puVar19 + 7);
  local_270 = local_270 & 0xffffffff00000000;
  uVar30 = FUN_02b64e40(&local_270,uVar17);
  if ((uVar30 & 1) != 0) {
    local_270 = (ulong)local_270._4_4_ << 0x20;
    FUN_02b64e40(&local_270,uVar17);
    uVar14 = (uint)local_270;
    FUN_026641e0(local_270 & 0xffffffff,0);
    lVar18 = FUN_0265c2a0();
    if (lVar18 == 0) {
      return;
    }
    local_6c = uVar14;
    local_138 = local_130;
    local_140 = 0x1800000000;
    local_268 = local_260;
    local_270 = 0x2400000000;
    if (DAT_05574040 != 0) {
      puVar19 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar20 = (**(code **)(*(long *)*puVar19 + 0x38))();
        if (lVar20 == 0) goto LAB_02d15a50;
        lVar20 = lVar20 + 0x70;
      }
      else if (((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0)) ||
              (lVar20 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar20 == 0))
      goto LAB_02d15a50;
      if (local_6c < 10) {
        lVar5 = lVar20 + 0x1962d8 + (ulong)local_6c * 0x10d8;
        if (9 < local_6c) {
          lVar5 = lVar20 + 0x1962d8;
        }
        if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
           (puVar19 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar19 == (undefined8 *)0x0)) {
          uVar30 = 0;
        }
        else {
          uVar30 = (**(code **)*puVar19)();
          uVar30 = uVar30 & 0xffffffff;
        }
        puVar11 = PTR_DAT_04bb37e0;
        lVar20 = 0x14;
        do {
          lVar31 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + lVar20;
          uVar21 = FUN_0277d7b4(lVar31,puVar11);
          if ((uVar21 & 1) == 0) {
            if ((int)(uint)local_270 < (int)local_270._4_4_) {
              *(long *)(local_268 + (long)(int)(uint)local_270 * 8) = lVar31;
              local_270 = CONCAT44(local_270._4_4_,(uint)local_270 + 1);
            }
          }
          lVar20 = lVar20 + 0xc;
        } while (lVar20 != 0x1c4);
        if ((((uVar30 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
      }
    }
LAB_02d15a50:
    if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
       (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar19 == (undefined8 *)0x0)) {
      local_27c = 0;
    }
    else {
      local_27c = (**(code **)*puVar19)();
    }
    lVar20 = *(long *)(lVar18 + 8);
    lVar5 = *(long *)(lVar18 + 0x10);
    iVar15 = 0;
    do {
      lVar31 = lVar5 + lVar20 + 0x1094c + (long)iVar15 * 0x2c;
      uVar30 = FUN_0277d7b4(lVar31,&DAT_05586008);
      puVar13 = local_268;
      if ((uVar30 & 1) == 0) {
        lVar23 = (long)(int)(uint)local_270;
        if ((uint)local_270 != 0) {
          lVar32 = 0;
          iVar33 = 1;
          do {
            uVar30 = FUN_0277d7b4(*(undefined8 *)(puVar13 + lVar32),lVar31);
            if ((uVar30 & 1) != 0) {
              if (iVar33 + -1 < (int)(uint)local_270) {
                uVar14 = (uint)local_270 - iVar33;
                if (uVar14 != 0 && iVar33 <= (int)(uint)local_270) {
                  memmove(local_268 + lVar32,local_268 + lVar32 + 8,
                          -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3);
                }
                local_270 = CONCAT44(local_270._4_4_,(uint)local_270 + -1);
              }
              goto LAB_02d15ab0;
            }
            lVar32 = lVar32 + 8;
            iVar33 = iVar33 + 1;
          } while (lVar23 * 8 != lVar32);
        }
        iVar33 = 0;
        if ((uint)local_140 != 0) {
          lVar23 = (long)(int)(uint)local_140 << 3;
          puVar19 = local_138;
          do {
            uVar30 = FUN_0277d7b4(*puVar19,lVar31);
            if ((uVar30 & 1) != 0) goto LAB_02d15ab0;
            puVar19 = puVar19 + 1;
            lVar23 = lVar23 + -8;
          } while (lVar23 != 0);
          iVar33 = (uint)local_140;
        }
        if (iVar33 < local_140._4_4_) {
          local_138[iVar33] = lVar31;
          local_140 = CONCAT44(local_140._4_4_,(uint)local_140 + 1);
        }
      }
LAB_02d15ab0:
      iVar15 = iVar15 + 1;
      if (iVar15 == 0x18) {
        uVar14 = nn::os::GetSystemTick();
        if (1 < (int)(uint)local_140) {
          uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
          uVar16 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
          uVar24 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
          uVar30 = local_140 & 0xffffffff;
          uVar25 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 4;
          do {
            uVar14 = uVar14 ^ uVar14 << 0xb;
            uVar4 = uVar14 >> 8 ^ uVar25 >> 0x13 ^ uVar14 ^ uVar25;
            uVar21 = uVar30 - 1 & 0xffffffff;
            uVar27 = local_138[uVar21];
            uVar28 = uVar30 * uVar4 >> 0x1d & 0x7fffffff8;
            local_138[uVar21] = *(undefined8 *)((long)local_138 + uVar28);
            *(undefined8 *)((long)local_138 + uVar28) = uVar27;
            bVar1 = 2 < uVar30;
            uVar30 = uVar30 - 1;
            uVar14 = uVar16;
            uVar16 = uVar24;
            uVar24 = uVar25;
            uVar25 = uVar4;
          } while (bVar1);
        }
        uVar14 = (uint)local_140;
        if (2 < (int)(uint)local_140) {
          uVar14 = 3;
        }
        if (uVar14 != 0) {
          puVar26 = (undefined2 *)*local_138;
          *(undefined2 *)(param_1 + 0xbc) = *puVar26;
          *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)(puVar26 + 1);
          *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)((long)puVar26 + 3);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(puVar26 + 2);
          if (uVar14 != 1) {
            puVar26 = (undefined2 *)local_138[1];
            *(undefined2 *)(param_1 + 0xc4) = *puVar26;
            *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(puVar26 + 1);
            *(undefined1 *)(param_1 + 199) = *(undefined1 *)((long)puVar26 + 3);
            *(undefined4 *)(param_1 + 200) = *(undefined4 *)(puVar26 + 2);
            if (uVar14 != 2) {
              puVar26 = (undefined2 *)local_138[2];
              *(undefined2 *)(param_1 + 0xcc) = *puVar26;
              *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(puVar26 + 1);
              *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)((long)puVar26 + 3);
              *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(puVar26 + 2);
              if ((int)(uint)local_140 < 3) {
                uVar30 = 3;
                do {
                  puVar26 = (undefined2 *)local_138[uVar30];
                  uVar30 = uVar30 + 1;
                  *(undefined2 *)(param_1 + 0xbc) = *puVar26;
                  *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)(puVar26 + 1);
                  *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)((long)puVar26 + 3);
                  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(puVar26 + 2);
                } while (uVar14 != uVar30);
              }
            }
          }
        }
        *(uint *)(param_1 + 0xb8) = (uint)local_140;
        *(char *)(param_1 + 0xd4) = (char)uVar14;
        if ((local_27c & 1) == 0) {
          return;
        }
        if (*(long *)(lVar18 + 0x28) == 0) {
          return;
        }
        puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8);
        if (puVar19 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar19)();
        return;
      }
    } while( true );
  }
  local_270 = (ulong)local_270._4_4_ << 0x20;
  uVar30 = FUN_02b5f400(&local_270,uVar17);
  if ((uVar30 & 1) == 0) {
    return;
  }
  local_270 = local_270 & 0xffffffff00000000;
  FUN_02b5f400(&local_270,uVar17);
  puVar11 = PTR_DAT_04bb46b0;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
LAB_02d156e4:
    lVar20 = 0;
    plVar22 = _DAT_00000028;
    if (_DAT_00000028 == (long *)0x0) goto LAB_02d15760;
LAB_02d156f0:
    if ((undefined8 *)*plVar22 == (undefined8 *)0x0) goto LAB_02d15760;
    uVar30 = (*(code *)**(undefined8 **)*plVar22)();
    cVar29 = *(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x289f8);
    if ((((uVar30 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar19 != (undefined8 *)0x0)) {
      (**(code **)*puVar19)();
    }
  }
  else {
    puVar19 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) != 0) {
      if (((puVar19 != (undefined8 *)0x0) && ((long *)puVar19[0x26] != (long *)0x0)) &&
         (lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar18 != 0)) goto LAB_02d156d8;
      goto LAB_02d156e4;
    }
    lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
    if (lVar18 == 0) goto LAB_02d156e4;
    lVar18 = lVar18 + 0x70;
LAB_02d156d8:
    if (7 < (uint)local_270) goto LAB_02d156e4;
    lVar20 = lVar18 + 0x119228 + (local_270 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_270) {
      lVar20 = lVar18 + 0x119228;
    }
    plVar22 = *(long **)(lVar20 + 0x28);
    if (plVar22 != (long *)0x0) goto LAB_02d156f0;
LAB_02d15760:
    cVar29 = *(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x289f8);
  }
  iVar15 = (int)cVar29;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(int *)(param_1 + 0xd8) = iVar15;
  uVar14 = FUN_0266b870(iVar15);
  if (uVar14 != 0) {
    uVar30 = 0;
    lVar18 = 0x3f28;
    do {
      if (((*(long *)puVar11 != 0) && (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), uVar30 < 8))
         && (lVar20 != 0)) {
        if ((*(long **)(lVar20 + lVar18) == (long *)0x0) ||
           (puVar19 = (undefined8 *)**(long **)(lVar20 + lVar18), puVar19 == (undefined8 *)0x0)) {
          uVar16 = 1;
        }
        else {
          uVar16 = (**(code **)*puVar19)();
          uVar16 = uVar16 ^ 1;
        }
        uVar21 = FUN_026e9ac0(*(long *)(lVar20 + lVar18 + -0x18) +
                              *(long *)(lVar20 + lVar18 + -0x20));
        if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + lVar18) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar20 + lVar18) + 8), puVar19 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar19)();
        }
        if ((uVar21 & 1) != 0) {
          if (*(long *)puVar11 == 0) {
LAB_02d15908:
            uVar21 = 0xffffffff;
LAB_02d1590c:
            if (uVar30 == uVar21) goto LAB_02d157a0;
          }
          else {
            lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15);
            if (lVar20 == 0) {
LAB_02d158c4:
              if ((*(long *)puVar11 == 0) ||
                 (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), lVar20 == 0)) goto LAB_02d15908;
              if ((*(long **)(lVar20 + 0x161a8) == (long *)0x0) ||
                 (puVar19 = (undefined8 *)**(long **)(lVar20 + 0x161a8),
                 puVar19 == (undefined8 *)0x0)) {
                uVar16 = 1;
              }
              else {
                uVar16 = (**(code **)*puVar19)();
                uVar16 = uVar16 ^ 1;
              }
              bVar8 = *(byte *)(*(long *)(lVar20 + 0x16190) + *(long *)(lVar20 + 0x16188));
              if (7 < bVar8) {
                bVar8 = 0xff;
              }
              uVar21 = (ulong)(uint)(int)(char)bVar8;
              if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + 0x161a8) != 0)) &&
                 (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x161a8) + 8),
                 puVar19 != (undefined8 *)0x0)) {
                (**(code **)*puVar19)();
              }
              goto LAB_02d1590c;
            }
            if ((*(long **)(lVar20 + 0x161a8) == (long *)0x0) ||
               (puVar19 = (undefined8 *)**(long **)(lVar20 + 0x161a8), puVar19 == (undefined8 *)0x0)
               ) {
              uVar16 = 1;
            }
            else {
              uVar16 = (**(code **)*puVar19)();
              uVar16 = uVar16 ^ 1;
            }
            pbVar2 = (byte *)(*(long *)(lVar20 + 0x16190) + *(long *)(lVar20 + 0x16188));
            bVar8 = pbVar2[1];
            bVar9 = *pbVar2;
            if ((((uVar16 & 1) == 0) && (*(long *)(lVar20 + 0x161a8) != 0)) &&
               (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x161a8) + 8),
               puVar19 != (undefined8 *)0x0)) {
              (**(code **)*puVar19)();
            }
            if (bVar8 != 0 && bVar9 < 8) goto LAB_02d158c4;
          }
          if ((*(long *)puVar11 == 0) ||
             (lVar20 = FUN_026eec4c(*(long *)puVar11,iVar15), lVar20 == 0)) {
            lVar20 = 0;
          }
          else {
            lVar20 = lVar20 + lVar18 + -0x28;
          }
          if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
            *(long *)(*(long *)(param_1 + 0xf0) + (long)*(int *)(param_1 + 0xe8) * 8) = lVar20;
            *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
          }
        }
      }
LAB_02d157a0:
      uVar30 = uVar30 + 1;
      lVar18 = lVar18 + 0x2450;
    } while (uVar14 != uVar30);
  }
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar17 = FUN_02d15d60(*(undefined4 *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xb8) = uVar17;
    return;
  }
LAB_02d159a8:
  FUN_03ebb160(param_1,1);
  return;
}

