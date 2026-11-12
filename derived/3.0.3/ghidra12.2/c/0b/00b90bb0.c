
bool FUN_00b90bb0(long *param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,uint param_8,byte param_9,byte param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined **local_f80;
  uint *local_f78;
  undefined1 *local_f70;
  uint local_80c;
  undefined **local_808 [4];
  undefined **local_7e8 [4];
  undefined4 local_7c8 [2];
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b4;
  uint *local_7b0;
  undefined1 local_6c [12];
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  local_7e8[0] = &PTR_FUN_0493b1c0;
  FUN_00b92620(param_1,param_7,param_6);
  puVar3 = PTR_DAT_04bb43c0;
  local_808[0] = &PTR_FUN_0493b1e8;
  uVar7 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(&local_f80,param_1,uVar7);
    lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar8 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_f80);
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar9 = (*(code *)*local_808[0])(local_808,&local_f80), (uVar9 & 1) == 0))
        goto LAB_00b90c60;
      }
      lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar12 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
    }
LAB_00b90c60:
    uVar7 = uVar7 + 1;
  } while (uVar7 != 15000);
  if ((param_9 & 1) != 0) {
    lVar8 = *(long *)PTR_DAT_04bb46b0;
    if (lVar8 == 0) {
LAB_00b90d80:
      bVar16 = false;
    }
    else {
      puVar13 = *(undefined8 **)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x453) & 1) != 0) {
        if ((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) {
          lVar8 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
          if (lVar8 != 0) goto LAB_00b90d58;
        }
        goto LAB_00b90d80;
      }
      lVar8 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar8 == 0) goto LAB_00b90d80;
      lVar8 = lVar8 + 0x70;
LAB_00b90d58:
      if (*(long **)(lVar8 + 0x1a0da0) == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar8 + 0x1a0da0);
        uVar9 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar13)();
        }
      }
      uVar7 = *(uint *)(*(long *)(lVar8 + 0x1a0d88) + *(long *)(lVar8 + 0x1a0d80));
      if (2 < uVar7) {
        uVar7 = 0;
      }
      local_f80 = (undefined **)CONCAT44(local_f80._4_4_,uVar7);
      bVar16 = 1 < (int)uVar7;
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x1a0da0) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar8 + 0x1a0da0) + 8), puVar13 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar13)();
      }
    }
    uVar7 = 0;
    local_f80 = &PTR_FUN_0493b210;
    local_f78 = (uint *)CONCAT71(local_f78._1_7_,bVar16);
    do {
      (**(code **)(*param_1 + 0x10))(&local_7c0,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,&local_7c0), (uVar9 & 1) == 0))
          goto LAB_00b90dd0;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b90dd0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    FUN_02845b50(param_1);
  }
  puVar2 = PTR_DAT_04bb27c0;
  if (((param_10 & 1) == 0) || (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0)) goto LAB_00b91a3c;
  uVar7 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
  if (((uVar7 == 0) ||
      ((plVar19 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0 ||
       ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)))) || (*(uint *)(plVar19 + 0x46) != uVar7)) {
    plVar19 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar6 = (**(code **)(*plVar10 + 0x60))();
    if (iVar6 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_00b90f34;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00b90f34:
    uVar7 = 0;
  }
  if (plVar19 == (long *)0x0) goto LAB_00b91a3c;
  lVar8 = plVar19[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar7;
  }
  if (((uVar9 & 1) == 0) || (uVar1 == 0)) goto LAB_00b91a3c;
  lVar17 = *(long *)puVar3;
  lVar18 = *(long *)(plVar19[0x13] + 0x288);
  lVar8 = lVar18 + 0x1ac;
  uVar7 = FUN_0277d6c4(lVar8);
  lVar12 = *(long *)puVar3;
  if (lVar12 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(lVar8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar12 + lVar17) =
             *(uint *)(lVar12 + lVar17) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
      local_7b8 = *(undefined4 *)(lVar18 + 0x1ac);
      local_7b0 = (uint *)0x0;
      local_7b4 = *(undefined4 *)(lVar18 + 0x1b0);
      local_7c0 = PTR_DAT_04bc0510 + 0x10;
      lVar12 = *(long *)puVar3;
      uVar7 = FUN_0277d6c4(&local_7b8);
      if (*(long *)puVar3 == 0) {
LAB_00b911a0:
        uVar7 = 0;
        local_80c = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b911a0;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(lVar8);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar14 == (uint *)0x0)) goto LAB_00b911a0;
        local_80c = 0;
        uVar7 = *puVar14;
        if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
          local_80c = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (uVar1 < *(uint *)PTR_DAT_04bc0020) {
                  local_80c = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2);
                  if (0x5b5 < local_80c) {
                    local_80c = 0;
                  }
                  goto LAB_00b92358;
                }
              }
            }
            local_80c = 0;
          }
        }
