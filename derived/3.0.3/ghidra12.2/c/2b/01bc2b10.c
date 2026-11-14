
void FUN_01bc2b10(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  undefined **ppuVar12;
  uint uVar13;
  long lVar14;
  undefined *local_158;
  void *local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  void *local_78;
  uint local_6c;
  uint uStack_68;
  undefined4 local_64;
  
  puVar7 = PTR_DAT_04bb2e00;
  puVar5 = PTR_DAT_04bb2698;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0xffffffff;
  uStack_138 = 0xffffffff00000000;
  local_120 = local_114;
  local_130 = 0xffffffff;
  local_c8 = local_bc;
  local_118 = 0x40;
  plVar9 = *(long **)PTR_DAT_04bc08b8;
  local_d5 = 0;
  local_114[0] = 0;
  local_c0 = 0x40;
  local_128 = PTR_DAT_04bb2bc0 + 0x10;
  local_7d = 0;
  local_bc[0] = 0;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  local_158 = PTR_DAT_04bb2e00 + 0x10;
  local_78 = (void *)0x0;
  local_150 = (void *)0x0;
  local_d0 = local_128;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x1000);
    pvVar8 = local_150;
  }
  else {
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar14 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      pvVar8 = local_150;
      if (plVar9 == (long *)0x0) goto LAB_01bc2c2c;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1000,8);
    pvVar8 = local_150;
  }
  local_150 = pvVar11;
  if (local_150 != (void *)0x0) {
    local_148 = 0x800;
    local_78 = local_150;
    (**(code **)(local_158 + 0x38))(&local_158);
    pvVar8 = local_150;
  }
LAB_01bc2c2c:
  local_150 = pvVar8;
  (**(code **)(*param_1 + 0x68))(param_1,&local_158,param_3,param_4);
  puVar6 = PTR_DAT_04bb28f8;
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_6c = (uint)uVar3;
  uStack_68 = (uint)uVar4;
  lVar10 = *(long *)PTR_DAT_04bb28f8;
  for (lVar14 = **(long **)(lVar10 + 0x29d0); lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar14 + 0x20);
      uVar13 = (uint)uVar3;
      if ((local_6c <= uVar1 && uVar1 != uVar13) ||
         (((uVar1 == uVar13 &&
           (uVar2 = *(uint *)(lVar14 + 0x24), uStack_68 <= uVar2 && uVar2 != uVar4)) &&
          (uVar2 != 0xffffffff)))) break;
      if ((uVar13 <= uVar1) && ((uint)uVar4 <= *(uint *)(lVar14 + 0x24))) {
        if (*(code **)(lVar14 + 0x58) == (code *)0x0) goto LAB_01bc2cc0;
        local_64 = (**(code **)(lVar14 + 0x58))(param_2);
        lVar10 = *(long *)puVar6;
        goto LAB_01bc2cc4;
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if (lVar14 == 0) goto LAB_01bc2cc0;
    }
  }
LAB_01bc2cc0:
  local_64 = 0;
LAB_01bc2cc4:
  lVar14 = FUN_01bc1730(lVar10 + 0x2990,param_1[0x41] + 8);
  if (lVar14 != 0) {
    plVar9 = (long *)FUN_01bc0860(lVar14,&local_6c,1);
    if (plVar9 == (long *)0x0) {
      ppuVar12 = &local_158;
      FUN_01bc09d8(lVar14,&local_6c,&local_158);
    }
    else {
      ppuVar12 = (undefined **)(**(code **)(*plVar9 + 0x20))();
    }
    (**(code **)(*param_1 + 0x48))(param_1,ppuVar12,param_1[0x41],param_1 + 0x43);
  }
  local_158 = puVar7 + 0x10;
  if (local_78 != (void *)0x0) {
    local_150 = (void *)0x0;
    local_148 = 0;
    local_144 = 0;
    local_130 = 0xffffffff;
    local_140 = 0xffffffff;
    uStack_138 = 0xffffffff00000000;
    *local_120 = 0;
    *local_c8 = 0;
    pvVar8 = local_78;
    if (local_78 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(local_78);
      }
      else {
        plVar9 = (long *)FUN_038cb610(*(long *)puVar5,local_78);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,pvVar8);
        }
      }
    }
  }
  return;
}

