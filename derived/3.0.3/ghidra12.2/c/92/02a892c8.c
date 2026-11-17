
/* WARNING: Removing unreachable block (ram,0x02a893ac) */
/* WARNING: Removing unreachable block (ram,0x02a89cec) */
/* WARNING: Removing unreachable block (ram,0x02a895a0) */
/* WARNING: Removing unreachable block (ram,0x02a89644) */
/* WARNING: Removing unreachable block (ram,0x02a89ba4) */
/* WARNING: Removing unreachable block (ram,0x02a89b9c) */
/* WARNING: Removing unreachable block (ram,0x02a89654) */
/* WARNING: Removing unreachable block (ram,0x02a89790) */

void FUN_02a892c8(char *param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  undefined *local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  
  puVar8 = PTR_DAT_04bc39f8;
  puVar7 = PTR_DAT_04bb6298;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  local_78._0_4_ = 0x20;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((puVar1[1] & 1) == 0) {
    return;
  }
  if (param_1[0x14c] != '\0') {
    param_1[0x14c] = '\0';
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x148);
    puVar6 = PTR_DAT_04bb5008;
    switch(*(undefined4 *)(param_1 + 0x144)) {
    case 0:
      FUN_02a88c4c(param_1,0);
      break;
    case 2:
      local_78._0_4_ = 0x32;
      puVar14 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
        puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
      }
      if (puVar14[1] != 0) {
        local_a0 = 0x26;
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        local_d0 = PTR_DAT_04bc4608 + 0x10;
        local_c8 = PTR_DAT_04bbc570[8];
        local_c4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
        local_b8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        ppuStack_90 = &local_a8;
        local_98 = &PTR_FUN_04a9b150;
        local_88 = (undefined1 *)&local_d0;
        if (puVar14[1] != 0) {
          local_88 = (undefined1 *)&local_d0;
          plVar15 = (long *)(*(code *)**(undefined8 **)(puVar14[1] + 0x10))();
          iVar11 = (**(code **)(*plVar15 + 0x18))();
          if (0 < iVar11) {
            iVar18 = 0;
            do {
              FUN_01360490(&local_78,puVar14[1],iVar18);
              uVar13 = (*(code *)*local_98)(&local_98,&local_78);
              if ((uVar13 & 1) != 0) break;
              bVar9 = iVar11 + -1 != iVar18;
              iVar18 = iVar18 + 1;
            } while (bVar9);
          }
        }
        puVar6 = PTR_DAT_04bb5008;
        if (puVar14[1] == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = 0xffffffff;
          if ((uint)local_b8 < 0x120) {
            if (local_b8._4_4_ < 0x100) {
              uVar10 = *(undefined4 *)
                        (puVar14[1] + (local_b8 & 0xffffffff) * 0x400 + (ulong)local_b8._4_4_ * 4 +
                        0x30);
            }
          }
        }
        FUN_02b3cfa0(*(long *)PTR_DAT_04bb5008 + 0x26e8,uVar10,0xdb5d97b8);
        if (puVar14[1] != 0) {
          FUN_01361f00(puVar14[1],uVar10);
        }
        uVar4 = *(ushort *)puVar7;
        if ((long)(short)uVar4 != 0xffffffffffffffff) {
          local_78._0_4_ = 1;
          puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
          if (0xff < uVar4) {
            puVar1 = (uint *)puVar8;
          }
          if ((*puVar1 >> 1 & 1) != 0) {
            if ((*(long *)PTR_DAT_04bb3728 == 0) ||
               (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 1)) {
              FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2d0),2);
            }
            lVar12 = *(long *)puVar6;
LAB_02a89e64:
            uVar10 = FUN_02a754c0(lVar12 + 0x1e08,uVar10);
LAB_02a89e6c:
            *(undefined4 *)(param_1 + 0x158) = uVar10;
          }
        }
      }
      break;
    case 3:
      if ((*(long *)PTR_DAT_04bb3728 == 0) || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 1)) {
        FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2cc),1);
      }
      uVar13 = FUN_02b0df50(*(long *)PTR_DAT_04bb5008 + 0x22d8,param_1 + 0x50);
      puVar6 = PTR_DAT_04bb27c0;
      if ((uVar13 & 1) == 0) {
LAB_02a8964c:
        param_1[0x144] = '\0';
        param_1[0x145] = '\0';
        param_1[0x146] = '\0';
        param_1[0x147] = '\0';
      }
      else {
        uVar4 = *(ushort *)puVar7;
        if ((long)(short)uVar4 != 0xffffffffffffffff) {
          local_78._0_4_ = 1;
          puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
          if (0xff < uVar4) {
            puVar1 = (uint *)puVar8;
          }
          if ((((*puVar1 >> 1 & 1) != 0) && (uVar16 = *(uint *)(param_1 + 0x2d0), uVar16 != 0)) &&
             (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
            lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar16 >> 0x11) & 0x7ff8));
            if (((lVar17 == 0) || ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar17 + 0x230) != uVar16)) {
              lVar17 = 0;
            }
            if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
              plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar12 = *(long *)puVar6;
              iVar11 = (**(code **)(*plVar15 + 0x60))();
              if (((iVar11 < 0x11) ||
                  ((*(uint *)(lVar12 + 0x5e8) < 5 &&
                   ((1 << (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) &&
                 (lVar17 != 0)) {
                FUN_006fb3d0(lVar17);
                *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)PTR_DAT_04bb3238;
              }
            }
          }
        }
      }
      break;
    case 4:
      lVar12 = FUN_02643020();
      if (lVar12 != 0) {
        lVar17 = *(long *)(lVar12 + 0x28);
        if (lVar17 == 0) {
          uVar13 = 0;
        }
        else {
          if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            lVar17 = *(long *)(lVar12 + 0x28);
            uVar13 = uVar13 & 0xffffffff;
            if (lVar17 == 0) goto LAB_02a89a14;
          }
          plVar15 = *(long **)(lVar17 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_78 = *(undefined8 *)(lVar12 + 8);
            local_70 = *(ulong *)(lVar12 + 0x10);
            local_68 = (undefined *)0x288ec;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
          }
        }
