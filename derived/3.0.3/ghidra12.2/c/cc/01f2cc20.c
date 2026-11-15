
void FUN_01f2cc20(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  ushort uVar18;
  uint *puVar19;
  int *piVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined5 local_164;
  undefined3 uStack_15f;
  undefined5 uStack_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [31];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [31];
  undefined1 local_b5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar6 = FUN_021c9770(*(undefined4 *)(param_1[1] + 0x50c),1);
  puVar1 = PTR_DAT_04bb30a0;
  if (param_2 == 0) {
    if (lVar6 == 0) {
      return;
    }
    local_1c0 = (ulong)local_1c0._4_4_ << 0x20;
    if ((*(byte *)(lVar6 + 0x118) & 1) == 0) {
      return;
    }
    lVar6 = FUN_021c9770(*(undefined4 *)(param_1[1] + 0x50c),1);
    if (lVar6 != 0) {
      local_1c0 = local_1c0 & 0xffffffff00000000;
      *(byte *)(lVar6 + 0x118) = *(byte *)(lVar6 + 0x118) & 0xfe;
    }
    local_8c = 0xfffe;
    FUN_0277d4ac(&local_8c);
    local_84 = 0xfffe;
    FUN_0277d4ac(&local_84);
    local_7c = 0xfffe;
    uStack_78 = 0;
    FUN_0277d4ac(&local_7c);
    local_74 = local_74 & 0xffffff00;
    lVar6 = param_1[1];
    uStack_70 = 0xffffffff;
    uVar21 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
    uVar4 = FUN_006bd550(*(undefined8 *)(lVar6 + 1000),0);
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar4);
    puVar7 = (uint *)FUN_0079e770(uVar21,&local_1c0);
    puVar2 = PTR_DAT_04bb40b8;
    puVar1 = PTR_DAT_04bb40b0;
    if (puVar7 == (uint *)0x0) {
      uVar10 = (undefined2)local_8c;
      uVar11 = local_8c._2_1_;
      uVar12 = local_8c._3_1_;
      uVar4 = local_8c._4_4_;
      uVar13 = (undefined2)local_84;
      uVar15 = local_84._2_1_;
      uVar16 = local_84._3_1_;
      uVar17 = local_84._4_4_;
    }
    else {
      if (*puVar7 != 0) {
        cVar14 = *PTR_DAT_04bb40b0;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar2 + 0x50);
            if (-1 < (int)uVar3) {
              if ((ushort *)((ulong)uVar3 + (long)puVar7) != (ushort *)0x0) {
                uVar18 = *(ushort *)((ulong)uVar3 + (long)puVar7);
                goto LAB_01f2d2e0;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar19 = (uint *)(ulong)*puVar7;
          uVar18 = 0xfffe;
          if ((*puVar7 == 0) || (puVar7 == puVar19)) goto LAB_01f2d2e0;
          lVar6 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar19)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar7 + (lVar6 - (long)puVar19);
          if (lVar6 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar19));
          *(undefined4 *)(puVar2 + 0x50) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar20 = (int *)(lVar6 + 4);
          while (piVar20[-1] != -0x78f0e1d7) {
            piVar20 = piVar20 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01f2d2dc;
          }
          iVar5 = 0;
          if (*piVar20 != -1) {
            iVar5 = *piVar20;
          }
          *(int *)(puVar2 + 0x50) = iVar5;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_01f2d2dc:
      uVar18 = 0xfffe;
LAB_01f2d2e0:
      local_1c0 = (ulong)uVar18;
      FUN_0277d4ac(&local_1c0);
      local_8c = local_1c0;
      local_68 = CONCAT44((int)(local_68 >> 0x20),1);
      local_84 = *(ulong *)PTR_DAT_04bb37e0;
      local_74 = local_74 | 3;
      uVar10 = (undefined2)local_1c0;
      uVar11 = local_1c0._2_1_;
      uVar12 = local_1c0._3_1_;
      uVar4 = local_1c0._4_4_;
      uVar13 = *(undefined2 *)PTR_DAT_04bb37e0;
      uVar15 = PTR_DAT_04bb37e0[2];
      uVar16 = PTR_DAT_04bb37e0[3];
      uVar17 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    }
    *(undefined2 *)(param_1 + 0x15d2) = uVar10;
    *(undefined1 *)((long)param_1 + 0xae92) = uVar11;
    *(undefined1 *)((long)param_1 + 0xae93) = uVar12;
    *(undefined4 *)((long)param_1 + 0xae94) = uVar4;
    *(undefined2 *)(param_1 + 0x15d3) = uVar13;
    *(undefined1 *)((long)param_1 + 0xae9a) = uVar15;
    *(undefined1 *)((long)param_1 + 0xae9b) = uVar16;
    *(undefined4 *)((long)param_1 + 0xae9c) = uVar17;
    *(undefined4 *)(param_1 + 0x15d4) = local_7c;
    *(undefined4 *)((long)param_1 + 0xaea4) = uStack_78;
    param_1[0x15d5] = CONCAT44(uStack_70,local_74);
    FUN_016d1ea0(0,&local_8c,PTR_DAT_04bb37e0);
    local_1c0 = local_1c0 & 0xffffffff00000000;
    local_184 = 0;
    uStack_180 = 0xfffe;
    local_1a8 = 0;
    local_17c = 0;
    local_1b8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_1b0 = PTR_DAT_04bb2010 + 0x10;
    local_198 = 0;
    local_1a0 = puStack_1b0;
    FUN_0277d4ac(&uStack_180);
    local_164 = 0;
    uStack_15f = 0;
    uStack_15c = 0;
    local_168 = 0xbf800000;
    local_178 = 0x41c8000041800000;
    uStack_170 = 0xbf800000bf800000;
    local_154 = 0xfffe;
    FUN_0277d4ac(&local_154);
    local_110 = 0x20;
    local_d8 = 0x20;
    local_118 = local_10c;
    local_e0 = local_d4;
    local_14c = 0;
    local_ed = 0;
    local_120 = PTR_DAT_04bb2028 + 0x10;
    local_10c[0] = 0;
    local_b5 = 0;
    local_d4[0] = 0;
    local_1c0 = local_1c0 & 0xffffffff00000000;
    local_1a8 = 0;
    uStack_188 = 0;
    local_184 = 0;
    local_68 = 0xfffe;
    local_198 = 0;
    uStack_190 = 0;
    local_e8 = local_120;
    FUN_0277d4ac(&local_68);
    uStack_180 = (undefined4)local_68;
    local_17c = local_68._4_4_;
    local_178 = 0x41c8000041800000;
    uStack_170 = 0xbf800000bf800000;
    local_168 = 0xbf800000;
    local_164 = 0;
    uStack_15f = 0;
    uStack_15c = 0;
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    local_14c = 0;
    local_148 = 0;
    local_144 = 0;
    local_13c = 0;
    local_134 = 0;
    local_12c = 0;
    local_124 = 0;
    local_154 = local_68;
    *local_118 = 0;
    *local_e0 = 0;
    local_124._0_2_ = CONCAT11(1,(undefined1)local_124);
  }
  else {
    if ((lVar6 != 0) &&
       (local_1c0 = (ulong)local_1c0._4_4_ << 0x20, (*(byte *)(lVar6 + 0x118) & 1) != 0)) {
      return;
    }
    uVar3 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if ((uVar3 & 0xfffffffe) != 6) {
      uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
      if ((uVar3 & 0xfffffffe) != 4) {
        return;
      }
      if ((int)param_1[0x15a7] == 3) {
        return;
      }
    }
    lVar6 = FUN_021c9770(*(undefined4 *)(param_1[1] + 0x50c),1);
    if (lVar6 != 0) {
      local_1c0 = local_1c0 & 0xffffffff00000000;
      *(byte *)(lVar6 + 0x118) = *(byte *)(lVar6 + 0x118) | 1;
    }
    local_8c = 0xfffe;
    FUN_0277d4ac(&local_8c);
    local_84 = 0xfffe;
    FUN_0277d4ac(&local_84);
    local_7c = 0xfffe;
    uStack_78 = 0;
    FUN_0277d4ac(&local_7c);
    local_74 = local_74 & 0xffffff00;
    uStack_70 = 0xffffffff;
    uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
    if ((uVar3 & 0xfffffffe) == 4) {
      FUN_021df2d0(&local_1c0,param_1[1] + 0x3e0);
      local_68 = (ulong)local_68._4_4_ << 0x20;
      local_8c = local_1c0;
      local_74 = local_74 | 1;
      FUN_021df470(&local_1c0,param_1[1] + 0x3e0);
      local_68 = CONCAT44(local_68._4_4_,1);
      local_84 = local_1c0;
      uVar3 = local_74 & 0xff | 2;
      local_74 = local_74 | 2;
    }
    else {
      local_90 = 0x23;
      local_8e = 8;
      FUN_020fd3a0(&local_90,param_1[1] + 0x3e0);
      local_1c0 = 0xfffe;
      FUN_0277d4ac(&local_1c0);
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      local_98 = 0xfffe;
      FUN_0277d4ac(&local_98);
      plVar22 = *(long **)(param_1[1] + 0x60);
      if (plVar22 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar22 = &DAT_05240280;
        }
        else {
          plVar22 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar22 + 0x2f0))(auStack_a0);
      plVar22 = *(long **)(param_1[1] + 0x60);
      if (plVar22 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar22 = &DAT_05240280;
        }
        else {
          plVar22 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar22 + 0x2d8))(auStack_a8);
      plVar22 = *(long **)(param_1[1] + 0x60);
      if (plVar22 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar22 = &DAT_05240280;
        }
        else {
          plVar22 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar22 + 0x2e0))(auStack_b0);
      local_6c = 1;
      puVar9 = *(undefined8 **)(param_1[1] + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar9 = &DAT_05240280;
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      uVar8 = FUN_021e0730(&local_1c0,&local_68,&local_98,&local_6c,&local_90,puVar9);
      if ((uVar8 & 1) == 0) {
        uVar3 = local_74 & 0xff;
      }
      else {
        uVar8 = FUN_0277d7b4(&local_1c0,auStack_a0);
        if ((uVar8 & 1) == 0) {
          local_6c = 0;
          local_8c = local_1c0;
          local_74 = local_74 | 1;
        }
        uVar8 = FUN_0277d7b4(&local_68,auStack_a8);
        if ((uVar8 & 1) == 0) {
          local_84 = local_68;
          local_6c = 1;
          local_74 = local_74 | 2;
        }
        uVar8 = FUN_0277d7b4(&local_98,auStack_b0);
        uVar3 = local_74 & 0xff;
        if ((uVar8 & 1) == 0) {
          local_7c = (undefined4)local_98;
          uStack_78 = local_98._4_4_;
          local_6c = 2;
          uVar3 = uVar3 | 4;
          local_74 = CONCAT31(local_74._1_3_,(char)uVar3);
        }
      }
    }
    if ((uVar3 & 7) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x15d2) = (undefined4)local_8c;
    *(undefined4 *)((long)param_1 + 0xae94) = local_8c._4_4_;
    param_1[0x15d3] = local_84;
    *(undefined4 *)(param_1 + 0x15d4) = local_7c;
    *(undefined4 *)((long)param_1 + 0xaea4) = uStack_78;
    param_1[0x15d5] = CONCAT44(uStack_70,local_74);
    FUN_016d1ea0(1,&local_8c,&local_84);
    local_1c0 = local_1c0 & 0xffffffff00000000;
    local_184 = 0;
    uStack_180 = 0xfffe;
    local_1a8 = 0;
    local_17c = 0;
    local_1b8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_1b0 = PTR_DAT_04bb2010 + 0x10;
    local_198 = 0;
    local_1a0 = puStack_1b0;
    FUN_0277d4ac(&uStack_180);
    local_164 = 0;
    uStack_15f = 0;
    uStack_15c = 0;
    local_168 = 0xbf800000;
    local_178 = 0x41c8000041800000;
    uStack_170 = 0xbf800000bf800000;
    local_154 = 0xfffe;
    FUN_0277d4ac(&local_154);
    local_110 = 0x20;
    local_d8 = 0x20;
    local_118 = local_10c;
    local_e0 = local_d4;
    local_14c = 0;
    local_ed = 0;
    local_120 = PTR_DAT_04bb2028 + 0x10;
    local_10c[0] = 0;
    local_b5 = 0;
    local_d4[0] = 0;
    local_1c0 = local_1c0 & 0xffffffff00000000;
    local_1a8 = 0;
    uStack_188 = 0;
    local_184 = 0;
    local_68 = 0xfffe;
    local_198 = 0;
    uStack_190 = 0;
    local_e8 = local_120;
    FUN_0277d4ac(&local_68);
    uStack_180 = (undefined4)local_68;
    local_17c = local_68._4_4_;
    local_178 = 0x41c8000041800000;
    uStack_170 = 0xbf800000bf800000;
    local_168 = 0xbf800000;
    local_164 = 0;
    uStack_15f = 0;
    uStack_15c = 0;
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    local_14c = 0;
    local_148 = 0;
    local_144 = 0;
    local_13c = 0;
    local_134 = 0;
    local_12c = 0;
    local_124 = 0;
    local_154 = local_68;
    *local_118 = 0;
    *local_e0 = 0;
    local_124._0_2_ = CONCAT11(1,(undefined1)local_124);
  }
  plVar22 = *(long **)(param_1[1] + 0x60);
  if (plVar22 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar22 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar22 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar22 + 0x370))(&local_68,plVar22);
  local_154 = local_68;
  (**(code **)(*param_1 + 0x38))(param_1,0x13,&local_1c0,1);
  return;
}

