
void FUN_01bc2520(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  undefined **ppuVar13;
  uint uVar14;
  long lVar15;
  undefined *local_148;
  char *local_140;
  undefined *local_138;
  void *local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  void *local_58;
  
  puVar7 = PTR_DAT_04bb2e00;
  puVar5 = PTR_DAT_04bb2698;
  local_128 = 0;
  local_124 = 0;
  local_110 = 0xffffffff;
  local_120 = 0xffffffff;
  uStack_118 = 0xffffffff00000000;
  local_100 = local_f4;
  local_a8 = local_9c;
  local_f8 = 0x40;
  plVar10 = *(long **)PTR_DAT_04bc08b8;
  local_b5 = 0;
  local_f4[0] = 0;
  local_a0 = 0x40;
  local_108 = PTR_DAT_04bb2bc0 + 0x10;
  local_5d = 0;
  local_9c[0] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  local_138 = PTR_DAT_04bb2e00 + 0x10;
  local_58 = (void *)0x0;
  local_130 = (void *)0x0;
  local_b0 = local_108;
  if (lVar15 == 0) {
    pvVar12 = malloc(0x1000);
    pvVar8 = local_130;
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar8 = local_130;
      if (plVar10 == (long *)0x0) goto LAB_01bc2634;
    }
    pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
    pvVar8 = local_130;
  }
  local_130 = pvVar12;
  if (local_130 != (void *)0x0) {
    local_128 = 0x800;
    local_58 = local_130;
    (**(code **)(local_138 + 0x38))(&local_138);
    pvVar8 = local_130;
  }
LAB_01bc2634:
  local_130 = pvVar8;
  local_148 = PTR_DAT_04bb2020 + 0x10;
  local_140 = "STR_FixedForm";
  (**(code **)(*param_1 + 0x60))(param_1,&local_138,&local_148,param_3,0);
  puVar6 = PTR_DAT_04bb28f8;
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_148 = (undefined *)(ulong)CONCAT24(uVar4,(uint)uVar3);
  lVar11 = *(long *)PTR_DAT_04bb28f8;
  for (lVar15 = **(long **)(lVar11 + 0x29d0); lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar15 + 0x20);
      uVar14 = (uint)uVar3;
      if ((uVar3 <= uVar1 && uVar1 != uVar14) ||
         (((uVar1 == uVar14 && (uVar2 = *(uint *)(lVar15 + 0x24), uVar4 <= uVar2 && uVar2 != uVar4))
          && (uVar2 != 0xffffffff)))) break;
      if ((uVar14 <= uVar1) && ((uint)uVar4 <= *(uint *)(lVar15 + 0x24))) {
        if (*(code **)(lVar15 + 0x58) == (code *)0x0) goto LAB_01bc26e4;
        uVar9 = (**(code **)(lVar15 + 0x58))(param_2);
        lVar11 = *(long *)puVar6;
        goto LAB_01bc26e8;
      }
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 == 0) goto LAB_01bc26e4;
    }
  }
LAB_01bc26e4:
  uVar9 = 0;
LAB_01bc26e8:
  local_140 = (char *)CONCAT44(local_140._4_4_,uVar9);
  lVar15 = FUN_01bc1730(lVar11 + 0x2990,param_1[0x41] + 8);
  if (lVar15 != 0) {
    plVar10 = (long *)FUN_01bc0860(lVar15,&local_148,1);
    if (plVar10 == (long *)0x0) {
      ppuVar13 = &local_138;
      FUN_01bc09d8(lVar15,&local_148,&local_138);
    }
    else {
      ppuVar13 = (undefined **)(**(code **)(*plVar10 + 0x20))();
    }
    (**(code **)(*param_1 + 0x48))(param_1,ppuVar13,param_1[0x41],param_1 + 0x43);
  }
  local_138 = puVar7 + 0x10;
  if (local_58 != (void *)0x0) {
    local_130 = (void *)0x0;
    local_128 = 0;
    local_124 = 0;
    local_110 = 0xffffffff;
    local_120 = 0xffffffff;
    uStack_118 = 0xffffffff00000000;
    *local_100 = 0;
    *local_a8 = 0;
    pvVar8 = local_58;
    if (local_58 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(local_58);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar5,local_58);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar8);
        }
      }
    }
  }
  return;
}