LAB_02a89a14:
        *(undefined2 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 4) =
             *(undefined2 *)(param_1 + 0xa0);
        if ((*(long *)(lVar12 + 0x28) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar15 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar12 + 8);
          local_70 = *(ulong *)(lVar12 + 0x10);
          local_68 = (undefined *)0x288ec;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
        }
        *(undefined2 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 6) =
             *(undefined2 *)(param_1 + 0xa2);
        if ((*(long *)(lVar12 + 0x28) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar15 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar12 + 8);
          local_70 = *(ulong *)(lVar12 + 0x10);
          local_68 = (undefined *)0x288ec;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
        }
        *(undefined2 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 8) =
             *(undefined2 *)(param_1 + 0xa4);
        if ((*(long *)(lVar12 + 0x28) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar15 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar12 + 8);
          local_70 = *(ulong *)(lVar12 + 0x10);
          local_68 = (undefined *)0x288ec;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_78);
        }
        lVar17 = *(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8);
        local_78._0_4_ = 0xfffe;
        local_78._4_4_ = 0;
        FUN_0277d4ac(&local_78);
        uVar19 = *(undefined8 *)(param_1 + 0xa6);
        *(short *)(lVar17 + 0xc) = (short)uVar19;
        *(char *)(lVar17 + 0xe) = (char)((ulong)uVar19 >> 0x10);
        *(char *)(lVar17 + 0xf) = (char)((ulong)uVar19 >> 0x18);
        *(int *)(lVar17 + 0x10) = (int)((ulong)uVar19 >> 0x20);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18),
           puVar14 != (undefined8 *)0x0)) {
          (**(code **)*puVar14)();
        }
      }
      uVar4 = *(ushort *)puVar7;
      if ((long)(short)uVar4 != 0xffffffffffffffff) {
        local_78._0_4_ = 1;
        puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
        if (0xff < uVar4) {
          puVar1 = (uint *)puVar8;
        }
        if ((*puVar1 >> 1 & 1) != 0) {
          FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2cc),3);
          local_78._0_4_ = 0x32;
          puVar14 = &DAT_05636dd8;
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
            puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
          }
          if (puVar14[1] != 0) {
            local_a0 = 0x26;
            local_a8 = PTR_DAT_04bc43f8 + 0x10;
            local_d0 = PTR_DAT_04bc4608 + 0x10;
            local_c8 = PTR_DAT_04bbc570[8];
            local_c4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
            local_b8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
            local_c0 = PTR_DAT_04bb2010 + 0x10;
            local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
            local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
            ppuStack_90 = &local_a8;
            local_98 = &PTR_FUN_04a9b150;
            local_88 = (undefined1 *)&local_d0;
            if (puVar14[1] != 0) {
              local_88 = (undefined1 *)&local_d0;
              plVar15 = (long *)(*(code *)**(undefined8 **)(puVar14[1] + 0x10))();
              iVar11 = (**(code **)(*plVar15 + 0x18))();
              if (0 < iVar11) {
                iVar18 = 0;
                do {
                  FUN_01360490(&local_78,puVar14[1],iVar18);
                  uVar13 = (*(code *)*local_98)(&local_98,&local_78);
                  if ((uVar13 & 1) != 0) break;
                  bVar9 = iVar11 + -1 != iVar18;
                  iVar18 = iVar18 + 1;
                } while (bVar9);
              }
            }
            if (puVar14[1] == 0) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = 0xffffffff;
              if ((uint)local_b8 < 0x120) {
                if (local_b8._4_4_ < 0x100) {
                  uVar10 = *(undefined4 *)
                            (puVar14[1] + (local_b8 & 0xffffffff) * 0x400 +
                             (ulong)local_b8._4_4_ * 4 + 0x30);
                }
              }
            }
            lVar12 = *(long *)PTR_DAT_04bb5008;
            goto LAB_02a89e64;
          }
        }
      }
      break;
    case 5:
      local_78._0_4_ = 1;
      if ((*puVar1 >> 1 & 1) != 0) {
        local_78._0_4_ = 0x32;
        puVar14 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
          puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
        }
        if (puVar14[1] != 0) {
          local_a0 = 0x26;
          local_a8 = PTR_DAT_04bc43f8 + 0x10;
          local_d0 = PTR_DAT_04bc4608 + 0x10;
          local_c8 = PTR_DAT_04bbc570[8];
          local_c4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
          local_b8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
          local_c0 = PTR_DAT_04bb2010 + 0x10;
          local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          ppuStack_90 = &local_a8;
          local_98 = &PTR_FUN_04a9b150;
          local_88 = (undefined1 *)&local_d0;
          if (puVar14[1] != 0) {
            local_88 = (undefined1 *)&local_d0;
            plVar15 = (long *)(*(code *)**(undefined8 **)(puVar14[1] + 0x10))();
            iVar11 = (**(code **)(*plVar15 + 0x18))();
            if (0 < iVar11) {
              iVar18 = 0;
              do {
                FUN_01360490(&local_78,puVar14[1],iVar18);
                uVar13 = (*(code *)*local_98)(&local_98,&local_78);
                if ((uVar13 & 1) != 0) break;
                bVar9 = iVar11 + -1 != iVar18;
                iVar18 = iVar18 + 1;
              } while (bVar9);
            }
          }
          if (puVar14[1] == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = 0xffffffff;
            if ((uint)local_b8 < 0x120) {
              if (local_b8._4_4_ < 0x100) {
                uVar10 = *(undefined4 *)
                          (puVar14[1] + (local_b8 & 0xffffffff) * 0x400 + (ulong)local_b8._4_4_ * 4
                          + 0x30);
              }
            }
          }
          uVar10 = FUN_02a75a38(*(long *)PTR_DAT_04bb5008 + 0x1e08,&local_d0,uVar10);
          *(undefined4 *)(param_1 + 0x154) = uVar10;
        }
      }
      break;
    case 6:
      uVar13 = FUN_02b0df50(*(long *)PTR_DAT_04bb5008 + 0x22d8,param_1 + 0x50);
      if ((uVar13 & 1) == 0) goto LAB_02a8964c;
      local_78._0_4_ = 1;
      uVar13 = FUN_0290cbcc(&local_78);
      if (((uVar13 & 1) != 0) &&
         ((*(long *)PTR_DAT_04bb3728 == 0 || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 1)))) {
        if (*(int *)(param_1 + 0x58) == 4) {
          FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2cc),4);
        }
        else {
          FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2cc),6);
        }
      }
      break;
    case 7:
      local_78._0_4_ = 0x32;
      puVar14 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
        puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
      }
      if (puVar14[1] != 0) {
        uVar10 = 0xffffffff;
        uVar16 = (int)((float)(int)*(float *)(param_1 + 0x138) / 5.0) -
                 (uint)(*(float *)(param_1 + 0x138) < 0.0);
        if ((uVar16 < 0x120) &&
           (uVar5 = (int)((float)(int)*(float *)(param_1 + 0x140) / 5.0) -
                    (uint)(*(float *)(param_1 + 0x140) < 0.0), uVar5 < 0x100)) {
          uVar10 = *(undefined4 *)(puVar14[1] + (ulong)uVar16 * 0x400 + (ulong)uVar5 * 4 + 0x30);
        }
        FUN_02b3cfa0(*(long *)PTR_DAT_04bb5008 + 0x26e8,uVar10,0xdb5d97b8);
        if (puVar14[1] == 0) {
          local_70 = CONCAT71(local_70._1_7_,PTR_DAT_04bbc570[8]);
          uStack_60 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_58 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_54 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          local_68 = PTR_DAT_04bb2010 + 0x10;
          local_70 = CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_70);
        }
        else {
          FUN_01360490(&local_78,puVar14[1],uVar10);
        }
        if (local_70._4_4_ == 0) {
          uVar19 = 7;
        }
        else {
          uVar19 = 5;
          if ((local_70 & 1) != 0 || local_70._4_4_ != 0x1a) {
            uVar19 = 7;
          }
        }
        if (puVar14[1] != 0) {
          FUN_01361f00(puVar14[1],uVar10);
        }
        uVar4 = *(ushort *)puVar7;
        if ((long)(short)uVar4 != 0xffffffffffffffff) {
          local_78._0_4_ = 1;
          puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
          if (0xff < uVar4) {
            puVar1 = (uint *)puVar8;
          }
          if ((*puVar1 >> 1 & 1) != 0) {
            FUN_02a8d314(param_1,*(undefined4 *)(param_1 + 0x2cc),uVar19);
            uVar10 = FUN_02a757e0(*(long *)puVar6 + 0x1e08,uVar10);
            goto LAB_02a89e6c;
          }
        }
      }
    }
  }
  puVar6 = PTR_DAT_04bb27c0;
  switch(*(undefined4 *)(param_1 + 0x144)) {
  case 1:
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    cVar2 = *param_1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
    puVar7 = PTR_DAT_04bb27c0;
    if (cVar2 == '\0') {
      return;
    }
    uVar16 = *(uint *)(param_1 + 0x2cc);
    if (uVar16 != 0) {
      lVar12 = *(long *)PTR_DAT_04bb27c0;
      if (lVar12 == 0) {
        return;
      }
      lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar16 >> 0x11) & 0x7ff8));
      if (((lVar17 == 0) || ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) ||
         (*(uint *)(lVar17 + 0x230) != uVar16)) {
        lVar17 = 0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar7;
        iVar11 = (**(code **)(*plVar15 + 0x60))();
        if (iVar11 < 0x11) {
          uVar16 = 0;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02a8a56c;
          uVar16 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02a8a56c:
        uVar16 = 1;
      }
      if (lVar17 == 0) {
        return;
      }
      if (*(int *)(lVar17 + 0x150) != 1) {
        uVar16 = 1;
      }
      if (uVar16 != 0) {
        return;
      }
    }
    puVar7 = PTR_DAT_04bb27c0;
    uVar16 = *(uint *)(param_1 + 0x2d0);
    if (uVar16 != 0) {
      lVar12 = *(long *)PTR_DAT_04bb27c0;
      if (lVar12 == 0) {
        return;
      }
      lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar16 >> 0x11) & 0x7ff8));
      if (((lVar17 == 0) || ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) ||
         (*(uint *)(lVar17 + 0x230) != uVar16)) {
        lVar17 = 0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar7;
        iVar11 = (**(code **)(*plVar15 + 0x60))();
        if (iVar11 < 0x11) {
          uVar16 = 0;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02a8a63c;
          uVar16 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02a8a63c:
        uVar16 = 1;
      }
      if (lVar17 == 0) {
        return;
      }
      if (*(int *)(lVar17 + 0x150) != 1) {
        uVar16 = 1;
      }
      if (uVar16 != 0) {
        return;
      }
    }
    if (param_1[0x14c] == '\0') {
      param_1[0x14c] = '\x01';
      uVar10 = *(undefined4 *)(param_1 + 0x150);
LAB_02a8a250:
      *(undefined4 *)(param_1 + 0x148) = uVar10;
    }
    break;
  case 2:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      local_78 = CONCAT44(local_78._4_4_,1);
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if (((*puVar1 >> 1 & 1) != 0) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
        uVar16 = *(uint *)(param_1 + 0x158);
        if ((uVar16 == 0) ||
           (((lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0 ||
             ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar16)))
           ) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          (**(code **)(*plVar15 + 0x60))();
        }
        if (lVar17 != 0) {
          return;
        }
      }
    }
    if (param_1[0x14c] == '\0') {
      param_1[0x14c] = '\x01';
      uVar10 = 3;
      goto LAB_02a8a250;
    }
    break;
  case 3:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if ((*puVar1 >> 1 & 1) != 0) {
        lVar12 = *(long *)PTR_DAT_04bb5008;
        iVar11 = *(int *)(lVar12 + 0x2398);
        if (iVar11 != -1) {
          if (*(int *)(lVar12 + 0x23d8) != -1) {
            return;
          }
          if ((iVar11 != 3) && (iVar11 != 0)) {
            return;
          }
        }
        uVar16 = *(uint *)(param_1 + 0x58);
        local_78 = CONCAT44(local_78._4_4_,uVar16);
        plVar15 = (long *)(lVar12 + 0x22e0) + uVar16;
        if (6 < uVar16) {
          plVar15 = (long *)(lVar12 + 0x22e0);
        }
        lVar12 = *(long *)PTR_DAT_04bb27c0;
        puVar1 = (uint *)PTR_DAT_04bb3238;
        if (*plVar15 != 0) {
          puVar1 = (uint *)(*plVar15 + 8);
        }
        if (lVar12 == 0) {
          return;
        }
        uVar16 = *puVar1;
        if ((((uVar16 == 0) ||
             (lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0)) ||
            ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar16)) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)puVar6;
          iVar11 = (**(code **)(*plVar15 + 0x60))();
          if (iVar11 < 0x11) {
            uVar16 = 0;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02a8a6a4;
            uVar16 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_02a8a6a4:
          uVar16 = 1;
        }
