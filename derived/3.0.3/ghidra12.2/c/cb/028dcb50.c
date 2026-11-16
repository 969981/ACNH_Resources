
void FUN_028dcb50(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  int iVar14;
  char *pcVar15;
  undefined *local_f8;
  char *local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [63];
  undefined1 local_65;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar2);
  if (uVar2 < *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x100)) {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb30a0 + 0x108) + (long)(int)uVar2 * 8);
  }
  else {
    lVar9 = 0;
  }
  plVar10 = (long *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
  puVar6 = PTR_DAT_04bb2f70;
  local_a8 = 0x40;
  local_65 = 0;
  local_b8 = PTR_DAT_04bb2f70 + 0x10;
  local_b0 = local_a4;
  (**(code **)(*plVar10 + 0x18))();
  pcVar15 = (char *)plVar10[1];
  if (local_a4 != pcVar15) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar9 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar9) == '\0') goto LAB_028dcc50;
      lVar1 = plVar10[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_028dcc50;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_028dcc50;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_028dcc50:
    iVar14 = (int)lVar9;
    if (local_a8 <= (int)lVar9) {
      iVar14 = local_a8 + -1;
    }
    memcpy(local_a4,pcVar15,(long)iVar14);
    local_a4[iVar14] = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  lVar9 = 0;
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0[(long)local_a8 + -1] = '\0';
  do {
    if (local_b0[lVar9] == '\0') goto LAB_028dccdc;
    if (local_b0[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_028dccdc;
    }
    if (local_b0[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_028dccdc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_028dccdc:
  iVar11 = (int)lVar9;
  iVar14 = iVar11;
  if (1 < iVar11) {
    iVar14 = 2;
  }
  local_b0[iVar11 - iVar14] = '\0';
  puVar4 = PTR_DAT_04bb2020;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "Fine";
  (**(code **)(puVar5 + 0x28))(&local_b8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  pcVar15 = local_b0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  if (pcVar15 == local_c0) {
LAB_028dcf48:
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_b0[uVar13] != local_c0[uVar13]) break;
      if (local_b0[uVar13] == '\0') {
        if (bVar8) goto LAB_028dcf48;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    local_d8 = puVar4 + 0x10;
    local_d0 = "FineRain";
    (**(code **)(local_b8 + 0x18))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar15 = local_b0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    if (pcVar15 == local_d0) goto LAB_028dcf48;
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_b0[uVar13] != local_d0[uVar13]) break;
      if (local_b0[uVar13] == '\0') {
        if (bVar8) goto LAB_028dcf48;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    local_e8 = puVar4 + 0x10;
    local_e0 = "Commun";
    (**(code **)(local_b8 + 0x18))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar15 = local_b0;
    (**(code **)(local_e8 + 0x18))(&local_e8);
    if (pcVar15 == local_e0) goto LAB_028dcf48;
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_b0[uVar13] != local_e0[uVar13]) break;
      if (local_b0[uVar13] == '\0') {
        if (bVar8) goto LAB_028dcf48;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    local_f8 = puVar4 + 0x10;
    local_f0 = "EventDay";
    (**(code **)(local_b8 + 0x18))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar15 = local_b0;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    if (pcVar15 == local_f0) goto LAB_028dcf48;
    if (*local_b0 == *local_f0) {
      if (*local_b0 != '\0') {
        lVar9 = 0;
        do {
          if (lVar9 == 0x80000) goto LAB_028dd24c;
          if (local_b0[lVar9 + 1] != local_f0[lVar9 + 1]) goto LAB_028dd24c;
          if (local_b0[lVar9 + 1] == '\0') break;
          lVar1 = lVar9 + 2;
          if (local_b0[lVar1] != local_f0[lVar9 + 2]) goto LAB_028dd24c;
          lVar9 = lVar9 + 2;
        } while (local_b0[lVar1] != '\0');
      }
      goto LAB_028dcf48;
    }
LAB_028dd24c:
    local_c8 = puVar4 + 0x10;
    local_c0 = "Cloud";
    (**(code **)(local_b8 + 0x18))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar15 = local_b0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (pcVar15 == local_c0) {
LAB_028dd720:
      uVar12 = 1;
    }
    else {
      uVar13 = 0;
      bVar8 = true;
      do {
        if (local_b0[uVar13] != local_c0[uVar13]) break;
        if (local_b0[uVar13] == '\0') {
          if (bVar8) goto LAB_028dd720;
          break;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_d8 = puVar4 + 0x10;
      local_d0 = "CloudFine";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar15 = local_b0;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      if (pcVar15 == local_d0) goto LAB_028dd720;
      uVar13 = 0;
      bVar8 = true;
      do {
        if (local_b0[uVar13] != local_d0[uVar13]) break;
        if (local_b0[uVar13] == '\0') {
          if (bVar8) goto LAB_028dd720;
          break;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_e8 = puVar4 + 0x10;
      local_e0 = "CloudRain";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar15 = local_b0;
      (**(code **)(local_e8 + 0x18))(&local_e8);
      if (pcVar15 == local_e0) goto LAB_028dd720;
      uVar13 = 0;
      bVar8 = true;
      do {
        if (local_b0[uVar13] != local_e0[uVar13]) break;
        if (local_b0[uVar13] == '\0') {
          if (bVar8) goto LAB_028dd720;
          break;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_f8 = puVar4 + 0x10;
      local_f0 = "FineCloud";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar15 = local_b0;
      (**(code **)(local_f8 + 0x18))(&local_f8);
      if (pcVar15 == local_f0) goto LAB_028dd720;
      if (*local_b0 == *local_f0) {
        if (*local_b0 != '\0') {
          lVar9 = 0;
          do {
            if (lVar9 == 0x80000) goto LAB_028dd728;
            if (local_b0[lVar9 + 1] != local_f0[lVar9 + 1]) goto LAB_028dd728;
            if (local_b0[lVar9 + 1] == '\0') break;
            lVar1 = lVar9 + 2;
            if (local_b0[lVar1] != local_f0[lVar9 + 2]) goto LAB_028dd728;
            lVar9 = lVar9 + 2;
          } while (local_b0[lVar1] != '\0');
        }
        goto LAB_028dd720;
      }
LAB_028dd728:
      local_c8 = puVar4 + 0x10;
      local_c0 = "Rain";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar15 = local_b0;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      if (pcVar15 != local_c0) {
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_b0[uVar13] != local_c0[uVar13]) break;
          if (local_b0[uVar13] == '\0') {
            if (bVar8) goto LAB_028dd9bc;
            break;
          }
          bVar8 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_d8 = puVar4 + 0x10;
        local_d0 = "RainCloud";
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        pcVar15 = local_b0;
        (**(code **)(local_d8 + 0x18))(&local_d8);
        if (pcVar15 != local_d0) {
          if (*local_b0 != *local_d0) goto LAB_028dcf48;
          if (*local_b0 != '\0') {
            lVar9 = 0;
            do {
              if (lVar9 == 0x80000) goto LAB_028dcf48;
              if (local_b0[lVar9 + 1] != local_d0[lVar9 + 1]) goto LAB_028dcf48;
              if (local_b0[lVar9 + 1] == '\0') break;
              lVar1 = lVar9 + 2;
              if (local_b0[lVar1] != local_d0[lVar9 + 2]) goto LAB_028dcf48;
              lVar9 = lVar9 + 2;
            } while (local_b0[lVar1] != '\0');
          }
        }
      }
LAB_028dd9bc:
      uVar12 = 2;
    }
  }
  puVar7 = PTR_DAT_04bb30a0;
  *(undefined4 *)(param_1 + 0x13c) = uVar12;
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar3);
  if (uVar3 < *(uint *)(*(long *)puVar7 + 0x100)) {
    lVar9 = *(long *)(*(long *)(*(long *)puVar7 + 0x108) + (long)(int)uVar3 * 8);
  }
  else {
    lVar9 = 0;
  }
  plVar10 = (long *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
  local_65 = 0;
  local_a8 = 0x40;
  local_b8 = puVar6 + 0x10;
  local_b0 = local_a4;
  (**(code **)(*plVar10 + 0x18))();
  pcVar15 = (char *)plVar10[1];
  if (local_a4 != pcVar15) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar9 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar9) == '\0') goto LAB_028dd01c;
      lVar1 = plVar10[1] + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_028dd01c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_028dd01c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_028dd01c:
    iVar14 = (int)lVar9;
    if (local_a8 <= (int)lVar9) {
      iVar14 = local_a8 + -1;
    }
    memcpy(local_a4,pcVar15,(long)iVar14);
    local_a4[iVar14] = '\0';
  }
  local_b8 = puVar5 + 0x10;
  lVar9 = 0;
  local_b0[(long)local_a8 + -1] = '\0';
  do {
    if (local_b0[lVar9] == '\0') goto LAB_028dd0a0;
    if (local_b0[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_028dd0a0;
    }
    if (local_b0[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_028dd0a0;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_028dd0a0:
  iVar11 = (int)lVar9;
  iVar14 = iVar11;
  if (1 < iVar11) {
    iVar14 = 2;
  }
  local_b0[iVar11 - iVar14] = '\0';
  local_c8 = puVar4 + 0x10;
  local_c0 = "Fine";
  (**(code **)(puVar5 + 0x28))(&local_b8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  pcVar15 = local_b0;
  (**(code **)(local_c8 + 0x18))(&local_c8);
  if (pcVar15 != local_c0) {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_b0[uVar13] != local_c0[uVar13]) break;
      if (local_b0[uVar13] == '\0') {
        if (bVar8) goto LAB_028dd388;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    local_d8 = puVar4 + 0x10;
    local_d0 = "FineRain";
    (**(code **)(local_b8 + 0x18))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar15 = local_b0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    if (pcVar15 != local_d0) {
      uVar13 = 0;
      bVar8 = true;
      do {
        if (local_b0[uVar13] != local_d0[uVar13]) break;
        if (local_b0[uVar13] == '\0') {
          if (bVar8) goto LAB_028dd388;
          break;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_e8 = puVar4 + 0x10;
      local_e0 = "Commun";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar15 = local_b0;
      (**(code **)(local_e8 + 0x18))(&local_e8);
      if (pcVar15 != local_e0) {
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_b0[uVar13] != local_e0[uVar13]) break;
          if (local_b0[uVar13] == '\0') {
            if (bVar8) goto LAB_028dd388;
            break;
          }
          bVar8 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_f8 = puVar4 + 0x10;
        local_f0 = "EventDay";
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        pcVar15 = local_b0;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        if (pcVar15 != local_f0) {
          if (*local_b0 != *local_f0) {
LAB_028dd3b0:
            local_c8 = puVar4 + 0x10;
            local_c0 = "Cloud";
            (**(code **)(local_b8 + 0x18))(&local_b8);
            (**(code **)(local_b8 + 0x18))(&local_b8);
            pcVar15 = local_b0;
            (**(code **)(local_c8 + 0x18))(&local_c8);
            if (pcVar15 != local_c0) {
              uVar13 = 0;
              bVar8 = true;
              do {
                if (local_b0[uVar13] != local_c0[uVar13]) break;
                if (local_b0[uVar13] == '\0') {
                  if (bVar8) goto LAB_028dd820;
                  break;
                }
                bVar8 = uVar13 < 0x80000;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x80001);
              local_d8 = puVar4 + 0x10;
              local_d0 = "CloudFine";
              (**(code **)(local_b8 + 0x18))(&local_b8);
              (**(code **)(local_b8 + 0x18))(&local_b8);
              pcVar15 = local_b0;
              (**(code **)(local_d8 + 0x18))(&local_d8);
              if (pcVar15 != local_d0) {
                uVar13 = 0;
                bVar8 = true;
                do {
                  if (local_b0[uVar13] != local_d0[uVar13]) break;
                  if (local_b0[uVar13] == '\0') {
                    if (bVar8) goto LAB_028dd820;
                    break;
                  }
                  bVar8 = uVar13 < 0x80000;
                  uVar13 = uVar13 + 1;
                } while (uVar13 != 0x80001);
                local_e8 = puVar4 + 0x10;
                local_e0 = "CloudRain";
                (**(code **)(local_b8 + 0x18))(&local_b8);
                (**(code **)(local_b8 + 0x18))(&local_b8);
                pcVar15 = local_b0;
                (**(code **)(local_e8 + 0x18))(&local_e8);
                if (pcVar15 != local_e0) {
                  uVar13 = 0;
                  bVar8 = true;
                  do {
                    if (local_b0[uVar13] != local_e0[uVar13]) break;
                    if (local_b0[uVar13] == '\0') {
                      if (bVar8) goto LAB_028dd820;
                      break;
                    }
                    bVar8 = uVar13 < 0x80000;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != 0x80001);
                  (**(code **)(local_b8 + 0x18))(&local_b8);
                  (**(code **)(local_b8 + 0x18))(&local_b8);
                  if (local_b0 != "FineCloud") {
                    if (*local_b0 != 'F') {
LAB_028dd828:
                      (**(code **)(local_b8 + 0x18))(&local_b8);
                      (**(code **)(local_b8 + 0x18))(&local_b8);
                      if (local_b0 != "Rain") {
                        uVar13 = 0;
                        bVar8 = true;
                        do {
                          if (local_b0[uVar13] != (&DAT_040cb35c)[uVar13]) break;
                          if (local_b0[uVar13] == '\0') {
                            if (bVar8) goto LAB_028dd908;
                            break;
                          }
                          bVar8 = uVar13 < 0x80000;
                          uVar13 = uVar13 + 1;
                        } while (uVar13 != 0x80001);
                        (**(code **)(local_b8 + 0x18))(&local_b8);
                        (**(code **)(local_b8 + 0x18))(&local_b8);
                        if (local_b0 != "RainCloud") {
                          if (*local_b0 == 'R') {
                            lVar9 = 0;
                            do {
                              if ((lVar9 == 0x80000) ||
                                 (lVar1 = lVar9 + 1, local_b0[lVar1] != "RainCloud"[lVar9 + 1]))
                              goto LAB_028dd388;
                              lVar9 = lVar9 + 1;
                              uVar12 = 2;
                            } while (local_b0[lVar1] != '\0');
                            goto LAB_028dd38c;
                          }
                          goto LAB_028dd388;
                        }
                      }
LAB_028dd908:
                      uVar12 = 2;
                      goto LAB_028dd38c;
                    }
                    lVar9 = 0;
                    do {
                      if ((lVar9 == 0x80000) ||
                         (lVar1 = lVar9 + 1, local_b0[lVar1] != "FineCloud"[lVar9 + 1]))
                      goto LAB_028dd828;
                      lVar9 = lVar9 + 1;
                    } while (local_b0[lVar1] != '\0');
                  }
                }
              }
            }
LAB_028dd820:
            uVar12 = 1;
            goto LAB_028dd38c;
          }
          if (*local_b0 != '\0') {
            lVar9 = 0;
            do {
              if (lVar9 == 0x80000) goto LAB_028dd3b0;
              if (local_b0[lVar9 + 1] != local_f0[lVar9 + 1]) goto LAB_028dd3b0;
              if (local_b0[lVar9 + 1] == '\0') break;
              lVar1 = lVar9 + 2;
              if (local_b0[lVar1] != local_f0[lVar9 + 2]) goto LAB_028dd3b0;
              lVar9 = lVar9 + 2;
            } while (local_b0[lVar1] != '\0');
          }
        }
      }
    }
  }
LAB_028dd388:
  uVar12 = 0;
LAB_028dd38c:
  *(undefined4 *)(param_1 + 0x140) = uVar12;
  return;
}

