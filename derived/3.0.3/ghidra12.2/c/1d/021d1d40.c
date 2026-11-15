
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_021d1d40(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  uint *puVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined *local_a0;
  char *local_98;
  long local_90;
  undefined4 local_88;
  undefined *local_70;
  char *local_68;
  undefined *local_60;
  char *local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar16 = *(long *)puVar2;
  if (lVar16 == 0) {
    return 0;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_90 = 0;
  local_98 = (char *)*param_3;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8), lVar16 != 0)) {
        local_90 = lVar16;
      }
    }
  }
  FUN_01ade830(&local_60,&local_a0);
  puVar2 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "TshirtsH";
  if (*local_58 != '\0') {
    local_68 = local_58;
  }
  if (local_68 != "TshirtsH") {
    uVar12 = 0;
    bVar3 = true;
    do {
      if (local_68[uVar12] != "TshirtsH"[uVar12]) break;
      if (local_68[uVar12] == '\0') {
        if (!(bool)(local_68 == "TshirtsmydesignH" | bVar3)) goto LAB_021d1ef4;
        goto LAB_021d1f34;
      }
      bVar3 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
    if (local_68 != "TshirtsmydesignH") {
LAB_021d1ef4:
      if (*local_68 != 'T') {
LAB_021d2128:
        if (local_68 != "TshirtsL") {
          uVar12 = 0;
          bVar3 = true;
          do {
            if (local_68[uVar12] != "TshirtsL"[uVar12]) break;
            if (local_68[uVar12] == '\0') {
              if (bVar3) goto LAB_021d2460;
              break;
            }
            bVar3 = uVar12 < 0x80000;
            uVar12 = uVar12 + 1;
          } while (uVar12 != 0x80001);
          local_a0 = PTR_DAT_04bb2020 + 0x10;
          local_98 = "TshirtsmydesignL";
          FUN_006bd3a4(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          pcVar8 = local_68;
          (**(code **)(local_a0 + 0x18))(&local_a0);
          if (pcVar8 != local_98) {
            if (*local_68 != *local_98) {
LAB_021d247c:
              local_a0 = puVar2 + 0x10;
              local_98 = "TshirtsN";
              (**(code **)(local_70 + 0x18))(&local_70);
              (**(code **)(local_70 + 0x18))(&local_70);
              pcVar8 = local_68;
              (**(code **)(local_a0 + 0x18))(&local_a0);
              if (pcVar8 != local_98) {
                uVar12 = 0;
                bVar3 = true;
                do {
                  if (local_68[uVar12] != local_98[uVar12]) break;
                  if (local_68[uVar12] == '\0') {
                    if (bVar3) goto LAB_021d25b0;
                    break;
                  }
                  bVar3 = uVar12 < 0x80000;
                  uVar12 = uVar12 + 1;
                } while (uVar12 != 0x80001);
                local_60 = puVar2 + 0x10;
                local_58 = "TshirtsmydesignN";
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                pcVar8 = local_68;
                (**(code **)(local_60 + 0x18))(&local_60);
                if (pcVar8 != local_58) {
                  if (*local_68 != *local_58) {
LAB_021d25c4:
                    local_a0 = puVar2 + 0x10;
                    local_98 = "OnepieceH";
                    (**(code **)(local_70 + 0x18))(&local_70);
                    (**(code **)(local_70 + 0x18))(&local_70);
                    pcVar8 = local_68;
                    (**(code **)(local_a0 + 0x18))(&local_a0);
                    if (pcVar8 != local_98) {
                      uVar12 = 0;
                      bVar3 = true;
                      do {
                        if (local_68[uVar12] != local_98[uVar12]) break;
                        if (local_68[uVar12] == '\0') {
                          if (bVar3) goto LAB_021d26f8;
                          break;
                        }
                        bVar3 = uVar12 < 0x80000;
                        uVar12 = uVar12 + 1;
                      } while (uVar12 != 0x80001);
                      local_60 = puVar2 + 0x10;
                      local_58 = "OnepiecemydesignH";
                      (**(code **)(local_70 + 0x18))(&local_70);
                      (**(code **)(local_70 + 0x18))(&local_70);
                      pcVar8 = local_68;
                      (**(code **)(local_60 + 0x18))(&local_60);
                      if (pcVar8 != local_58) {
                        if (*local_68 != *local_58) {
LAB_021d270c:
                          (**(code **)(local_70 + 0x18))(&local_70);
                          (**(code **)(local_70 + 0x18))(&local_70);
                          if (local_68 != "OnepieceL") {
                            uVar12 = 0;
                            bVar3 = true;
                            do {
                              if (local_68[uVar12] != "OnepieceL"[uVar12]) break;
                              if (local_68[uVar12] == '\0') {
                                if (bVar3) goto LAB_021d2868;
                                break;
                              }
                              bVar3 = uVar12 < 0x80000;
                              uVar12 = uVar12 + 1;
                            } while (uVar12 != 0x80001);
                            local_98 = "OnepiecemydesignL";
                            local_a0 = puVar2 + 0x10;
                            uVar12 = FUN_00710cb0(&local_70,&local_a0);
                            if ((uVar12 & 1) == 0) {
                              local_98 = "OnepieceN";
                              local_a0 = puVar2 + 0x10;
                              uVar12 = FUN_00710cb0(&local_70,&local_a0);
                              if ((uVar12 & 1) == 0) {
                                local_58 = "OnepiecemydesignN";
                                local_60 = puVar2 + 0x10;
                                uVar12 = FUN_00710cb0(&local_70,&local_60);
                                if ((uVar12 & 1) == 0) {
                                  local_98 = "OuterL";
                                  local_a0 = puVar2 + 0x10;
                                  uVar12 = FUN_00710cb0(&local_70,&local_a0);
                                  if ((uVar12 & 1) == 0) {
                                    local_58 = "OutermydesignL";
                                    local_60 = puVar2 + 0x10;
                                    uVar12 = FUN_00710cb0(&local_70,&local_60);
                                    if ((uVar12 & 1) == 0) {
                                      local_98 = "TshirtsemmL";
                                      local_a0 = puVar2 + 0x10;
                                      uVar12 = FUN_00710cb0(&local_70,&local_a0);
                                      if ((uVar12 & 1) != 0) goto LAB_021d2460;
                                      local_98 = "TshirtsemmN";
                                      local_a0 = puVar2 + 0x10;
                                      uVar12 = FUN_00710cb0(&local_70,&local_a0);
                                      if ((uVar12 & 1) != 0) goto LAB_021d25b0;
                                      local_98 = "OnepieceemmH";
                                      local_a0 = puVar2 + 0x10;
                                      uVar12 = FUN_00710cb0(&local_70,&local_a0);
                                      if ((uVar12 & 1) != 0) goto LAB_021d26f8;
                                      local_a0 = puVar2 + 0x10;
                                      local_98 = "OnepieceemmL";
                                      uVar12 = FUN_00710cb0(&local_70,&local_a0);
                                      if ((uVar12 & 1) == 0) {
                                        return 0;
                                      }
                                      goto LAB_021d2868;
                                    }
                                  }
                                  FUN_021d15d0(&local_a0,param_1,param_2);
                                  return local_88;
                                }
                              }
                              FUN_021d0e60(&local_a0,param_1,param_2);
                              return local_88;
                            }
                          }
LAB_021d2868:
                          FUN_021d06f0(&local_a0,param_1,param_2);
                          return local_88;
                        }
                        if (*local_68 != '\0') {
                          lVar16 = 0;
                          do {
                            if ((lVar16 == 0x80000) ||
                               (local_68[lVar16 + 1] != local_58[lVar16 + 1])) goto LAB_021d270c;
                            if (local_68[lVar16 + 1] == '\0') break;
                            lVar17 = lVar16 + 2;
                            if (local_68[lVar17] != local_58[lVar16 + 2]) goto LAB_021d270c;
                            lVar16 = lVar16 + 2;
                          } while (local_68[lVar17] != '\0');
                        }
                      }
                    }
LAB_021d26f8:
                    FUN_021cff80(&local_a0,param_1,param_2);
                    return local_88;
                  }
                  if (*local_68 != '\0') {
                    lVar16 = 0;
                    do {
                      if ((lVar16 == 0x80000) || (local_68[lVar16 + 1] != local_58[lVar16 + 1]))
                      goto LAB_021d25c4;
                      if (local_68[lVar16 + 1] == '\0') break;
                      lVar17 = lVar16 + 2;
                      if (local_68[lVar17] != local_58[lVar16 + 2]) goto LAB_021d25c4;
                      lVar16 = lVar16 + 2;
                    } while (local_68[lVar17] != '\0');
                  }
                }
              }
LAB_021d25b0:
              FUN_021cf810(&local_a0,param_1,param_2);
              return local_88;
            }
            if (*local_68 != '\0') {
              lVar16 = 0;
              do {
                if ((lVar16 == 0x80000) || (local_68[lVar16 + 1] != local_98[lVar16 + 1]))
                goto LAB_021d247c;
                if (local_68[lVar16 + 1] == '\0') break;
                lVar17 = lVar16 + 2;
                if (local_68[lVar17] != local_98[lVar16 + 2]) goto LAB_021d247c;
                lVar16 = lVar16 + 2;
              } while (local_68[lVar17] != '\0');
            }
          }
        }
LAB_021d2460:
        FUN_021cf0a0(&local_a0,param_1,param_2);
        return local_88;
      }
      lVar16 = 0;
      do {
        if ((lVar16 == 0x80000) ||
           (lVar17 = lVar16 + 1, local_68[lVar17] != "TshirtsmydesignH"[lVar16 + 1]))
        goto LAB_021d2128;
        lVar16 = lVar16 + 1;
      } while (local_68[lVar17] != '\0');
    }
  }
LAB_021d1f34:
  lVar16 = *(long *)(param_1 + 8);
  if ((lVar16 != 0) &&
     ((uVar4 = *(uint *)(lVar16 + 0x1c0), uVar14 = uVar4, 0 < (int)uVar4 ||
      (((*(long *)(lVar16 + 0xb0) != 0 &&
        (puVar11 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
       (uVar14 = *puVar11, uVar14 != 0)))))) {
    uVar15 = 0;
    cVar13 = DAT_05458a68;
    do {
      if ((int)uVar4 < 1) {
        if (((((*(long *)(lVar16 + 0xb0) != 0) &&
              (puVar11 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
             ((*(uint *)(lVar16 + 200) <= uVar15 ||
              (*(char *)(*(long *)(lVar16 + 0xd0) + (long)(int)uVar15) != '\0')))) &&
            ((uVar15 < *puVar11 && (puVar11[1] != 0)))) && ((ushort)puVar11[2] != 0)) {
          iVar5 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar15 + (uint)(ushort)puVar11[2] * 8 + iVar5) +
                            (long)puVar11);
          goto joined_r0x021d2118;
        }
      }
      else if (uVar15 < uVar4) {
        uVar1 = uVar15;
        if (*(uint *)(lVar16 + 0x1b0) <= uVar15) {
          uVar1 = 0;
        }
        puVar11 = *(uint **)(*(long *)(lVar16 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x021d2118:
        if (puVar11 != (uint *)0x0) {
          uVar1 = *puVar11;
          lVar17 = DAT_05458adc;
          while (DAT_05458adc = lVar17, uVar1 != 0) {
            puVar7 = (uint *)(ulong)uVar1;
            if (cVar13 == '\0') {
              DAT_05458a6c = 0xffffffffffffffff;
              DAT_05458a74 = 0xffffffffffffffff;
              cVar13 = '\x01';
              DAT_05458adc = -1;
              DAT_05458ae4 = 0xffffffff;
              DAT_05458a68 = '\x01';
              DAT_05458a7c = 0xffffffffffffffff;
              DAT_05458a84 = 0xffffffffffffffff;
              DAT_05458a8c = 0xffffffffffffffff;
              DAT_05458a94 = 0xffffffffffffffff;
              DAT_05458a9c = 0xffffffffffffffff;
              DAT_05458aa4 = 0xffffffffffffffff;
              DAT_05458aac = 0xffffffffffffffff;
              DAT_05458ab4 = 0xffffffffffffffff;
              DAT_05458abc = 0xffffffffffffffff;
              DAT_05458ac4 = 0xffffffffffffffff;
              DAT_05458acc = 0xffffffffffffffff;
              DAT_05458ad4 = 0xffffffffffffffff;
              puVar7 = (uint *)(ulong)*puVar11;
              pcVar8 = (char *)0x0;
              if (puVar7 == (uint *)0x0) goto LAB_021d2088;
            }
            else {
              DAT_05458adc._4_4_ = (uint)((ulong)lVar17 >> 0x20);
              if (-1 < lVar17) {
                pcVar8 = (char *)((ulong)DAT_05458adc._4_4_ + (long)puVar11);
                goto LAB_021d2088;
              }
              bVar3 = DAT_05458adc._4_4_ != 0xffffffff;
              if (bVar3) break;
              if (puVar7 == (uint *)0x0) {
                pcVar8 = (char *)0x0;
                goto LAB_021d2088;
              }
            }
            if (puVar11 == puVar7) break;
            lVar17 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar11 + (lVar17 - (long)puVar7);
            if (lVar17 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
            DAT_05458adc = CONCAT44(0xfffffffe,(int)DAT_05458adc);
            pcVar8 = (char *)0x0;
            if (uVar12 == 0) goto LAB_021d2088;
            piVar6 = (int *)(lVar17 + 4);
            while (piVar6[-1] != 0x2f1b930d) {
              piVar6 = piVar6 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                pcVar8 = (char *)0x0;
                goto LAB_021d2088;
              }
            }
            iVar5 = 0;
            if (*piVar6 != -1) {
              iVar5 = *piVar6;
            }
            DAT_05458adc = CONCAT44(iVar5,(int)DAT_05458adc);
            lVar17 = DAT_05458adc;
            uVar1 = *puVar11;
          }
          pcVar8 = (char *)0x0;
LAB_021d2088:
          pcVar10 = "";
          if (pcVar8 != (char *)0x0) {
            pcVar10 = pcVar8;
          }
          cVar9 = *pcVar10;
          if (cVar9 == '\0') {
LAB_021d216c:
            uVar4 = *puVar11;
            goto joined_r0x021d2170;
          }
          pcVar8 = *(char **)(param_2 + 8);
          while( true ) {
            pcVar10 = pcVar10 + 1;
            if (*pcVar8 != cVar9) break;
            cVar9 = *pcVar10;
            pcVar8 = pcVar8 + 1;
            if (cVar9 == '\0') goto LAB_021d216c;
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  return 0;
joined_r0x021d2170:
  if (uVar4 == 0) {
    return 0;
  }
  if (cVar13 != '\0') {
    if ((int)DAT_05458adc == -1) goto LAB_021d21d0;
LAB_021d2254:
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      return 0;
    }
    bVar3 = DAT_05458adc._4_4_ == -1;
    goto LAB_021d2274;
  }
  DAT_05458a6c = 0xffffffffffffffff;
  DAT_05458a74 = 0xffffffffffffffff;
  cVar13 = '\x01';
  DAT_05458adc = -1;
  DAT_05458ae4 = 0xffffffff;
  DAT_05458a68 = '\x01';
  DAT_05458a7c = 0xffffffffffffffff;
  DAT_05458a84 = 0xffffffffffffffff;
  DAT_05458a8c = 0xffffffffffffffff;
  DAT_05458a94 = 0xffffffffffffffff;
  DAT_05458a9c = 0xffffffffffffffff;
  DAT_05458aa4 = 0xffffffffffffffff;
  DAT_05458aac = 0xffffffffffffffff;
  DAT_05458ab4 = 0xffffffffffffffff;
  DAT_05458abc = 0xffffffffffffffff;
  DAT_05458ac4 = 0xffffffffffffffff;
  DAT_05458acc = 0xffffffffffffffff;
  DAT_05458ad4 = 0xffffffffffffffff;
  uVar4 = *puVar11;
LAB_021d21d0:
  lVar16 = (long)puVar11 - (ulong)uVar4;
  if (((ulong)uVar4 == 0) || (lVar16 == 0)) goto LAB_021d2254;
  lVar17 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar16 == 0) goto LAB_021d2254;
  uVar12 = (ulong)*(ushort *)(lVar16 + 8);
  DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,0xfffffffe);
  if (uVar12 == 0) goto LAB_021d2254;
  piVar6 = (int *)(lVar17 + lVar16 + 4);
  while (piVar6[-1] != 0x54706054) {
    piVar6 = piVar6 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_021d2254;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,iVar5);
  uVar4 = *puVar11;
  goto joined_r0x021d2170;
LAB_021d2274:
  if ((!bVar3) || (lVar16 = (long)puVar11 - (ulong)uVar4, lVar16 == 0)) {
LAB_021d22e0:
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      return 0;
    }
    uVar14 = DAT_05458ab4._4_4_;
    goto LAB_021d2310;
  }
  lVar17 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar16 == 0) goto LAB_021d22e0;
  uVar12 = (ulong)*(ushort *)(lVar16 + 8);
  DAT_05458adc = CONCAT44(0xfffffffe,(int)DAT_05458adc);
  if (uVar12 == 0) goto LAB_021d22e0;
  piVar6 = (int *)(lVar17 + lVar16 + 4);
  while (piVar6[-1] != 0x2f1b930d) {
    piVar6 = piVar6 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_021d22e0;
  }
  bVar3 = false;
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_05458adc = CONCAT44(iVar5,(int)DAT_05458adc);
  uVar4 = *puVar11;
  if (uVar4 == 0) {
    return 0;
  }
  goto LAB_021d2274;
LAB_021d2310:
  if (-1 < (int)uVar14) {
    if ((undefined4 *)((long)puVar11 + (ulong)uVar14) == (undefined4 *)0x0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)((long)puVar11 + (ulong)uVar14);
    }
LAB_021d2788:
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      return uVar18;
    }
    iVar5 = (int)DAT_05458ab4;
    goto LAB_021d27b4;
  }
  uVar18 = 0;
  if ((uVar14 != 0xffffffff) || (lVar16 = (long)puVar11 - (ulong)uVar4, lVar16 == 0))
  goto LAB_021d2788;
  lVar17 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar16 == 0) goto LAB_021d2788;
  uVar12 = (ulong)*(ushort *)(lVar16 + 8);
  DAT_05458ab4 = CONCAT44(0xfffffffe,(int)DAT_05458ab4);
  if (uVar12 == 0) goto LAB_021d2788;
  puVar7 = (uint *)(lVar17 + lVar16 + 4);
  while (puVar7[-1] != 0xf504bb4c) {
    puVar7 = puVar7 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_021d2788;
  }
  uVar14 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar14 = *puVar7;
  }
  DAT_05458ab4 = CONCAT44(uVar14,(int)DAT_05458ab4);
  uVar4 = *puVar11;
  if (uVar4 == 0) {
    return 0;
  }
  goto LAB_021d2310;
LAB_021d27b4:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar16 = (long)puVar11 - (ulong)uVar4, lVar16 == 0)) {
LAB_021d28d0:
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      return uVar18;
    }
    iVar5 = DAT_05458aac._4_4_;
    goto LAB_021d28fc;
  }
  lVar17 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar16 == 0) goto LAB_021d28d0;
  uVar12 = (ulong)*(ushort *)(lVar16 + 8);
  DAT_05458ab4 = CONCAT44(DAT_05458ab4._4_4_,0xfffffffe);
  if (uVar12 == 0) goto LAB_021d28d0;
  piVar6 = (int *)(lVar17 + lVar16 + 4);
  while (piVar6[-1] != 0x5d04a3be) {
    piVar6 = piVar6 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_021d28d0;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_05458ab4 = CONCAT44(DAT_05458ab4._4_4_,iVar5);
  uVar4 = *puVar11;
  if (uVar4 == 0) {
    return uVar18;
  }
  goto LAB_021d27b4;
LAB_021d28fc:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar16 = (long)puVar11 - (ulong)uVar4, lVar16 == 0)) {
LAB_021d2990:
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      return uVar18;
    }
    iVar5 = (int)DAT_05458aac;
    while( true ) {
      if (-1 < iVar5) {
        return uVar18;
      }
      if (iVar5 != -1) {
        return uVar18;
      }
      lVar16 = (long)puVar11 - (ulong)uVar4;
      if (lVar16 == 0) {
        return uVar18;
      }
      lVar17 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      if (lVar17 + lVar16 == 0) break;
      uVar12 = (ulong)*(ushort *)(lVar16 + 8);
      DAT_05458aac = CONCAT44(DAT_05458aac._4_4_,0xfffffffe);
      if (uVar12 == 0) {
        return uVar18;
      }
      piVar6 = (int *)(lVar17 + lVar16 + 4);
      while (piVar6[-1] != -0x2dbba9e2) {
        piVar6 = piVar6 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return uVar18;
        }
      }
      iVar5 = 0;
      if (*piVar6 != -1) {
        iVar5 = *piVar6;
      }
      DAT_05458aac = CONCAT44(DAT_05458aac._4_4_,iVar5);
      uVar4 = *puVar11;
      if (uVar4 == 0) {
        return uVar18;
      }
    }
    return uVar18;
  }
  lVar17 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar16 == 0) goto LAB_021d2990;
  uVar12 = (ulong)*(ushort *)(lVar16 + 8);
  DAT_05458aac = CONCAT44(0xfffffffe,(int)DAT_05458aac);
  if (uVar12 == 0) goto LAB_021d2990;
  piVar6 = (int *)(lVar17 + lVar16 + 4);
  while (piVar6[-1] != -0x6a1bd332) {
    piVar6 = piVar6 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_021d2990;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_05458aac = CONCAT44(iVar5,(int)DAT_05458aac);
  uVar4 = *puVar11;
  if (uVar4 == 0) {
    return uVar18;
  }
  goto LAB_021d28fc;
}

