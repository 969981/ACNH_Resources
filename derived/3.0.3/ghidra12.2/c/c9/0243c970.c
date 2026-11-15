
void FUN_0243c970(long param_1)

{
  byte *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte local_78 [4];
  undefined1 auStack_74 [8];
  byte local_6c [4];
  undefined8 local_68;
  float local_60;
  undefined2 local_5c;
  undefined1 uStack_5a;
  uint uStack_59;
  undefined1 uStack_55;
  uint local_38;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_04bb4718;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
      puVar13 = (uint *)&DAT_054f0958;
      if (iVar9 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar13 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar13 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar13 = puVar13 + (ulong)*pbVar1 * 2;
    }
  }
  puVar6 = PTR_DAT_04bb39b0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x15c) == 0)) {
LAB_0243caa0:
    uVar12 = 0;
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar14 + 0x158);
    }
    bVar15 = *pbVar1;
    bVar16 = *pbVar3;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (bVar16 == bVar15) goto LAB_0243caa0;
    lVar14 = *(long *)puVar4;
    if (lVar14 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar18 = &DAT_054f08d0;
        if (iVar9 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar18 = &DAT_054f08d0;
      }
    }
    else {
      puVar18 = (uint *)(lVar14 + 0x200);
    }
    local_68._0_4_ = 2;
    if ((*puVar18 >> 2 & 1) == 0) goto LAB_0243caa0;
    lVar14 = *(long *)puVar4;
    if ((lVar14 == 0) || (7 < (ulong)*pbVar1)) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(lVar14 + (ulong)*pbVar1 * 8 + 0xf04);
    }
    plVar21 = *(long **)(param_1 + 0x60);
    if (plVar21 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        plVar21 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar21 = &DAT_05240280;
      }
    }
    uVar11 = (**(code **)(*plVar21 + 0x100))(plVar21);
    uVar12 = 0;
    if ((iVar9 == 0) && ((uVar11 & 1) != 0)) {
      bVar16 = *pbVar1;
      local_60 = *(float *)(param_1 + 0x230);
      uStack_55 = 0;
      uStack_59 = 0;
      uStack_5a = 0;
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      local_68._0_4_ = CONCAT31(local_68._1_3_,bVar16);
      local_68._4_4_ = 1.4013e-45;
      local_5c = 1;
      uVar12 = FUN_02530cec(&local_68);
    }
  }
  if ((uVar12 & 1) == 0) {
    uVar8 = *puVar13 & 0xfbffffff;
  }
  else {
    uVar8 = *puVar13 | 0x4000000;
  }
  *puVar13 = uVar8;
  if ((*puVar13 >> 0x1b & 1) == 0) {
    if ((*puVar13 >> 0x1d & 1) == 0) {
      local_68._0_4_ = 0x1e;
      if ((*puVar13 >> 0x1e & 1) != 0) {
        local_68._0_4_ = 1;
        local_38 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
          local_38 = 0;
          if (uVar8 < 0x149) {
            local_38 = uVar8;
          }
        }
        if (local_38 == 1) {
          local_68._0_4_ = 0x1e;
          local_38 = 1;
          goto LAB_0243cc94;
        }
        local_68._0_4_ = FUN_00a74b78(pbVar1);
        if (((uint)local_68 == 0x13) || (iVar9 = FUN_00a74b78(pbVar1), iVar9 == 9)) {
          if (*(long *)(param_1 + 0x70) == 0) {
            local_38 = 0;
          }
          else {
            uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
            local_38 = 0;
            if (uVar8 < 0x149) {
              local_38 = uVar8;
            }
            if (((((local_38 == 0xd8) || (local_38 == 0xdb)) || (local_38 == 0x107)) ||
                ((local_38 == 0xef || (local_38 == 0xf0)))) || (local_38 == 0x88))
            goto LAB_0243d1c8;
          }
          local_68._0_4_ = 0x124;
          if ((local_38 != 0x124) &&
             (uVar12 = FUN_0255594c(pbVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar12 & 1) == 0))
          goto LAB_0243d45c;
        }
LAB_0243d1c8:
        local_68._0_4_ = 0xef;
        if (*(long *)(param_1 + 0x70) == 0) {
          local_38 = 0;
LAB_0243d210:
          local_68._0_4_ = 0xf0;
          if (local_38 == 0xf0) goto LAB_0243d22c;
        }
        else {
          uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
          local_38 = 0;
          if (uVar8 < 0x149) {
            local_38 = uVar8;
          }
          if (local_38 != 0xef) goto LAB_0243d210;
LAB_0243d22c:
          FUN_0252d8f0(&local_68,pbVar1);
          FUN_01af3d60(&local_38,&local_68,1);
          puVar4 = PTR_DAT_04bb43c0;
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar8 = FUN_0277d6c4(&local_38);
          if (*(long *)puVar4 == 0) {
LAB_0243d294:
            local_6c[0] = *pbVar1;
            if (7 < local_6c[0]) {
              local_6c[0] = 0xff;
            }
            FUN_02537690(local_6c);
            local_68._0_4_ = 0;
            local_60 = 8.40779e-45;
            local_68._4_4_ = (float)((uint)local_68._4_4_ & 0xffffff00);
            uStack_5a = 0;
            local_5c = 0;
            FUN_02321e44(auStack_74,param_1,&local_68);
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_0243d294;
          }
          *(undefined1 *)(param_1 + 0x1908) = 1;
          *(ulong *)(param_1 + 0x1900) = CONCAT44(uStack_34,local_38);
          local_78[0] = *(byte *)(param_1 + 0x1ee8);
          if (7 < local_78[0]) {
            local_78[0] = 0xff;
          }
          local_68._0_4_ = 0xfffe;
          local_68._4_4_ = 0.0;
          FUN_0277d4ac(&local_68);
          local_68._0_4_ = (uint)*(undefined8 *)(param_1 + 0x1900);
          local_68._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x1900) >> 0x20);
          FUN_02326130(local_78,&local_68,1);
        }
        local_68._0_4_ = 0x1e;
        *puVar13 = *puVar13 & 0xbfffffff;
        lVar14 = FUN_0252d9bc(0);
        if (lVar14 != 0) {
          (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),lVar14,1);
        }
        local_68._0_4_ = 1;
        goto LAB_0243d38c;
      }
    }
    else {
      local_68._0_4_ = 10;
      local_38 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
        local_38 = 0;
        if (uVar8 < 0x149) {
          local_38 = uVar8;
        }
      }
      if (local_38 == 10) {
        local_68._0_4_ = 0x1d;
LAB_0243cc94:
        if (((uint)local_68 < 0x39) && ((uint)local_68 < 0x39)) {
          *puVar13 = *puVar13 & (1 << (ulong)(uint)local_68 ^ 0xffffffffU);
        }
      }
      else {
        local_68._0_4_ = FUN_00a74b78(pbVar1);
        if ((((uint)local_68 != 0x13) &&
            (local_68._0_4_ = FUN_00a74b78(pbVar1), (uint)local_68 != 9)) ||
           (uVar12 = FUN_0255594c(pbVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar12 & 1) != 0)) {
          *puVar13 = *puVar13 & 0xdfffffff;
          local_68._4_4_ = 0.0;
          local_60 = 0.0;
          local_68._0_4_ = 0xffffffff;
          local_5c = 0;
          uStack_5a = 0;
          uStack_59 = 0;
          uStack_55 = 0;
          FUN_016e70c0(&local_68);
          local_38 = CONCAT13(uStack_55,uStack_59._1_3_);
          pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_38 >> 0x14) & 0xff0));
          fVar22 = *pfVar2 + (float)uStack_59._1_3_ * 5.9604645e-08 * pfVar2[1];
          fVar23 = pfVar2[2] + (float)uStack_59._1_3_ * 5.9604645e-08 * pfVar2[3];
          fVar24 = fVar22 * 0.0;
          local_68._4_4_ = local_68._4_4_ + fVar24 * 0.0 + fVar23 * 0.0 + (fVar22 + 0.0) * -2.55;
          local_60 = local_60 + (fVar24 * 0.0 + 1.0) * 0.0 + fVar23 * 0.0 * 0.0 + fVar24 * -2.55;
          fVar23 = (float)CONCAT13((undefined1)uStack_59,CONCAT12(uStack_5a,local_5c)) +
                   (fVar23 * 0.0 * 0.0 - fVar22 * 0.0) + fVar23 * -2.55;
          local_5c = SUB42(fVar23,0);
          uStack_5a = (undefined1)((uint)fVar23 >> 0x10);
          uStack_59._0_1_ = (undefined1)((uint)fVar23 >> 0x18);
          local_60 = (float)FUN_016e026c(0,(long)&local_68 + 4,0,0);
          (**(code **)(**(long **)(param_1 + 0x68) + 0x140))
                    (*(long **)(param_1 + 0x68),(long)&local_68 + 4,1);
          (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_38);
          local_68._0_4_ = 10;
          goto LAB_0243d38c;
        }
      }
    }
  }
  else {
    local_68._0_4_ = 0;
    local_38 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      local_38 = 0;
      if (uVar8 < 0x149) {
        local_38 = uVar8;
      }
    }
    if (local_38 == 0) {
      *puVar13 = *puVar13 & 0xf7ffffff;
      local_68._0_4_ = 0x1c;
      *puVar13 = *puVar13 | 0x10000000;
      local_38 = 0;
      goto LAB_0243d45c;
    }
    local_68._0_4_ = FUN_00a74b78(pbVar1);
    if (((uint)local_68 == 0x13) || (iVar9 = FUN_00a74b78(pbVar1), iVar9 == 9)) {
      local_68._0_4_ = 1;
      local_38 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
        local_38 = 0;
        if (uVar8 < 0x149) {
          local_38 = uVar8;
        }
      }
      if ((local_38 != 1) &&
         (uVar12 = FUN_0255594c(pbVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar12 & 1) == 0))
      goto LAB_0243d45c;
    }
    local_38 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      local_38 = 0;
      if (uVar8 < 0x149) {
        local_38 = uVar8;
      }
    }
    *puVar13 = *puVar13 & 0xf7ffffff;
    *puVar13 = *puVar13 | 0x10000000;
    local_68._0_4_ = 0;