LAB_00b92358:
        uVar7 = 0;
        uVar1 = *puVar14;
        local_7b0 = puVar14;
        if ((uVar1 != 0) && (puVar14 != (uint *)(ulong)uVar1)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
          uVar7 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
                   (uVar7 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
                   uVar7 < 0x5b6)) goto LAB_00b911ac;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_00b911ac:
      local_7c8[0] = 0;
      local_f80 = (undefined **)CONCAT44(local_f80._4_4_,uVar7);
      if (uVar7 != 0) {
        uVar7 = 0;
        local_f78 = &local_80c;
        local_f80 = &PTR_FUN_049ff858;
        do {
          (**(code **)(*param_1 + 0x10))(local_7c8,param_1,uVar7);
          lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
          uVar1 = 1 << (ulong)(uVar7 & 0x1f);
          if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
            lVar8 = *(long *)puVar3;
            uVar5 = FUN_0277d6c4(local_7c8);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
                 (uVar9 = (*(code *)*local_f80)(&local_f80,local_7c8), (uVar9 & 1) == 0))
              goto LAB_00b91208;
            }
            lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
            lVar12 = (ulong)(uVar7 >> 5) * 4;
            *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
          }
LAB_00b91208:
          uVar7 = uVar7 + 1;
        } while (uVar7 != 15000);
      }
      lVar12 = *(long *)puVar3;
    }
  }
  lVar8 = lVar18 + 0x1b4;
  uVar7 = FUN_0277d6c4(lVar8);
  lVar17 = *(long *)puVar3;
  if (lVar17 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(lVar8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar12 + lVar17) =
             *(uint *)(lVar12 + lVar17) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
      local_7b8 = *(undefined4 *)(lVar18 + 0x1b4);
      local_7b0 = (uint *)0x0;
      local_7b4 = *(undefined4 *)(lVar18 + 0x1b8);
      local_7c0 = PTR_DAT_04bc0510 + 0x10;
      lVar12 = *(long *)puVar3;
      uVar7 = FUN_0277d6c4(&local_7b8);
      if (*(long *)puVar3 == 0) {
LAB_00b91474:
        uVar7 = 0;
        local_80c = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b91474;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(lVar8);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar14 == (uint *)0x0)) goto LAB_00b91474;
        local_80c = 0;
        uVar7 = *puVar14;
        if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
          local_80c = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (uVar1 < *(uint *)PTR_DAT_04bc0020) {
                  local_80c = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2);
                  if (0x5b5 < local_80c) {
                    local_80c = 0;
                  }
                  goto LAB_00b923f4;
                }
              }
            }
            local_80c = 0;
          }
        }
LAB_00b923f4:
        uVar7 = 0;
        uVar1 = *puVar14;
        local_7b0 = puVar14;
        if ((uVar1 != 0) && (puVar14 != (uint *)(ulong)uVar1)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
          uVar7 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
                   (uVar7 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
                   uVar7 < 0x5b6)) goto LAB_00b91480;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_00b91480:
      local_7c8[0] = 0;
      local_f80 = (undefined **)CONCAT44(local_f80._4_4_,uVar7);
      if (uVar7 != 0) {
        uVar7 = 0;
        local_f78 = &local_80c;
        local_f80 = &PTR_FUN_049ff858;
        do {
          (**(code **)(*param_1 + 0x10))(local_7c8,param_1,uVar7);
          lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
          uVar1 = 1 << (ulong)(uVar7 & 0x1f);
          if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
            lVar8 = *(long *)puVar3;
            uVar5 = FUN_0277d6c4(local_7c8);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
                 (uVar9 = (*(code *)*local_f80)(&local_f80,local_7c8), (uVar9 & 1) == 0))
              goto LAB_00b914dc;
            }
            lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
            lVar12 = (ulong)(uVar7 >> 5) * 4;
            *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
          }
