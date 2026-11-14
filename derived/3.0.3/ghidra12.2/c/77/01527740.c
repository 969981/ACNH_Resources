
void FUN_01527740(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *__src;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ushort *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined2 local_124 [2];
  undefined *local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 auStack_10c [2];
  undefined2 local_104;
  undefined1 local_8d;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  uint *local_78;
  uint local_6c;
  
  puVar2 = (undefined2 *)((long)param_1 + 0x129e);
  FUN_0073a490();
  *(undefined4 *)((long)param_1 + 0x12f4) = 0;
  puVar7 = PTR_DAT_04bc0510;
  puVar6 = PTR_DAT_04bb43c0;
  lVar17 = (long)param_1 + 0x129c;
  local_110 = 0;
  auStack_10c[0] = 0;
  local_120 = PTR_DAT_04bc0510 + 0x10;
  local_118 = *(undefined4 **)((long)param_1 + 0x129c);
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_118);
  if (*(long *)puVar6 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(lVar17);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
         (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8), lVar18 != 0)) {
        local_110 = (int)lVar18;
        auStack_10c[0] = (undefined4)((ulong)lVar18 >> 0x20);
      }
    }
  }
  iVar9 = FUN_0277d6c4(&local_118);
  if (((iVar9 == 0x1618) || (iVar9 = FUN_0277d6c4(&local_118), iVar9 == 0x315a)) ||
     (iVar9 = FUN_0277d6c4(&local_118), iVar9 == 0x3805)) {
    uVar10 = FUN_0277d6c4(lVar17);
    *(undefined4 *)((long)param_1 + 0x1404) = uVar10;
    FUN_01b01948(&local_88,&local_120);
    *(undefined2 *)((long)param_1 + 0x129c) = (undefined2)local_88;
    *puVar2 = local_88._2_2_;
    *(undefined4 *)(param_1 + 0x254) = local_88._4_4_;
    uVar8 = 1;
LAB_015278a0:
    *(uint *)(param_1 + 0x253) = *(uint *)(param_1 + 0x253) | uVar8;
  }
  else {
    iVar9 = FUN_0277d6c4(&local_118);
    if (iVar9 == 0x342f) {
      uVar10 = FUN_0277d6c4(lVar17);
      *(undefined4 *)(param_1 + 0x281) = uVar10;
      FUN_01b01dfc(&local_88,&local_120);
      *(undefined2 *)((long)param_1 + 0x129c) = (undefined2)local_88;
      *puVar2 = local_88._2_2_;
      *(undefined4 *)(param_1 + 0x254) = local_88._4_4_;
      uVar8 = 0x100;
      goto LAB_015278a0;
    }
    uVar14 = FUN_01b0b03c(&local_120);
    if ((uVar14 & 1) != 0) {
      uVar10 = FUN_0277d6c4(lVar17);
      *(undefined4 *)((long)param_1 + 0x140c) = uVar10;
      FUN_01b0b124(&local_88,&local_120);
      *(undefined2 *)((long)param_1 + 0x129c) = (undefined2)local_88;
      *puVar2 = local_88._2_2_;
      *(undefined4 *)(param_1 + 0x254) = local_88._4_4_;
      uVar8 = 0x400;
      goto LAB_015278a0;
    }
  }
  lVar18 = *(long *)puVar6;
  uVar8 = FUN_0277d6c4(lVar17);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) {
    return;
  }
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if (*(uint *)(lVar18 + 0x1d8) <= uVar8) {
    return;
  }
  if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return;
  }
  local_88 = puVar7 + 0x10;
  local_80 = *(undefined2 *)((long)param_1 + 0x129c);
  local_7e = *puVar2;
  local_7c = (undefined4)param_1[0x254];
  local_78 = (uint *)0x0;
  uVar8 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar6 != 0) {
    lVar18 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(lVar17);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (uVar8 < *(uint *)(lVar18 + 0x1d8)) {
        puVar16 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8);
        if (puVar16 != (uint *)0x0) {
          local_78 = puVar16;
        }
      }
    }
  }
  iVar9 = FUN_01afcfa0(&local_88);
  if (((iVar9 == 0) || (puVar11 = (ushort *)FUN_01afd600(&local_88), puVar11 == (ushort *)0x0)) ||
     ((*puVar11 & 0x18) != 0x10)) {
    uVar14 = FUN_01ae89e0(&local_88);
    if ((uVar14 & 1) == 0) {
      local_120 = (undefined *)CONCAT44(local_120._4_4_,0xac);
      if (local_78 == (uint *)0x0) {
        local_6c = 0xbc;
      }
      else {
        uVar8 = *local_78;
        local_6c = 0;
        if ((uVar8 != 0) && (local_78 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)local_78 - (long)(ulong)uVar8);
          local_6c = 0;
          if (*puVar16 != 0) {
            uVar8 = puVar16[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar18 != 0) {
                uVar3 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar3 = (uint)((ulong)((long)local_78 - lVar18) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_6c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   local_6c < 0xbd)) goto LAB_01527ce8;
              }
            }
            local_6c = 0;
          }
        }
      }
