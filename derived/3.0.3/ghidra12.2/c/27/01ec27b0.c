
undefined8 FUN_01ec27b0(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  uint *puVar15;
  char cVar16;
  uint *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined4 local_1f0 [2];
  undefined *local_1e8;
  long local_1e0;
  char local_1d8;
  byte local_1d7;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined6 local_1c0;
  undefined2 uStack_1ba;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined5 local_174;
  undefined3 uStack_16f;
  undefined5 uStack_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined2 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [31];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [31];
  undefined1 local_c5;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  undefined8 local_a4;
  long local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  long local_84;
  undefined8 local_7c;
  uint local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined8 local_68;
  
  plVar19 = param_1 + 0x15a7;
  if (((*(byte *)((long)param_1 + 0xad54) >> 1 & 1) == 0) ||
     ((*(byte *)((long)param_1 + 0xad5a) >> 1 & 1) != 0)) {
    return 0;
  }
  iVar8 = *(int *)((long)param_1 + 0xad44);
  bVar4 = *(byte *)((long)param_1 + 0xad54) & 0xf9;
  bVar2 = bVar4 | 4;
  if (iVar8 < 1) {
    bVar2 = bVar4;
  }
  bVar4 = bVar2 | 8;
  if (iVar8 != 2) {
    bVar4 = bVar2 & 0xf7;
  }
  if ((bVar2 & 1) != 0) {
    bVar2 = bVar4;
  }
  bVar4 = bVar2 | 0x10;
  if (iVar8 != 0) {
    bVar4 = bVar2;
  }
  *(byte *)((long)param_1 + 0xad54) = bVar4;
  lVar9 = FUN_0265c3e0(*(undefined4 *)(param_1[1] + 0x508));
  if (lVar9 == 0) {
    return 1;
  }
  local_1d8 = '\0';
  local_1e0 = lVar9;
  if (*(long *)(lVar9 + 0x28) == 0) {
    local_1d7 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x10);
    local_1d7 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      local_1d7 = (**(code **)*puVar10)();
    }
  }
  local_1d7 = local_1d7 & 1;
  local_1e8 = PTR_DAT_04bb67a0 + 0x10;
  uVar11 = FUN_0220f914(0);
  if ((uVar11 & 1) == 0) {
    plVar19 = *(long **)(param_1[1] + 0x60);
    if (plVar19 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        plVar19 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar19 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar19 + 0x370))(local_1f0,plVar19);
    puVar1 = PTR_DAT_04bb43c0;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(local_1f0);
    lVar9 = *(long *)puVar1;
    if (lVar9 == 0) {
LAB_01ec2d14:
      lVar9 = local_1e0;
      if ((*(long *)(local_1e0 + 0x28) != 0) &&
         (plVar19 = *(long **)(*(long *)(local_1e0 + 0x28) + 0x20), plVar19 != (long *)0x0)) {
        local_1d0 = *(undefined **)(local_1e0 + 8);
        uVar13 = *(undefined8 *)(local_1e0 + 0x10);
        local_1c0 = 0x13230;
        uStack_1ba = 0;
        local_1c8 = (undefined4)uVar13;
        uStack_1c4 = (undefined2)((ulong)uVar13 >> 0x20);
        uStack_1c2 = (undefined2)((ulong)uVar13 >> 0x30);
        (**(code **)(*plVar19 + 0x20))(plVar19,&local_1d0);
      }
      lVar20 = *(long *)(lVar9 + 0x10);
      cVar16 = (*(undefined **)(lVar9 + 8))[lVar20 + 0x1315b];
      if (cVar16 != '\x12') {
        if ((*(long *)(lVar9 + 0x28) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar19 != (long *)0x0)) {
          local_1c8 = (undefined4)lVar20;
          uStack_1c4 = (undefined2)((ulong)lVar20 >> 0x20);
          uStack_1c2 = (undefined2)((ulong)lVar20 >> 0x30);
          local_1c0 = 0x13230;
          uStack_1ba = 0;
          local_1d0 = *(undefined **)(lVar9 + 8);
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_1d0);
          cVar16 = *(char *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1315b);
        }
        if (cVar16 != '\x01') goto LAB_01ec3314;
      }
      if (param_1[1] != 0) {
        uVar7 = *(uint *)(param_1[1] + 0x508);
        if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
          if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
            (&DAT_053fea30)[(ulong)uVar7 * 0xba0] = (&DAT_053fea30)[(ulong)uVar7 * 0xba0] & 0xfe;
          }
          else {
            lVar9 = *(long *)PTR_DAT_04bb3968;
            lVar20 = lVar9 + 0xe18 + (ulong)uVar7 * 0x28;
            pbVar18 = (byte *)(lVar20 + 8);
            if (*pbVar18 < 100) {
              local_1c0 = (undefined6)((ulong)*(long *)(lVar20 + 0x16) >> 0x10);
              uVar13 = *(undefined8 *)(lVar20 + 0x10);
              local_1d0 = (undefined *)((ulong)*(undefined **)pbVar18 & 0xffffffffcfffffff);
              local_1c8 = (undefined4)uVar13;
              uStack_1c4 = (undefined2)((ulong)uVar13 >> 0x20);
              uStack_1c2 = (undefined2)((ulong)uVar13 >> 0x30);
              if (*(undefined **)pbVar18 != local_1d0 ||
                  *(long *)(lVar20 + 0x16) != CONCAT62(local_1c0,uStack_1c2)) {
                *(undefined **)pbVar18 = local_1d0;
                *(undefined8 *)(lVar20 + 0x10) = uVar13;
                *(undefined1 *)(lVar9 + 0xe18 + (ulong)uVar7 * 0x28 + 0x1e) = 1;
                *(ulong *)(lVar20 + 0x16) = CONCAT62(local_1c0,uStack_1c2);
              }
            }
          }
        }
      }
      local_8c = 0xfffe;
      FUN_0277d4ac(&local_8c);
      local_84 = 0xfffe;
      FUN_0277d4ac(&local_84);
      local_7c = 0xfffe;
      FUN_0277d4ac(&local_7c);
      local_74 = local_74 & 0xffffff00;
      uStack_70 = 0xffffffff;
      local_94 = 0xfffe;
      FUN_0277d4ac(&local_94);
      local_9c = 0xfffe;
      FUN_0277d4ac(&local_9c);
      local_a4 = 0xfffe;
      FUN_0277d4ac(&local_a4);
      plVar19 = *(long **)(param_1[1] + 0x60);
      if (plVar19 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          plVar19 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar19 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar19 + 0x2f0))(auStack_ac,plVar19);
      plVar19 = *(long **)(param_1[1] + 0x60);
      if (plVar19 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          plVar19 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar19 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar19 + 0x2d8))(auStack_b4,plVar19);
      plVar19 = *(long **)(param_1[1] + 0x60);
      if (plVar19 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          plVar19 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar19 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar19 + 0x2e0))(auStack_bc,plVar19);
      lVar9 = local_1e0;
      if ((*(long *)(local_1e0 + 0x28) != 0) &&
         (plVar19 = *(long **)(*(long *)(local_1e0 + 0x28) + 0x20), plVar19 != (long *)0x0)) {
        local_1d0 = *(undefined **)(local_1e0 + 8);
        uVar13 = *(undefined8 *)(local_1e0 + 0x10);
        local_1c0 = 0x13230;
        uStack_1ba = 0;
        local_1c8 = (undefined4)uVar13;
        uStack_1c4 = (undefined2)((ulong)uVar13 >> 0x20);
        uStack_1c2 = (undefined2)((ulong)uVar13 >> 0x30);
        (**(code **)(*plVar19 + 0x20))(plVar19,&local_1d0);
      }
      local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffff00000000);
      uVar11 = FUN_0269b5c0(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),&local_94,&local_9c,
                            &local_a4,&local_1d0,0);
      if ((uVar11 & 1) == 0) {
        uVar7 = local_74 & 0xff;
      }
      else {
        if ((*(long *)(lVar9 + 0x28) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar19 != (long *)0x0)) {
          local_1d0 = *(undefined **)(lVar9 + 8);
          uVar13 = *(undefined8 *)(lVar9 + 0x10);
          local_1c0 = 0x13230;
          uStack_1ba = 0;
          local_1c8 = (undefined4)uVar13;
          uStack_1c4 = (undefined2)((ulong)uVar13 >> 0x20);
          uStack_1c2 = (undefined2)((ulong)uVar13 >> 0x30);
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_1d0);
        }
        local_68 = local_68 & 0xffffffff00000000;
        *(undefined1 *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1315b) = 0;
        local_6c = FUN_021d7d60();
        uVar11 = (ulong)local_1d0 >> 0x30;
        local_6b = (undefined1)local_68;
        local_1d0 = (undefined *)CONCAT26((ushort)uVar11 & 0xff00,0xff0000000000);
        if (-1 < DAT_053d0e30) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_1d0,&local_6c,2,0);
        }
        uVar11 = FUN_0277d7b4(&local_94,auStack_ac);
        if ((uVar11 & 1) == 0) {
          local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffff00000000);
          local_8c = local_94;
          local_74 = local_74 | 1;
        }
        uVar11 = FUN_0277d7b4(&local_9c,auStack_b4);
        if ((uVar11 & 1) == 0) {
          local_84 = local_9c;
          local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,1);
          local_74 = local_74 | 2;
        }
        uVar11 = FUN_0277d7b4(&local_a4,auStack_bc);
        uVar7 = local_74 & 0xff;
        if ((uVar11 & 1) == 0) {
          local_7c = local_a4;
          local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,2);
          uVar7 = uVar7 | 4;
          local_74 = CONCAT31(local_74._1_3_,(char)uVar7);
        }
      }
      if ((uVar7 & 7) == 0) goto LAB_01ec3314;
      local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffff00000000);
      *(uint *)(param_1 + 0x15d2) = (uint)local_8c;
      *(undefined4 *)((long)param_1 + 0xae94) = local_8c._4_4_;
      param_1[0x15d3] = local_84;
      *(undefined4 *)(param_1 + 0x15d4) = (undefined4)local_7c;
      *(undefined4 *)((long)param_1 + 0xaea4) = local_7c._4_4_;
      param_1[0x15d5] = CONCAT44(uStack_70,local_74);
      local_1b8 = 0;
      local_18c = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      local_1b0 = PTR_DAT_04bb2010 + 0x10;
      local_1c8 = SUB84(puVar1,0);
      uStack_1c4 = (undefined2)((ulong)puVar1 >> 0x20);
      uStack_1c2 = (undefined2)((ulong)puVar1 >> 0x30);
      local_1c0 = SUB86(local_1b0,0);
      uStack_1ba = (undefined2)((ulong)local_1b0 >> 0x30);
      local_1a8 = 0;
      local_194 = 0;
      uStack_190 = 0xfffe;
      FUN_0277d4ac(&uStack_190);
      local_174 = 0;
      uStack_16f = 0;
      uStack_16c = 0;
      local_178 = 0xbf800000;
      local_188 = 0x41c8000041800000;
      uStack_180 = 0xbf800000bf800000;
      local_164 = 0xfffe;
      FUN_0277d4ac(&local_164);
      local_15c = 0;
      local_120 = 0x20;
      local_f0 = local_e4;
      local_e8 = 0x20;
      local_128 = local_11c;
      local_fd = 0;
      local_130 = PTR_DAT_04bb2028 + 0x10;
      local_11c[0] = 0;
      local_c5 = 0;
      local_e4[0] = 0;
      local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffff00000000);
      local_1b8 = 0;
      uStack_198 = 0;
      local_194 = 0;
      local_68 = 0xfffe;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_f8 = local_130;
      FUN_0277d4ac(&local_68);
      uStack_190 = (uint)local_68;
      local_18c = local_68._4_4_;
      local_188 = 0x41c8000041800000;
      uStack_180 = 0xbf800000bf800000;
      local_178 = 0xbf800000;
      local_174 = 0;
      uStack_16f = 0;
      uStack_16c = 0;
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      local_15c = 0;
      local_158 = 0;
      uVar13 = 0x13;
      local_154 = 0;
      local_14c = 0;
      local_144 = 0;
      local_13c = 0;
      local_134 = 0;
      *local_128 = 0;
      *local_f0 = 0;
      local_134._0_2_ = CONCAT11(1,(undefined1)local_134);
      local_164 = *(undefined8 *)PTR_DAT_04bb37e0;
      goto LAB_01ec32ac;
    }
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01ec2d14;
    local_1c0 = 0;
    uStack_1ba = 0;
    local_1d0 = PTR_DAT_04bc0510 + 0x10;
    local_1c8 = local_1f0[0];
    uStack_1c4 = (undefined2)local_1f0[1];
    uStack_1c2 = (undefined2)((uint)local_1f0[1] >> 0x10);
    uVar7 = FUN_0277d6c4(&local_1c8);
    if (*(long *)puVar1 == 0) {
LAB_01ec2cdc:
      local_8c = CONCAT44(local_8c._4_4_,0x14);
      uVar7 = 0xbc;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01ec2cdc;
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(local_1f0);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar7) ||
         (puVar15 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar15 == (uint *)0x0)) goto LAB_01ec2cdc;
      uVar7 = 0;
      local_8c = CONCAT44(local_8c._4_4_,0x14);
      uVar5 = *puVar15;
      if ((uVar5 != 0) && (puVar15 != (uint *)(ulong)uVar5)) {
        puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar5);
        uVar7 = 0;
        if (*puVar17 != 0) {
          uVar7 = puVar17[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar17 + lVar9 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar9 != 0) {
              uVar5 = 0;
              if ((ulong)uVar7 != 0) {
                uVar5 = (uint)((ulong)((long)puVar15 - lVar9) / (ulong)uVar7);
              }
              if (*puVar17 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                 uVar7 < 0xbd)) goto LAB_01ec2ce8;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_01ec2ce8:
    local_68 = CONCAT44(local_68._4_4_,uVar7);
    if (uVar7 != (uint)local_8c) goto LAB_01ec2d14;
    uVar13 = 0x12;
    puVar10 = (undefined8 *)0x0;
    pcVar14 = *(code **)(*param_1 + 0x38);
  }
  else {
    if ((*(long *)(lVar9 + 0x28) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
      local_1d0 = *(undefined **)(lVar9 + 8);
      uVar13 = *(undefined8 *)(lVar9 + 0x10);
      local_1c8 = (undefined4)uVar13;
      uStack_1c4 = (undefined2)((ulong)uVar13 >> 0x20);
      uStack_1c2 = (undefined2)((ulong)uVar13 >> 0x30);
      local_1c0 = 0x13230;
      uStack_1ba = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_1d0);
    }
    lVar20 = *(long *)(lVar9 + 0x10);
    bVar4 = (*(undefined **)(lVar9 + 8))[lVar20 + 0x1315b];
    uVar7 = (uint)bVar4;
    local_8c = CONCAT44(local_8c._4_4_,(uint)bVar4);
    if (bVar4 == 0x12) goto LAB_01ec3314;
    if ((*(long *)(lVar9 + 0x28) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
      local_1c8 = (undefined4)lVar20;
      uStack_1c4 = (undefined2)((ulong)lVar20 >> 0x20);
      uStack_1c2 = (undefined2)((ulong)lVar20 >> 0x30);
      local_1c0 = 0x13230;
      uStack_1ba = 0;
      local_1d0 = *(undefined **)(lVar9 + 8);
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_1d0);
      uVar7 = (uint)*(byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1315b);
    }
    local_68 = CONCAT44(local_68._4_4_,uVar7);
    if (uVar7 == 1) goto LAB_01ec3314;
    uVar5 = FUN_021ded20();
    uVar7 = 100;
    if ((int)*plVar19 != 0) {
      uVar7 = 0x46;
    }
    uVar6 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if ((uVar6 & 0xfffffffe) == 6) {
LAB_01ec3308:
      FUN_01ec4850(param_1,&local_1e8);
      goto LAB_01ec3314;
    }
    plVar12 = *(long **)(param_1[1] + 0x60);
    if (plVar12 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar12 = &DAT_05240280;
      }
      else {
        plVar12 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar12 + 0x370))(&local_8c);
    puVar1 = PTR_DAT_04bb43c0;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_8c);
    lVar9 = *(long *)puVar1;
    if (lVar9 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_1c0 = 0;
        uStack_1ba = 0;
        local_1d0 = PTR_DAT_04bc0510 + 0x10;
        local_1c8 = (uint)local_8c;
        uStack_1c4 = (undefined2)((ulong)local_8c >> 0x20);
        uStack_1c2 = (undefined2)((ulong)local_8c >> 0x30);
        uVar6 = FUN_0277d6c4(&local_1c8);
        if (*(long *)puVar1 == 0) {
LAB_01ec32c8:
          local_68 = CONCAT44(local_68._4_4_,0x14);
          uVar6 = 0xbc;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01ec32c8;
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_8c);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
             (puVar15 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar15 == (uint *)0x0)) goto LAB_01ec32c8;
          uVar6 = 0;
          local_68 = CONCAT44(local_68._4_4_,0x14);
          uVar3 = *puVar15;
          if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
            puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
            uVar6 = 0;
            if (*puVar17 != 0) {
              uVar6 = puVar17[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar17 + lVar9 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar9 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar15 - lVar9) / (ulong)uVar6);
                  }
                  if (*puVar17 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar6 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                     uVar6 < 0xbd)) goto LAB_01ec32d4;
                }
              }
              uVar6 = 0;
            }
          }
        }
