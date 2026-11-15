
/* WARNING: Removing unreachable block (ram,0x023f6038) */
/* WARNING: Removing unreachable block (ram,0x023f6048) */
/* WARNING: Removing unreachable block (ram,0x023f6054) */

void FUN_023f5eb4(long param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  float fVar23;
  byte local_d0 [4];
  byte local_cc [4];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_90;
  undefined8 local_88;
  
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "CommonChairStandupReady";
  FUN_017081d0(puVar15,&local_a0,6,1,0);
  plVar16 = *(long **)(param_1 + 0x60);
  if (plVar16 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar20 = __cxa_guard_acquire(&DAT_052461c0);
      plVar16 = &DAT_05240280;
      if (iVar20 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar16 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar16 + 0x4b8))(0x3f800000,plVar16);
  puVar5 = PTR_DAT_04bb2010;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1902);
  local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
  iVar20 = *(int *)(param_1 + 0x1908);
  iVar22 = *piVar1;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_98 = (char *)CONCAT44(*(undefined4 *)(puVar15 + 7),(undefined4)local_98);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb6268 + 0x10;
  local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    local_b8 = puVar5 + 0x10;
    fVar23 = (float)iVar20 * 0.001;
    fVar19 = (float)iVar22 * 0.001 + 0.5;
    fVar18 = fVar23 + 0.5;
    iVar20 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    iVar8 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_b0 = iVar20;
    local_ac = iVar8;
    piVar11 = (int *)FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
    iVar9 = FUN_0277d6c4();
    puVar6 = PTR_DAT_04bb43c0;
    if (iVar9 == 0xea79) {
LAB_023f6470:
      lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined8 *)(lVar14 + 8) = 0x100000000;
      *(undefined4 *)(lVar14 + 0xa8) = 0;
      bVar7 = FUN_022bf264(lVar14 + 0xb0,&local_c8);
      *(byte *)(param_1 + 0xb48) = bVar7 & 1;
      *(undefined1 *)(param_1 + 0x1922) = 1;
      *(undefined4 *)(param_1 + 0x1928) = (undefined4)local_c0;
      *(undefined4 *)(param_1 + 0x192c) = local_c0._4_4_;
      return;
    }
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(piVar11);
    lVar17 = *(long *)puVar6;
    if (lVar17 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = *piVar11;
        local_ac = piVar11[1];
        local_a8 = 0;
        uVar10 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar14 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(piVar11);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar10 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar14 != 0) {
                local_a8 = lVar14;
              }
            }
          }
        }
        local_88 = 0xa12;
        FUN_0277d4ac(&local_88);
        uVar13 = FUN_0277d7b4(&local_b0,&local_88);
        if (((uVar13 & 1) != 0) && (uVar13 = FUN_0277e024(&local_b0), (uVar13 & 1) != 0))
        goto LAB_023f6470;
      }
    }
    local_b8 = puVar5 + 0x10;
    fVar23 = fVar23 + -0.5;
    iVar9 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    local_b0 = iVar20;
    local_ac = iVar9;
    piVar11 = (int *)FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
    iVar20 = FUN_0277d6c4();
    if (iVar20 == 0xea79) goto LAB_023f6470;
    lVar14 = *(long *)puVar6;
    uVar10 = FUN_0277d6c4(piVar11);
    lVar17 = *(long *)puVar6;
    if (lVar17 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = *piVar11;
        local_ac = piVar11[1];
        local_a8 = 0;
        uVar10 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar14 = *(long *)(lVar17 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(piVar11);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar10 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar14 != 0) {
                local_a8 = lVar14;
              }
            }
          }
        }
        local_88 = 0xa12;
        FUN_0277d4ac(&local_88);
        uVar13 = FUN_0277d7b4(&local_b0,&local_88);
        if (((uVar13 & 1) != 0) && (uVar13 = FUN_0277e024(&local_b0), (uVar13 & 1) != 0))
        goto LAB_023f6470;
      }
    }
    fVar18 = (float)iVar22 * 0.001 + -0.5;
    local_b8 = puVar5 + 0x10;
    iVar20 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_b0 = iVar20;
    local_ac = iVar8;
    uVar12 = FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
    iVar22 = FUN_0277d6c4();
    if (iVar22 == 0xea79) goto LAB_023f6470;
    uVar13 = FUN_0277d9a8(uVar12);
    if ((uVar13 & 1) != 0) {
      FUN_01ad5d04(&local_b8,uVar12);
      uVar13 = FUN_01afc374(&local_b8);
      if ((uVar13 & 1) != 0) goto LAB_023f6470;
    }
    local_b8 = puVar5 + 0x10;
    local_b0 = iVar20;
    local_ac = iVar9;
    uVar12 = FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
    iVar20 = FUN_0277d6c4();
    if (iVar20 == 0xea79) goto LAB_023f6470;
    uVar13 = FUN_0277d9a8(uVar12);
    if ((uVar13 & 1) != 0) {
      FUN_01ad5d04(&local_b8,uVar12);
      uVar13 = FUN_01afc374(&local_b8);
      if ((uVar13 & 1) != 0) goto LAB_023f6470;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar14 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(char *)(param_1 + 0x1924) != '\0') {
    return;
  }
  *(undefined4 *)(lVar14 + 0x4c0) = 0;
  *(undefined8 *)(lVar14 + 0x420) = 0x100000000;
  cVar3 = *(char *)(param_1 + 0x1923);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  uVar21 = 0x3fc00000;
  if (cVar3 == '\0') {
    uVar21 = 0x40400000;
  }
  if (sVar4 == -1) {
LAB_023f6568:
    uVar13 = FUN_016e6244();
    if (((((uVar13 & 1) == 0) && (uVar13 = FUN_0180c600(), (uVar13 & 1) == 0)) &&
        ((uVar13 = FUN_016e60dc(), (uVar13 & 1) == 0 || (uVar13 = FUN_016e63c4(), (uVar13 & 1) == 0)
         ))) && (uVar13 = FUN_016cf9f0(), (uVar13 & 1) == 0)) {
      local_d0[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_d0[0]) {
        local_d0[0] = 0xff;
      }
      local_a0 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar1 * 0.001);
      local_98 = (char *)CONCAT44(local_98._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
      bVar7 = FUN_023014a4(uVar21,lVar14 + 0x4c8,local_d0,&local_a0,cVar3 != '\0');
      goto LAB_023f65fc;
    }
  }
  else {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x15);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) == 0) goto LAB_023f6568;
  }
  local_cc[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_cc[0]) {
    local_cc[0] = 0xff;
  }
  local_a0 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar1 * 0.001);
  local_98 = (char *)CONCAT44(local_98._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  bVar7 = FUN_0230127c(uVar21,lVar14 + 0x4c8,local_cc,&local_a0,cVar3 != '\0');
LAB_023f65fc:
  *(byte *)(param_1 + 0xb48) = bVar7 & 1;
  return;
}

