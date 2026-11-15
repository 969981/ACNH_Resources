
/* WARNING: Removing unreachable block (ram,0x021b8a58) */
/* WARNING: Removing unreachable block (ram,0x021b898c) */
/* WARNING: Removing unreachable block (ram,0x021b88c0) */
/* WARNING: Removing unreachable block (ram,0x021b87f4) */
/* WARNING: Removing unreachable block (ram,0x021b8728) */
/* WARNING: Removing unreachable block (ram,0x021b865c) */
/* WARNING: Removing unreachable block (ram,0x021b8590) */
/* WARNING: Removing unreachable block (ram,0x021b84a0) */
/* WARNING: Removing unreachable block (ram,0x021b84c8) */
/* WARNING: Removing unreachable block (ram,0x021b8598) */
/* WARNING: Removing unreachable block (ram,0x021b8664) */
/* WARNING: Removing unreachable block (ram,0x021b8730) */
/* WARNING: Removing unreachable block (ram,0x021b87fc) */
/* WARNING: Removing unreachable block (ram,0x021b88c8) */
/* WARNING: Removing unreachable block (ram,0x021b8994) */
/* WARNING: Removing unreachable block (ram,0x021b8a60) */

void FUN_021b8410(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_28;
  undefined4 local_24;
  
  *(uint *)(param_1 + 0x55e1c) = 0xffffffff;
  puVar2 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    uVar10 = 0;
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
    if (lVar4 == 0) {
      uVar10 = 0;
      uVar3 = 0;
      lVar4 = *(long *)puVar2;
    }
    else {
      local_28 = 0;
      uVar5 = FUN_02b5e950(&local_28,0);
      uVar3 = 0;
      if ((uVar5 & 1) != 0) {
        local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar1[1] == 0) {
          uVar3 = 0;
        }
        else {
          local_48 = 0;
          local_24 = 0;
          local_50 = PTR_DAT_04bc43f8 + 0x10;
          uVar5 = FUN_02b674f0(&local_24,local_28);
          if ((uVar5 & 1) != 0) {
            local_48 = local_24;
          }
          uVar3 = FUN_02a59140(puVar1,&local_50);
        }
      }
      uVar3 = uVar3 & 1;
      uVar10 = 1;
      lVar4 = *(long *)puVar2;
    }
    if (lVar4 != 0) {
      lVar4 = FUN_026eec4c(lVar4,1);
      uVar7 = uVar3;
      if (lVar4 != 0) {
        local_28 = 0;
        uVar10 = uVar10 | 2;
        uVar5 = FUN_02b5e950(&local_28,1);
        if ((uVar5 & 1) != 0) {
          local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
          puVar1 = &DAT_05636dd8;
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
            puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
          }
          if (puVar1[1] != 0) {
            local_48 = 0;
            local_24 = 0;
            local_50 = PTR_DAT_04bc43f8 + 0x10;
            uVar5 = FUN_02b674f0(&local_24,local_28);
            if ((uVar5 & 1) != 0) {
              local_48 = local_24;
            }
            uVar5 = FUN_02a59140(puVar1,&local_50);
            uVar7 = uVar3 | 2;
            if ((uVar5 & 1) == 0) {
              uVar7 = uVar3;
            }
          }
        }
      }
      uVar3 = uVar7;
      if (*(long *)puVar2 != 0) {
        lVar4 = FUN_026eec4c(*(long *)puVar2,2);
        if (lVar4 != 0) {
          local_28 = 0;
          uVar10 = uVar10 | 4;
          uVar5 = FUN_02b5e950(&local_28,2);
          if ((uVar5 & 1) != 0) {
            local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
            puVar1 = &DAT_05636dd8;
            if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
              puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
            }
            if (puVar1[1] != 0) {
              local_48 = 0;
              local_24 = 0;
              local_50 = PTR_DAT_04bc43f8 + 0x10;
              uVar5 = FUN_02b674f0(&local_24,local_28);
              if ((uVar5 & 1) != 0) {
                local_48 = local_24;
              }
              uVar5 = FUN_02a59140(puVar1,&local_50);
              uVar3 = uVar7 | 4;
              if ((uVar5 & 1) == 0) {
                uVar3 = uVar7;
              }
            }
          }
        }
        if (*(long *)puVar2 != 0) {
          lVar4 = FUN_026eec4c(*(long *)puVar2,3);
          uVar7 = uVar3;
          if (lVar4 != 0) {
            local_28 = 0;
            uVar10 = uVar10 | 8;
            uVar5 = FUN_02b5e950(&local_28,3);
            if ((uVar5 & 1) != 0) {
              local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
              puVar1 = &DAT_05636dd8;
              if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
              }
              if (puVar1[1] != 0) {
                local_48 = 0;
                local_24 = 0;
                local_50 = PTR_DAT_04bc43f8 + 0x10;
                uVar5 = FUN_02b674f0(&local_24,local_28);
                if ((uVar5 & 1) != 0) {
                  local_48 = local_24;
                }
                uVar5 = FUN_02a59140(puVar1,&local_50);
                uVar7 = uVar3 | 8;
                if ((uVar5 & 1) == 0) {
                  uVar7 = uVar3;
                }
              }
            }
          }
          uVar3 = uVar7;
          if (*(long *)puVar2 != 0) {
            lVar4 = FUN_026eec4c(*(long *)puVar2,4);
            if (lVar4 != 0) {
              local_28 = 0;
              uVar10 = uVar10 | 0x10;
              uVar5 = FUN_02b5e950(&local_28,4);
              if ((uVar5 & 1) != 0) {
                local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
                puVar1 = &DAT_05636dd8;
                if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                  puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                }
                if (puVar1[1] != 0) {
                  local_48 = 0;
                  local_24 = 0;
                  local_50 = PTR_DAT_04bc43f8 + 0x10;
                  uVar5 = FUN_02b674f0(&local_24,local_28);
                  if ((uVar5 & 1) != 0) {
                    local_48 = local_24;
                  }
                  uVar5 = FUN_02a59140(puVar1,&local_50);
                  uVar3 = uVar7 | 0x10;
                  if ((uVar5 & 1) == 0) {
                    uVar3 = uVar7;
                  }
                }
              }
            }
            if (*(long *)puVar2 != 0) {
              lVar4 = FUN_026eec4c(*(long *)puVar2,5);
              uVar7 = uVar3;
              if (lVar4 != 0) {
                local_28 = 0;
                uVar10 = uVar10 | 0x20;
                uVar5 = FUN_02b5e950(&local_28,5);
                if ((uVar5 & 1) != 0) {
                  local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
                  puVar1 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar1[1] != 0) {
                    local_48 = 0;
                    local_24 = 0;
                    local_50 = PTR_DAT_04bc43f8 + 0x10;
                    uVar5 = FUN_02b674f0(&local_24,local_28);
                    if ((uVar5 & 1) != 0) {
                      local_48 = local_24;
                    }
                    uVar5 = FUN_02a59140(puVar1,&local_50);
                    uVar7 = uVar3 | 0x20;
                    if ((uVar5 & 1) == 0) {
                      uVar7 = uVar3;
                    }
                  }
                }
              }
              uVar3 = uVar7;
              if (*(long *)puVar2 != 0) {
                lVar4 = FUN_026eec4c(*(long *)puVar2,6);
                uVar9 = uVar7;
                if (lVar4 != 0) {
                  local_28 = 0;
                  uVar10 = uVar10 | 0x40;
                  uVar5 = FUN_02b5e950(&local_28,6);
                  if ((uVar5 & 1) != 0) {
                    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
                    puVar1 = &DAT_05636dd8;
                    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                    }
                    if (puVar1[1] != 0) {
                      local_48 = 0;
                      local_24 = 0;
                      local_50 = PTR_DAT_04bc43f8 + 0x10;
                      uVar5 = FUN_02b674f0(&local_24,local_28);
                      if ((uVar5 & 1) != 0) {
                        local_48 = local_24;
                      }
                      uVar5 = FUN_02a59140(puVar1,&local_50);
                      uVar9 = uVar7 | 0x40;
                      if ((uVar5 & 1) == 0) {
                        uVar9 = uVar7;
                      }
                    }
                  }
                }
                uVar3 = uVar9;
                if ((*(long *)puVar2 != 0) && (lVar4 = FUN_026eec4c(*(long *)puVar2,7), lVar4 != 0))
                {
                  local_28 = 0;
                  uVar10 = uVar10 | 0x80;
                  uVar5 = FUN_02b5e950(&local_28,7);
                  if ((uVar5 & 1) != 0) {
                    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
                    puVar1 = &DAT_05636dd8;
                    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                    }
                    if (puVar1[1] != 0) {
                      local_48 = 0;
                      local_24 = 0;
                      local_50 = PTR_DAT_04bc43f8 + 0x10;
                      uVar5 = FUN_02b674f0(&local_24,local_28);
                      if ((uVar5 & 1) != 0) {
                        local_48 = local_24;
                      }
                      uVar5 = FUN_02a59140(puVar1,&local_50);
                      uVar3 = uVar9 | 0x80;
                      if ((uVar5 & 1) == 0) {
                        uVar3 = uVar9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar10 = uVar10 + (uVar10 >> 8);
  if ((uVar10 + (uVar10 >> 0x10) & 0x3f) == 8) {
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar9 = puVar6[3];
    uVar10 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
    uVar7 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
    puVar6[2] = uVar9;
    puVar6[3] = uVar7;
    uVar7 = (uint)((ulong)uVar7 * (ulong)uVar10 >> 0x20);
    if (uVar7 < uVar10 && uVar3 != 0) {
      iVar8 = uVar7 + 2;
      uVar10 = 0xffffffff;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 2) {
          uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
          uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          uVar10 = uVar3 + (uVar3 >> 0x10) & 0x3f;
          break;
        }
        uVar3 = uVar3 - 1 & uVar3;
      } while (uVar3 != 0);
    }
    else {
      uVar10 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x55e1c) = uVar10;
  }
  return;
}

