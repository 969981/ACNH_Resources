
undefined8 FUN_01f95a20(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined1 *__src;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 auStack_ac [63];
  undefined1 local_6d;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  int local_34;
  
  puVar24 = PTR_PTR_04bb2238;
  local_6d = 0;
  local_b0 = 0x40;
  local_c0 = PTR_DAT_04bb2f70 + 0x10;
  local_c8 = 0;
  local_b8 = auStack_ac;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar24 + 8);
  if (auStack_ac != __src) {
    (**(code **)(*(long *)puVar24 + 0x18))(puVar24);
    lVar18 = 0;
    do {
      if (*(char *)(*(long *)(puVar24 + 8) + lVar18) == '\0') goto LAB_01f95afc;
      lVar1 = *(long *)(puVar24 + 8) + lVar18;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_01f95afc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_01f95afc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_01f95afc:
    iVar3 = (int)lVar18;
    if (local_b0 <= (int)lVar18) {
      iVar3 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar3);
    auStack_ac[iVar3] = 0;
  }
  puVar24 = PTR_DAT_04bb2010;
  local_58 = 0;
  uStack_64 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_60 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  uStack_5c = 0;
  uVar4 = *(uint *)(param_1 + 0xaf48);
  local_68 = 0;
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  if (0xf < (int)uVar4) {
    return 0;
  }
  puVar20 = &DAT_0545b240 + (ulong)uVar4 * 0x118;
  if (0xf < uVar4) {
    puVar20 = &DAT_0545b240;
  }
  if (puVar20[0x8c] != '\0') {
    local_d0 = *(undefined4 *)(puVar20 + 0xac);
    uStack_cc = *(undefined4 *)(puVar20 + 0xb0);
    local_150 = (undefined *)((ulong)local_150._4_4_ << 0x20);
    local_d8 = *(int *)(puVar20 + 0xc0);
    iStack_d4 = *(int *)(puVar20 + 0xc4);
    local_e0 = PTR_DAT_04bb2010 + 0x10;
    uVar17 = FUN_02080ddc(param_1 + 0xe5e0,&local_c8,&local_d0,&local_e0,&local_150);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    if (local_68 != 0) {
      local_140 = 0;
      uStack_138 = 0;
      puStack_128 = puVar24 + 0x10;
      plVar2 = (long *)(param_1 + 0xe638);
      local_120 = 0;
      local_150 = PTR_DAT_04bc1558 + 0x10;
      local_fc = 0;
      uStack_148 = 0;
      local_130 = PTR_DAT_04bbc1a0 + 0x10;
      local_110 = 0;
      uStack_108 = 0xffffffff00000000;
      local_100 = 0xffffffff;
      local_f8 = 0xfffe;
      puStack_118 = puStack_128;
      FUN_0277d4ac(&local_f8);
      local_e8 = 0;
      local_e4 = 0;
      local_f0 = 0x3bf800000;
      local_f8 = CONCAT44(uStack_cc,local_d0);
      local_120 = CONCAT44(iStack_d4,local_d8);
      local_110 = CONCAT44(iStack_d4 + 1,local_d8 + 1);
      local_34 = local_68;
      *(int *)(param_1 + 0xe630) = local_68;
      puVar16 = PTR_LAB_04bc2750;
      puVar15 = PTR_LAB_04bc2748;
      puVar14 = PTR_LAB_04bc2738;
      puVar13 = PTR_LAB_04bc2730;
      puVar12 = PTR_LAB_04bc2720;
      puVar11 = PTR_LAB_04bc2718;
      puVar10 = PTR_LAB_04bc2708;
      puVar9 = PTR_LAB_04bc2700;
      puVar8 = PTR_LAB_04bc26f0;
      puVar7 = PTR_LAB_04bc26e8;
      puVar6 = PTR_LAB_04bc26d8;
      puVar5 = PTR_LAB_04bc26d0;
      puVar19 = PTR_LAB_04bc26c0;
      puVar21 = PTR_LAB_04bc26b8;
      puVar20 = PTR_LAB_04bc26a8;
      puVar24 = PTR_LAB_04bc26a0;
      switch(local_68) {
      default:
        lVar18 = param_1 + 0xe5e8;
        puVar22 = PTR_DAT_04bc2768 + 0x10;
        puVar23 = PTR_DAT_04bc2770 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar20;
        puVar21 = puVar24;
        puVar24 = PTR_FUN_04bc2698;
        break;
      case 2:
        lVar18 = param_1 + 0xe5f0;
        puVar22 = PTR_DAT_04bc2778 + 0x10;
        puVar23 = PTR_DAT_04bc2780 + 0x10;
        *plVar2 = (long)puVar22;
        puVar24 = PTR_FUN_04bc26b0;
        break;
      case 3:
        lVar18 = param_1 + 0xe5f8;
        puVar22 = PTR_DAT_04bc2788 + 0x10;
        puVar23 = PTR_DAT_04bc2790 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar8;
        puVar21 = puVar7;
        puVar24 = PTR_LAB_04bc26e0;
        break;
      case 4:
        lVar18 = param_1 + 0xe600;
        puVar22 = PTR_DAT_04bc2798 + 0x10;
        puVar23 = PTR_DAT_04bc27a0 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar6;
        puVar21 = puVar5;
        puVar24 = PTR_LAB_04bc26c8;
        break;
      case 5:
        lVar18 = param_1 + 0xe608;
        puVar22 = PTR_DAT_04bc27a8 + 0x10;
        puVar23 = PTR_DAT_04bc27b0 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar10;
        puVar21 = puVar9;
        puVar24 = PTR_LAB_04bc26f8;
        break;
      case 6:
        lVar18 = param_1 + 0xe610;
        puVar22 = PTR_DAT_04bc27b8 + 0x10;
        puVar23 = PTR_DAT_04bc27c0 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar12;
        puVar21 = puVar11;
        puVar24 = PTR_LAB_04bc2710;
        break;
      case 7:
        lVar18 = param_1 + 0xe618;
        puVar22 = PTR_DAT_04bc27c8 + 0x10;
        puVar23 = PTR_DAT_04bc27d0 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar14;
        puVar21 = puVar13;
        puVar24 = PTR_LAB_04bc2728;
        break;
      case 0xb:
        lVar18 = param_1 + 0xe620;
        puVar22 = PTR_DAT_04bc27d8 + 0x10;
        puVar23 = PTR_DAT_04bc27e0 + 0x10;
        *plVar2 = (long)puVar22;
        puVar19 = puVar16;
        puVar21 = puVar15;
        puVar24 = PTR_LAB_04bc2740;
      }
      *(long *)(param_1 + 0xe680) = lVar18;
      *(undefined **)(param_1 + 0xe688) = puVar19;
      *(undefined8 *)(param_1 + 0xe690) = 0;
      *(long *)(param_1 + 0xe640) = lVar18;
      *(undefined **)(param_1 + 0xe648) = puVar24;
      *(undefined4 *)(param_1 + 0xe6a8) = 0;
      *(undefined8 *)(param_1 + 0xe650) = 0;
      *(undefined **)(param_1 + 0xe658) = puVar22;
      *(long *)(param_1 + 0xe660) = lVar18;
      *(undefined **)(param_1 + 0xe668) = puVar21;
      *(undefined8 *)(param_1 + 0xe670) = 0;
      *(undefined **)(param_1 + 59000) = puVar23;
      *(undefined8 *)(param_1 + 0xe698) = 0;
      *(undefined8 *)(param_1 + 0xe6a0) = 0;
      FUN_02080690(param_1 + 0xe5e0,param_2,&local_34,&local_150,&local_c8);
      *(undefined4 *)(param_2 + 100) = 1;
      return 1;
    }
  }
  return 0;
}

