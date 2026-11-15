
/* WARNING: Removing unreachable block (ram,0x021b09f0) */
/* WARNING: Removing unreachable block (ram,0x021b0c08) */

void FUN_021b04b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  bool bVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  void *__s;
  ulong uVar16;
  char *pcVar17;
  uint *puVar18;
  undefined4 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  ushort uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  char cVar30;
  char cVar31;
  undefined8 *puVar32;
  uint *puVar33;
  undefined1 uStack_7f1;
  char local_7f0 [4];
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7dc;
  undefined8 local_7d8;
  char *local_7d0;
  undefined1 local_7c8;
  byte local_7c7;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  plVar22 = (long *)PTR_DAT_04bb27d0;
  puVar2 = PTR_DAT_04bb2720;
  puVar33 = (uint *)(param_1 + 0x55c28);
  if (*(char *)(param_1 + 0x55d0c) != '\0') {
    return;
  }
  lVar20 = **(long **)PTR_DAT_04bb27d0;
  bVar11 = *(byte *)(lVar20 + 0x473);
  if ((long)(char)bVar11 != 0xffffffffffffffff) {
    pbVar4 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
    if (7 < bVar11) {
      pbVar4 = (byte *)(lVar20 + 0x48);
    }
    if (((*pbVar4 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar11)) {
      return;
    }
  }
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    local_7dc = 5;
    goto LAB_021b0708;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
LAB_021b0664:
    lVar20 = *(long *)PTR_DAT_04bb2720;
    iVar12 = 0;
    if (lVar20 != 0) {
      if (*(long *)(lVar20 + 0x330) == 0) {
        iVar12 = 0;
      }
      else {
        puVar29 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar13 = FUN_006bd550(*puVar29,0);
        iVar12 = 0;
        if (iVar13 == 0x758f7eaf) {
          iVar12 = 0;
          if (*(long *)puVar2 != 0) {
            lVar20 = *(long *)(*(long *)puVar2 + 0x330);
            iVar12 = 0;
            if (lVar20 != 0) {
              iVar12 = *(int *)(lVar20 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x34) == iVar12) {
      local_7dc = 2;
    }
    else {
      uVar16 = FUN_0180cab0(3);
      local_7dc = 4;
      if ((uVar16 & 1) != 0) {
        local_7dc = 1;
      }
    }
LAB_021b0708:
    uVar15 = 0xffffffff;
  }
  else {
    puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar18 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar18 >> 7 & 1) == 0) {
      local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,0x13);
      puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar18 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar18 >> 0x13 & 1) == 0) goto LAB_021b0664;
      local_7dc = 0;
      goto LAB_021b0708;
    }
    local_7dc = 3;
    local_7d8 = (undefined *)((ulong)local_7d8._4_4_ << 0x20);
    lVar20 = *(long *)PTR_DAT_04bb2720;
    if (lVar20 == 0) {
      puVar29 = &DAT_055c04a0;
    }
    else {
      puVar29 = &DAT_055c04a0;
      if (*(long *)(lVar20 + 0x330) != 0) {
        puVar29 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar12 = FUN_006bd550(*puVar29,0);
        puVar29 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar29 = &DAT_055c04a0;
        }
      }
    }
    uVar16 = FUN_02b64e40(&local_7d8,*(undefined4 *)(puVar29 + 7));
    if ((uVar16 & 1) == 0) goto LAB_021b0708;
    uVar15 = FUN_026641e0((ulong)local_7d8 & 0xffffffff,0);
    lVar20 = FUN_0265c2a0();
    if (lVar20 == 0) {
      return;
    }
    if (*(long **)(lVar20 + 0x28) == (long *)0x0) {
      uVar16 = 0;
    }
    else {
      puVar29 = (undefined8 *)**(long **)(lVar20 + 0x28);
      uVar16 = 0;
      if (puVar29 != (undefined8 *)0x0) {
        uVar16 = (**(code **)*puVar29)();
      }
    }
    iVar12 = (int)*(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1267a);
    local_7e8 = CONCAT44(local_7e8._4_4_,iVar12);
    if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
       (puVar29 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar29 != (undefined8 *)0x0)) {
      (**(code **)*puVar29)();
    }
    if (iVar12 != 0) {
      return;
    }
  }
  if ((local_7dc < 6) && ((*(uint *)(param_1 + 0x55c38) >> (ulong)(local_7dc & 0x1f) & 1) != 0)) {
    if (uVar15 == 0xffffffff) {
      return;
    }
    if (local_7dc != 3) {
      return;
    }
    if ((uVar15 < 10) && ((*(uint *)(param_1 + 0x55c44) >> (ulong)(uVar15 & 0x1f) & 1) != 0)) {
      return;
    }
  }
  FUN_0252d11c(&local_7ec);
  puVar2 = PTR_DAT_04bb46b0;
  if ((byte)local_7ec < 8) {
    lVar20 = *(long *)PTR_DAT_04bb46b0;
    if (lVar20 != 0) {
      plVar21 = *(long **)(lVar20 + 0x10);
      if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
        plVar21 = (long *)*plVar21;
      }
      else if ((plVar21 == (long *)0x0) || (plVar21 = (long *)plVar21[0x26], plVar21 == (long *)0x0)
              ) goto LAB_021b0ef0;
      lVar20 = (**(code **)(*plVar21 + 0x38))();
      if (lVar20 != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_7d0 = "Museum2Built";
        local_7d8 = puVar1;
        iVar12 = FUN_0273ea30(&local_7d8);
        if (iVar12 != 0) {
          uVar16 = FUN_02b60460(2);
          if ((uVar16 & 1) == 0) {
            lVar20 = *(long *)PTR_DAT_04bb4828;
            if (lVar20 != 0) {
              local_7d8 = PTR_DAT_04bbfe60 + 0x10;
              memset(&local_7d0,0,0x754);
              uVar14 = nn::os::GetSystemTick();
              local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
              local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
              local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
              local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
              __s = (void *)FUN_01a451fc(&local_7d8);
              memset(__s,0,0x754);
              puVar10 = PTR_DAT_04bc39f8;
              if (DAT_055c1b60 != &DAT_055c1b58) {
                puVar29 = DAT_055c1b60;
                puVar32 = DAT_055c1b60;
                do {
                  if (puVar29 != &DAT_055c1b58) {
                    uVar24 = 0;
                    puVar28 = puVar29;
                    do {
                      if (*(int *)(puVar28 + -1) == *(int *)(puVar32 + -1)) {
                        if (uVar24 != 0xffff) {
                          local_7e8 = CONCAT44(local_7e8._4_4_,0x13);
                          puVar18 = (uint *)(puVar10 + ((long)(short)uVar24 & 0xffffffffU) * 8);
                          if ((uVar24 & 0xff00) != 0) {
                            puVar18 = (uint *)puVar10;
                          }
                          if ((*puVar18 >> 0x13 & 1) != 0) {
                            iVar12 = FUN_01c281f0(lVar20,&local_7d8,*(int *)(puVar32 + -1),1);
                            if (iVar12 != 0) {
                              plVar22 = (long *)PTR_DAT_04bb27d0;
                              goto LAB_021b0efc;
                            }
                            puVar29 = DAT_055c1b60;
                          }
                        }
                        break;
                      }
                      puVar28 = (undefined8 *)puVar28[1];
                      uVar24 = uVar24 + 1;
                    } while (puVar28 != &DAT_055c1b58);
                  }
                  puVar32 = (undefined8 *)puVar32[1];
                } while (puVar32 != &DAT_055c1b58);
              }
              plVar22 = (long *)PTR_DAT_04bb27d0;
            }
          }
        }
        local_7d0 = "Market2Built";
        local_7d8 = puVar1;
        iVar12 = FUN_0273ea30(&local_7d8);
        cVar30 = DAT_0417fb5c;
        cVar31 = DAT_0417fb5b;
        if (iVar12 != 0) {
          local_7e8 = local_7e8 & 0xffffffff00000000;
          lVar20 = *(long *)PTR_DAT_04bb32e8;
          if (DAT_0417fb5a == 0) {
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            local_7d0 = "RegulationType2";
            local_7d8 = puVar1;
            uVar16 = FUN_0273f0a0(&local_7d8);
            if ((uVar16 & 1) == 0) {
              local_7d0 = "RegulationType3";
              local_7d8 = puVar1;
              bVar11 = FUN_0273f0a0(&local_7d8);
              cVar30 = cVar30 + (bVar11 & cVar30 < '\x19');
            }
            else {
              cVar31 = cVar31 - ('\0' < cVar31);
            }
LAB_021b0ac4:
            if ((*(char *)(lVar20 + 0x4064) < cVar31) || (cVar30 <= *(char *)(lVar20 + 0x4064)))
            goto LAB_021b0bc4;
          }
          else if ((DAT_0417fb5a & 1) == 0) goto LAB_021b0ac4;
          lVar20 = *(long *)puVar2;
          if (lVar20 != 0) {
            puVar29 = *(undefined8 **)(lVar20 + 0x10);
            if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
              lVar20 = (**(code **)(*(long *)*puVar29 + 0x38))();
              if (lVar20 != 0) {
                lVar20 = lVar20 + 0x70;
                goto LAB_021b0b28;
              }
            }
            else if (((puVar29 != (undefined8 *)0x0) && ((long *)puVar29[0x26] != (long *)0x0)) &&
                    (lVar20 = (**(code **)(*(long *)puVar29[0x26] + 0x38))(), lVar20 != 0)) {
LAB_021b0b28:
              if (*(long **)(lVar20 + 0x1a0b70) == (long *)0x0) {
                uVar16 = 0;
              }
              else {
                puVar29 = (undefined8 *)**(long **)(lVar20 + 0x1a0b70);
                uVar16 = 0;
                if (puVar29 != (undefined8 *)0x0) {
                  uVar16 = (**(code **)*puVar29)();
                }
              }
              uVar14 = *(uint *)(*(long *)(lVar20 + 0x1a0b58) + *(long *)(lVar20 + 0x1a0b50));
              if (3 < uVar14) {
                uVar14 = 0;
              }
              local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,uVar14);
              if (uVar14 == 3) {
                iVar12 = *(int *)(param_1 + 0x55d08);
                if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x1a0b70) != 0)) &&
                   (puVar29 = *(undefined8 **)(*(long *)(lVar20 + 0x1a0b70) + 8),
                   puVar29 != (undefined8 *)0x0)) {
                  (**(code **)*puVar29)();
                }
                if (iVar12 != -0x14) goto LAB_021b0efc;
              }
              else if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x1a0b70) != 0)) &&
                      (puVar29 = *(undefined8 **)(*(long *)(lVar20 + 0x1a0b70) + 8),
                      puVar29 != (undefined8 *)0x0)) {
                (**(code **)*puVar29)();
              }
            }
          }
        }