joined_r0x02a8a6c8:
        if (lVar17 == 0) {
          return;
        }
        iVar11 = *(int *)(lVar17 + 0x150);
LAB_02a8a6d0:
        if (iVar11 != 1) {
          uVar16 = 1;
        }
        if (uVar16 != 0) {
          return;
        }
      }
    }
    goto LAB_02a8a6e0;
  case 4:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      local_78 = CONCAT44(local_78._4_4_,1);
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if (((*puVar1 >> 1 & 1) != 0) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
        uVar16 = *(uint *)(param_1 + 0x158);
        if ((uVar16 == 0) ||
           (((lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0 ||
             ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar16)))
           ) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          (**(code **)(*plVar15 + 0x60))();
        }
        if (lVar17 != 0) {
          return;
        }
      }
    }
    if (param_1[0x14c] == '\0') {
      param_1[0x14c] = '\x01';
      uVar10 = 5;
      goto LAB_02a8a250;
    }
    break;
  case 5:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      local_78 = CONCAT44(local_78._4_4_,1);
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if ((*puVar1 >> 1 & 1) != 0) {
        lVar12 = *(long *)PTR_DAT_04bb27c0;
        if (lVar12 == 0) {
          return;
        }
        uVar16 = *(uint *)(param_1 + 0x154);
        if (((uVar16 == 0) ||
            (lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                               ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0)) ||
           (((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar17 + 0x230) != uVar16)))) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)puVar6;
          iVar11 = (**(code **)(*plVar15 + 0x60))();
          if (iVar11 < 0x11) {
            uVar16 = 1;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02a8a634;
            uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_02a8a634:
          uVar16 = 0;
        }
        if (lVar17 == 0) {
          return;
        }
        iVar11 = *(int *)(lVar17 + 0x150);
        uVar16 = uVar16 ^ 1;
        goto LAB_02a8a6d0;
      }
    }
    goto LAB_02a8a6e0;
  case 6:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if ((*puVar1 >> 1 & 1) != 0) {
        lVar12 = *(long *)PTR_DAT_04bb5008;
        iVar11 = *(int *)(lVar12 + 0x2398);
        if (iVar11 != -1) {
          if (*(int *)(lVar12 + 0x23d8) != -1) {
            return;
          }
          if ((iVar11 != 3) && (iVar11 != 0)) {
            return;
          }
        }
        uVar16 = *(uint *)(param_1 + 0x58);
        local_78 = CONCAT44(local_78._4_4_,uVar16);
        plVar15 = (long *)(lVar12 + 0x22e0) + uVar16;
        if (6 < uVar16) {
          plVar15 = (long *)(lVar12 + 0x22e0);
        }
        lVar12 = *(long *)PTR_DAT_04bb27c0;
        puVar1 = (uint *)PTR_DAT_04bb3238;
        if (*plVar15 != 0) {
          puVar1 = (uint *)(*plVar15 + 8);
        }
        if (lVar12 == 0) {
          return;
        }
        uVar16 = *puVar1;
        if ((((uVar16 == 0) ||
             (lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0)) ||
            ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar16)) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)puVar6;
          iVar11 = (**(code **)(*plVar15 + 0x60))();
          if (iVar11 < 0x11) {
            uVar16 = 0;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02a8a6ac;
            uVar16 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_02a8a6ac:
          uVar16 = 1;
        }
        goto joined_r0x02a8a6c8;
      }
    }