LAB_0243d38c:
    if ((uint)local_68 < 0x149) {
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar14 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar14 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar14,(uint)local_68);
    }
  }
LAB_0243d45c:
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffff7;
  lVar14 = *(long *)puVar6;
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x15c) == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0x15c) != 0) {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar14 + 0x158);
    }
    bVar15 = *pbVar1;
    bVar16 = *pbVar3;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (bVar16 != bVar15) {
      return;
    }
  }
  plVar21 = *(long **)(param_1 + 0x60);
  if (plVar21 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      plVar21 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar21 = &DAT_05240280;
    }
  }
  uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
  if ((uVar12 & 1) == 0) {
    return;
  }
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  plVar21 = (long *)puVar20[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar21 != (long *)0x0) &&
      (uVar12 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb3758), (uVar12 & 1) != 0)) &&
     (plVar21[0x5b] != 0)) {
    fVar22 = *(float *)(plVar21[0x5b] + 0x54);
    fVar23 = 1.0;
    if (fVar22 <= 1.0) {
      fVar23 = fVar22;
    }
    if ((0.0 <= fVar22) && (0.9 <= fVar23)) {
      return;
    }
  }
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_68._0_4_ = 0;
  if (puVar20[0x227] == 0) {
    puVar13 = (uint *)FUN_0171ee68(&DAT_04c931a0);
    puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
    pcVar5 = PTR_DAT_04bbde88;
    puVar20 = (undefined8 *)PTR_DAT_04bbde90;
  }
  else {
    puVar13 = (uint *)FUN_0171ee68(*(long *)(puVar20[0x227] + 0x88) + 0x60);
    puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
    pcVar5 = PTR_DAT_04bbde88;
    puVar20 = (undefined8 *)PTR_DAT_04bbde90;
  }
  PTR_DAT_04bbde88 = pcVar5;
  PTR_DAT_04bbde90 = (undefined *)puVar20;
  if (puVar13 != (uint *)0x0) {
    puVar4 = (undefined *)CONCAT44(local_68._4_4_,0xb);
    if (*puVar13 != 0) {
      cVar17 = *pcVar5;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *puVar20 = 0xffffffffffffffff;
          puVar20[1] = 0xffffffffffffffff;
          *pcVar5 = '\x01';
          puVar20[6] = 0xffffffffffffffff;
          puVar20[2] = 0xffffffffffffffff;
          puVar20[3] = 0xffffffffffffffff;
          puVar20[4] = 0xffffffffffffffff;
          puVar20[5] = 0xffffffffffffffff;
          uVar8 = *puVar13;
        }
        else {
          uVar8 = *(uint *)((long)puVar20 + 0x2c);
          if (-1 < (int)uVar8) {
            if ((ulong)uVar8 + (long)puVar13 != 0) {
              if ((*(byte *)((ulong)uVar8 + (long)puVar13 + 1) >> 3 & 1) != 0) goto LAB_0243d850;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar13;
        }
        if ((uVar8 == 0) || (puVar18 = (uint *)(ulong)uVar8, puVar13 == puVar18)) break;
        lVar14 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar18)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar13 + (lVar14 - (long)puVar18);
        if (lVar14 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar18));
        *(undefined4 *)((long)puVar20 + 0x2c) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar19 = (int *)(lVar14 + 4);
        while (piVar19[-1] != 0x42ad246a) {
          piVar19 = piVar19 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0243d708;
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)((long)puVar20 + 0x2c) = iVar9;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_0243d708:
    puVar7 = PTR_DAT_04bb7ff8;
    puVar4 = (undefined *)CONCAT44(local_68._4_4_,7);
    if (*(long *)(param_1 + 0x70) == 0) {
      local_38 = 0;
    }
    else {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      local_38 = 0;
      if (uVar8 < 0x149) {
        local_38 = uVar8;
      }
      if (local_38 == 7) goto LAB_0243d850;
    }
    local_68._0_4_ = 8;
    puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
    if (local_38 != 8) {
      lVar14 = *(long *)puVar6;
      if (lVar14 != 0) {
        puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
        if (*(int *)(lVar14 + 0x15c) == 0) goto LAB_0243d850;
        if (*(int *)(lVar14 + 0x10) == 0) {
          puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
          if (*(int *)(lVar14 + 0x50) < 1) goto LAB_0243d850;
        }
      }
      puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
      if (*(char *)(param_1 + 0x1eb4) == '\0') {
        puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
        if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
          if (*(long *)PTR_DAT_04bb7ff8 != 0) {
            puVar4 = (undefined *)CONCAT44(local_68._4_4_,8);
            if (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0) goto LAB_0243d850;
          }
          uVar12 = FUN_0315608c();
          puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
          if ((uVar12 & 1) == 0) {
            if (*(long *)puVar7 != 0) {
              puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
              if (*(int *)(*(long *)puVar7 + 0x588) != 0) goto LAB_0243d850;
            }
            if (*(long *)PTR_DAT_04bb38d0 != 0) {
              puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
              if (*(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) != '\0') goto LAB_0243d850;
            }
            puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x2a789248) {
              puVar4 = (undefined *)CONCAT44(local_68._4_4_,(uint)local_68);
              if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x78855454) {
                lVar14 = FUN_016e3954(param_1);
                local_68 = PTR_DAT_04bb2020 + 0x10;
                local_60 = 1.642712e-36;
                local_5c = 0;
                uStack_5a = 0;
                uStack_59 = uStack_59 & 0xffffff00;
                FUN_01733fa0(lVar14 + 0x5c78,&local_68,0);
                puVar4 = local_68;
              }
            }
          }
        }
      }
    }
  }
LAB_0243d850:
  local_68 = puVar4;
  uVar12 = FUN_016f7738(PTR_DAT_04bb3238);
  if ((uVar12 & 1) != 0) {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 8;
  }
  return;
}

