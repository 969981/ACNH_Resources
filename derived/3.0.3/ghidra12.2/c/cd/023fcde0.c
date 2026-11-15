
void FUN_023fcde0(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined6 uVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  byte local_54 [4];
  char *local_50;
  byte local_48 [4];
  undefined4 local_44;
  
  ppuVar10 = &local_80;
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (puVar14[0x227] != 0) {
    FUN_03850760(0x3f800000);
  }
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  bVar6 = 7 < bVar2;
  if (bVar6) {
    bVar2 = 0xff;
  }
  puVar12 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar2 * 0x79;
  if (bVar6) {
    puVar12 = &DAT_0514cb68;
  }
  puVar12[100] = 0;
  puVar12[0x66] = 0;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0x7fffffff;
  uVar8 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar8 & 0xfffffffe;
  if ((uVar8 & 1) != 0) {
    local_48[0] = bVar2;
    FUN_023fd2d4(local_48,param_1 + 0x18e0);
  }
  FUN_02472404(0,param_1);
  local_68 = (char *)CONCAT44(local_68._4_4_,6);
  uVar13 = local_68;
  local_70 = (undefined *)((ulong)local_70._5_3_ << 0x28);
  local_68._0_6_ = (undefined6)uVar13;
  uVar5 = (undefined6)local_68;
  local_68 = (char *)((ulong)local_68._7_1_ << 0x38);
  local_68 = (char *)(CONCAT26(local_68._6_2_,uVar5) & 0xffff0000ffffffff);
  FUN_02321e44(&local_80,param_1,&local_70);
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar14[0x290] + 0x1d5) = 1;
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar14[0x291] + 0x1d5) = 1;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  local_50 = (char *)0xfffe;
  FUN_0277d4ac(&local_50);
  puVar1 = PTR_DAT_04bb43c0;
  local_54[0] = *(byte *)(param_1 + 0x1ee8);
  local_50 = *(char **)(param_1 + 0x190c);
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  if (*(char *)(param_1 + 0x1926) != '\0') {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "PE_Remake_ByDIY";
    uVar13 = *(undefined8 *)PTR_DAT_04bb49a0;
    uVar7 = FUN_006bd550("PE_Remake_ByDIY",0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    uVar13 = FUN_01b5b4b0(uVar13,&local_80);
    ppuVar10 = (undefined **)&local_70;
    goto LAB_023fd1d4;
  }
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_68 = local_50;
  uVar8 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_50);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8), lVar15 != 0)) {
        local_60 = lVar15;
      }
    }
  }
  puVar4 = PTR_DAT_04bb49a0;
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "PE_DIY_HighPrice";
  uVar13 = *(undefined8 *)PTR_DAT_04bb49a0;
  local_80 = puVar1;
  local_44 = FUN_006bd550("PE_DIY_HighPrice",0);
  uVar13 = FUN_01b5b4b0(uVar13,&local_44);
  FUN_01b5e0b0(&local_80,&local_50,uVar13,local_54,0);
  uVar13 = *(undefined8 *)puVar4;
  pcStack_78 = "PE_DIY_New";
  local_80 = puVar1;
  local_44 = FUN_006bd550("PE_DIY_New",0);
  uVar13 = FUN_01b5b4b0(uVar13,&local_44);
  FUN_01b5e0b0(&local_80,&local_50,uVar13,local_54,0);
  iVar9 = FUN_0277d6c4(&local_68);
  if (iVar9 < 0x21d4) {
    if ((iVar9 - 0x2155U < 0x2e) &&
       ((1L << ((ulong)(iVar9 - 0x2155U) & 0x3f) & 0x220000000001U) != 0)) goto LAB_023fd150;
    iVar11 = 0x1ff3;
LAB_023fd148:
    if (iVar9 == iVar11) goto LAB_023fd150;
  }
  else {
    if (iVar9 != 0x2591) {
      iVar11 = 0x21d4;
      goto LAB_023fd148;
    }
LAB_023fd150:
    uVar13 = *(undefined8 *)puVar4;
    local_80 = puVar3 + 0x10;
    pcStack_78 = "PE_DIY_GoldSeries";
    local_44 = FUN_006bd550("PE_DIY_GoldSeries",0);
    uVar13 = FUN_01b5b4b0(uVar13,&local_44);
    FUN_01b5e0b0(&local_80,&local_50,uVar13,local_54,0);
  }
  if (*(int *)(param_1 + 0x192c) < 2) {
    return;
  }
  uVar13 = *(undefined8 *)puVar4;
  local_80 = puVar3 + 0x10;
  pcStack_78 = "PE_DIY_Multi";
  local_44 = FUN_006bd550("PE_DIY_Multi",0);
  uVar13 = FUN_01b5b4b0(uVar13,&local_44);
LAB_023fd1d4:
  FUN_01b5e0b0(ppuVar10,&local_50,uVar13,local_54,0);
  return;
}