LAB_021b0bc4:
        local_7d8 = PTR_DAT_04bb2020 + 0x10;
        local_7d0 = "TailorBuilt";
        iVar12 = FUN_0273ea30(&local_7d8);
        cVar30 = DAT_0417fb6b;
        cVar31 = DAT_0417fb6a;
        if (iVar12 != 0) {
          local_7e8 = CONCAT44(local_7e8._4_4_,5);
          lVar20 = *(long *)PTR_DAT_04bb32e8;
          if (DAT_0417fb69 == 0) {
            puVar2 = PTR_DAT_04bb2020 + 0x10;
            local_7d0 = "RegulationType2";
            local_7d8 = puVar2;
            uVar16 = FUN_0273f0a0(&local_7d8);
            if ((uVar16 & 1) == 0) {
              local_7d0 = "RegulationType3";
              local_7d8 = puVar2;
              bVar11 = FUN_0273f0a0(&local_7d8);
              cVar30 = cVar30 + (bVar11 & cVar30 < '\x19');
            }
            else {
              cVar31 = cVar31 - ('\0' < cVar31);
            }
LAB_021b0c7c:
            if ((*(char *)(lVar20 + 0x4064) < cVar31) || (cVar30 <= *(char *)(lVar20 + 0x4064)))
            goto LAB_021b0ca0;
          }
          else if ((DAT_0417fb69 & 1) == 0) goto LAB_021b0c7c;
          if (*(int *)(param_1 + 0x55d08) != -0x14) goto LAB_021b0efc;
        }