LAB_01527ce8:
      if (local_6c != 0xac) goto LAB_0152800c;
      pcVar15 = "mTops_Alb";
      local_110 = 0x80;
      local_8d = 0;
      local_104 = 0x62;
      auStack_10c[0] = s_mTops_Alb_040e9890._0_4_;
      auStack_10c[1] = s_mTops_Alb_040e9890._4_4_;
      local_120 = PTR_DAT_04bb2d88 + 0x10;
      local_118 = auStack_10c;
      local_6c = FUN_01ad78cc(&local_88);
      if (local_6c == 3) {
LAB_01527d60:
        FUN_038d1270(&local_120,pcVar15);
      }
      else if (local_6c == 1) {
        pcVar15 = "mCap_Alb";
        goto LAB_01527d60;
      }
      lVar18 = param_1[9];
      lVar19 = *(long *)PTR_DAT_04bb2698;
      if (lVar19 == 0) {
        plVar13 = malloc(0x308);
      }
      else {
        plVar13 = param_3;
        if (param_3 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar19 + 8);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x0;
            goto LAB_01527dd8;
          }
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x308,8);
      }
LAB_01527dd8:
      FUN_007599d4(plVar13,lVar17,&local_120,0);
      if ((*(uint *)(lVar18 + 0x248) >> 0xc & 1) == 0) goto LAB_0152800c;
      puVar16 = (uint *)(lVar18 + 0x248);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar5) {
          *puVar16 = *puVar16 & 0xfffff7ff | 0x800;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_006f9fc0(lVar18,plVar13,0xffffffff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar5) {
          *puVar16 = *puVar16 & 0xfffff7ff;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (((local_78 != (uint *)0x0) && (uVar8 = *local_78, uVar8 != 0)) &&
         (local_78 != (uint *)(ulong)uVar8)) {
        puVar16 = (uint *)((long)local_78 - (long)(ulong)uVar8);
        if (((*puVar16 != 0) && (uVar8 = puVar16[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)local_78 - lVar18) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 7)) {
              lVar18 = param_1[9];
              lVar19 = *(long *)PTR_DAT_04bb2698;
              if (lVar19 == 0) {
                plVar13 = malloc(0x308);
              }
              else {
                plVar13 = param_3;
                if (param_3 == (long *)0x0) {
                  lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar13 = (long *)(lVar19 + 8);
                  if (lVar12 != 0) {
                    plVar13 = (long *)(lVar12 + 0xa8);
                  }
                  plVar13 = (long *)*plVar13;
                  if (plVar13 == (long *)0x0) {
                    plVar13 = (long *)0x0;
                    goto LAB_01528134;
                  }
                }
                plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x308,8);
              }
LAB_01528134:
              FUN_007599d4(plVar13,lVar17,&DAT_0520f178,0);
              if ((*(uint *)(lVar18 + 0x248) >> 0xc & 1) == 0) goto LAB_0152800c;
              puVar16 = (uint *)(lVar18 + 0x248);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar5) {
                  *puVar16 = *puVar16 & 0xfffff7ff | 0x800;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              FUN_006f9fc0(lVar18,plVar13,0xffffffff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                if (bVar5) {
                  *puVar16 = *puVar16 & 0xfffff7ff;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_01527ff4;
            }
          }
        }
      }
      local_8d = 0;
      local_110 = 0x80;
      local_120 = PTR_DAT_04bb2e90 + 0x10;
      local_118 = auStack_10c;
      (**(code **)(DAT_0520f168 + 0x18))(&DAT_0520f168);
      __src = DAT_0520f170;
      if (auStack_10c != DAT_0520f170) {
        (**(code **)(DAT_0520f168 + 0x18))(&DAT_0520f168);
        lVar18 = 0;
        do {
          if (*(char *)((long)DAT_0520f170 + lVar18) == '\0') goto LAB_01527eb4;
          if (*(char *)((long)DAT_0520f170 + lVar18 + 1) == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_01527eb4;
          }
          if (*(char *)((long)DAT_0520f170 + lVar18 + 2) == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_01527eb4;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_01527eb4:
        iVar9 = (int)lVar18;
        if (local_110 <= (int)lVar18) {
          iVar9 = local_110 + -1;
        }
        memcpy(auStack_10c,__src,(long)iVar9);
        *(undefined1 *)((long)auStack_10c + (long)iVar9) = 0;
      }
      local_120 = PTR_DAT_04bb2d88 + 0x10;
      local_6c = FUN_01ad78cc(&local_88);
      if (local_6c == 0xc) {
        pcVar15 = "mUmbrella_Alb";
LAB_01527f28:
        FUN_038d1270(&local_120,pcVar15);
      }
      else if ((local_6c == 0x47) || (local_6c == 0x1b)) {
        pcVar15 = "mTool_Alb";
        goto LAB_01527f28;
      }
      lVar18 = param_1[9];
      lVar19 = *(long *)PTR_DAT_04bb2698;
      if (lVar19 == 0) {
        plVar13 = malloc(0x308);
      }
      else {
        plVar13 = param_3;
        if (param_3 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar19 + 8);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x0;
            goto LAB_01527f9c;
          }
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x308,8);
      }
LAB_01527f9c:
      FUN_007599d4(plVar13,lVar17,&local_120,0);
      if ((*(uint *)(lVar18 + 0x248) >> 0xc & 1) == 0) goto LAB_0152800c;
      puVar16 = (uint *)(lVar18 + 0x248);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar5) {
          *puVar16 = *puVar16 & 0xfffff7ff | 0x800;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_006f9fc0(lVar18,plVar13,0xffffffff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar5) {
          *puVar16 = *puVar16 & 0xfffff7ff;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    lVar18 = param_1[9];
    lVar19 = *(long *)PTR_DAT_04bb2698;
    if (lVar19 == 0) {
      plVar13 = malloc(0x308);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar19 + 8);
        if (lVar12 != 0) {
          plVar13 = (long *)(lVar12 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          goto LAB_01527e44;
        }
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x308,8);
    }
LAB_01527e44:
    FUN_007599d4(plVar13,lVar17,&DAT_0520f168,0);
    if ((*(uint *)(lVar18 + 0x248) >> 0xc & 1) == 0) goto LAB_0152800c;
    puVar16 = (uint *)(lVar18 + 0x248);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
      if (bVar5) {
        *puVar16 = *puVar16 & 0xfffff7ff | 0x800;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_006f9fc0(lVar18,plVar13,0xffffffff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
      if (bVar5) {
        *puVar16 = *puVar16 & 0xfffff7ff;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_01527ff4:
  (**(code **)(*plVar13 + 0x38))(plVar13,lVar18 + 0x158,*(undefined8 *)(lVar18 + 0x240));
LAB_0152800c:
  puVar7 = PTR_DAT_04bb3718;
  puVar6 = PTR_DAT_04bb3710;
  if ((short)param_1[0x280] != *(short *)PTR_DAT_04bb3170) {
    lVar17 = param_1[9];
    if (*(long *)(lVar17 + 0xb0) != lVar17 + 0xa8) {
      lVar18 = (long)*(int *)(lVar17 + 0xbc);
      plVar13 = (long *)(*(long *)(lVar17 + 0xb0) - lVar18);
      puVar1 = PTR_DAT_04bb2e38 + 0x10;
      do {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(puVar7);
        }
        if ((plVar13 != (long *)0x0) &&
           (uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar6), (uVar14 & 1) != 0)) {
          FUN_007ef010(local_124,param_1 + 0x280);
          *(undefined2 *)(plVar13 + 0x54) = local_124[0];
          break;
        }
        plVar13 = (long *)(*(long *)((long)plVar13 + lVar18 + 8) - lVar18);
      } while (plVar13 != (long *)((lVar17 + 0xa8) - lVar18));
    }
  }
  (**(code **)(*param_1 + 0x210))(param_1,param_3);
  return;
}

