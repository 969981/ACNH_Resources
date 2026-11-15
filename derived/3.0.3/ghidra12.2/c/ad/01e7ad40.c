
bool FUN_01e7ad40(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ulong *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 local_270;
  undefined4 local_268;
  undefined2 uStack_264;
  undefined2 uStack_262;
  undefined6 uStack_260;
  undefined2 uStack_25a;
  undefined8 local_258;
  undefined *puStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined5 local_214;
  undefined3 uStack_20f;
  undefined4 local_20c;
  undefined1 uStack_208;
  byte local_207;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined2 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [31];
  undefined1 local_19d;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [31];
  undefined1 local_165;
  undefined2 local_164;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  uint local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined8 local_68;
  
  plVar19 = (long *)*param_1;
  if (plVar19[1] != 0) {
    uVar6 = *(uint *)(plVar19[1] + 0x508);
    if ((uVar6 < 10) && ((&DAT_053fee41)[(ulong)uVar6 * 0xba0] != '\0')) {
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        (&DAT_053fea30)[(ulong)uVar6 * 0xba0] = (&DAT_053fea30)[(ulong)uVar6 * 0xba0] | 1;
      }
      else {
        lVar13 = *(long *)PTR_DAT_04bb3968;
        lVar15 = lVar13 + 0xe18 + (ulong)uVar6 * 0x28;
        puVar16 = (ulong *)(lVar15 + 8);
        if (*(byte *)puVar16 < 100) {
          uStack_260 = (undefined6)((ulong)*(long *)(lVar15 + 0x16) >> 0x10);
          uVar18 = *(undefined8 *)(lVar15 + 0x10);
          local_270 = (undefined *)(*puVar16 & 0xffffffffdfffffff | 0x10000000);
          local_268 = (undefined4)uVar18;
          uStack_264 = (undefined2)((ulong)uVar18 >> 0x20);
          uStack_262 = (undefined2)((ulong)uVar18 >> 0x30);
          if ((undefined *)*puVar16 != local_270 ||
              *(long *)(lVar15 + 0x16) != CONCAT62(uStack_260,uStack_262)) {
            *puVar16 = (ulong)local_270;
            *(undefined8 *)(lVar15 + 0x10) = uVar18;
            *(undefined1 *)(lVar13 + 0xe18 + (ulong)uVar6 * 0x28 + 0x1e) = 1;
            *(ulong *)(lVar15 + 0x16) = CONCAT62(uStack_260,uStack_262);
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
  plVar9 = *(long **)(plVar19[1] + 0x60);
  if (plVar9 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar9 = &DAT_05240280;
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 0x2f0))(auStack_ac);
  plVar9 = *(long **)(plVar19[1] + 0x60);
  if (plVar9 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar9 = &DAT_05240280;
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 0x2d8))(auStack_b4);
  plVar9 = *(long **)(plVar19[1] + 0x60);
  if (plVar9 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar9 = &DAT_05240280;
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 0x2e0))(auStack_bc);
  uVar6 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar11 = 0x12;
  if ((uVar6 & 0xfffffffe) != 4) {
    uVar11 = 1;
  }
  lVar13 = *(long *)(param_1[3] + 8);
  if ((*(long *)(lVar13 + 0x28) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar9 != (long *)0x0)) {
    local_270 = *(undefined **)(lVar13 + 8);
    uVar18 = *(undefined8 *)(lVar13 + 0x10);
    local_268 = (undefined4)uVar18;
    uStack_264 = (undefined2)((ulong)uVar18 >> 0x20);
    uStack_262 = (undefined2)((ulong)uVar18 >> 0x30);
    uStack_260 = 0x13230;
    uStack_25a = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_270);
  }
  local_270 = (undefined *)CONCAT44(local_270._4_4_,uVar11);
  uVar10 = FUN_0269b5c0(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),&local_94,&local_9c,
                        &local_a4,&local_270,0);
  if ((uVar10 & 1) == 0) {
    uVar6 = local_74 & 0xff;
  }
  else {
    if (*(long *)(plVar19[1] + 0x690) != 0) {
      lVar13 = *(long *)(param_1[3] + 8);
      if ((*(long *)(lVar13 + 0x28) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar9 != (long *)0x0)) {
        local_270 = *(undefined **)(lVar13 + 8);
        uVar18 = *(undefined8 *)(lVar13 + 0x10);
        local_268 = (undefined4)uVar18;
        uStack_264 = (undefined2)((ulong)uVar18 >> 0x20);
        uStack_262 = (undefined2)((ulong)uVar18 >> 0x30);
        uStack_260 = 0x13230;
        uStack_25a = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_270);
      }
      local_68 = CONCAT44(local_68._4_4_,uVar11);
      *(char *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x1315b) = (char)uVar11;
      uVar5 = FUN_021d7d60();
      uVar10 = (ulong)local_270 >> 0x30;
      local_c4._0_2_ = CONCAT11((char)local_68,uVar5);
      local_270 = (undefined *)CONCAT26((ushort)uVar10 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0e30) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_270,&local_c4,2,0);
      }
    }
    uVar10 = FUN_0277d7b4(&local_94,auStack_ac);
    if ((uVar10 & 1) == 0) {
      local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
      local_8c = local_94;
      local_74 = local_74 | 1;
    }
    uVar10 = FUN_0277d7b4(&local_9c,auStack_b4);
    if ((uVar10 & 1) == 0) {
      local_84 = local_9c;
      local_270 = (undefined *)CONCAT44(local_270._4_4_,1);
      local_74 = local_74 | 2;
    }
    uVar10 = FUN_0277d7b4(&local_a4,auStack_bc);
    uVar6 = local_74 & 0xff;
    if ((uVar10 & 1) == 0) {
      local_7c = local_a4;
      local_270 = (undefined *)CONCAT44(local_270._4_4_,2);
      uVar6 = uVar6 | 4;
      local_74 = CONCAT31(local_74._1_3_,(char)uVar6);
    }
  }
  if ((uVar6 & 7) == 0) goto LAB_01e7b608;
  *(undefined2 *)(plVar19 + 0x15d2) = (undefined2)local_8c;
  *(undefined1 *)((long)plVar19 + 0xae92) = local_8c._2_1_;
  *(undefined1 *)((long)plVar19 + 0xae93) = local_8c._3_1_;
  *(undefined4 *)((long)plVar19 + 0xae94) = local_8c._4_4_;
  *(undefined2 *)(plVar19 + 0x15d3) = (undefined2)local_84;
  *(undefined1 *)((long)plVar19 + 0xae9a) = local_84._2_1_;
  *(undefined1 *)((long)plVar19 + 0xae9b) = local_84._3_1_;
  *(undefined4 *)((long)plVar19 + 0xae9c) = local_84._4_4_;
  *(undefined2 *)(plVar19 + 0x15d4) = (undefined2)local_7c;
  *(undefined1 *)((long)plVar19 + 0xaea2) = local_7c._2_1_;
  *(undefined1 *)((long)plVar19 + 0xaea3) = local_7c._3_1_;
  *(undefined4 *)((long)plVar19 + 0xaea4) = local_7c._4_4_;
  plVar19[0x15d5] = CONCAT44(uStack_70,local_74);
  plVar9 = *(long **)(plVar19[1] + 0x60);
  if (plVar9 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar9 = &DAT_05240280;
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 0x370))(&local_c4);
  puVar1 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_c4);
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
LAB_01e7b364:
    bVar4 = false;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01e7b364;
    uStack_260 = 0;
    uStack_25a = 0;
    local_270 = PTR_DAT_04bc0510 + 0x10;
    local_268 = local_c4;
    uStack_264 = (undefined2)uStack_c0;
    uStack_262 = (undefined2)((uint)uStack_c0 >> 0x10);
    uVar7 = FUN_0277d6c4(&local_268);
    if (*(long *)puVar1 == 0) {
LAB_01e7b56c:
      local_68 = CONCAT44(local_68._4_4_,0x14);
      local_6c = 0xbc;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01e7b56c;
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_c4);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
         (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar14 == (uint *)0x0)) goto LAB_01e7b56c;
      local_6c = 0;
      local_68 = CONCAT44(local_68._4_4_,0x14);
      uVar7 = *puVar14;
      if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
        puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
        local_6c = 0;
        if (*puVar17 != 0) {
          uVar7 = puVar17[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar17 + lVar13 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar7);
              }
              if (*puVar17 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_6c = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                 local_6c < 0xbd)) goto LAB_01e7b578;
            }
          }
          local_6c = 0;
        }
      }
    }
