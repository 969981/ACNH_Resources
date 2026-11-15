
void FUN_01ec4850(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ulong *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined5 local_17c;
  undefined3 uStack_177;
  undefined5 uStack_174;
  undefined8 local_16c;
  undefined4 local_164;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [31];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [31];
  undefined1 local_cd;
  undefined4 local_c4 [2];
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  undefined8 local_a4;
  long local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  long local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined8 local_68;
  
  if (param_1[1] != 0) {
    uVar4 = *(uint *)(param_1[1] + 0x508);
    if ((uVar4 < 10) && ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] != '\0')) {
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        (&DAT_053fea30)[(ulong)uVar4 * 0xba0] = (&DAT_053fea30)[(ulong)uVar4 * 0xba0] | 1;
      }
      else {
        lVar11 = *(long *)PTR_DAT_04bb3968;
        lVar13 = lVar11 + 0xe18 + (ulong)uVar4 * 0x28;
        puVar14 = (ulong *)(lVar13 + 8);
        if (*(byte *)puVar14 < 100) {
          uStack_1c8 = (undefined6)((ulong)*(long *)(lVar13 + 0x16) >> 0x10);
          uVar16 = *(undefined8 *)(lVar13 + 0x10);
          local_1d8 = (undefined *)(*puVar14 & 0xffffffffdfffffff | 0x10000000);
          local_1d0 = (undefined4)uVar16;
          uStack_1cc = (undefined2)((ulong)uVar16 >> 0x20);
          uStack_1ca = (undefined2)((ulong)uVar16 >> 0x30);
          if ((undefined *)*puVar14 != local_1d8 ||
              *(long *)(lVar13 + 0x16) != CONCAT62(uStack_1c8,uStack_1ca)) {
            *puVar14 = (ulong)local_1d8;
            *(undefined8 *)(lVar13 + 0x10) = uVar16;
            *(undefined1 *)(lVar11 + 0xe18 + (ulong)uVar4 * 0x28 + 0x1e) = 1;
            *(ulong *)(lVar13 + 0x16) = CONCAT62(uStack_1c8,uStack_1ca);
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
  uStack_78 = 0;
  FUN_0277d4ac(&local_7c);
  local_74 = local_74 & 0xffffff00;
  uStack_70 = 0xffffffff;
  local_94 = 0xfffe;
  FUN_0277d4ac(&local_94);
  local_9c = 0xfffe;
  FUN_0277d4ac(&local_9c);
  local_a4 = 0xfffe;
  FUN_0277d4ac(&local_a4);
  plVar6 = *(long **)(param_1[1] + 0x60);
  if (plVar6 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar6 = &DAT_05240280;
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x2f0))(auStack_ac);
  plVar6 = *(long **)(param_1[1] + 0x60);
  if (plVar6 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar6 = &DAT_05240280;
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x2d8))(auStack_b4);
  plVar6 = *(long **)(param_1[1] + 0x60);
  if (plVar6 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar6 = &DAT_05240280;
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x2e0))(auStack_bc);
  uVar4 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  lVar11 = *(long *)(param_2 + 8);
  uVar9 = 0x12;
  if ((uVar4 & 0xfffffffe) != 4) {
    uVar9 = 1;
  }
  if ((*(long *)(lVar11 + 0x28) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar11 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
    local_1d8 = *(undefined **)(lVar11 + 8);
    uVar16 = *(undefined8 *)(lVar11 + 0x10);
    local_1d0 = (undefined4)uVar16;
    uStack_1cc = (undefined2)((ulong)uVar16 >> 0x20);
    uStack_1ca = (undefined2)((ulong)uVar16 >> 0x30);
    uStack_1c8 = 0x13230;
    uStack_1c2 = 0;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_1d8);
  }
  local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,uVar9);
  uVar7 = FUN_0269b5c0(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),&local_94,&local_9c,
                       &local_a4,&local_1d8,0);
  if ((uVar7 & 1) == 0) {
    uVar4 = local_74 & 0xff;
  }
  else {
    lVar11 = *(long *)(param_2 + 8);
    if ((*(long *)(lVar11 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar11 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_1d8 = *(undefined **)(lVar11 + 8);
      uVar16 = *(undefined8 *)(lVar11 + 0x10);
      local_1d0 = (undefined4)uVar16;
      uStack_1cc = (undefined2)((ulong)uVar16 >> 0x20);
      uStack_1ca = (undefined2)((ulong)uVar16 >> 0x30);
      uStack_1c8 = 0x13230;
      uStack_1c2 = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_1d8);
    }
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,uVar9);
    *(char *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x1315b) = (char)uVar9;
    uVar7 = FUN_0277d7b4(&local_94,auStack_ac);
    if ((uVar7 & 1) == 0) {
      local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
      local_8c = local_94;
      local_74 = local_74 | 1;
    }
    uVar7 = FUN_0277d7b4(&local_9c,auStack_b4);
    if ((uVar7 & 1) == 0) {
      local_84 = local_9c;
      local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,1);
      local_74 = local_74 | 2;
    }
    uVar7 = FUN_0277d7b4(&local_a4,auStack_bc);
    uVar4 = local_74 & 0xff;
    if ((uVar7 & 1) == 0) {
      local_7c = (undefined4)local_a4;
      uStack_78 = local_a4._4_4_;
      local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,2);
      uVar4 = uVar4 | 4;
      local_74 = CONCAT31(local_74._1_3_,(char)uVar4);
    }
  }
  if ((uVar4 & 7) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x15d2) = (undefined4)local_8c;
  *(undefined4 *)((long)param_1 + 0xae94) = local_8c._4_4_;
  param_1[0x15d3] = local_84;
  *(undefined4 *)(param_1 + 0x15d4) = local_7c;
  *(undefined4 *)((long)param_1 + 0xaea4) = uStack_78;
  param_1[0x15d5] = CONCAT44(uStack_70,local_74);
  plVar6 = *(long **)(param_1[1] + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar6 + 0x370))(local_c4,plVar6);
  puVar1 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(local_c4);
  lVar11 = *(long *)puVar1;
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uStack_1c8 = 0;
      uStack_1c2 = 0;
      local_1d8 = PTR_DAT_04bc0510 + 0x10;
      local_1d0 = local_c4[0];
      uStack_1cc = (undefined2)local_c4[1];
      uStack_1ca = (undefined2)((uint)local_c4[1] >> 0x10);
      uVar4 = FUN_0277d6c4(&local_1d0);
      if (*(long *)puVar1 == 0) {
LAB_01ec4fac:
        local_68 = CONCAT44(local_68._4_4_,0x14);
        local_6c = 0xbc;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01ec4fac;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(local_c4);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar12 == (uint *)0x0)) goto LAB_01ec4fac;
        local_6c = 0;
        local_68 = CONCAT44(local_68._4_4_,0x14);
        uVar4 = *puVar12;
        if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
          puVar15 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          local_6c = 0;
          if (*puVar15 != 0) {
            uVar4 = puVar15[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
                }
                if (*puVar15 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_6c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   local_6c < 0xbd)) goto LAB_01ec4fb8;
              }
            }
            local_6c = 0;
          }
        }
      }
