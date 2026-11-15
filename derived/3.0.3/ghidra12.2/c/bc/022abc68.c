
/* WARNING: Removing unreachable block (ram,0x022abe2c) */

undefined8 FUN_022abc68(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined *local_a0;
  uint local_98;
  uint uStack_94;
  undefined *local_90;
  uint local_88;
  uint uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined4 local_64;
  
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    pfVar12 = (float *)FUN_0251b3b0(param_2,0);
    if (pfVar12 == (float *)0x0) {
      return 0;
    }
    fVar18 = *pfVar12;
    fVar19 = pfVar12[2];
    if (((DAT_0547a4a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0547a4a8), iVar10 != 0)) {
      DAT_0547a4a0 = 0;
      __cxa_guard_release(&DAT_0547a4a8);
    }
    if (((DAT_0547a4b8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0547a4b8), iVar10 != 0)) {
      DAT_0547a4b0 = 0;
      __cxa_guard_release(&DAT_0547a4b8);
    }
    DAT_0547a4a0 = 0;
    uVar4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) & 0xfffffffe;
    DAT_0547a4b0 = 0;
    uVar5 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0) & 0xfffffffe;
    local_78 = 0;
    lVar13 = *(long *)PTR_DAT_04bb2720;
    if (lVar13 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar13 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar10 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    local_74 = *(undefined4 *)(puVar16 + 7);
    local_70 = FUN_017baf44();
    puVar9 = PTR_DAT_04bb2010;
    local_70 = local_70 & 1;
    local_80 = PTR_DAT_04bb6268 + 0x10;
    uVar7 = *(ushort *)PTR_DAT_04bb6298;
    uVar14 = (ulong)(short)uVar7;
    if (uVar14 == 0xffffffffffffffff) {
      uVar15 = 0;
      uVar17 = 0;
    }
    else {
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
      if (0xff < uVar7) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar15 = *puVar6 >> 3 & 1;
      local_64 = 1;
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
      if (0xff < uVar7) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar17 = *puVar6 >> 1 & 1;
    }
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    local_90 = puVar3;
    local_88 = uVar4;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar3;
      local_98 = uVar4;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0,0,0xfffffffe);
      if ((uVar14 & 1) == 0) goto LAB_022abebc;
LAB_022ac10c:
      uVar11 = 1;
      goto LAB_022ac110;
    }
LAB_022abebc:
    uVar1 = uVar5 + 2;
    local_90 = puVar3;
    local_88 = uVar4;
    uStack_84 = uVar1;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar9 + 0x10;
      local_98 = uVar4;
      uStack_94 = uVar1;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0,2,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    uVar8 = uVar4 - 2;
    puVar3 = puVar9 + 0x10;
    local_90 = puVar3;
    local_88 = uVar8;
    uStack_84 = uVar1;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar3;
      local_98 = uVar8;
      uStack_94 = uVar1;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0xfffffffe,2,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    uVar2 = uVar4 + 2;
    local_90 = puVar3;
    local_88 = uVar2;
    uStack_84 = uVar1;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar9 + 0x10;
      local_98 = uVar2;
      uStack_94 = uVar1;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,2,2,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    puVar3 = puVar9 + 0x10;
    local_90 = puVar3;
    local_88 = uVar8;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar3;
      local_98 = uVar8;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0xfffffffe,0,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    local_90 = puVar3;
    local_88 = uVar2;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar9 + 0x10;
      local_98 = uVar2;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,2,0,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    uVar5 = uVar5 - 2;
    puVar3 = puVar9 + 0x10;
    local_90 = puVar3;
    local_88 = uVar8;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar3;
      local_98 = uVar8;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0xfffffffe,0xfffffffe,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    local_90 = puVar3;
    local_88 = uVar2;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar9 + 0x10;
      local_98 = uVar2;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,2,0xfffffffe,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
    local_90 = puVar9 + 0x10;
    local_88 = uVar4;
    uStack_84 = uVar5;
    uVar14 = FUN_022aac60(param_1,&local_90,uVar15,uVar17);
    if ((uVar14 & 1) != 0) {
      local_a0 = puVar9 + 0x10;
      local_98 = uVar4;
      uStack_94 = uVar5;
      uVar14 = FUN_022aa4c0(&local_80,&local_a0,0,0xfffffffe,0xfffffffe);
      if ((uVar14 & 1) != 0) goto LAB_022ac10c;
    }
  }
  uVar11 = 0;
LAB_022ac110:
  return uVar11;
}