LAB_021b0ca0:
        FUN_0252d11c(&local_7e8);
        puVar2 = PTR_DAT_04bb2020;
        if ((byte)local_7e8 < 8) {
          local_7d8 = PTR_DAT_04bb2020 + 0x10;
          local_7d0 = "LookNpcHouseVisitNpc";
          iVar12 = FUN_0274bce0(&local_7e8,&local_7d8);
          if (((iVar12 == 0) && (*(int *)(param_1 + 0x55d08) != -10)) &&
             (*(char *)(param_1 + 0xaf9) != '\0')) {
            local_7d8 = puVar2 + 0x10;
            local_7d0 = "HasAcquaintanceship";
            iVar12 = FUN_02746c30(0,&local_7e8,&local_7d8);
            if ((iVar12 != 0) && (uVar16 = FUN_02152e10(param_1 + 0x8b0), (uVar16 & 1) == 0))
            goto LAB_021b0efc;
          }
        }
        FUN_0252d11c(&local_7e8);
        if ((byte)local_7e8 < 8) {
          local_7d8 = puVar2 + 0x10;
          local_7d0 = "LookNpcHouseVisitNpc";
          iVar12 = FUN_0274bce0(&local_7e8,&local_7d8);
          if (((iVar12 == 0) && (*(int *)(param_1 + 0x55d08) != -10)) &&
             (*(char *)(param_1 + 0x1699) != '\0')) {
            local_7d8 = puVar2 + 0x10;
            local_7d0 = "HasAcquaintanceship";
            iVar12 = FUN_02746c30(1,&local_7e8,&local_7d8);
            if (iVar12 != 0) {
              uVar16 = FUN_02152e10(param_1 + 0x1450);
              if ((uVar16 & 1) == 0) goto LAB_021b0efc;
            }
          }
        }
        FUN_0252d11c(&local_7e8);
        if ((byte)local_7e8 < 8) {
          local_7d8 = puVar2 + 0x10;
          local_7d0 = "LookNpcHouseVisitNpc";
          iVar12 = FUN_0274bce0(&local_7e8,&local_7d8);
          if (((iVar12 == 0) && (*(int *)(param_1 + 0x55d08) != -10)) &&
             (*(char *)(param_1 + 0x2239) != '\0')) {
            local_7d8 = puVar2 + 0x10;
            local_7d0 = "HasAcquaintanceship";
            iVar12 = FUN_02746c30(2,&local_7e8,&local_7d8);
            if (iVar12 != 0) {
              uVar16 = FUN_02152e10(param_1 + 0x1ff0);
              if ((uVar16 & 1) == 0) goto LAB_021b0efc;
            }
          }
        }
        FUN_0252d11c(&local_7e8);
        if ((byte)local_7e8 < 8) {
          local_7d8 = puVar2 + 0x10;
          local_7d0 = "LookNpcHouseVisitNpc";
          iVar12 = FUN_0274bce0(&local_7e8,&local_7d8);
          if (((iVar12 == 0) && (*(int *)(param_1 + 0x55d08) != -10)) &&
             (*(char *)(param_1 + 0x2dd9) != '\0')) {
            local_7d8 = puVar2 + 0x10;
            local_7d0 = "HasAcquaintanceship";
            iVar12 = FUN_02746c30(3,&local_7e8,&local_7d8);
            if (iVar12 != 0) {
              uVar16 = FUN_02152e10(param_1 + 0x2b90);
              if ((uVar16 & 1) == 0) goto LAB_021b0efc;
            }
          }
        }
        uVar16 = FUN_021ae57c(param_1,1,0,4);
        if ((uVar16 & 1) == 0) {
          uVar16 = FUN_021ae57c(param_1,1,0,5);
          if ((uVar16 & 1) == 0) {
            uVar16 = FUN_021ae57c(param_1,1,0,6);
            if ((uVar16 & 1) == 0) {
              uVar16 = FUN_021ae57c(param_1,1,0,7);
              if ((uVar16 & 1) == 0) {
                uVar16 = FUN_021ae57c(param_1,1,0,8);
                if ((uVar16 & 1) == 0) {
                  uVar16 = FUN_021ae57c(param_1,1,0,9);
                  if ((uVar16 & 1) == 0) goto LAB_021b0ef0;
                }
              }
            }
          }
        }
        goto LAB_021b0efc;
      }
    }