LAB_00b914dc:
          uVar7 = uVar7 + 1;
        } while (uVar7 != 15000);
      }
      lVar17 = *(long *)puVar3;
    }
  }
  lVar8 = lVar18 + 0x1bc;
  uVar7 = FUN_0277d6c4(lVar8);
  lVar12 = *(long *)puVar3;
  if (lVar12 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0277d6c4(lVar8);
      if ((uVar7 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
        *(uint *)(lVar12 + lVar17) =
             *(uint *)(lVar12 + lVar17) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
      local_7b8 = *(undefined4 *)(lVar18 + 0x1bc);
      local_7b0 = (uint *)0x0;
      local_7b4 = *(undefined4 *)(lVar18 + 0x1c0);
      local_7c0 = PTR_DAT_04bc0510 + 0x10;
      lVar12 = *(long *)puVar3;
      uVar7 = FUN_0277d6c4(&local_7b8);
      if (*(long *)puVar3 == 0) {
LAB_00b91748:
        uVar7 = 0;
        local_80c = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b91748;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(lVar8);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar14 == (uint *)0x0)) goto LAB_00b91748;
        local_80c = 0;
        uVar7 = *puVar14;
        if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
          local_80c = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (uVar1 < *(uint *)PTR_DAT_04bc0020) {
                  local_80c = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2);
                  if (0x5b5 < local_80c) {
                    local_80c = 0;
                  }
                  goto LAB_00b92490;
                }
              }
            }
            local_80c = 0;
          }
        }
LAB_00b92490:
        uVar7 = 0;
        uVar1 = *puVar14;
        local_7b0 = puVar14;
        if ((uVar1 != 0) && (puVar14 != (uint *)(ulong)uVar1)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
          uVar7 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
                   (uVar7 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
                   uVar7 < 0x5b6)) goto LAB_00b91754;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_00b91754:
      local_7c8[0] = 0;
      local_f80 = (undefined **)CONCAT44(local_f80._4_4_,uVar7);
      if (uVar7 != 0) {
        uVar7 = 0;
        local_f78 = &local_80c;
        local_f80 = &PTR_FUN_049ff858;
        do {
          (**(code **)(*param_1 + 0x10))(local_7c8,param_1,uVar7);
          lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
          uVar1 = 1 << (ulong)(uVar7 & 0x1f);
          if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
            lVar8 = *(long *)puVar3;
            uVar5 = FUN_0277d6c4(local_7c8);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
                 (uVar9 = (*(code *)*local_f80)(&local_f80,local_7c8), (uVar9 & 1) == 0))
              goto LAB_00b917b0;
            }
            lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
            lVar12 = (ulong)(uVar7 >> 5) * 4;
            *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
          }
LAB_00b917b0:
          uVar7 = uVar7 + 1;
        } while (uVar7 != 15000);
      }
      lVar12 = *(long *)puVar3;
    }
  }
  lVar8 = lVar18 + 0x1c4;
  uVar7 = FUN_0277d6c4(lVar8);
  if (*(long *)puVar3 == 0) goto LAB_00b91a3c;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b91a3c;
  lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar7 = FUN_0277d6c4(lVar8);
  if ((uVar7 >> 3 & 0x1fff) < 0x753) {
    lVar17 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
    *(uint *)(lVar12 + lVar17) =
         *(uint *)(lVar12 + lVar17) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
  }
  local_7b8 = *(undefined4 *)(lVar18 + 0x1c4);
  local_7b0 = (uint *)0x0;
  local_7b4 = *(undefined4 *)(lVar18 + 0x1c8);
  local_7c0 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = *(long *)puVar3;
  uVar7 = FUN_0277d6c4(&local_7b8);
  if (*(long *)puVar3 == 0) {
LAB_00b91a1c:
    uVar7 = 0;
    local_80c = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b91a1c;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(lVar8);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar14 == (uint *)0x0)) goto LAB_00b91a1c;
    local_80c = 0;
    uVar7 = *puVar14;
    if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      local_80c = 0;
      if (*puVar15 != 0) {
        uVar7 = puVar15[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
            }
            if (*puVar15 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (uVar1 < *(uint *)PTR_DAT_04bc0020) {
              local_80c = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2);
              if (0x5b5 < local_80c) {
                local_80c = 0;
              }
              goto LAB_00b9252c;
            }
          }
        }
        local_80c = 0;
      }
    }
LAB_00b9252c:
    uVar7 = 0;
    uVar1 = *puVar14;
    local_7b0 = puVar14;
    if ((uVar1 != 0) && (puVar14 != (uint *)(ulong)uVar1)) {
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
      uVar7 = 0;
      if (*puVar15 != 0) {
        uVar7 = puVar15[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar14 - lVar8) / (ulong)uVar7);
            }
            if (*puVar15 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0020) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar1 * 2),
               uVar7 < 0x5b6)) goto LAB_00b91a28;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_00b91a28:
  local_7c8[0] = 0;
  local_f80 = (undefined **)CONCAT44(local_f80._4_4_,uVar7);
  if (uVar7 != 0) {
    uVar7 = 0;
    local_f78 = &local_80c;
    local_f80 = &PTR_FUN_049ff858;
    do {
      (**(code **)(*param_1 + 0x10))(local_7c8,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(local_7c8);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,local_7c8), (uVar9 & 1) == 0))
          goto LAB_00b922b0;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b922b0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
