
/* WARNING: Removing unreachable block (ram,0x024595ac) */
/* WARNING: Removing unreachable block (ram,0x024595bc) */
/* WARNING: Removing unreachable block (ram,0x024595c8) */

void FUN_02459428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
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
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "CommonStumpStandupReady";
  FUN_017081d0(puVar10,&local_a0,6,1,0);
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      plVar11 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar11 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar11 + 0x4b8))(0x3f800000,plVar11);
  puVar1 = PTR_DAT_04bb2010;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
  iVar15 = *(int *)(param_1 + 0x1908);
  iVar17 = *(int *)(param_1 + 0x1902);
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_98 = (char *)CONCAT44(*(undefined4 *)(puVar10 + 7),(undefined4)local_98);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb6268 + 0x10;
  local_b8 = (undefined *)((ulong)local_b8._4_4_ << 0x20);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) goto LAB_02459a38;
  local_b8 = puVar1 + 0x10;
  fVar16 = (float)iVar17 * 0.001;
  fVar18 = (float)iVar15 * 0.001;
  fVar14 = fVar16 + 0.5;
  fVar13 = fVar18 + 0.5;
  iVar15 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar17 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  local_b0 = iVar15;
  local_ac = iVar17;
  piVar6 = (int *)FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
  iVar4 = FUN_0277d6c4();
  puVar2 = PTR_DAT_04bb43c0;
  if (iVar4 != 0xea79) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(piVar6);
    lVar12 = *(long *)puVar2;
    if (lVar12 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = *piVar6;
        local_ac = piVar6[1];
        local_a8 = 0;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(piVar6);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar9 != 0) {
                local_a8 = lVar9;
              }
            }
          }
        }
        local_88 = 0xa12;
        FUN_0277d4ac(&local_88);
        uVar7 = FUN_0277d7b4(&local_b0,&local_88);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_0277e024(&local_b0), (uVar7 & 1) != 0))
        goto LAB_024599e4;
      }
    }
    local_b8 = puVar1 + 0x10;
    fVar18 = fVar18 + -0.5;
    iVar4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_b0 = iVar15;
    local_ac = iVar4;
    piVar6 = (int *)FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
    iVar15 = FUN_0277d6c4();
    if (iVar15 != 0xea79) {
      lVar9 = *(long *)puVar2;
      uVar5 = FUN_0277d6c4(piVar6);
      lVar12 = *(long *)puVar2;
      if (lVar12 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_b8 = PTR_DAT_04bc0510 + 0x10;
          local_b0 = *piVar6;
          local_ac = piVar6[1];
          local_a8 = 0;
          uVar5 = FUN_0277d6c4(&local_b0);
          if (*(long *)puVar2 != 0) {
            lVar9 = *(long *)(lVar12 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(piVar6);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if (uVar5 < *(uint *)(lVar9 + 0x1d8)) {
                lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8);
                if (lVar9 != 0) {
                  local_a8 = lVar9;
                }
              }
            }
          }
          local_88 = 0xa12;
          FUN_0277d4ac(&local_88);
          uVar7 = FUN_0277d7b4(&local_b0,&local_88);
          if (((uVar7 & 1) != 0) && (uVar7 = FUN_0277e024(&local_b0), (uVar7 & 1) != 0))
          goto LAB_024599e4;
        }
      }
      fVar16 = fVar16 + -0.5;
      local_b8 = puVar1 + 0x10;
      iVar15 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      local_b0 = iVar15;
      local_ac = iVar17;
      uVar8 = FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
      iVar17 = FUN_0277d6c4();
      if (iVar17 != 0xea79) {
        uVar7 = FUN_0277d9a8(uVar8);
        if ((uVar7 & 1) != 0) {
          FUN_01ad5d04(&local_b8,uVar8);
          uVar7 = FUN_01afc374(&local_b8);
          if ((uVar7 & 1) != 0) goto LAB_024599e4;
        }
        local_b8 = puVar1 + 0x10;
        local_b0 = iVar15;
        local_ac = iVar4;
        uVar8 = FUN_01a5190c(&local_a0,0,&local_b8,&local_c8);
        iVar15 = FUN_0277d6c4();
        if (iVar15 != 0xea79) {
          uVar7 = FUN_0277d9a8(uVar8);
          if ((uVar7 & 1) != 0) {
            FUN_01ad5d04(&local_b8,uVar8);
            uVar7 = FUN_01afc374(&local_b8);
            if ((uVar7 & 1) != 0) goto LAB_024599e4;
          }
LAB_02459a38:
          lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 +
                  (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
          if (7 < *(byte *)(param_1 + 0x1ee8)) {
            lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
          }
          *(undefined8 *)(lVar9 + 0x420) = 0x100000000;
          *(undefined4 *)(lVar9 + 0x4c0) = 0;
          local_cc[0] = *(byte *)(param_1 + 0x1ee8);
          if (7 < local_cc[0]) {
            local_cc[0] = 0xff;
          }
          local_a0 = (undefined *)
                     CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                              (float)*(int *)(param_1 + 0x1902) * 0.001);
          local_98 = (char *)CONCAT44(local_98._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
          bVar3 = FUN_023014a4(0x40400000,lVar9 + 0x4c8,local_cc,&local_a0,0);
          goto LAB_02459ad0;
        }
      }
    }
  }
LAB_024599e4:
  lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar9 + 8) = 0x100000000;
  *(undefined4 *)(lVar9 + 0xa8) = 0;
  bVar3 = FUN_022bf264(lVar9 + 0xb0,&local_c8);
  *(undefined1 *)(param_1 + 0x1921) = 1;
  *(undefined4 *)(param_1 + 0x1924) = (undefined4)local_c0;
  *(undefined4 *)(param_1 + 0x1928) = local_c0._4_4_;
LAB_02459ad0:
  *(byte *)(param_1 + 0xb48) = bVar3 & 1;
  return;
}