LAB_021b0ef0:
    uVar16 = FUN_021ad600(param_1);
    if ((uVar16 & 1) != 0) {
      return;
    }
  }
LAB_021b0efc:
  puVar2 = PTR_DAT_04bb32e8;
  if (*(short *)(param_1 + 0x55c48) != 0) {
    local_7d8 = PTR_DAT_04bb2020 + 0x10;
    local_7e8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_7d0 = "Museum2Built";
    uVar16 = FUN_0273f0a0(&local_7d8);
    if ((((uVar16 & 1) == 0) || (uVar16 = FUN_02b60460(2), (uVar16 & 1) != 0)) ||
       (lVar20 = FUN_00a8255c(&local_7e8,(short *)(param_1 + 0x55c48)), 9 < lVar20)) {
      *(undefined4 *)(param_1 + 0x55c44) = 0;
      uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0x55c3c) & 0x1f);
      if (5 < *(uint *)(param_1 + 0x55c3c)) {
        uVar14 = 0;
      }
      uVar14 = uVar14 & *(uint *)(param_1 + 0x55c38);
      *(uint *)(param_1 + 0x55c38) = uVar14;
      if ((uVar14 >> 3 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x55c40) = 0xffffffff;
      }
      else if (*(uint *)(param_1 + 0x55c40) < 10) {
        *(int *)(param_1 + 0x55c44) = 1 << (ulong)(*(uint *)(param_1 + 0x55c40) & 0x1f);
      }
    }
  }
  if (local_7dc == 5) {
    if ((*(uint *)(param_1 + 0x55c3c) < 4) && (*(uint *)(param_1 + 0x55c3c) < 6)) {
      *(uint *)(param_1 + 0x55c38) =
           *(uint *)(param_1 + 0x55c38) | 1 << (ulong)(*(uint *)(param_1 + 0x55c3c) & 0x1f);
    }
    *(undefined2 *)(param_1 + 0x55c48) = 0;
    *(undefined4 *)(param_1 + 0x55c4a) = 0x101;
    *(undefined1 *)(param_1 + 0x55c4e) = 0;
    *(undefined4 *)(param_1 + 0x55c3c) = 5;
    *(undefined1 *)(param_1 + 0x55ca0) = 0;
    *(undefined1 *)(param_1 + 0x55d04) = 0;
    *(undefined8 *)(param_1 + 0x55c50) = 0;
    *(undefined8 *)(param_1 + 0x55c58) = 0;
    *(undefined8 *)(param_1 + 0x55c60) = 0;
    *(undefined8 *)(param_1 + 0x55c68) = 0;
    *(undefined8 *)(param_1 + 0x55c70) = 0;
    *(undefined8 *)(param_1 + 0x55c78) = 0;
    *(undefined8 *)(param_1 + 0x55c80) = 0;
    *(undefined8 *)(param_1 + 0x55c88) = 0;
    *(undefined8 *)(param_1 + 0x55c90) = 0;
    *(undefined8 *)(param_1 + 0x55c98) = 0;
    plVar22 = (long *)*plVar22;
    *(undefined8 *)(param_1 + 0x55cb4) = 0;
    *(undefined8 *)(param_1 + 0x55cbc) = 0;
    *(undefined8 *)(param_1 + 0x55cc4) = 0;
    *(undefined8 *)(param_1 + 0x55ccc) = 0;
    *(undefined8 *)(param_1 + 0x55cd4) = 0;
    *(undefined8 *)(param_1 + 0x55cdc) = 0;
    *(undefined8 *)(param_1 + 0x55ce4) = 0;
    *(undefined8 *)(param_1 + 0x55cec) = 0;
    *(undefined8 *)(param_1 + 0x55cf4) = 0;
    *(undefined8 *)(param_1 + 0x55cfc) = 0;
    if ((*(byte *)(*plVar22 + 0x476) < 2) ||
       (uVar16 = FUN_01d69340(plVar22[2],*(undefined2 *)PTR_DAT_04bbdeb0,1), (uVar16 & 1) == 0)) {
      FUN_021ad990(param_1);
      return;
    }
    return;
  }
  if ((*(int *)(param_1 + 0x55c3c) == 5) &&
     ((*(byte *)(*(long *)*plVar22 + 0x476) < 2 ||
      (uVar16 = FUN_01d69340(((long *)*plVar22)[2],*(undefined2 *)PTR_DAT_04bbdeb0,1),
      (uVar16 & 1) == 0)))) {
    FUN_021ad990(param_1);
  }
  if ((local_7dc - 1 < 3) && (local_7dc < 6)) {
    *(uint *)(param_1 + 0x55c38) = *(uint *)(param_1 + 0x55c38) | 1 << (ulong)(local_7dc & 0x1f);
  }
  uVar25 = *(undefined8 *)(*(long *)puVar2 + 0x4060);
  *(uint *)(param_1 + 0x55c3c) = local_7dc;
  *(undefined8 *)(param_1 + 0x55c48) = uVar25;
  lVar20 = *(long *)*plVar22;
  bVar11 = *(byte *)(lVar20 + 0x473);
  if ((long)(char)bVar11 == 0xffffffffffffffff) {
LAB_021b1128:
    local_7e8 = (ulong)local_7e8._4_4_ << 0x20;
  }
  else {
    uVar16 = (long)(char)bVar11 & 0xffffffff;
    pbVar4 = (byte *)(lVar20 + 0x48) + uVar16 * 0x80;
    if (7 < bVar11) {
      pbVar4 = (byte *)(lVar20 + 0x48);
    }
    if ((*pbVar4 >> 3 & 1) == 0) goto LAB_021b1128;
    lVar27 = ((long *)*plVar22)[2] + 0x108;
    lVar3 = lVar27 + uVar16 * 0xc;
    if (0xb < bVar11) {
      lVar3 = lVar27;
    }
    if (*(char *)(lVar3 + 10) == '\0') {
      return;
    }
    local_7e8 = (ulong)local_7e8._4_4_ << 0x20;
    if (*(byte *)(lVar20 + 0x472) != bVar11) {
      puVar33 = (uint *)(param_1 + 0x55c30);
    }
  }
  uVar14 = *puVar33;
  if ((((uVar14 < 10) && ((&DAT_053fee41)[(ulong)uVar14 * 0xba0] != '\0')) &&
      ((&DAT_053fede8)[(ulong)uVar14 * 0x174] != 0)) &&
     (*(int *)((&DAT_053fede8)[(ulong)uVar14 * 0x174] + 4) != 1)) {
    pcVar17 = (char *)FUN_0265c2a0();
    uVar25 = 1;
    if (pcVar17 == (char *)0x0) goto switchD_021b13a4_default;
    local_7c8 = 1;
    local_7d0 = pcVar17;
    if (*(long **)(pcVar17 + 0x28) == (long *)0x0) {
      local_7c7 = 0;
    }
    else {
      puVar29 = (undefined8 *)**(long **)(pcVar17 + 0x28);
      local_7c7 = 0;
      if (puVar29 != (undefined8 *)0x0) {
        local_7c7 = (**(code **)*puVar29)();
      }
    }
    local_7c7 = local_7c7 & 1;
    local_7d8 = PTR_DAT_04bb67a0 + 0x10;
    local_7ec = *(uint *)(*(long *)(pcVar17 + 0x10) + *(long *)(pcVar17 + 8) + 0x10764);
    FUN_02640184(&local_7d8);
    uVar14 = 0;
    iVar13 = 0;
    iVar12 = 0;
    bVar9 = true;
    switch(local_7ec) {
    case 1:
    case 7:
      iVar13 = 0;
      iVar12 = 0;
      uVar14 = 1;
      local_7e8 = CONCAT44(local_7e8._4_4_,1);
      break;
    case 2:
      uVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      uVar25 = 0;
      break;
    case 3:
      break;
    case 4:
      uVar14 = 0;
      iVar13 = 0;
      iVar12 = 1;
      break;
    case 5:
      uVar14 = 0;
      iVar12 = 0;
      iVar13 = 1;
      break;
    case 6:
      uVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      bVar9 = false;
      break;
    default:
      goto switchD_021b13a4_default;
    }
  }
  else {
switchD_021b13a4_default:
    uVar14 = 0;
    iVar12 = 0;
    iVar13 = 0;
    uVar25 = 1;
    bVar9 = true;
  }
  uVar7 = puVar33[1];
  if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    if (((&DAT_053fede8)[(ulong)uVar7 * 0x174] != 0) &&
       (*(int *)((&DAT_053fede8)[(ulong)uVar7 * 0x174] + 4) != 1)) {
      pcVar17 = (char *)FUN_0265c2a0();
      if (pcVar17 != (char *)0x0) {
        local_7c8 = 1;
        local_7d0 = pcVar17;
        if (*(long **)(pcVar17 + 0x28) == (long *)0x0) {
          bVar11 = 0;
        }
        else {
          puVar29 = (undefined8 *)**(long **)(pcVar17 + 0x28);
          bVar11 = 0;
          if (puVar29 != (undefined8 *)0x0) {
            bVar11 = (**(code **)*puVar29)();
          }
        }
        local_7c7 = bVar11 & 1;
        local_7d8 = PTR_DAT_04bb67a0 + 0x10;
        local_7ec = *(uint *)(*(long *)(pcVar17 + 0x10) + *(long *)(pcVar17 + 8) + 0x10764);
        FUN_02640184(&local_7d8);
        switch(local_7ec) {
        case 1:
        case 7:
          local_7e8 = CONCAT44(local_7e8._4_4_,uVar14) | 2;
          uVar14 = uVar14 | 2;
          break;
        case 2:
          uVar25 = 0;
          break;
        case 4:
          iVar12 = iVar12 + 1;
          break;
        case 5:
          iVar13 = iVar13 + 1;
          break;
        case 6:
          bVar9 = false;
        }
      }
    }
  }
  puVar2 = PTR_DAT_04bb39d8;
  uVar14 = uVar14 - (uVar14 >> 1);
  uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
  uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
  uVar14 = uVar14 + (uVar14 >> 8);
  uVar14 = uVar14 + (uVar14 >> 0x10);
  if ((uVar14 & 0x3f) == 0) {
    return;
  }
  puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar7 = *puVar18 ^ *puVar18 << 0xb;
  uVar5 = puVar18[3];
  *puVar18 = puVar18[1];
  puVar18[1] = puVar18[2];
  uVar7 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar7 ^ uVar5;
  puVar18[2] = uVar5;
  puVar18[3] = uVar7;
  puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
  uVar5 = *puVar18 ^ *puVar18 << 0xb;
  uVar6 = puVar18[3];
  *puVar18 = puVar18[1];
  puVar18[1] = puVar18[2];
  uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
  puVar18[2] = uVar6;
  puVar18[3] = uVar5;
  uVar14 = FUN_021b1810(&local_7e8,(int)((ulong)uVar5 * (ulong)(uVar14 & 0x3f) >> 0x20) + 1);
  local_7f0[0] = '\0';
  puVar18 = puVar33 + uVar14;
  if (1 < uVar14) {
    puVar18 = puVar33;
  }
  local_7ec = *puVar18;
  uVar16 = (ulong)local_7ec;
  if (3 < local_7dc) goto LAB_021b174c;
  uVar26 = (ulong)uVar7 * 100;
  switch(local_7dc) {
  case 0:
    uVar16 = FUN_021ade80(param_1,local_7f0,iVar12);
    if ((uVar16 & 1) != 0) {
      local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,4);
      FUN_021dafb0(&local_7ec,&local_7d8,0,1,1,1);
      FUN_021ae660(param_1,local_7ec,0,local_7dc);
      lVar20 = **(long **)PTR_DAT_04bb27d0;
      bVar11 = *(byte *)(lVar20 + 0x473);
      if ((long)(char)bVar11 == 0xffffffffffffffff) {
LAB_021b1544:
        lVar27 = param_1 + (ulong)local_7ec * 0xba0;
        if (9 < local_7ec) {
          lVar27 = param_1;
        }
LAB_021b1558:
        puVar23 = (undefined4 *)(lVar27 + 0xafc);
      }
      else {
        pbVar4 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x80;
        if (7 < bVar11) {
          pbVar4 = (byte *)(lVar20 + 0x48);
        }
        if ((*pbVar4 >> 3 & 1) == 0) goto LAB_021b1544;
        lVar27 = param_1 + (ulong)local_7ec * 0xba0;
        if (9 < local_7ec) {
          lVar27 = param_1;
        }
        if (*(byte *)(lVar20 + 0x472) == bVar11) goto LAB_021b1558;
        puVar23 = (undefined4 *)(lVar27 + 0xb00);
      }
      uVar19 = *puVar23;
      goto LAB_021b1610;
    }
    break;
  case 1:
    uVar16 = FUN_021ae428(param_1,local_7f0,iVar13);
    if ((uVar16 & 1) != 0) {
      local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,5);
      FUN_021dafb0(&local_7ec,&local_7d8,0,1,1,1);
      FUN_021ae660(param_1,local_7ec,0,local_7dc);
      uVar19 = 0x8a17f484;
      goto LAB_021b1610;
    }
    break;
  case 2:
    if ((!bVar9) || (*(int *)(param_1 + 0x55d08) + 0x14U <= (uint)(uVar26 >> 0x20)))
    goto LAB_021b1620;
    local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,6);
    FUN_021dafb0(&local_7ec,&local_7d8,0,1,1,1);
    FUN_021ae660(param_1,local_7ec,0,local_7dc);
    uVar19 = 0x91e12aa0;