LAB_02a8a6e0:
    if (param_1[0x14c] == '\0') {
      param_1[0x148] = '\0';
      param_1[0x149] = '\0';
      param_1[0x14a] = '\0';
      param_1[0x14b] = '\0';
      param_1[0x14c] = '\x01';
    }
    break;
  case 7:
    uVar4 = *(ushort *)puVar7;
    if ((long)(short)uVar4 != 0xffffffffffffffff) {
      local_78 = CONCAT44(local_78._4_4_,1);
      puVar1 = (uint *)(puVar8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)puVar8;
      }
      if (((*puVar1 >> 1 & 1) != 0) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
        uVar16 = *(uint *)(param_1 + 0x158);
        if ((uVar16 == 0) ||
           (((lVar17 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), lVar17 == 0 ||
             ((*(uint *)(lVar17 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar17 + 0x230) != uVar16)))
           ) {
          lVar17 = 0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          (**(code **)(*plVar15 + 0x60))();
        }
        if (lVar17 != 0) {
          return;
        }
      }
    }
    if (param_1[0x14c] == '\0') {
      param_1[0x148] = '\0';
      param_1[0x149] = '\0';
      param_1[0x14a] = '\0';
      param_1[0x14b] = '\0';
      param_1[0x14c] = '\x01';
    }
    break;
  default:
    goto switchD_02a89e94_default;
  }
  *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xfeff;
switchD_02a89e94_default:
  return;
}