LAB_01ec32d4:
        local_94 = CONCAT44(local_94._4_4_,uVar6);
        if (uVar6 == (uint)local_68) goto LAB_01ec3314;
      }
    }
    if ((int)*plVar19 == 3) {
LAB_01ec32f4:
      if ((int)*plVar19 == 3 || ((uVar5 ^ 0xffffffff) & 1) != 0) goto LAB_01ec3314;
      goto LAB_01ec3308;
    }
    if ((uVar5 & 1) != 0) {
      lVar9 = param_1[1];
      uVar6 = *(uint *)(lVar9 + 0x288);
      *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
      uVar6 = uVar6 ^ uVar6 << 0xb;
      *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
      uVar3 = *(uint *)(lVar9 + 0x294);
      *(uint *)(lVar9 + 0x290) = uVar3;
      uVar6 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
      *(uint *)(lVar9 + 0x294) = uVar6;
      if (uVar7 <= (uint)((ulong)uVar6 * 100 >> 0x20)) goto LAB_01ec32f4;
    }
    FUN_01e7b7bc(&local_1d0);
    FUN_021e8820(&local_68,param_1[1]);
    uVar13 = 0x12;
    uStack_190 = (uint)local_68;
    local_18c = local_68._4_4_;
LAB_01ec32ac:
    pcVar14 = *(code **)(*param_1 + 0x38);
    puVar10 = &local_1d0;
  }
  (*pcVar14)(param_1,uVar13,puVar10,1);
LAB_01ec3314:
  if (local_1d7 != 0) {
    lVar9 = *(long *)(local_1e0 + 0x28);
    if (local_1d8 == '\0') {
      if (lVar9 == 0) {
        return 1;
      }
      puVar10 = *(undefined8 **)(lVar9 + 0x18);
    }
    else {
      if (lVar9 == 0) {
        return 1;
      }
      puVar10 = *(undefined8 **)(lVar9 + 8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)();
    }
  }
  return 1;
}