LAB_021b1610:
    FUN_021b18c0(param_1,uVar19);
    break;
  case 3:
    if (uVar15 == 0xffffffff) goto LAB_021b174c;
    *(uint *)(param_1 + 0x55c40) = uVar15;
    if (uVar15 < 10) {
      uVar14 = 1 << (ulong)(uVar15 & 0x1f);
      if ((*(uint *)(param_1 + 0x55c44) & uVar14) != 0) break;
      *(uint *)(param_1 + 0x55c44) = *(uint *)(param_1 + 0x55c44) | uVar14;
    }
    uVar16 = FUN_021ae57c(param_1,uVar25,uVar26 >> 0x20,uVar15);
    if ((uVar16 & 1) == 0) goto LAB_021b1620;
    local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,2);
    FUN_021dafb0(&local_7ec,&local_7d8,0,1,1,1);
    FUN_021ae660(param_1,local_7ec,1,local_7dc);
    FUN_025196e4(&uStack_7f1);
    local_7d8 = PTR_DAT_04bb2020 + 0x10;
    local_7d0 = "LookNpcHouseVisitNpc";
    FUN_0274bfe8(&uStack_7f1,&local_7d8,1);
    if ((uVar15 < 10) && ((&DAT_053fee41)[(ulong)uVar15 * 0xba0] != '\0')) {
      (&DAT_053fea28)[(ulong)uVar15 * 0x2e8] = 1;
    }
  }
  if (local_7f0[0] == '\0') {
    uVar16 = (ulong)local_7ec;
LAB_021b174c:
    lVar20 = param_1 + uVar16 * 0xba0;
    if (9 < (uint)uVar16) {
      lVar20 = param_1;
    }
    FUN_0214fac0(lVar20 + 0x8b0,uVar16,*(undefined8 *)(lVar20 + 0xaa0));
    return;
  }
LAB_021b1620:
  local_7d8 = PTR_DAT_04bb2020 + 0x10;
  local_7d0 = "Museum2Built";
  uVar16 = FUN_0273f0a0(&local_7d8);
  if (((uVar16 & 1) == 0) || (uVar16 = FUN_02b60460(2), (uVar16 & 1) != 0)) {
    iVar12 = *(int *)(param_1 + 0x55d08) + 0x19;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x55d08) + 5;
  }
  *(int *)(param_1 + 0x55d08) = iVar12;
  return;
}

