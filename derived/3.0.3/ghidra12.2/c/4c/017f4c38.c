
/* WARNING: Removing unreachable block (ram,0x017f5134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017f4c38(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *local_1188;
  long local_1180;
  undefined1 local_1178;
  byte local_1177;
  undefined8 local_1170;
  char *local_1168;
  undefined1 local_1160;
  byte local_115f;
  undefined1 auStack_660 [1416];
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined4 local_c4;
  undefined8 local_c0;
  byte local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  lVar11 = *(long *)PTR_DAT_04bb2720;
  local_68 = param_2;
  local_64 = param_3;
  if (lVar11 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar11 + 0x338));
      iVar5 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar17 + 7) == param_2) && (DAT_05292338 != 0)) {
    if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
      lVar11 = DAT_05292338 + 0xe78;
    }
    else {
      lVar11 = DAT_05292338 + 0xe78;
      if (*(int *)(DAT_05292338 + 0xea0) == param_3) {
        lVar11 = DAT_05292338 + 0xe9c;
      }
    }
    local_1170._0_4_ = param_3;
    FUN_007ef010(&local_1188,lVar11);
    local_1170 = (undefined **)CONCAT44(local_1170._4_4_,param_3);
    if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
      piVar15 = (int *)(DAT_05292338 + 0xf90);
    }
    else {
      piVar15 = (int *)(DAT_05292338 + 0xf90);
      if (*(int *)(DAT_05292338 + 0xea0) == param_3) {
        piVar15 = (int *)(DAT_05292338 + 0xf9c);
      }
    }
    if (*piVar15 != -1 || (short)local_1188 != *(short *)PTR_DAT_04bb3170) {
      *param_1 = 0x2aa6;
      FUN_0277d4ac(param_1);
      return;
    }
    if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
      puVar13 = (undefined2 *)(DAT_05292338 + 0xe70);
    }
    else {
      puVar13 = (undefined2 *)(DAT_05292338 + 0xe70);
      if (*(int *)(DAT_05292338 + 0xea0) == param_3) {
        puVar13 = (undefined2 *)(DAT_05292338 + 0xe94);
      }
    }
    *(undefined2 *)param_1 = *puVar13;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar13 + 2);
    return;
  }
  uVar9 = FUN_017f37d0(param_2);
  if ((uVar9 & 1) == 0) {
    if (0x427decd < param_2) {
      if (param_2 < 0x4d702d55) {
        if (param_2 < 0x16f2dadc) {
          if (param_2 != 0x427dece) {
            iVar5 = 0xe716ff8;
            goto LAB_017f5054;
          }
        }
        else if ((param_2 != 0x16f2dadc) && (param_2 != 0x1d096e7d)) {
          iVar5 = 0x28c45759;
          goto LAB_017f5054;
        }
      }
      else if (param_2 < 0x72a13146) {
        if (param_2 != 0x4d702d55) {
          iVar5 = 0x60c2c4f0;
          goto LAB_017f5054;
        }
      }
      else if ((param_2 != 0x72a13146) && (param_2 != 0x7c939885)) {
        iVar5 = 0x77870a84;
        goto LAB_017f5054;
      }
      goto LAB_017f505c;
    }
    if (param_2 < -0x196792d8) {
      if (param_2 < -0x66cc4d79) {
        if (param_2 != -0x7b521843) {
          iVar5 = -0x74337aab;
          goto LAB_017f5054;
        }
      }
      else if ((param_2 != -0x66cc4d79) && (param_2 != -0x4772f804)) {
        iVar5 = -0x4701dc58;
        goto LAB_017f5054;
      }
    }
    else if (param_2 < -0xbf1cc08) {
      if (param_2 != -0x196792d8) {
        iVar5 = -0x11f68f68;
        goto LAB_017f5054;
      }
    }
    else if ((param_2 != -0xbf1cc08) && (param_2 != 0x5f6c88)) {
      iVar5 = 0x1ac1236;
LAB_017f5054:
      if (param_2 != iVar5) {
        if (param_2 < 0x2922957e) {
          if (param_2 < 0x80e20d8) {
            if (((param_2 != -0x11ea17dc) && (param_2 != -0x917edf9)) && (param_2 != -0x8fb780d))
            goto LAB_017f5c2c;
            goto LAB_017f56e0;
          }
          if (((param_2 != 0x80e20d8) && (param_2 != 0xb6a5301)) && (param_2 != 0x1490248c))
          goto LAB_017f5c2c;
LAB_017f5758:
          uVar6 = FUN_017f4660(&local_68);
          local_1170 = (undefined **)CONCAT44(local_1170._4_4_,uVar6);
          lVar11 = FUN_02643020();
          if (lVar11 == 0) goto LAB_017f5c2c;
          local_1160 = 1;
          lVar14 = lVar11 + 0xe0 + ((ulong)local_1170 & 0xffffffff) * 0x2488;
          if (5 < (uint)local_1170) {
            lVar14 = lVar11 + 0xe0;
          }
          local_1168 = (char *)(lVar14 + 0x1ea0);
          if (*(long **)(lVar14 + 0x1ec8) == (long *)0x0) {
            local_115f = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar14 + 0x1ec8);
            local_115f = 0;
            if (puVar17 != (undefined8 *)0x0) {
              local_115f = (**(code **)*puVar17)();
            }
          }
          local_115f = local_115f & 1;
          local_1180 = lVar14 + 0x2220;
          local_1178 = 1;
          local_1170 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
          if (*(long **)(lVar14 + 0x2248) == (long *)0x0) {
            local_1177 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar14 + 0x2248);
            local_1177 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              local_1177 = (**(code **)*puVar17)();
            }
          }
          local_1177 = local_1177 & 1;
          local_1188 = PTR_DAT_04bbc500 + 0x10;
          puVar13 = (undefined2 *)(*(long *)(lVar14 + 0x1eb0) + *(long *)(lVar14 + 0x1ea8));
          local_6c = (int)*(char *)(puVar13 + 0xf);
          if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != local_6c)) {
            if ((puVar13[0xd] == DAT_04cb6038) &&
               (*(short *)(*(long *)(lVar14 + 0x2230) + *(long *)(lVar14 + 0x2228) + 0xc) == 0)) {
LAB_017f60f4:
              *(undefined2 *)param_1 = puVar13[4];
              *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
              uVar6 = *(undefined4 *)(puVar13 + 6);
              goto LAB_017f6110;
            }
          }
          else if ((puVar13[0xc] == DAT_04cb6038) &&
                  (*(short *)(*(long *)(lVar14 + 0x2230) + *(long *)(lVar14 + 0x2228) + 0xe) == 0))
          goto LAB_017f60a8;
LAB_017f6118:
          *param_1 = 0x2aa6;
          FUN_0277d4ac(param_1);
        }
        else {
          if (0x65b7732c < param_2) {
            if (param_2 == 0x65b7732d) goto LAB_017f56e0;
            if (param_2 != 0x7a616e2f) {
              iVar5 = 0x6c9ebc71;
              goto LAB_017f56d8;
            }
            goto LAB_017f5758;
          }
          if ((param_2 == 0x2922957e) || (param_2 == 0x51b9e069)) goto LAB_017f5758;
          iVar5 = 0x6168e44d;
LAB_017f56d8:
          if (param_2 != iVar5) goto LAB_017f5c2c;
LAB_017f56e0:
          uVar9 = FUN_01810f30();
          if ((((uVar9 & 1) == 0) || (lVar11 = FUN_029156e0(), param_2 != -0x8fb780d)) ||
             (*(int *)(lVar11 + 0x38) != -0x8fb780d)) {
            if ((DAT_05574040 == 0) || (lVar11 = FUN_026f480c(), lVar11 == 0)) goto LAB_017f5c2c;
            uVar9 = FUN_017f4660(&local_68);
            lVar11 = lVar11 + (uVar9 & 0xffffffff) * 0x2488;
            local_1160 = 1;
            local_1168 = (char *)(lVar11 + 0x1fb8);
            if (*(long **)(lVar11 + 0x1fe0) == (long *)0x0) {
              local_115f = 0;
            }
            else {
              puVar17 = (undefined8 *)**(long **)(lVar11 + 0x1fe0);
              local_115f = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_115f = (**(code **)*puVar17)();
              }
            }
            local_115f = local_115f & 1;
            local_1178 = 1;
            local_1170 = &PTR_FUN_04917240;
            local_1180 = lVar11 + 0x2338;
            if (*(long **)(lVar11 + 0x2360) == (long *)0x0) {
              local_1177 = 0;
            }
            else {
              puVar17 = (undefined8 *)**(long **)(lVar11 + 0x2360);
              local_1177 = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_1177 = (**(code **)*puVar17)();
              }
            }
            local_1177 = local_1177 & 1;
            local_1188 = PTR_DAT_04bbc500 + 0x10;
            puVar13 = (undefined2 *)(*(long *)(lVar11 + 0x1fc8) + *(long *)(lVar11 + 0x1fc0));
            local_6c = (int)*(char *)(puVar13 + 0xf);
            if (((*(byte *)(puVar13 + 0x10) & 1) != 0) && (local_64 == local_6c)) {
              lVar14 = *(long *)(lVar11 + 0x2340);
              lVar11 = *(long *)(lVar11 + 0x2348);
              goto LAB_017f6084;
            }
            lVar14 = *(long *)(lVar11 + 0x2340);
            lVar11 = *(long *)(lVar11 + 0x2348);
LAB_017f60d0:
            if ((*(short *)(lVar11 + lVar14 + 0xc) == 0) && (puVar13[0xd] == DAT_04cb6038))
            goto LAB_017f60f4;
            goto LAB_017f6118;
          }
          if ((DAT_05574040 == 0) || (lVar11 = FUN_026f480c(), lVar11 == 0)) goto LAB_017f5c2c;
          local_1160 = 1;
          local_1168 = (char *)(lVar11 + 0xfae8);
          if (*(long **)(lVar11 + 0xfb10) == (long *)0x0) {
            local_115f = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar11 + 0xfb10);
            local_115f = 0;
            if (puVar17 != (undefined8 *)0x0) {
              local_115f = (**(code **)*puVar17)();
            }
          }
          local_115f = local_115f & 1;
          local_1178 = 1;
          local_1170 = &PTR_FUN_04917240;
          local_1180 = lVar11 + 0xfe68;
          if (*(long **)(lVar11 + 0xfe90) == (long *)0x0) {
            local_1177 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar11 + 0xfe90);
            local_1177 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              local_1177 = (**(code **)*puVar17)();
            }
          }
          local_1177 = local_1177 & 1;
          local_1188 = PTR_DAT_04bbc500 + 0x10;
          puVar13 = (undefined2 *)(*(long *)(lVar11 + 0xfaf8) + *(long *)(lVar11 + 0xfaf0));
          local_6c = (int)*(char *)(puVar13 + 0xf);
          if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != local_6c)) {
            lVar14 = *(long *)(lVar11 + 0xfe70);
            lVar11 = *(long *)(lVar11 + 0xfe78);
            goto LAB_017f60d0;
          }
          lVar14 = *(long *)(lVar11 + 0xfe70);
          lVar11 = *(long *)(lVar11 + 0xfe78);
LAB_017f6084:
          if ((*(short *)(lVar11 + lVar14 + 0xe) != 0) || (puVar13[0xc] != DAT_04cb6038))
          goto LAB_017f6118;
LAB_017f60a8:
          *(undefined2 *)param_1 = *puVar13;
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
          uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f6110:
          *(undefined4 *)((long)param_1 + 4) = uVar6;
        }
        FUN_02640184(&local_1188);
        FUN_02640184(&local_1170);
        return;
      }
    }
LAB_017f505c:
    uVar6 = FUN_017e4f94(param_2);
    local_1170 = (undefined **)CONCAT44(local_1170._4_4_,uVar6);
    if (DAT_05574040 == 0) goto LAB_017f5c2c;
    puVar17 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar17 + 0x38))();
      if (lVar11 == 0) goto LAB_017f5c2c;
      lVar11 = lVar11 + 0x70;
    }
    else if (((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) ||
            (lVar11 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar11 == 0))
    goto LAB_017f5c2c;
    if (9 < (uint)local_1170) goto LAB_017f5c2c;
    lVar14 = lVar11 + 0x1962d8 + ((ulong)local_1170 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_1170) {
      lVar14 = lVar11 + 0x1962d8;
    }
    if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar17 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar17)();
      uVar9 = uVar9 & 0xffffffff;
    }
    cVar4 = *(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x1c4);
    local_1170 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_1168 = "NpcInteriorCoordinate";
    local_6c = (int)cVar4;
    iVar5 = FUN_02743000(&local_1170);
    lVar11 = DAT_053d2ea8;
    uVar7 = (uint)cVar4;
    if (iVar5 == 0) {
      uVar10 = FUN_02663fa0(&local_6c);
      if ((uVar10 & 1) != 0) {
        local_1188 = (undefined *)((ulong)local_1188 & 0xffffffff00000000);
        uVar10 = FUN_02b67a30(&local_1188,uVar7);
        if ((uVar10 & 1) != 0) {
          local_1170 = (undefined **)CONCAT44(local_1170._4_4_,(uint)local_1188);
          if (DAT_05574040 != 0) {
            puVar17 = *(undefined8 **)(DAT_05574040 + 0x10);
            if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
              if (((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) ||
                 (lVar11 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar11 == 0))
              goto LAB_017f5c0c;
LAB_017f5c00:
              if (9 < (uint)local_1170) goto LAB_017f5c0c;
              lVar12 = lVar11 + 0x1962d8 + ((ulong)local_1170 & 0xffffffff) * 0x10d8;
              if (9 < (uint)local_1170) {
                lVar12 = lVar11 + 0x1962d8;
              }
              if ((*(long **)(lVar12 + 0x990) == (long *)0x0) ||
                 (puVar17 = (undefined8 *)**(long **)(lVar12 + 0x990), puVar17 == (undefined8 *)0x0)
                 ) {
                uVar7 = 1;
              }
              else {
                uVar7 = (**(code **)*puVar17)();
                uVar7 = uVar7 ^ 1;
              }
              if ((*(long **)(lVar12 + 0xbc0) == (long *)0x0) ||
                 (puVar17 = (undefined8 *)**(long **)(lVar12 + 0xbc0), puVar17 == (undefined8 *)0x0)
                 ) {
                uVar8 = 1;
              }
              else {
                uVar8 = (**(code **)*puVar17)();
                uVar8 = uVar8 ^ 1;
              }
              puVar13 = (undefined2 *)(*(long *)(lVar12 + 0x978) + *(long *)(lVar12 + 0x970));
              local_1170 = (undefined **)CONCAT44(local_1170._4_4_,(int)*(char *)(puVar13 + 0xf));
              if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf)))
              {
                if ((*(short *)(*(long *)(lVar12 + 0xba8) + *(long *)(lVar12 + 0xba0) + 0xc) == 0)
                   && (puVar13[0xd] == DAT_04cb6038)) {
                  *(undefined2 *)param_1 = puVar13[4];
                  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
                  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
                  uVar6 = *(undefined4 *)(puVar13 + 6);
                  goto LAB_017f5fa4;
                }
LAB_017f5fac:
                *param_1 = 0x2aa6;
                FUN_0277d4ac(param_1);
              }
              else {
                if ((*(short *)(*(long *)(lVar12 + 0xba8) + *(long *)(lVar12 + 0xba0) + 0xe) != 0)
                   || (puVar13[0xc] != DAT_04cb6038)) goto LAB_017f5fac;
                *(undefined2 *)param_1 = *puVar13;
                *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
                *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
                uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f5fa4:
                *(undefined4 *)((long)param_1 + 4) = uVar6;
              }
              if ((((uVar8 & 1) == 0) && (*(long *)(lVar12 + 0xbc0) != 0)) &&
                 (puVar17 = *(undefined8 **)(*(long *)(lVar12 + 0xbc0) + 8),
                 puVar17 != (undefined8 *)0x0)) {
                (**(code **)*puVar17)();
              }
              if (((uVar7 & 1) != 0) || (lVar11 = *(long *)(lVar12 + 0x990), lVar11 == 0))
              goto LAB_017f5e54;
              goto LAB_017f58d8;
            }
            lVar11 = (**(code **)(*(long *)*puVar17 + 0x38))();
            if (lVar11 != 0) {
              lVar11 = lVar11 + 0x70;
              goto LAB_017f5c00;
            }
          }
        }
        goto LAB_017f5c0c;
      }
      lVar11 = FUN_0265c3e0((int)cVar4);
      if (lVar11 == 0) goto LAB_017f5c0c;
      if ((*(long **)(lVar11 + 0xf950) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar11 + 0xf950), puVar17 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar17)();
        uVar7 = uVar7 ^ 1;
      }
      puVar13 = (undefined2 *)(*(long *)(lVar11 + 0xf938) + *(long *)(lVar11 + 0xf930));
      local_1170 = (undefined **)CONCAT44(local_1170._4_4_,(int)*(char *)(puVar13 + 0xf));
      if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf))) {
        if (puVar13[0xd] == DAT_04cb6038) {
          *(undefined2 *)param_1 = puVar13[4];
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
          uVar6 = *(undefined4 *)(puVar13 + 6);
          goto LAB_017f58b4;
        }
LAB_017f58bc:
        *param_1 = 0x2aa6;
        FUN_0277d4ac(param_1);
      }
      else {
        if (puVar13[0xc] != DAT_04cb6038) goto LAB_017f58bc;
        *(undefined2 *)param_1 = *puVar13;
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
        uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f58b4:
        *(undefined4 *)((long)param_1 + 4) = uVar6;
      }
      if (((uVar7 & 1) == 0) && (lVar11 = *(long *)(lVar11 + 0xf950), lVar11 != 0)) {
LAB_017f58d8:
        if (*(undefined8 **)(lVar11 + 8) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar11 + 8))();
        }
      }
    }
    else {
      if (DAT_04c487d0 != -1) {
        local_1170 = (undefined **)CONCAT44(local_1170._4_4_,0x1d);
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
        if (0xff < (uint)(int)DAT_04c487d0) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar3 >> 0x1d & 1) != 0) {
          if (DAT_053d2ea8 == 0) goto LAB_017f5c0c;
          puVar13 = (undefined2 *)(DAT_053d2ea8 + 0x261c);
          lVar12 = 0;
          do {
            lVar2 = DAT_053d2ea8 + lVar12;
            *(undefined2 *)((long)&local_1170 + lVar12) = *(undefined2 *)(lVar2 + 0x1584);
            *(undefined1 *)((long)&local_1170 + lVar12 + 2) =
                 *(undefined1 *)(DAT_053d2ea8 + 0x1586 + lVar12);
            lVar1 = lVar12 + 0xc;
            *(undefined1 *)((long)&local_1170 + lVar12 + 3) =
                 *(undefined1 *)(DAT_053d2ea8 + 0x1587 + lVar12);
            *(undefined4 *)((long)&local_1170 + lVar12 + 4) = *(undefined4 *)(lVar2 + 0x1588);
            *(undefined4 *)((long)&local_1168 + lVar12) = *(undefined4 *)(lVar2 + 0x158c);
            lVar12 = lVar1;
          } while (lVar1 != 0xb10);
          memcpy(auStack_660,(void *)(DAT_053d2ea8 + 0x2094),0x588);
          local_d8 = *puVar13;
          local_d4 = *(undefined4 *)(lVar11 + 0x2620);
          local_cc = *(undefined4 *)(lVar11 + 0x2628);
          local_b8 = *(byte *)(lVar11 + 0x263c);
          local_d6 = *(undefined1 *)(lVar11 + 0x261e);
          local_d5 = *(undefined1 *)(lVar11 + 0x261f);
          local_d0 = *(undefined2 *)(lVar11 + 0x2624);
          local_ce = *(undefined1 *)(lVar11 + 0x2626);
          local_cd = *(undefined1 *)(lVar11 + 0x2627);
          local_c8 = *(undefined2 *)(lVar11 + 0x262c);
          local_c6 = *(undefined2 *)(lVar11 + 0x262e);
          local_b4 = *(undefined8 *)(lVar11 + 0x2640);
          uStack_ac = *(undefined8 *)(lVar11 + 0x2648);
          local_88 = *(undefined8 *)(lVar11 + 0x266c);
          local_c4 = *(undefined4 *)(lVar11 + 0x2630);
          uVar16 = *(undefined8 *)(lVar11 + 0x2634);
          local_a4 = *(undefined4 *)(lVar11 + 0x2650);
          local_a0 = *(undefined2 *)(lVar11 + 0x2654);
          local_9e = *(undefined1 *)(lVar11 + 0x2656);
          local_9c = *(undefined4 *)(lVar11 + 0x2658);
          local_9d = *(undefined1 *)(lVar11 + 0x2657);
          local_98 = *(undefined2 *)(lVar11 + 0x265c);
          local_94 = *(undefined4 *)(lVar11 + 0x2660);
          local_96 = *(undefined2 *)(lVar11 + 0x265e);
          local_c0._6_1_ = (char)((ulong)uVar16 >> 0x30);
          local_70 = *(undefined1 *)(lVar11 + 0x2684);
          local_1188 = (undefined *)CONCAT44(local_1188._4_4_,(int)local_c0._6_1_);
          local_90 = *(undefined8 *)(lVar11 + 0x2664);
          local_80 = *(undefined8 *)(lVar11 + 0x2674);
          local_78 = *(undefined8 *)(lVar11 + 0x267c);
          local_c0 = uVar16;
          if (((local_b8 & 1) == 0) || (local_64 != local_c0._6_1_)) {
            uStack_ac._4_2_ = (short)((ulong)uStack_ac >> 0x20);
            if ((uStack_ac._4_2_ != 0) ||
               (local_c0._2_2_ = (short)((ulong)uVar16 >> 0x10), local_c0._2_2_ != DAT_04cb6038))
            goto LAB_017f5a18;
            *(undefined2 *)param_1 = local_d0;
            *(undefined1 *)((long)param_1 + 2) = local_ce;
            *(undefined1 *)((long)param_1 + 3) = local_cd;
            *(undefined4 *)((long)param_1 + 4) = local_cc;
          }
          else {
            uStack_ac._6_2_ = (short)((ulong)uStack_ac >> 0x30);
            if ((uStack_ac._6_2_ == 0) &&
               (local_c0._0_2_ = (short)uVar16, (short)local_c0 == DAT_04cb6038)) {
              *(undefined2 *)param_1 = local_d8;
              *(undefined1 *)((long)param_1 + 2) = local_d6;
              *(undefined1 *)((long)param_1 + 3) = local_d5;
              *(undefined4 *)((long)param_1 + 4) = local_d4;
            }
            else {
LAB_017f5a18:
              *param_1 = 0x2aa6;
              FUN_0277d4ac(param_1);
            }
          }
          goto LAB_017f5e54;
        }
      }
      uVar10 = FUN_02660600(uVar7);
      if ((uVar10 & 1) == 0) {
        uVar10 = FUN_02663fa0(&local_6c);
        if ((uVar10 & 1) == 0) {
          lVar11 = FUN_0265c3e0(uVar7);
          if (lVar11 != 0) {
            local_1168 = (char *)(lVar11 + 0xf928);
            local_1160 = 1;
            if (*(long **)(lVar11 + 0xf950) == (long *)0x0) {
              local_115f = 0;
            }
            else {
              puVar17 = (undefined8 *)**(long **)(lVar11 + 0xf950);
              local_115f = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_115f = (**(code **)*puVar17)();
              }
            }
            local_115f = local_115f & 1;
            local_1170 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
            puVar13 = (undefined2 *)(*(long *)(lVar11 + 0xf938) + *(long *)(lVar11 + 0xf930));
            local_1188 = (undefined *)CONCAT44(local_1188._4_4_,(int)*(char *)(puVar13 + 0xf));
            if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf))) {
              if (puVar13[0xd] == DAT_04cb6038) {
                *(undefined2 *)param_1 = puVar13[4];
                *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
                *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
                uVar6 = *(undefined4 *)(puVar13 + 6);
                goto LAB_017f5b24;
              }
LAB_017f5b2c:
              *param_1 = 0x2aa6;
              FUN_0277d4ac(param_1);
            }
            else {
              if (puVar13[0xc] != DAT_04cb6038) goto LAB_017f5b2c;
              *(undefined2 *)param_1 = *puVar13;
              *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
              uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f5b24:
              *(undefined4 *)((long)param_1 + 4) = uVar6;
            }
            goto LAB_017f5e4c;
          }
        }
        else {
          lVar11 = FUN_02663ee0(&local_6c);
          if (lVar11 != 0) {
            local_1168 = (char *)(lVar11 + 0x118);
            local_1160 = 1;
            if (*(long **)(lVar11 + 0x140) == (long *)0x0) {
              local_115f = 0;
            }
            else {
              puVar17 = (undefined8 *)**(long **)(lVar11 + 0x140);
              local_115f = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_115f = (**(code **)*puVar17)();
              }
            }
            local_115f = local_115f & 1;
            local_1180 = lVar11 + 0x348;
            local_1178 = 1;
            local_1170 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
            if (*(long **)(lVar11 + 0x370) == (long *)0x0) {
              local_1177 = 0;
            }
            else {
              puVar17 = (undefined8 *)**(long **)(lVar11 + 0x370);
              local_1177 = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_1177 = (**(code **)*puVar17)();
              }
            }
            local_1177 = local_1177 & 1;
            local_1188 = PTR_DAT_04bbc500 + 0x10;
            puVar13 = (undefined2 *)(*(long *)(lVar11 + 0x128) + *(long *)(lVar11 + 0x120));
            if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf))) {
              if ((*(short *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350) + 0xc) == 0) &&
                 (puVar13[0xd] == DAT_04cb6038)) goto LAB_017f5e24;
            }
            else if ((*(short *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350) + 0xe) == 0)
                    && (puVar13[0xc] == DAT_04cb6038)) goto LAB_017f5dc4;
            goto LAB_017f5e10;
          }
        }
LAB_017f5c0c:
        if (((uVar9 & 1) != 0) &&
           ((*(long *)(lVar14 + 0x28) != 0 &&
            (puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8), puVar17 != (undefined8 *)0x0)
            ))) {
          (**(code **)*puVar17)();
        }
LAB_017f5c2c:
        uVar6 = DAT_0558600c;
        *(undefined4 *)param_1 = _DAT_05586008;
        *(undefined4 *)((long)param_1 + 4) = uVar6;
        return;
      }
      if ((9 < uVar7) ||
         ((DAT_05574040 == 0 ||
          (lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(),
          lVar11 == 0)))) goto LAB_017f5c0c;
      lVar11 = lVar11 + (ulong)uVar7 * 0x888;
      local_1160 = 1;
      local_1168 = (char *)(lVar11 + 0x27f9c8);
      if (*(long **)(lVar11 + 0x27f9f0) == (long *)0x0) {
        local_115f = 0;
      }
      else {
        puVar17 = (undefined8 *)**(long **)(lVar11 + 0x27f9f0);
        local_115f = 0;
        if (puVar17 != (undefined8 *)0x0) {
          local_115f = (**(code **)*puVar17)();
        }
      }
      local_115f = local_115f & 1;
      local_1178 = 1;
      local_1170 = &PTR_FUN_04917240;
      local_1180 = lVar11 + 0x27fbf8;
      if (*(long **)(lVar11 + 0x27fc20) == (long *)0x0) {
        local_1177 = 0;
      }
      else {
        puVar17 = (undefined8 *)**(long **)(lVar11 + 0x27fc20);
        local_1177 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          local_1177 = (**(code **)*puVar17)();
        }
      }
      local_1177 = local_1177 & 1;
      local_1188 = PTR_DAT_04bbc500 + 0x10;
      puVar13 = (undefined2 *)(*(long *)(lVar11 + 0x27f9d8) + *(long *)(lVar11 + 0x27f9d0));
      if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf))) {
        if (!(*(short *)(*(long *)(lVar11 + 0x27fc08) + *(long *)(lVar11 + 0x27fc00) + 0xc) != 0 ||
             puVar13[0xd] != *(short *)PTR_DAT_04bb3170)) {
LAB_017f5e24:
          *(undefined2 *)param_1 = puVar13[4];
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
          uVar6 = *(undefined4 *)(puVar13 + 6);
          goto LAB_017f5e40;
        }
LAB_017f5e10:
        *param_1 = 0x2aa6;
        FUN_0277d4ac(param_1);
      }
      else {
        if (!(*(short *)(*(long *)(lVar11 + 0x27fc08) + *(long *)(lVar11 + 0x27fc00) + 0xe) == 0 &&
             puVar13[0xc] == *(short *)PTR_DAT_04bb3170)) goto LAB_017f5e10;
LAB_017f5dc4:
        *(undefined2 *)param_1 = *puVar13;
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
        uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f5e40:
        *(undefined4 *)((long)param_1 + 4) = uVar6;
      }
      FUN_02640184(&local_1188);
LAB_017f5e4c:
      FUN_02640184(&local_1170);
    }
LAB_017f5e54:
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)(lVar14 + 0x28);
    goto joined_r0x017f5e5c;
  }
  local_6c = 0;
  uVar9 = FUN_02b5f400(&local_6c,param_2);
  iVar5 = local_6c;
  if ((uVar9 & 1) == 0) goto LAB_017f5c2c;
  uVar6 = FUN_017f4660(&local_68);
  local_1188 = (undefined *)CONCAT44(local_1188._4_4_,uVar6);
  local_1170 = (undefined **)CONCAT44(local_1170._4_4_,iVar5);
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) goto LAB_017f5c2c;
  puVar17 = *(undefined8 **)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar11 == 0) goto LAB_017f5c2c;
    lVar11 = lVar11 + 0x70;
  }
  else if (((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) ||
          (lVar11 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar11 == 0)) goto LAB_017f5c2c;
  if (7 < (uint)local_1170) goto LAB_017f5c2c;
  lVar14 = lVar11 + 0x119228 + ((ulong)local_1170 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_1170) {
    lVar14 = lVar11 + 0x119228;
  }
  lVar11 = lVar14 + 0x1df8 + ((ulong)local_1188 & 0xffffffff) * 0x2488;
  if (5 < (uint)local_1188) {
    lVar11 = lVar14 + 0x1df8;
  }
  if ((*(long **)(lVar11 + 0x1ec8) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar11 + 0x1ec8), puVar17 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar17)();
    uVar7 = uVar7 ^ 1;
  }
  puVar13 = (undefined2 *)(*(long *)(lVar11 + 0x1eb0) + *(long *)(lVar11 + 0x1ea8));
  local_1170 = (undefined **)CONCAT44(local_1170._4_4_,(int)*(char *)(puVar13 + 0xf));
  if (((*(byte *)(puVar13 + 0x10) & 1) == 0) || (local_64 != *(char *)(puVar13 + 0xf))) {
    if (puVar13[0xd] == DAT_04cb6038) {
      *(undefined2 *)param_1 = puVar13[4];
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 5);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 0xb);
      uVar6 = *(undefined4 *)(puVar13 + 6);
      goto LAB_017f554c;
    }
LAB_017f5554:
    *param_1 = 0x2aa6;
    FUN_0277d4ac(param_1);
  }
  else {
    if (puVar13[0xc] != DAT_04cb6038) goto LAB_017f5554;
    *(undefined2 *)param_1 = *puVar13;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar13 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar13 + 3);
    uVar6 = *(undefined4 *)(puVar13 + 2);
LAB_017f554c:
    *(undefined4 *)((long)param_1 + 4) = uVar6;
  }
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x1ec8);
joined_r0x017f5e5c:
  if (lVar11 == 0) {
    return;
  }
  if (*(undefined8 **)(lVar11 + 8) == (undefined8 *)0x0) {
    return;
  }
  (**(code **)**(undefined8 **)(lVar11 + 8))();
  return;
}