LAB_00b91a3c:
  bVar4 = FUN_020fd7d8(param_7);
  iVar6 = *(int *)(param_5 + 0x18);
  local_7c8[0] = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  if (*param_3 == 0) {
    uVar7 = 0;
    local_f78 = local_7c8;
    local_f80 = &PTR_FUN_0493b2b0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_7c0,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,&local_7c0), (uVar9 & 1) != 0))
          goto LAB_00b91ba0;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91ba0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    local_6c[0] = iVar6 != 1;
    uVar7 = 0;
    local_80c = CONCAT31(local_80c._1_3_,bVar4 < 4);
    local_f78 = &local_80c;
    local_f80 = &PTR_FUN_0493b288;
    local_f70 = local_6c;
    do {
      (**(code **)(*param_1 + 0x10))(&local_7c0,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,&local_7c0), (uVar9 & 1) != 0))
          goto LAB_00b91e70;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91e70:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    FUN_026b5560(param_7,param_1,0);
    FUN_026b6010(param_7,param_1,param_5,0);
    FUN_026b64b0(param_7,param_1,param_5,0);
    FUN_026b69b0(param_7,param_1,param_5);
    FUN_026b6b40(param_7,param_1,param_5);
    if ((param_8 & 1) != 0) {
      FUN_0264a400(&local_f80,param_4);
      pvVar11 = (void *)(*(code *)local_f80[3])(&local_f80);
      for (lVar8 = 0; *(uint *)((long)local_7c8 + lVar8 + 8) = ~*(uint *)((long)pvVar11 + lVar8),
          lVar8 != 0x750; lVar8 = lVar8 + 8) {
        *(uint *)((long)local_7c8 + lVar8 + 0xc) = ~*(uint *)((long)pvVar11 + lVar8 + 4);
      }
      memcpy(pvVar11,&local_7c0,0x754);
      *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
      pvVar11 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
      lVar12 = (*(code *)local_f80[4])(&local_f80);
      for (lVar8 = 0;
          *(uint *)((long)local_7c8 + lVar8 + 8) =
               *(uint *)(lVar12 + lVar8) & *(uint *)((long)pvVar11 + lVar8), lVar8 != 0x750;
          lVar8 = lVar8 + 8) {
        *(uint *)((long)local_7c8 + lVar8 + 0xc) =
             *(uint *)(lVar12 + lVar8 + 4) & *(uint *)((long)pvVar11 + lVar8 + 4);
      }
      memcpy(pvVar11,&local_7c0,0x754);
      *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
    }
  }
  else if (*param_3 == 1) {
    uVar7 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_f80,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_f80);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_7e8[0])(local_7e8,&local_f80), (uVar9 & 1) == 0))
          goto LAB_00b91ab0;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91ab0:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    uVar7 = 0;
    local_f78 = local_7c8;
    local_f80 = &PTR_FUN_0493b2b0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_7c0,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,&local_7c0), (uVar9 & 1) != 0))
          goto LAB_00b91d60;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91d60:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    local_6c[0] = iVar6 != 1;
    uVar7 = 0;
    local_80c = CONCAT31(local_80c._1_3_,bVar4 < 4);
    local_f78 = &local_80c;
    local_f80 = &PTR_FUN_0493b288;
    local_f70 = local_6c;
    do {
      (**(code **)(*param_1 + 0x10))(&local_7c0,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_f80)(&local_f80,&local_7c0), (uVar9 & 1) != 0))
          goto LAB_00b91f80;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91f80:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
    FUN_026b5560(param_7,param_1,0);
    FUN_026b6010(param_7,param_1,param_5,0);
    FUN_026b64b0(param_7,param_1,param_5,0);
    FUN_026b69b0(param_7,param_1,param_5);
    FUN_026b6b40(param_7,param_1,param_5);
  }
  else {
    uVar7 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_f80,param_1,uVar7);
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar8 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(&local_f80);
        if (*(long *)puVar3 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar9 = (*(code *)*local_7e8[0])(local_7e8,&local_f80), (uVar9 & 1) == 0))
          goto LAB_00b91c74;
        }
        lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar8 + lVar12) = *(uint *)(lVar8 + lVar12) & (uVar1 ^ 0xffffffff);
      }
LAB_00b91c74:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
  lVar12 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar8 = 0;
  iVar6 = 0;
  do {
    puVar14 = (uint *)(lVar12 + lVar8);
    lVar8 = lVar8 + 4;
    uVar7 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
    uVar7 = uVar7 + (uVar7 >> 8);
    iVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar6;
  } while (lVar8 != 0x754);
  return iVar6 != 0;
}