LAB_01e7b578:
    bVar4 = local_6c == (uint)local_68;
  }
  iVar8 = *(int *)param_1[1];
  if (iVar8 != 2) {
    if (iVar8 == 1) {
      local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
      local_248 = 0;
      local_234 = 0;
      uStack_230 = 0xfffe;
      local_22c = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_250 = PTR_DAT_04bb2010 + 0x10;
      local_268 = SUB84(puVar1,0);
      uStack_264 = (undefined2)((ulong)puVar1 >> 0x20);
      uStack_262 = (undefined2)((ulong)puVar1 >> 0x30);
      uStack_260 = SUB86(puStack_250,0);
      uStack_25a = (undefined2)((ulong)puStack_250 >> 0x30);
      local_258 = 0;
      FUN_0277d4ac(&uStack_230);
      local_214 = 0;
      uStack_20f = 0;
      local_20c = 0;
      uStack_208 = 0;
      local_218 = 0xbf800000;
      local_228 = 0x41c8000041800000;
      uStack_220 = 0xbf800000bf800000;
      local_204 = 0xfffe;
      FUN_0277d4ac(&local_204);
      local_1fc = 0;
      local_1c0 = 0x20;
      local_190 = local_184;
      local_188 = 0x20;
      local_1c8 = local_1bc;
      local_19d = 0;
      local_1d0 = PTR_DAT_04bb2028 + 0x10;
      local_1bc[0] = 0;
      local_165 = 0;
      local_184[0] = 0;
      local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
      local_258 = 0;
      uStack_238 = 0;
      local_234 = 0;
      local_68 = 0xfffe;
      local_248 = 0;
      uStack_240 = 0;
      local_198 = local_1d0;
      FUN_0277d4ac(&local_68);
      uStack_230 = (uint)local_68;
      local_22c = local_68._4_4_;
      local_228 = 0x41c8000041800000;
      uStack_220 = 0xbf800000bf800000;
      local_218 = 0xbf800000;
      local_214 = 0;
      uStack_20f = 0;
      local_20c = 0;
      uStack_208 = 0;
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      local_1fc = 0;
      local_1f8 = 0;
      local_1f4 = 0;
      local_1ec = 0;
      local_1e4 = 0;
      local_1dc = 0;
      local_1d4 = 0;
      local_204 = local_68;
      *local_1c8 = 0;
      *local_190 = 0;
      local_1d4._0_2_ = CONCAT11(1,(undefined1)local_1d4);
      if (bVar4) {
        puVar20 = (undefined8 *)PTR_DAT_04bb37e0;
        uVar5 = PTR_DAT_04bb37e0[2];
        uVar12 = PTR_DAT_04bb37e0[3];
      }
      else {
        plVar9 = *(long **)(plVar19[1] + 0x60);
        if (plVar9 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            plVar9 = &DAT_05240280;
            if (iVar8 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar9 = &DAT_05240280;
          }
        }
        puVar20 = &local_68;
        (**(code **)(*plVar9 + 0x370))(&local_68,plVar9);
        uVar5 = local_68._2_1_;
        uVar12 = local_68._3_1_;
      }
      local_204 = CONCAT44(*(undefined4 *)((long)puVar20 + 4),
                           CONCAT22(CONCAT11(uVar12,uVar5),*(undefined2 *)puVar20));
      (**(code **)(*plVar19 + 0x38))(plVar19,0x13,&local_270,1);
      goto LAB_01e7b608;
    }
    if (iVar8 != 0) goto LAB_01e7b608;
  }
  FUN_01e63f1c(&local_270);
  local_270 = (undefined *)CONCAT44(local_270._4_4_,0x13);
  local_164 = 0x101;
  local_207 = bVar4 ^ 1;
  local_20c = 1;
  if (*(int *)param_1[1] == 0) {
    if ((int)plVar19[0x1de2] < *(int *)((long)plVar19 + 0xef14)) {
      FUN_021920b0(plVar19 + 0x1de2,&local_270);
    }
  }
  else {
    plVar9 = plVar19 + 0x2146;
    plVar3 = (long *)((long)plVar19 + 0x1255c);
    if ((int)plVar19[0x2146] < 1) {
      plVar9 = plVar19 + 0x1de2;
      plVar3 = plVar19 + 0x24ab;
    }
    FUN_02192440(plVar9,(int)*plVar3 + *(int *)param_1[2],&local_270);
  }
LAB_01e7b608:
  return (uVar6 & 7) != 0;
}

