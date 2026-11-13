
/* WARNING: Removing unreachable block (ram,0x011dfb68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011df2d0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  long *plVar16;
  long lVar17;
  long **pplVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  int local_c8;
  int local_c4;
  byte local_c0;
  undefined7 uStack_bf;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  int local_90;
  int local_8c;
  long *local_88;
  char local_80;
  char local_7f;
  long *local_78;
  char local_70;
  char local_6f;
  
  if ((param_3 & 1) != 0) {
    FUN_011deff0(param_1);
    return;
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_78,&DAT_050dfb2c,&local_b0,0);
  plVar16 = local_78;
  puVar5 = PTR_DAT_04bbbb50;
  if (local_78 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbbb48);
    if ((uVar11 & 1) == 0) {
      local_6f = '\0';
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_88,&DAT_050dfb30,&local_b0,0);
  plVar16 = local_88;
  if (local_88 != (long *)0x0) {
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbbb48);
    if ((uVar11 & 1) == 0) {
      local_7f = '\0';
    }
  }
  if (local_78 == (long *)0x0) {
    return;
  }
  if (local_70 == '\0') {
    return;
  }
  if (local_6f == '\0') {
    return;
  }
  if (local_88 == (long *)0x0) {
    return;
  }
  if (local_80 == '\0') {
    return;
  }
  if (local_7f == '\0') {
    return;
  }
  if ((DAT_050dfb34 >> 5 & 1) != 0) goto LAB_011dfa74;
  DAT_050dfb34 = DAT_050dfb34 | 0x20;
  *(undefined2 *)(param_1 + 0x24f84) = 0;
  puVar1 = PTR_DAT_04bb6298;
  puVar5 = PTR_DAT_04bb27d0;
  DAT_05146e1c = 0;
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df4fc;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if ((int)DAT_0514e4c0 == 6) goto LAB_011df4d0;
    }
    else if ((int)DAT_0514e4c0 - 1U < 2) {
LAB_011df4d0:
      local_a8 = (undefined *)CONCAT44(DAT_0514e448._4_4_,(undefined4)DAT_0514e448);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 1;
      }
    }
  }
LAB_011df4fc:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df5c4;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if (DAT_0514e4c0._4_4_ == 6) goto LAB_011df598;
    }
    else if (DAT_0514e4c0._4_4_ - 1U < 2) {
LAB_011df598:
      local_a8 = (undefined *)CONCAT44(DAT_0514e45c,DAT_0514e458);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 2;
      }
    }
  }
LAB_011df5c4:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df68c;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if (DAT_0514e4c8 == 6) goto LAB_011df660;
    }
    else if (DAT_0514e4c8 - 1U < 2) {
LAB_011df660:
      local_a8 = (undefined *)CONCAT44(DAT_0514e46c,DAT_0514e468);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 4;
      }
    }
  }
LAB_011df68c:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df754;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if (_DAT_0514e4cc == 6) goto LAB_011df728;
    }
    else if (_DAT_0514e4cc - 1U < 2) {
LAB_011df728:
      local_a8 = (undefined *)CONCAT44(DAT_0514e478._4_4_,(undefined4)DAT_0514e478);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 8;
      }
    }
  }
LAB_011df754:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df81c;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if ((int)DAT_0514e4d0 == 6) goto LAB_011df7f0;
    }
    else if ((int)DAT_0514e4d0 - 1U < 2) {
LAB_011df7f0:
      local_a8 = (undefined *)CONCAT44(DAT_0514e488._4_4_,(undefined4)DAT_0514e488);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 0x10;
      }
    }
  }
LAB_011df81c:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df8e4;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if (DAT_0514e4d0._4_4_ == 6) goto LAB_011df8b8;
    }
    else if (DAT_0514e4d0._4_4_ - 1U < 2) {
LAB_011df8b8:
      local_a8 = (undefined *)CONCAT44(DAT_0514e498._4_4_,(undefined4)DAT_0514e498);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 0x20;
      }
    }
  }
LAB_011df8e4:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_011df9ac;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if ((int)DAT_0514e4d8 == 6) goto LAB_011df980;
    }
    else if ((int)DAT_0514e4d8 - 1U < 2) {
LAB_011df980:
      local_a8 = (undefined *)CONCAT44(DAT_0514e4a8._4_4_,(undefined4)DAT_0514e4a8);
      uVar11 = FUN_02a7c074(param_2,&local_b0);
      if ((uVar11 & 1) != 0) {
        *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 0x40;
      }
    }
  }
LAB_011df9ac:
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  lVar17 = *(long *)puVar5;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(int *)(lVar17 + 0x80) != 1)) {
    sVar7 = *(short *)puVar1;
    if (sVar7 != -1) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x20);
      puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar5 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar5 + 4) & 1) != 0) goto LAB_011dfa74;
    }
    if ((DAT_0514f764 & 1) == 0) {
      if (DAT_0514e4d8._4_4_ != 6) goto LAB_011dfa74;
    }
    else if (1 < DAT_0514e4d8._4_4_ - 1U) goto LAB_011dfa74;
    local_a8 = (undefined *)CONCAT44(DAT_0514e4b8._4_4_,(undefined4)DAT_0514e4b8);
    uVar11 = FUN_02a7c074(param_2,&local_b0);
    if ((uVar11 & 1) != 0) {
      *(ushort *)(param_1 + 0x24f84) = *(ushort *)(param_1 + 0x24f84) | 0x80;
    }
  }
LAB_011dfa74:
  puVar5 = PTR_DAT_04bb43c0;
  iVar9 = *(int *)(param_1 + 0x24f78);
  if (0 < iVar9) {
    iVar23 = 0;
    puVar24 = (undefined4 *)(param_1 + 0x278);
    lVar17 = param_2 + 0x90;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bb6268 + 0x10;
    do {
      if ((*(ushort *)(puVar24 + 0x1a) & 0x1008) == 8) {
        local_a0 = puVar24[6];
        local_9c = puVar24[7];
        local_90 = local_a0 + 1;
        local_8c = local_9c + 1;
        if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
          lVar20 = lVar17;
          if (*(long *)(param_2 + 0xc0) != 0) {
            local_d0 = (undefined *)CONCAT44(local_d0._4_4_,10);
            lVar19 = *(long *)(*(long *)(param_2 + 0xc0) + 0xc0);
            if ((lVar19 != 0) && (*(char *)(lVar19 + 0x48) != '\0')) {
              local_d0 = (undefined *)CONCAT44(local_d0._4_4_,10);
              goto LAB_011dfb98;
            }
          }
        }
        else {
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,4);
LAB_011dfb98:
          lVar20 = param_2 + 0xf8 + ((ulong)local_d0 & 0xffffffff) * 0x70;
          if (10 < (uint)local_d0) {
            lVar20 = param_2 + 0xf8;
          }
          lVar20 = lVar20 + 0x28;
        }
        if (((local_a0 <= *(int *)(lVar20 + 0x20) && *(int *)(lVar20 + 0x10) <= local_90) &&
            local_9c <= *(int *)(lVar20 + 0x24)) && *(int *)(lVar20 + 0x14) <= local_8c) {
          local_b8 = *puVar24;
          uStack_b4 = puVar24[1];
          lVar20 = *(long *)PTR_DAT_04bbbc68;
          local_b0 = puVar1;
          local_a8 = puVar2;
          local_98 = puVar2;
          if ((((((lVar20 == 0) || (*(long *)(lVar20 + 0xb0) == 0)) ||
                (*(long *)(*(long *)(lVar20 + 0xb0) + 8) == 0)) ||
               ((*(long *)(lVar20 + 0x488) == 0 || (*(long *)(*(long *)(lVar20 + 0x488) + 8) == 0)))
               ) || (*(long *)(lVar20 + 0x2b0) == 0)) ||
             (*(long *)(*(long *)(lVar20 + 0x2b0) + 8) == 0)) {
LAB_011dfea0:
            lVar19 = *(long *)puVar5;
            puVar4 = puVar24 + 4;
            uVar8 = FUN_0277d6c4(&local_b8);
            lVar20 = *(long *)puVar5;
            if (lVar20 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                local_c8 = 0;
                lVar20 = *(long *)PTR_DAT_04bb2720;
                if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                  puVar13 = &DAT_055c04a0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
                  iVar9 = FUN_006bd550(*puVar13,0);
                  puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar9 != 0x758f7eaf) {
                    puVar13 = &DAT_055c04a0;
                  }
                }
                local_c4 = *(int *)(puVar13 + 7);
                local_c0 = FUN_017baf44();
                local_c0 = local_c0 & 1;
                local_d0 = PTR_DAT_04bb6268 + 0x10;
                uVar14 = FUN_01a5190c(&local_d0,0,puVar4,0);
                lVar20 = *(long *)PTR_DAT_04bbbc68;
                if ((((lVar20 != 0) && (*(long *)(lVar20 + 0xb0) != 0)) &&
                    ((*(long *)(*(long *)(lVar20 + 0xb0) + 8) != 0 &&
                     (((*(long *)(lVar20 + 0x488) != 0 &&
                       (*(long *)(*(long *)(lVar20 + 0x488) + 8) != 0)) &&
                      (*(long *)(lVar20 + 0x2b0) != 0)))))) &&
                   (*(long *)(*(long *)(lVar20 + 0x2b0) + 8) != 0)) {
                  uVar8 = FUN_0277d6c4();
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                  if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                    FUN_0124c030(&local_e8,uVar14);
                    uVar11 = FUN_0123d890(local_d8,4);
                    if (((uVar11 & 1) != 0) &&
                       (uVar11 = FUN_02a7c208(param_2,puVar4), (uVar11 & 1) != 0)) {
                      if (puVar24[0x18] == 1) {
                        pplVar18 = &local_78;
LAB_011e0048:
                        FUN_011c8ab4(*pplVar18,puVar24[0x16]);
                      }
                      else if (puVar24[0x18] == 2) {
                        pplVar18 = &local_88;
                        goto LAB_011e0048;
                      }
                      *(ushort *)(puVar24 + 0x1a) = *(ushort *)(puVar24 + 0x1a) | 0x2000;
                    }
                  }
                }
                lVar20 = *(long *)puVar5;
              }
            }
            uVar8 = FUN_0277d6c4(&local_b8);
            if (*(long *)puVar5 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if (((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
                 (puVar24[8] == 1)) {
                local_c8 = 0;
                lVar20 = *(long *)PTR_DAT_04bb2720;
                if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                  puVar13 = &DAT_055c04a0;
                }
                else {
                  puVar13 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
                  iVar9 = FUN_006bd550(*puVar13,0);
                  puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar9 != 0x758f7eaf) {
                    puVar13 = &DAT_055c04a0;
                  }
                }
                local_c4 = *(int *)(puVar13 + 7);
                local_c0 = FUN_017baf44();
                local_c0 = local_c0 & 1;
                local_e8 = PTR_DAT_04bb2010 + 0x10;
                local_e0 = 0;
                local_d0 = puVar3;
                puVar15 = (undefined2 *)FUN_01a5190c(&local_d0,0,puVar4,&local_e8);
                local_f0 = *puVar15;
                local_ee = *(undefined1 *)(puVar15 + 1);
                local_ed = *(undefined1 *)((long)puVar15 + 3);
                local_ec = *(undefined4 *)(puVar15 + 2);
                FUN_0277f02c(&local_f0,&local_b0);
                local_a0 = local_a0 + (int)local_e0;
                local_9c = local_9c + local_e0._4_4_;
                local_90 = local_90 + (int)local_e0;
                local_8c = local_8c + local_e0._4_4_;
              }
            }
            iVar10 = local_a0;
            iVar9 = local_8c + 1;
            if (iVar9 != local_9c) {
              iVar21 = local_9c;
              iVar22 = local_a0;
              do {
                local_d0 = PTR_DAT_04bb2010 + 0x10;
                local_c8 = iVar22;
                local_c4 = iVar21;
                uVar11 = FUN_02a7c074(param_2,&local_d0);
                if ((uVar11 & 1) != 0) {
                  if (puVar24[0x18] == 1) {
                    pplVar18 = &local_78;
                  }
                  else {
                    if (puVar24[0x18] != 2) goto LAB_011dfae8;
                    pplVar18 = &local_88;
                  }
                  plVar16 = *pplVar18 + 0x4f;
                  plVar12 = plVar16 + (ulong)(uint)puVar24[0x16] * 0x24;
                  if (999 < (uint)puVar24[0x16]) {
                    plVar12 = plVar16;
                  }
                  if (*(int *)((long)plVar12 + 0xfc) == 4) goto LAB_011dfae8;
                  uVar6 = (undefined4)(*pplVar18)[0x8cf2];
                  uVar11 = plVar12[0x21];
                  plVar12[0x21] = uVar11 | 0x80000;
                  if (!(*(int *)((long)plVar12 + 0xfc) != 2 || (uVar11 & 0x10000000) != 0))
                  goto LAB_011dfadc;
                  goto LAB_011dfae8;
                }
                if (iVar22 < local_90) {
                  iVar22 = iVar22 + 1;
                }
                else {
                  iVar21 = iVar21 + 1;
                  iVar22 = local_a0;
                }
              } while (iVar10 != iVar22 || iVar9 != iVar21);
            }
          }
          else {
            uVar8 = FUN_0277d6c4(&local_b8);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((*(uint *)(lVar20 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_011dfea0;
            FUN_0124c030(&local_d0,&local_b8);
            iVar9 = FUN_0123db50(&local_c8,CONCAT71(uStack_bf,local_c0));
            if (((iVar9 == 0x21) ||
                (iVar9 = FUN_0123db50(&local_c8,CONCAT71(uStack_bf,local_c0)), iVar9 == 0x22)) &&
               (uVar11 = FUN_02b291d0(param_2,&local_b0), (uVar11 & 1) != 0)) {
              if (puVar24[0x18] == 1) {
                pplVar18 = &local_78;
LAB_011dfdd4:
                plVar16 = *pplVar18 + 0x4f;
                plVar12 = plVar16 + (ulong)(uint)puVar24[0x16] * 0x24;
                if (999 < (uint)puVar24[0x16]) {
                  plVar12 = plVar16;
                }
                if (*(int *)((long)plVar12 + 0xfc) != 4) {
                  uVar6 = (undefined4)(*pplVar18)[0x8cf2];
                  uVar11 = plVar12[0x21];
                  plVar12[0x21] = uVar11 | 0x80000;
                  if ((*(int *)((long)plVar12 + 0xfc) == 2) && (((uint)uVar11 >> 0x1c & 1) == 0)) {
LAB_011dfadc:
                    FUN_011cf0c0(plVar12,plVar16,uVar6,0,0);
                  }
                }
              }
              else if (puVar24[0x18] == 2) {
                pplVar18 = &local_88;
                goto LAB_011dfdd4;
              }
LAB_011dfae8:
              *(ushort *)(puVar24 + 0x1a) = *(ushort *)(puVar24 + 0x1a) | 0x2000;
            }
            else {
              uVar11 = FUN_0123d890(CONCAT71(uStack_bf,local_c0),4);
              if (((uVar11 & 1) == 0) &&
                 (((uVar11 = FUN_0124dcb0(&local_d0), (uVar11 & 1) == 0 &&
                   (iVar9 = FUN_0123db50(&local_c8,CONCAT71(uStack_bf,local_c0)),
                   (iVar9 - 2U & 0xfffffff9) != 0)) && (*(char *)((long)puVar24 + 0x6e) < '\0')))) {
                iVar10 = FUN_0123db50(&local_c8,CONCAT71(uStack_bf,local_c0));
                iVar9 = local_a0;
                if (iVar10 != 0x2e) goto LAB_011dfea0;
                iVar10 = local_8c + 1;
                if (iVar10 != local_9c) {
                  iVar21 = local_9c;
                  iVar22 = local_a0;
                  do {
                    local_e0 = CONCAT44(iVar21,iVar22);
                    local_e8 = PTR_DAT_04bb2010 + 0x10;
                    uVar11 = FUN_02a7c524(param_2,&local_e8);
                    if ((uVar11 & 1) != 0) {
                      if (puVar24[0x18] == 1) {
                        pplVar18 = &local_78;
                      }
                      else {
                        if (puVar24[0x18] != 2) break;
                        pplVar18 = &local_88;
                      }
                      FUN_011c8ab4(*pplVar18,puVar24[0x16]);
                      break;
                    }
                    if (iVar22 < local_90) {
                      iVar22 = iVar22 + 1;
                    }
                    else {
                      iVar21 = iVar21 + 1;
                      iVar22 = local_a0;
                    }
                  } while (iVar9 != iVar22 || iVar10 != iVar21);
                }
              }
              else {
                iVar10 = local_a0;
                iVar9 = local_8c + 1;
                if (iVar9 != local_9c) {
                  iVar21 = local_9c;
                  iVar22 = local_a0;
                  do {
                    local_e0 = CONCAT44(iVar21,iVar22);
                    local_e8 = PTR_DAT_04bb2010 + 0x10;
                    uVar11 = FUN_02a7c208(param_2,&local_e8);
                    if ((uVar11 & 1) != 0) {
                      if (puVar24[0x18] == 1) {
                        pplVar18 = &local_78;
LAB_011dfd70:
                        plVar16 = *pplVar18 + 0x4f;
                        plVar12 = plVar16 + (ulong)(uint)puVar24[0x16] * 0x24;
                        if (999 < (uint)puVar24[0x16]) {
                          plVar12 = plVar16;
                        }
                        if (*(int *)((long)plVar12 + 0xfc) != 4) {
                          lVar20 = (*pplVar18)[0x8cf2];
                          uVar11 = plVar12[0x21];
                          plVar12[0x21] = uVar11 | 0x80000;
                          if (*(int *)((long)plVar12 + 0xfc) == 2 && (uVar11 & 0x10000000) == 0) {
                            FUN_011cf0c0(plVar12,plVar16,(int)lVar20,0,0);
                          }
                        }
                      }
                      else if (puVar24[0x18] == 2) {
                        pplVar18 = &local_88;
                        goto LAB_011dfd70;
                      }
                      *(ushort *)(puVar24 + 0x1a) = *(ushort *)(puVar24 + 0x1a) | 0x2000;
                    }
                    if (iVar22 < local_90) {
                      iVar22 = iVar22 + 1;
                    }
                    else {
                      iVar21 = iVar21 + 1;
                      iVar22 = local_a0;
                    }
                  } while (iVar10 != iVar22 || iVar9 != iVar21);
                }
              }
            }
          }
          iVar9 = *(int *)(param_1 + 0x24f78);
        }
      }
      iVar23 = iVar23 + 1;
      puVar24 = puVar24 + 0x1e;
    } while (iVar23 < iVar9);
  }
  return;
}