LAB_01ec4fb8:
      bVar3 = local_6c == (uint)local_68;
      goto LAB_01ec4dd0;
    }
  }
  bVar3 = false;
LAB_01ec4dd0:
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  local_19c = 0;
  uStack_198 = 0xfffe;
  local_1c0 = 0;
  local_194 = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  local_1b8 = PTR_DAT_04bb2010 + 0x10;
  local_1d0 = SUB84(puVar1,0);
  uStack_1cc = (undefined2)((ulong)puVar1 >> 0x20);
  uStack_1ca = (undefined2)((ulong)puVar1 >> 0x30);
  uStack_1c8 = SUB86(local_1b8,0);
  uStack_1c2 = (undefined2)((ulong)local_1b8 >> 0x30);
  local_1b0 = 0;
  FUN_0277d4ac(&uStack_198);
  local_17c = 0;
  uStack_177 = 0;
  uStack_174 = 0;
  local_180 = 0xbf800000;
  local_190 = 0x41c8000041800000;
  uStack_188 = 0xbf800000bf800000;
  local_16c = 0xfffe;
  FUN_0277d4ac(&local_16c);
  local_164 = 0;
  local_128 = 0x20;
  local_f8 = local_ec;
  local_f0 = 0x20;
  local_130 = local_124;
  local_105 = 0;
  local_138 = PTR_DAT_04bb2028 + 0x10;
  local_124[0] = 0;
  local_cd = 0;
  local_ec[0] = 0;
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  local_1c0 = 0;
  uStack_1a0 = 0;
  local_19c = 0;
  local_68 = 0xfffe;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_100 = local_138;
  FUN_0277d4ac(&local_68);
  uStack_198 = (uint)local_68;
  local_194 = local_68._4_4_;
  local_190 = 0x41c8000041800000;
  uStack_188 = 0xbf800000bf800000;
  local_180 = 0xbf800000;
  local_17c = 0;
  uStack_177 = 0;
  uStack_174 = 0;
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_16c = local_68;
  *local_130 = 0;
  *local_f8 = 0;
  local_13c._0_2_ = CONCAT11(1,(undefined1)local_13c);
  if (bVar3) {
    puVar17 = (undefined8 *)PTR_DAT_04bb37e0;
    uVar8 = PTR_DAT_04bb37e0[2];
    uVar10 = PTR_DAT_04bb37e0[3];
  }
  else {
    plVar6 = *(long **)(param_1[1] + 0x60);
    if (plVar6 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        plVar6 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar6 = &DAT_05240280;
      }
    }
    puVar17 = &local_68;
    (**(code **)(*plVar6 + 0x370))(&local_68,plVar6);
    uVar8 = local_68._2_1_;
    uVar10 = local_68._3_1_;
  }
  local_16c = CONCAT44(*(undefined4 *)((long)puVar17 + 4),
                       CONCAT22(CONCAT11(uVar10,uVar8),*(undefined2 *)puVar17));
  (**(code **)(*param_1 + 0x38))(param_1,0x13,&local_1d8,1);
  return;
}

