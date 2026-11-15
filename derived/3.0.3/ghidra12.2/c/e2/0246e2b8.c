
/* WARNING: Removing unreachable block (ram,0x0246e3e4) */
/* WARNING: Removing unreachable block (ram,0x0246e490) */
/* WARNING: Removing unreachable block (ram,0x0246e648) */

void FUN_0246e2b8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  float *pfVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined2 *puVar17;
  float fVar18;
  undefined4 uVar19;
  undefined *local_d0;
  char *pcStack_c8;
  undefined *local_c0;
  char *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_8a;
  undefined *local_48;
  
  puVar5 = PTR_DAT_04bc30f8;
  ppuVar10 = &local_d0;
  cVar2 = *(char *)(param_4 + 0x1909);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0xfe);
  uVar11 = 0;
  if (*(long *)(param_4 + 0x70) != 0) {
    uVar12 = *(uint *)(*(long *)(param_4 + 0x70) + 0x280);
    uVar11 = 0;
    if (uVar12 < 0x149) {
      uVar11 = uVar12;
    }
  }
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar11);
  if (*(int *)(param_4 + 0x178) == 0) {
    bVar16 = *(byte *)(param_4 + 0x1ee8);
    uVar13 = (ulong)bVar16;
    uVar12 = (uint)bVar16;
    if (7 < bVar16) {
      DAT_054967ac = 0;
      goto joined_r0x0246e804;
    }
    local_c0 = (undefined *)
               (CONCAT62(local_c0._2_6_,*(short *)(PTR_DAT_04bc30f8 + (ulong)uVar12 * 0x18 + 8)) &
               0xffffffffffff00ff);
    if (*(short *)(PTR_DAT_04bc30f8 + (ulong)uVar12 * 0x18 + 8) != (short)local_c0) {
      *(short *)(PTR_DAT_04bc30f8 + (ulong)uVar12 * 0x18 + 8) = (short)local_c0;
      puVar5[(ulong)uVar12 * 0x18 + 10] = 1;
    }
    if (uVar12 < 8) goto LAB_0246e388;
LAB_0246e32c:
    puVar17 = &DAT_054967ac;
    DAT_054967ac = 0;
  }
  else {
    bVar16 = *(byte *)(param_4 + 0x1ee8);
    uVar13 = (ulong)bVar16;
joined_r0x0246e804:
    if (7 < bVar16) goto LAB_0246e32c;
LAB_0246e388:
    puVar17 = (undefined2 *)(PTR_DAT_04bc30f8 + uVar13 * 0x18 + 8);
  }
  puVar5 = PTR_DAT_04bb2200;
  fVar18 = -20.0;
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_4 + 0x4c8);
  }
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar14 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar14 != 0)) {
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    lVar14 = *(long *)(lVar14 + 0x118);
    if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + 0x280);
      fVar18 = 0.0;
      if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 8), lVar14 != 0)) {
        pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
        fVar18 = *pfVar7;
      }
      lVar14 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x1590) + 0xf0))(lVar14 + 0x1590);
      fVar18 = fVar18 + *pfVar7;
    }
  }
  *(float *)((long)puVar15 + 0x27c) = fVar18;
  if (*(int *)(param_4 + 0x178) == 0) {
    fVar18 = -20.0;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_4 + 0x4c8);
    }
    lVar14 = *(long *)puVar5;
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x50), lVar14 != 0)) {
      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
      lVar14 = *(long *)(lVar14 + 0x118);
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x280);
        fVar18 = 0.0;
        if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 8), lVar14 != 0)) {
          pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
          fVar18 = *pfVar7;
        }
        lVar14 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x1560) + 0xf0))(lVar14 + 0x1560);
        fVar18 = fVar18 + *pfVar7;
      }
    }
    *(float *)((long)puVar15 + 0x2ec) = fVar18;
    *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
    puVar15 = *(undefined8 **)(param_4 + 0x60);
  }
  else {
    puVar15 = *(undefined8 **)(param_4 + 0x60);
  }
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar15 = &DAT_05240280;
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "IsBreathLimit";
  if (((puVar15[0x227] != 0) && (lVar14 = *(long *)(puVar15[0x227] + 0x78), lVar14 != 0)) &&
     (plVar8 = *(long **)(lVar14 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_c0,*(char *)(param_4 + 0x1908) != '\0');
  }
  local_48 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = *(undefined **)(param_4 + 0x1900);
  uVar9 = FUN_0251e98c(1);
  uVar19 = FUN_02366dec(uVar9,&local_48);
  if (uVar11 == 0xfe) {
    if (cVar2 == '\0' && *(char *)((long)puVar17 + 1) == '\0') {
      puVar15 = *(undefined8 **)(param_4 + 0x60);
      if (puVar15 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar15 = &DAT_05240280;
        }
        else {
          puVar15 = &DAT_05240280;
        }
      }
      local_b8 = "PlayerCatchDiveFish";
      goto LAB_0246e5f4;
    }
    fVar18 = -20.0;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_4 + 0x4c8);
    }
    lVar14 = *(long *)puVar5;
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x50), lVar14 != 0)) {
      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
      lVar14 = *(long *)(lVar14 + 0x118);
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x280);
        fVar18 = 0.0;
        if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 8), lVar14 != 0)) {
          pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
          fVar18 = *pfVar7;
        }
        lVar14 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar14 + 0x1560) + 0xf0))(lVar14 + 0x1560);
        fVar18 = fVar18 + *pfVar7;
      }
    }
    *(float *)((long)puVar15 + 0x27c) = fVar18;
    *(undefined4 *)(param_4 + 0x1810) = 5;
    local_90 = 0x3f800000;
    local_b8 = (char *)0x3;
    local_8a = 0;
    local_94 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
    local_9c = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
    local_ac = 0;
    local_c0 = local_48;
    local_b0 = 0;
    local_8c = 0x101;
    local_a8 = uVar19;
    uStack_a4 = param_2;
    local_a0 = param_3;
    FUN_0236b830(param_4,&local_c0);
    puVar15 = *(undefined8 **)(param_4 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar15 = &DAT_05240280;
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_d0 = puVar4 + 0x10;
    pcStack_c8 = "PlayerDiveOutAndGetKeep";
  }
  else {
    puVar15 = *(undefined8 **)(param_4 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar15 = &DAT_05240280;
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    local_b8 = "PlayerDiveOut";
LAB_0246e5f4:
    local_c0 = puVar4 + 0x10;
    ppuVar10 = &local_c0;
  }
  FUN_017029bc(puVar15,ppuVar10,6,0,0);
  iVar6 = *(int *)(param_4 + 0x178);
  if (iVar6 == 0) {
    if ((*(uint *)(param_4 + 0x1da8) & 0xfffffffd) == 4) {
      puVar15 = *(undefined8 **)(param_4 + 0x1dc0);
      *(undefined4 *)(param_4 + 0x1da8) = 0;
      *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) & 0xfffffffd;
      if (puVar15 != &DAT_0407ebb1) {
        iVar6 = 0;
        if (*(int *)(param_4 + 0x1dc8) < 1) {
          iVar6 = *(int *)(param_4 + 0x1dc8) + -1;
        }
        memset(puVar15,0,(long)iVar6);
        *(undefined1 *)((long)puVar15 + (long)iVar6) = 0;
      }
      puVar15 = *(undefined8 **)(param_4 + 0x1e18);
      if (puVar15 != &DAT_0407ebb1) {
        iVar6 = 0;
        if (*(int *)(param_4 + 0x1e20) < 1) {
          iVar6 = *(int *)(param_4 + 0x1e20) + -1;
        }
        memset(puVar15,0,(long)iVar6);
        *(undefined1 *)((long)puVar15 + (long)iVar6) = 0;
      }
      *(undefined8 *)(param_4 + 0x1e68) = 0;
      *(undefined8 *)(param_4 + 0x1e78) = 0;
      *(undefined2 *)(param_4 + 0x1e70) = 0xff;
      iVar6 = *(int *)(param_4 + 0x178);
    }
    else {
      iVar6 = 0;
    }
    *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) & 0xfffffffb;
  }
  *(undefined1 *)(param_4 + 0x5ad) = 0;
  *(undefined4 *)(param_4 + 0x5a0) = *(undefined4 *)(param_4 + 0x5a4);
  *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 2;
  *(undefined8 *)(param_4 + 0x5b8) = 0x3f800000;
  if (iVar6 != 0) {
    return;
  }
  local_c0 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_c0);
  local_c0 = *(undefined **)(param_4 + 0x1900);
  local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0246e8b4:
    bVar16 = *(byte *)(param_4 + 0x1ee8);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_d0 = (undefined *)CONCAT71(local_d0._1_7_,bVar16);
    FUN_02669430(&local_d0);
    uVar13 = FUN_025579bc((byte *)(param_4 + 0x1ee8),&local_c0,&local_48);
    uVar12 = *(uint *)(param_4 + 0x17cc);
    if ((uVar13 & 1) != 0) {
      uVar12 = uVar12 | 0x40;
      goto LAB_0246e8f8;
    }
  }
  else {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0246e8b4;
    uVar12 = *(uint *)(param_4 + 0x17cc);
  }
  uVar12 = uVar12 & 0xffffffbf;
LAB_0246e8f8:
  *(uint *)(param_4 + 0x17cc) = uVar12;
  if (uVar11 == 0xfe) {
    *(uint *)(param_4 + 0x17d0) =
         *(uint *)(param_4 + 0x17d0) & 0xff800000 |
         *(uint *)(param_4 + 0x17d0) & 0x3fffff | (uVar12 >> 6 & 1) << 0x16;
  }
  return;
}

