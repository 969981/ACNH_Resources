
uint FUN_0097b830(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  short sVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  short local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  long local_a0;
  undefined *local_98;
  undefined4 local_90;
  int iStack_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  local_70 = 0;
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
      iVar5 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar10 + 7);
  local_68 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb2010;
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  uStack_80 = 0;
  psVar7 = (short *)FUN_01a5190c(&local_78,0,param_1,&local_88);
  puVar4 = PTR_DAT_04bb43c0;
  sVar11 = *psVar7;
  uVar12 = (undefined1)psVar7[1];
  uVar13 = *(undefined1 *)((long)psVar7 + 3);
  uVar14 = *(undefined4 *)(psVar7 + 2);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  local_48 = sVar11;
  local_46 = uVar12;
  local_45 = uVar13;
  local_44 = uVar14;
  if (sVar2 == -1) {
LAB_0097bb04:
    lVar15 = *(long *)puVar4;
    uVar6 = FUN_0277d6c4(&local_48);
    lVar9 = *(long *)puVar4;
    if (lVar9 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_d8 = PTR_DAT_04bc0510 + 0x10;
        local_d0 = (undefined *)CONCAT44(uVar14,CONCAT13(uVar13,CONCAT12(uVar12,sVar11)));
        local_c8 = 0;
        uVar6 = FUN_0277d6c4(&local_d0);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_48);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar9 != 0) {
                local_c8 = lVar9;
              }
            }
          }
        }
        uVar8 = FUN_01ae59b0(&local_d8);
        if ((uVar8 & 1) != 0) {
          uVar6 = FUN_0097b580(&local_48,&local_88,param_1,1);
          goto LAB_0097bc14;
        }
      }
    }
  }
  else {
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,4);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 4 & 1) == 0) || (sVar11 != -2)) goto LAB_0097bb04;
    local_98 = puVar3 + 0x10;
    local_90 = *(undefined4 *)(param_1 + 8);
    iStack_8c = *(int *)(param_1 + 0xc) + 1;
    psVar7 = (short *)FUN_01a5190c(&local_78,0,&local_98,&local_88);
    sVar11 = *psVar7;
    uVar12 = (undefined1)psVar7[1];
    uVar13 = *(undefined1 *)((long)psVar7 + 3);
    uVar14 = *(undefined4 *)(psVar7 + 2);
    lVar15 = *(long *)puVar4;
    local_48 = sVar11;
    local_46 = uVar12;
    local_45 = uVar13;
    local_44 = uVar14;
    uVar6 = FUN_0277d6c4(&local_48);
    lVar9 = *(long *)puVar4;
    if (lVar9 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_b0 = PTR_DAT_04bc0510 + 0x10;
        local_a0 = 0;
        local_a8 = sVar11;
        local_a6 = uVar12;
        local_a5 = uVar13;
        local_a4 = uVar14;
        uVar6 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar4 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_48);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar9 != 0) {
                local_a0 = lVar9;
              }
            }
          }
        }
        uVar8 = FUN_01ae59b0(&local_b0);
        if ((uVar8 & 1) != 0) {
          local_d0 = puVar3 + 0x10;
          local_c8 = 0;
          uStack_b8 = 0;
          local_d8 = PTR_DAT_04bbc1a0 + 0x10;
          local_c0 = local_d0;
          FUN_01afb480(&local_b0,&local_d8);
          if (uStack_b8._4_4_ == local_c8._4_4_) goto LAB_0097bb04;
        }
      }
    }
  }
  uVar6 = 0;
LAB_0097bc14:
  return uVar6 & 1;
}

