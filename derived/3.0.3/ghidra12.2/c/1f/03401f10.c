
/* WARNING: Removing unreachable block (ram,0x0340292c) */
/* WARNING: Removing unreachable block (ram,0x034027bc) */
/* WARNING: Removing unreachable block (ram,0x0340247c) */
/* WARNING: Removing unreachable block (ram,0x0340342c) */
/* WARNING: Removing unreachable block (ram,0x0340359c) */
/* WARNING: Removing unreachable block (ram,0x03403838) */
/* WARNING: Removing unreachable block (ram,0x03403140) */
/* WARNING: Removing unreachable block (ram,0x03402d3c) */
/* WARNING: Removing unreachable block (ram,0x03402ad8) */
/* WARNING: Removing unreachable block (ram,0x03401fe4) */
/* WARNING: Removing unreachable block (ram,0x03403004) */

void FUN_03401f10(int *param_1,uint *param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_f40;
  long local_f38;
  undefined1 local_f30;
  byte local_f2f;
  undefined8 local_7d0;
  undefined1 auStack_7c8 [1876];
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  byte local_44 [4];
  
  lVar8 = DAT_0532a840;
  puVar4 = PTR_DAT_04bb37e0;
  if (7 < *param_2) {
    return;
  }
  switch(*param_2) {
  case 0:
    bVar13 = (byte)param_2[1];
    bVar14 = *PTR_DAT_04bb32e0;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      if ((param_2[2] != 0xffffffff) && (DAT_05574040 != 0)) {
        lVar18 = FUN_026eec4c();
        lVar8 = DAT_0532a840;
        puVar4 = PTR_DAT_04bb37e0;
        if (lVar18 != 0) {
          lVar16 = lVar18 + 0x194b0;
          if (*(long *)(lVar18 + 0x194b8) == 0) {
            lVar16 = *(long *)(DAT_05574040 + 0x20);
          }
          piVar1 = (int *)(DAT_0532a840 + 0xe40);
          uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
          if (0 < (int)uVar5) {
            uVar19 = 0;
            do {
              if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
                local_7d0 = *(undefined **)puVar4;
                plVar12 = *(long **)(lVar16 + 0x2a418);
                if (plVar12 != (long *)0x0) goto LAB_03402074;
LAB_03402058:
                uVar10 = 0;
              }
              else {
                local_7d0 = (undefined *)
                            (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
                FUN_0277d4ac(&local_7d0);
                plVar12 = *(long **)(lVar16 + 0x2a418);
                if (plVar12 == (long *)0x0) goto LAB_03402058;
LAB_03402074:
                uVar10 = 0;
                if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
                  uVar10 = (*(code *)**(undefined8 **)*plVar12)();
                }
              }
              if (uVar19 < 0x100) {
                uVar6 = *(uint *)(*(long *)(lVar16 + 0x2a400) + *(long *)(lVar16 + 0x2a3f8) +
                                 (uVar19 >> 3 & 0x1ffffffffffffffc));
                if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2a418) != 0)) &&
                   (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a418) + 8),
                   puVar9 != (undefined8 *)0x0)) {
                  (**(code **)*puVar9)();
                }
                if (((uVar6 & 1 << (ulong)((uint)uVar19 & 0x1f)) != 0) && (*param_1 < param_1[1])) {
                  puVar9 = *(undefined8 **)(param_1 + 4);
                  if (puVar9 != (undefined8 *)0x0) {
                    *(undefined8 *)(param_1 + 4) = *puVar9;
                  }
                  *(undefined2 *)puVar9 = (undefined2)local_7d0;
                  *(undefined1 *)((long)puVar9 + 2) = local_7d0._2_1_;
                  *(undefined1 *)((long)puVar9 + 3) = local_7d0._3_1_;
                  *(undefined4 *)((long)puVar9 + 4) = local_7d0._4_4_;
                  if (*param_1 < param_1[1]) {
                    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
                    *param_1 = *param_1 + 1;
                  }
                }
              }
              else if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2a418) != 0)) &&
                      (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a418) + 8),
                      puVar9 != (undefined8 *)0x0)) {
                (**(code **)*puVar9)();
              }
              uVar19 = uVar19 + 1;
            } while (uVar5 != uVar19);
          }
        }
      }
    }
    else {
      local_f40 = (undefined *)CONCAT71(local_f40._1_7_,bVar13);
      lVar18 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f40,1);
      lVar8 = DAT_0532a840;
      puVar4 = PTR_DAT_04bb37e0;
      if (lVar18 != 0) {
        lVar16 = lVar18 + 0x194b0;
        if (*(long *)(lVar18 + 0x194b8) == 0) {
          lVar16 = *(long *)(DAT_05574040 + 0x20);
        }
        piVar1 = (int *)(DAT_0532a840 + 0xe40);
        uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
        if (0 < (int)uVar5) {
          uVar19 = 0;
          do {
            if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
              local_7d0 = *(undefined **)puVar4;
              plVar12 = *(long **)(lVar16 + 0x2a418);
              if (plVar12 != (long *)0x0) goto LAB_034029c4;
LAB_034029a8:
              uVar10 = 0;
            }
            else {
              local_7d0 = (undefined *)
                          (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
              FUN_0277d4ac(&local_7d0);
              plVar12 = *(long **)(lVar16 + 0x2a418);
              if (plVar12 == (long *)0x0) goto LAB_034029a8;
LAB_034029c4:
              uVar10 = 0;
              if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
                uVar10 = (*(code *)**(undefined8 **)*plVar12)();
              }
            }
            if (uVar19 < 0x100) {
              uVar6 = *(uint *)(*(long *)(lVar16 + 0x2a400) + *(long *)(lVar16 + 0x2a3f8) +
                               (uVar19 >> 3 & 0x1ffffffffffffffc));
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2a418) != 0)) &&
                 (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a418) + 8),
                 puVar9 != (undefined8 *)0x0)) {
                (**(code **)*puVar9)();
              }
              if (((uVar6 & 1 << (ulong)((uint)uVar19 & 0x1f)) != 0) && (*param_1 < param_1[1])) {
                puVar9 = *(undefined8 **)(param_1 + 4);
                if (puVar9 != (undefined8 *)0x0) {
                  *(undefined8 *)(param_1 + 4) = *puVar9;
                }
                *(undefined2 *)puVar9 = (undefined2)local_7d0;
                *(undefined1 *)((long)puVar9 + 2) = local_7d0._2_1_;
                *(undefined1 *)((long)puVar9 + 3) = local_7d0._3_1_;
                *(undefined4 *)((long)puVar9 + 4) = local_7d0._4_4_;
                if (*param_1 < param_1[1]) {
                  *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
                  *param_1 = *param_1 + 1;
                }
              }
            }
            else if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2a418) != 0)) &&
                    (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a418) + 8),
                    puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)();
            }
            uVar19 = uVar19 + 1;
          } while (uVar5 != uVar19);
        }
      }
    }
    break;
  case 1:
    pcVar11 = (char *)0x0;
    if (DAT_0537d558 != (long *)0x0) {
      if ((DAT_0537d558[5] == 0) || ((int)DAT_0537d558[0x10] != 1)) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = *(char **)(DAT_053762d8 + 0x220);
      }
    }
    piVar1 = (int *)(DAT_0532a840 + 0xe40);
    uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
    if (0 < (int)uVar5) {
      uVar19 = 0;
      pcVar2 = pcVar11 + (ulong)param_2[2] * 0x100;
      if (7 < param_2[2]) {
        pcVar2 = pcVar11;
      }
      do {
        pcVar11 = pcVar2 + uVar19;
        if (0xff < uVar19) {
          pcVar11 = pcVar2;
        }
        if (*pcVar11 != '\0') {
          if (((*piVar1 == 0) || ((int)uVar19 < 0)) || (*(int *)(lVar8 + 0xe44) <= (int)uVar19)) {
            local_7d0 = *(undefined **)puVar4;
          }
          else {
            local_7d0 = (undefined *)
                        (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
            FUN_0277d4ac(&local_7d0);
          }
          if (*param_1 < param_1[1]) {
            puVar9 = *(undefined8 **)(param_1 + 4);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar9;
            }
            *(undefined2 *)puVar9 = (undefined2)local_7d0;
            *(undefined1 *)((long)puVar9 + 2) = local_7d0._2_1_;
            *(undefined1 *)((long)puVar9 + 3) = local_7d0._3_1_;
            *(undefined4 *)((long)puVar9 + 4) = local_7d0._4_4_;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
              *param_1 = *param_1 + 1;
            }
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar5 != uVar19);
    }
    break;
  case 2:
    local_7d0 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7c8,0,0x754);
    uVar5 = nn::os::GetSystemTick();
    local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
    local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
    local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
    pvVar7 = (void *)FUN_01a451fc(&local_7d0);
    memset(pvVar7,0,0x754);
    FUN_02686600(&local_f40);
    memcpy(auStack_7c8,&local_f38,0x754);
    lVar8 = DAT_05ab5ea8;
    if (DAT_05ab5ea8 != 0) {
      lVar18 = DAT_05ab5ea8 + 0x3b0;
      pvVar7 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
      lVar18 = (**(code **)(*(long *)(lVar8 + 0x3b0) + 0x20))(lVar18);
      for (lVar8 = 0;
          *(uint *)((long)&local_f40 + lVar8) =
               *(uint *)(lVar18 + lVar8) | *(uint *)((long)pvVar7 + lVar8), lVar8 != 0x750;
          lVar8 = lVar8 + 8) {
        *(uint *)((long)&local_f40 + lVar8 + 4) =
             *(uint *)(lVar18 + lVar8 + 4) | *(uint *)((long)pvVar7 + lVar8 + 4);
      }
      memcpy(pvVar7,&local_f40,0x754);
      *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
    }
    lVar8 = DAT_0532a840;
    puVar4 = PTR_DAT_04bb37e0;
    piVar1 = (int *)(DAT_0532a840 + 0xe40);
    uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
    if (0 < (int)uVar5) {
      uVar19 = 0;
      do {
        if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
          local_f40 = *(undefined **)puVar4;
        }
        else {
          local_f40 = (undefined *)
                      (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
          FUN_0277d4ac(&local_f40);
        }
        lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
        uVar6 = FUN_0277d6c4(&local_f40);
        if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
            ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1)
             != 0)) && (*param_1 < param_1[1])) {
          puVar9 = *(undefined8 **)(param_1 + 4);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar9;
          }
          *(undefined2 *)puVar9 = (undefined2)local_f40;
          *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
          *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
          *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
            *param_1 = *param_1 + 1;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar5 != uVar19);
    }
    break;
  case 3:
    if ((DAT_05ab7608 != 0) && (lVar8 = *(long *)(DAT_05ab7608 + 0x6e0), lVar8 != 0)) {
      local_7d0 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7c8,0,0x754);
      uVar5 = nn::os::GetSystemTick();
      local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
      local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
      local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
      pvVar7 = (void *)FUN_01a451fc(&local_7d0);
      memset(pvVar7,0,0x754);
      if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
        memcpy(auStack_7c8,(void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)),0x754);
      }
      else {
        uVar19 = (**(code **)*puVar9)();
        memcpy(auStack_7c8,(void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)),0x754);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
      }
      lVar8 = DAT_0532a840;
      puVar4 = PTR_DAT_04bb37e0;
      piVar1 = (int *)(DAT_0532a840 + 0xe40);
      uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        do {
          if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
            local_f40 = *(undefined **)puVar4;
          }
          else {
            local_f40 = (undefined *)
                        (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
            FUN_0277d4ac(&local_f40);
          }
          lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
          uVar6 = FUN_0277d6c4(&local_f40);
          if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
              ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1)
               != 0)) && (*param_1 < param_1[1])) {
            puVar9 = *(undefined8 **)(param_1 + 4);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar9;
            }
            *(undefined2 *)puVar9 = (undefined2)local_f40;
            *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
            *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
            *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
              *param_1 = *param_1 + 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar5 != uVar19);
      }
    }
    break;
  case 4:
    local_7d0 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7c8,0,0x754);
    uVar5 = nn::os::GetSystemTick();
    local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
    local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
    local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
    pvVar7 = (void *)FUN_01a451fc(&local_7d0);
    memset(pvVar7,0,0x754);
    FUN_02686600(&local_f40);
    memcpy(auStack_7c8,&local_f38,0x754);
    FUN_02662520(&local_7d0);
    lVar8 = DAT_0532a840;
    puVar4 = PTR_DAT_04bb37e0;
    piVar1 = (int *)(DAT_0532a840 + 0xe40);
    uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
    if (0 < (int)uVar5) {
      uVar19 = 0;
      do {
        if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
          local_f40 = *(undefined **)puVar4;
        }
        else {
          local_f40 = (undefined *)
                      (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
          FUN_0277d4ac(&local_f40);
        }
        lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
        uVar6 = FUN_0277d6c4(&local_f40);
        if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
            ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1)
             != 0)) && (*param_1 < param_1[1])) {
          puVar9 = *(undefined8 **)(param_1 + 4);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar9;
          }
          *(undefined2 *)puVar9 = (undefined2)local_f40;
          *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
          *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
          *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
            *param_1 = *param_1 + 1;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar5 != uVar19);
    }
    break;
  case 5:
    local_f40 = (undefined *)((ulong)local_f40 & 0xffffffff00000000);
    uVar19 = FUN_02b67a30(&local_f40,param_2[3]);
    if ((uVar19 & 1) != 0) {
      local_7d0 = (undefined *)CONCAT44(local_7d0._4_4_,(undefined4)local_f40);
      if (DAT_05574040 != 0) {
        puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar8 == 0) {
            return;
          }
          lVar8 = lVar8 + 0x70;
        }
        else {
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          if ((long *)puVar9[0x26] == (long *)0x0) {
            return;
          }
          lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
          if (lVar8 == 0) {
            return;
          }
        }
        lVar18 = DAT_0532a840;
        puVar4 = PTR_DAT_04bb37e0;
        if ((uint)local_7d0 < 10) {
          piVar1 = (int *)(DAT_0532a840 + 0xe40);
          uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
          if (0 < (int)uVar5) {
            uVar19 = 0;
            lVar16 = lVar8 + 0x1962d8 + ((ulong)local_7d0 & 0xffffffff) * 0x10d8;
            if (9 < (uint)local_7d0) {
              lVar16 = lVar8 + 0x1962d8;
            }
            do {
              if ((*piVar1 == 0) || ((long)*(int *)(lVar18 + 0xe44) <= (long)uVar19)) {
                local_7d0 = *(undefined **)puVar4;
                plVar12 = *(long **)(lVar16 + 0xed0);
                if (plVar12 != (long *)0x0) goto LAB_034031e0;
LAB_034031c4:
                uVar10 = 0;
              }
              else {
                local_7d0 = (undefined *)
                            (ulong)(ushort)**(undefined4 **)(*(long *)(lVar18 + 0xe48) + uVar19 * 8)
                ;
                FUN_0277d4ac(&local_7d0);
                plVar12 = *(long **)(lVar16 + 0xed0);
                if (plVar12 == (long *)0x0) goto LAB_034031c4;
LAB_034031e0:
                uVar10 = 0;
                if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
                  uVar10 = (*(code *)**(undefined8 **)*plVar12)();
                }
              }
              if (uVar19 < 0x100) {
                uVar6 = *(uint *)(*(long *)(lVar16 + 0xeb8) + *(long *)(lVar16 + 0xeb0) +
                                 (uVar19 >> 3 & 0x1ffffffffffffffc));
                if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0xed0) != 0)) &&
                   (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xed0) + 8),
                   puVar9 != (undefined8 *)0x0)) {
                  (**(code **)*puVar9)();
                }
                if (((uVar6 & 1 << (ulong)((uint)uVar19 & 0x1f)) != 0) && (*param_1 < param_1[1])) {
                  puVar9 = *(undefined8 **)(param_1 + 4);
                  if (puVar9 != (undefined8 *)0x0) {
                    *(undefined8 *)(param_1 + 4) = *puVar9;
                  }
                  *(undefined2 *)puVar9 = (undefined2)local_7d0;
                  *(undefined1 *)((long)puVar9 + 2) = local_7d0._2_1_;
                  *(undefined1 *)((long)puVar9 + 3) = local_7d0._3_1_;
                  *(undefined4 *)((long)puVar9 + 4) = local_7d0._4_4_;
                  if (*param_1 < param_1[1]) {
                    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
                    *param_1 = *param_1 + 1;
                  }
                }
              }
              else if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0xed0) != 0)) &&
                      (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0xed0) + 8),
                      puVar9 != (undefined8 *)0x0)) {
                (**(code **)*puVar9)();
              }
              uVar19 = uVar19 + 1;
            } while (uVar5 != uVar19);
          }
        }
      }
    }
    break;
  case 6:
    if (param_2[2] == 0xffffffff) {
      bVar13 = (byte)param_2[1];
      bVar14 = *PTR_DAT_04bb32e0;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      if (bVar13 != bVar14) {
        local_7d0 = PTR_DAT_04bbfe60 + 0x10;
        memset(auStack_7c8,0,0x754);
        uVar5 = nn::os::GetSystemTick();
        local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
        local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
        local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
        pvVar7 = (void *)FUN_01a451fc(&local_7d0);
        memset(pvVar7,0,0x754);
        local_44[0] = (byte)param_2[1];
        if (7 < local_44[0]) {
          local_44[0] = 0xff;
        }
        lVar8 = FUN_02583354(DAT_055021a0,local_44,1);
        if (lVar8 != 0) {
          lVar18 = lVar8 + 0x194b0;
          if (*(long *)(lVar8 + 0x194b8) == 0) {
            lVar18 = *(long *)(DAT_05574040 + 0x20);
          }
          local_f38 = lVar18 + 0x1068;
          local_f30 = 1;
          if (*(long **)(lVar18 + 0x1090) == (long *)0x0) {
            local_f2f = 0;
          }
          else {
            puVar9 = (undefined8 *)**(long **)(lVar18 + 0x1090);
            local_f2f = 0;
            if (puVar9 != (undefined8 *)0x0) {
              local_f2f = (**(code **)*puVar9)();
            }
          }
          local_f2f = local_f2f & 1;
          lVar16 = *(long *)(lVar18 + 0x1078);
          local_f40 = PTR_DAT_04bb64c8 + 0x10;
          lVar8 = *(long *)(lVar18 + 0x1070);
          FUN_02640184(&local_f40);
          memcpy(auStack_7c8,(void *)(lVar16 + lVar8),0x754);
          puVar4 = PTR_DAT_04bb4938;
          lVar8 = *(long *)PTR_DAT_04bb4938;
          pvVar7 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
          lVar18 = (**(code **)(*(long *)(lVar8 + 0x1d60) + 0x20))(lVar8 + 0x1d60);
          for (lVar8 = 0;
              *(uint *)((long)&local_f40 + lVar8) =
                   *(uint *)(lVar18 + lVar8) | *(uint *)((long)pvVar7 + lVar8), lVar8 != 0x750;
              lVar8 = lVar8 + 8) {
            *(uint *)((long)&local_f40 + lVar8 + 4) =
                 *(uint *)(lVar18 + lVar8 + 4) | *(uint *)((long)pvVar7 + lVar8 + 4);
          }
          memcpy(pvVar7,&local_f40,0x754);
          lVar8 = *(long *)puVar4;
          *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
          pvVar7 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
          lVar18 = (**(code **)(*(long *)(lVar8 + 0x15f0) + 0x20))(lVar8 + 0x15f0);
          for (lVar8 = 0;
              *(uint *)((long)&local_f40 + lVar8) =
                   *(uint *)(lVar18 + lVar8) | *(uint *)((long)pvVar7 + lVar8), lVar8 != 0x750;
              lVar8 = lVar8 + 8) {
            *(uint *)((long)&local_f40 + lVar8 + 4) =
                 *(uint *)(lVar18 + lVar8 + 4) | *(uint *)((long)pvVar7 + lVar8 + 4);
          }
          memcpy(pvVar7,&local_f40,0x754);
          *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
        }
        lVar8 = DAT_0532a840;
        puVar4 = PTR_DAT_04bb37e0;
        piVar1 = (int *)(DAT_0532a840 + 0xe40);
        uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
        if (0 < (int)uVar5) {
          uVar19 = 0;
          do {
            if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
              local_f40 = *(undefined **)puVar4;
            }
            else {
              local_f40 = (undefined *)
                          (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
              FUN_0277d4ac(&local_f40);
            }
            lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
            uVar6 = FUN_0277d6c4(&local_f40);
            if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
                ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) &
                 1) != 0)) && (*param_1 < param_1[1])) {
              puVar9 = *(undefined8 **)(param_1 + 4);
              if (puVar9 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 4) = *puVar9;
              }
              *(undefined2 *)puVar9 = (undefined2)local_f40;
              *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
              *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
              *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
              if (*param_1 < param_1[1]) {
                *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
                *param_1 = *param_1 + 1;
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar5 != uVar19);
        }
      }
    }
    else {
      local_7d0 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7c8,0,0x754);
      uVar5 = nn::os::GetSystemTick();
      local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
      local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
      local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
      pvVar7 = (void *)FUN_01a451fc(&local_7d0);
      memset(pvVar7,0,0x754);
      if ((DAT_05574040 != 0) && (lVar8 = FUN_026eec4c(DAT_05574040,param_2[2]), lVar8 != 0)) {
        lVar18 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar18 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar18 + 0x1090) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar18 + 0x1090), puVar9 == (undefined8 *)0x0)) {
          pvVar7 = (void *)(*(long *)(lVar18 + 0x1078) + *(long *)(lVar18 + 0x1070));
        }
        else {
          uVar19 = (**(code **)*puVar9)();
          pvVar7 = (void *)(*(long *)(lVar18 + 0x1078) + *(long *)(lVar18 + 0x1070));
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar18 + 0x1090) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar18 + 0x1090) + 8), puVar9 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar9)();
          }
        }
        memcpy(auStack_7c8,pvVar7,0x754);
        puVar4 = PTR_DAT_04bb4938;
        lVar8 = *(long *)PTR_DAT_04bb4938;
        pvVar7 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
        lVar18 = (**(code **)(*(long *)(lVar8 + 0x1d60) + 0x20))(lVar8 + 0x1d60);
        for (lVar8 = 0;
            *(uint *)((long)&local_f40 + lVar8) =
                 *(uint *)(lVar18 + lVar8) | *(uint *)((long)pvVar7 + lVar8), lVar8 != 0x750;
            lVar8 = lVar8 + 8) {
          *(uint *)((long)&local_f40 + lVar8 + 4) =
               *(uint *)(lVar18 + lVar8 + 4) | *(uint *)((long)pvVar7 + lVar8 + 4);
        }
        memcpy(pvVar7,&local_f40,0x754);
        lVar8 = *(long *)puVar4;
        *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
        pvVar7 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
        lVar18 = (**(code **)(*(long *)(lVar8 + 0x15f0) + 0x20))(lVar8 + 0x15f0);
        for (lVar8 = 0;
            *(uint *)((long)&local_f40 + lVar8) =
                 *(uint *)(lVar18 + lVar8) | *(uint *)((long)pvVar7 + lVar8), lVar8 != 0x750;
            lVar8 = lVar8 + 8) {
          *(uint *)((long)&local_f40 + lVar8 + 4) =
               *(uint *)(lVar18 + lVar8 + 4) | *(uint *)((long)pvVar7 + lVar8 + 4);
        }
        memcpy(pvVar7,&local_f40,0x754);
        *(uint *)((long)pvVar7 + 0x750) = *(uint *)((long)pvVar7 + 0x750) & 0xffffff;
      }
      lVar8 = DAT_0532a840;
      puVar4 = PTR_DAT_04bb37e0;
      piVar1 = (int *)(DAT_0532a840 + 0xe40);
      uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        do {
          if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
            local_f40 = *(undefined **)puVar4;
          }
          else {
            local_f40 = (undefined *)
                        (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
            FUN_0277d4ac(&local_f40);
          }
          lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
          uVar6 = FUN_0277d6c4(&local_f40);
          if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
              ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1)
               != 0)) && (*param_1 < param_1[1])) {
            puVar9 = *(undefined8 **)(param_1 + 4);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar9;
            }
            *(undefined2 *)puVar9 = (undefined2)local_f40;
            *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
            *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
            *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
              *param_1 = *param_1 + 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar5 != uVar19);
      }
    }
    break;
  case 7:
    bVar13 = (byte)param_2[1];
    bVar14 = *PTR_DAT_04bb32e0;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    bVar17 = bVar14;
    if (7 < bVar14) {
      bVar17 = 0xff;
    }
    if (bVar13 == bVar17) {
      return;
    }
    pbVar15 = PTR_DAT_04bb32e0;
    if (DAT_04cd19d8 == 0) {
      if (7 < bVar14) goto LAB_03402e54;
LAB_03402eb4:
      bVar14 = *pbVar15;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
    }
    else {
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((*pbVar15 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar15 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar15 < 8)))) goto LAB_03402eb4;
LAB_03402e54:
      if (DAT_0537d558 == (long *)0x0) {
LAB_03402eac:
        pbVar15 = &DAT_0548e168;
        goto LAB_03402eb4;
      }
      lVar18 = *DAT_0537d558;
      bVar14 = *(byte *)(lVar18 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar14 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
        if (7 < bVar14) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar15 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar14 = *pbVar15;
      if (7 < bVar14) goto LAB_03402eac;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar14 == bVar13) {
      local_7d0 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_7c8,0,0x754);
      uVar5 = nn::os::GetSystemTick();
      local_74 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
      local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
      local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
      pvVar7 = (void *)FUN_01a451fc(&local_7d0);
      memset(pvVar7,0,0x754);
      local_44[0] = (byte)param_2[1];
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      lVar8 = FUN_02583354(DAT_055021a0,local_44,1);
      if (lVar8 != 0) {
        lVar18 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar18 = *(long *)(DAT_05574040 + 0x20);
        }
        local_f38 = lVar18 + 0x1068;
        local_f30 = 1;
        if (*(long **)(lVar18 + 0x1090) == (long *)0x0) {
          local_f2f = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar18 + 0x1090);
          local_f2f = 0;
          if (puVar9 != (undefined8 *)0x0) {
            local_f2f = (**(code **)*puVar9)();
          }
        }
        local_f2f = local_f2f & 1;
        lVar16 = *(long *)(lVar18 + 0x1078);
        local_f40 = PTR_DAT_04bb64c8 + 0x10;
        lVar8 = *(long *)(lVar18 + 0x1070);
        FUN_02640184(&local_f40);
        memcpy(auStack_7c8,(void *)(lVar16 + lVar8),0x754);
      }
      lVar8 = DAT_0532a840;
      puVar4 = PTR_DAT_04bb37e0;
      piVar1 = (int *)(DAT_0532a840 + 0xe40);
      uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        do {
          if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
            local_f40 = *(undefined **)puVar4;
          }
          else {
            local_f40 = (undefined *)
                        (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
            FUN_0277d4ac(&local_f40);
          }
          lVar18 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
          uVar6 = FUN_0277d6c4(&local_f40);
          if ((((uVar6 >> 3 & 0x1fff) < 0x753) &&
              ((*(uint *)(lVar18 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1)
               != 0)) && (*param_1 < param_1[1])) {
            puVar9 = *(undefined8 **)(param_1 + 4);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar9;
            }
            *(undefined2 *)puVar9 = (undefined2)local_f40;
            *(undefined1 *)((long)puVar9 + 2) = local_f40._2_1_;
            *(undefined1 *)((long)puVar9 + 3) = local_f40._3_1_;
            *(undefined4 *)((long)puVar9 + 4) = local_f40._4_4_;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
              *param_1 = *param_1 + 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar5 != uVar19);
      }
    }
    else {
      piVar1 = (int *)(DAT_0532a840 + 0xe40);
      uVar5 = *(uint *)(DAT_0532a840 + 0xe44);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        do {
          if ((param_2[(uVar19 >> 5 & 0x7ffffff) + 4] >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0) {
            if ((*piVar1 == 0) || ((long)*(int *)(lVar8 + 0xe44) <= (long)uVar19)) {
              local_7d0 = *(undefined **)puVar4;
            }
            else {
              local_7d0 = (undefined *)
                          (ulong)(ushort)**(undefined4 **)(*(long *)(lVar8 + 0xe48) + uVar19 * 8);
              FUN_0277d4ac(&local_7d0);
            }
            if (*param_1 < param_1[1]) {
              puVar9 = *(undefined8 **)(param_1 + 4);
              if (puVar9 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 4) = *puVar9;
              }
              *(undefined2 *)puVar9 = (undefined2)local_7d0;
              *(undefined1 *)((long)puVar9 + 2) = local_7d0._2_1_;
              *(undefined1 *)((long)puVar9 + 3) = local_7d0._3_1_;
              *(undefined4 *)((long)puVar9 + 4) = local_7d0._4_4_;
              if (*param_1 < param_1[1]) {
                *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
                *param_1 = *param_1 + 1;
              }
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar5 != uVar19);
      }
    }
  }
  return;
}

