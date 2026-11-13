
undefined8 FUN_01272800(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined *local_e0;
  char *local_d8;
  undefined *local_48;
  char *local_40;
  undefined4 local_38;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar10 = *(uint **)(param_1 + 8);
  uVar8 = 0;
  if (puVar10 != (uint *)0x0) {
    uVar8 = *puVar10;
    if (uVar8 != 0 && puVar10 != (uint *)(ulong)uVar8) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
      if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar12 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_051600a8) &&
             (uVar3 = *(ushort *)(DAT_051600b0 + (long)(int)uVar2 * 2), uVar8 = (uint)uVar3,
             uVar3 < 7)) goto LAB_012728ac;
        }
      }
    }
    uVar8 = 0;
  }
LAB_012728ac:
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar8);
  if (uVar8 < 7) {
    puVar7 = (undefined8 *)(&PTR_s_Invalid_049897e8)[uVar8];
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  FUN_0074fda4(&local_e0,&DAT_0406c94b,puVar7);
  puVar5 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_40 = local_d8;
  local_48 = puVar1;
  (**(code **)(local_e0 + 0x18))(&local_e0);
  local_38 = FUN_006bd550(local_d8,0);
  local_d8 = &DAT_04989820;
  local_e0 = puVar1;
  (**(code **)(local_48 + 0x18))(&local_48);
  (**(code **)(local_48 + 0x18))(&local_48);
  pcVar6 = local_40;
  (**(code **)(local_e0 + 0x18))(&local_e0);
  if (pcVar6 != local_d8) {
    if (*local_40 != *local_d8) {
LAB_012729d4:
      local_e0 = puVar5 + 0x10;
      local_d8 = &DAT_04989828;
      (**(code **)(local_48 + 0x18))(&local_48);
      (**(code **)(local_48 + 0x18))(&local_48);
      pcVar6 = local_40;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      if (pcVar6 != local_d8) {
        if (*local_40 != *local_d8) {
LAB_01272a84:
          local_e0 = puVar5 + 0x10;
          local_d8 = &DAT_04989830;
          (**(code **)(local_48 + 0x18))(&local_48);
          (**(code **)(local_48 + 0x18))(&local_48);
          pcVar6 = local_40;
          (**(code **)(local_e0 + 0x18))(&local_e0);
          if (pcVar6 != local_d8) {
            if (*local_40 != *local_d8) {
LAB_01272b34:
              local_e0 = puVar5 + 0x10;
              local_d8 = &DAT_04989838;
              (**(code **)(local_48 + 0x18))(&local_48);
              (**(code **)(local_48 + 0x18))(&local_48);
              pcVar6 = local_40;
              (**(code **)(local_e0 + 0x18))(&local_e0);
              if (pcVar6 != local_d8) {
                if (*local_40 != *local_d8) {
LAB_01272be4:
                  local_e0 = puVar5 + 0x10;
                  local_d8 = &DAT_04989840;
                  (**(code **)(local_48 + 0x18))(&local_48);
                  (**(code **)(local_48 + 0x18))(&local_48);
                  pcVar6 = local_40;
                  (**(code **)(local_e0 + 0x18))(&local_e0);
                  if (pcVar6 != local_d8) {
                    if (*local_40 != *local_d8) {
LAB_01272c94:
                      local_e0 = puVar5 + 0x10;
                      local_d8 = &DAT_04989848;
                      (**(code **)(local_48 + 0x18))(&local_48);
                      (**(code **)(local_48 + 0x18))(&local_48);
                      pcVar6 = local_40;
                      (**(code **)(local_e0 + 0x18))(&local_e0);
                      if (pcVar6 != local_d8) {
                        if (*local_40 != *local_d8) {
                          return 0;
                        }
                        if (*local_40 != '\0') {
                          lVar12 = 0;
                          do {
                            if (lVar12 == 0x80000) {
                              return 0;
                            }
                            if (local_40[lVar12 + 1] != local_d8[lVar12 + 1]) {
                              return 0;
                            }
                            if (local_40[lVar12 + 1] == '\0') break;
                            lVar4 = lVar12 + 2;
                            if (local_40[lVar4] != local_d8[lVar12 + 2]) {
                              return 0;
                            }
                            lVar12 = lVar12 + 2;
                          } while (local_40[lVar4] != '\0');
                        }
                      }
                      uVar9 = 5;
                      goto LAB_01272d40;
                    }
                    if (*local_40 != '\0') {
                      lVar12 = 0;
                      do {
                        if ((lVar12 == 0x80000) || (local_40[lVar12 + 1] != local_d8[lVar12 + 1]))
                        goto LAB_01272c94;
                        if (local_40[lVar12 + 1] == '\0') break;
                        lVar4 = lVar12 + 2;
                        if (local_40[lVar4] != local_d8[lVar12 + 2]) goto LAB_01272c94;
                        lVar12 = lVar12 + 2;
                      } while (local_40[lVar4] != '\0');
                    }
                  }
                  uVar9 = 4;
                  goto LAB_01272d40;
                }
                if (*local_40 != '\0') {
                  lVar12 = 0;
                  do {
                    if ((lVar12 == 0x80000) || (local_40[lVar12 + 1] != local_d8[lVar12 + 1]))
                    goto LAB_01272be4;
                    if (local_40[lVar12 + 1] == '\0') break;
                    lVar4 = lVar12 + 2;
                    if (local_40[lVar4] != local_d8[lVar12 + 2]) goto LAB_01272be4;
                    lVar12 = lVar12 + 2;
                  } while (local_40[lVar4] != '\0');
                }
              }
              uVar9 = 3;
              goto LAB_01272d40;
            }
            if (*local_40 != '\0') {
              lVar12 = 0;
              do {
                if ((lVar12 == 0x80000) || (local_40[lVar12 + 1] != local_d8[lVar12 + 1]))
                goto LAB_01272b34;
                if (local_40[lVar12 + 1] == '\0') break;
                lVar4 = lVar12 + 2;
                if (local_40[lVar4] != local_d8[lVar12 + 2]) goto LAB_01272b34;
                lVar12 = lVar12 + 2;
              } while (local_40[lVar4] != '\0');
            }
          }
          uVar9 = 2;
          goto LAB_01272d40;
        }
        if (*local_40 != '\0') {
          lVar12 = 0;
          do {
            if ((lVar12 == 0x80000) || (local_40[lVar12 + 1] != local_d8[lVar12 + 1]))
            goto LAB_01272a84;
            if (local_40[lVar12 + 1] == '\0') break;
            lVar4 = lVar12 + 2;
            if (local_40[lVar4] != local_d8[lVar12 + 2]) goto LAB_01272a84;
            lVar12 = lVar12 + 2;
          } while (local_40[lVar4] != '\0');
        }
      }
      uVar9 = 1;
      goto LAB_01272d40;
    }
    if (*local_40 != '\0') {
      lVar12 = 0;
      do {
        if ((lVar12 == 0x80000) || (local_40[lVar12 + 1] != local_d8[lVar12 + 1]))
        goto LAB_012729d4;
        if (local_40[lVar12 + 1] == '\0') break;
        lVar4 = lVar12 + 2;
        if (local_40[lVar4] != local_d8[lVar12 + 2]) goto LAB_012729d4;
        lVar12 = lVar12 + 2;
      } while (local_40[lVar4] != '\0');
    }
  }
  uVar9 = 0;
LAB_01272d40:
  *param_2 = uVar9;
  return 1;
}

