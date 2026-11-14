
void FUN_015ff7ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  
  *param_1 = &PTR_FUN_049b1a70;
  param_1[0x2cc] = &PTR_LAB_049b2160;
  param_1[0x32e] = &PTR_LAB_049b22c8;
  puVar4 = PTR_DAT_04bb31d0;
  param_1[0x364] = 0;
  param_1[0x35e] = 0;
  param_1[0x2f7] = &PTR_LAB_049b22c8;
  puVar1 = puVar4 + 0x10;
  param_1[0x32d] = 0;
  param_1[0x327] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2c5] = 0;
  param_1[0x35f] = puVar1;
  param_1[0x359] = puVar1;
  param_1[0x328] = puVar1;
  param_1[0x322] = puVar1;
  param_1[0x2c6] = puVar1;
  param_1[0x2c0] = puVar1;
  puVar6 = PTR_DAT_04bb3550;
  puVar2 = PTR_DAT_04bb3550 + 0x10;
  param_1[0x2ba] = puVar1;
  param_1[0x2bf] = 0;
  puVar5 = PTR_DAT_04bb3058;
  lVar9 = *(long *)PTR_DAT_04bb3058;
  param_1[0x2b4] = puVar1;
  param_1[0x2b9] = 0;
  param_1[0x2ae] = puVar1;
  param_1[0x2b3] = 0;
  param_1[0x2a6] = puVar2;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x2ad])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x2ad], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x2ad] = 0;
  param_1[0x2a0] = puVar1;
  param_1[0x2a5] = 0;
  param_1[0x29a] = puVar1;
  param_1[0x29f] = 0;
  param_1[0x294] = puVar1;
  param_1[0x299] = 0;
  param_1[0x28c] = puVar2;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x293])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x293], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  puVar1 = puVar4 + 0x10;
  param_1[0x293] = 0;
  param_1[0x286] = puVar1;
  param_1[0x28b] = 0;
  param_1[0x280] = puVar1;
  param_1[0x285] = 0;
  param_1[0x27a] = puVar1;
  param_1[0x27f] = 0;
  param_1[0x274] = puVar1;
  param_1[0x279] = 0;
  param_1[0x26c] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x273])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x273], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x273] = 0;
  param_1[0x266] = puVar1;
  param_1[0x26b] = 0;
  param_1[0x260] = puVar1;
  param_1[0x265] = 0;
  param_1[0x25a] = puVar1;
  param_1[0x25f] = 0;
  param_1[0x254] = puVar1;
  param_1[0x259] = 0;
  param_1[0x24c] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x253])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x253], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  puVar1 = puVar4 + 0x10;
  param_1[0x253] = 0;
  param_1[0x246] = puVar1;
  param_1[0x24b] = 0;
  param_1[0x240] = puVar1;
  param_1[0x245] = 0;
  param_1[0x23a] = puVar1;
  param_1[0x23f] = 0;
  param_1[0x234] = puVar1;
  param_1[0x239] = 0;
  param_1[0x22c] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x233])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x233], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x233] = 0;
  param_1[0x226] = puVar1;
  param_1[0x22b] = 0;
  param_1[0x220] = puVar1;
  param_1[0x225] = 0;
  param_1[0x21a] = puVar1;
  param_1[0x21f] = 0;
  param_1[0x214] = puVar1;
  param_1[0x219] = 0;
  param_1[0x20c] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x213])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x213], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x213] = 0;
  param_1[0x204] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x20b])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x20b], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  puVar1 = puVar4 + 0x10;
  param_1[0x20b] = 0;
  param_1[0x1fe] = puVar1;
  param_1[0x203] = 0;
  param_1[0x1f8] = puVar1;
  param_1[0x1fd] = 0;
  param_1[0x1f2] = puVar1;
  param_1[0x1f7] = 0;
  param_1[0x1ec] = puVar1;
  param_1[0x1f1] = 0;
  param_1[0x1e4] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1eb])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1eb], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1eb] = 0;
  param_1[0x1de] = puVar1;
  param_1[0x1e3] = 0;
  param_1[0x1d6] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1dd])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1dd], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1dd] = 0;
  param_1[0x1ce] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1d5])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1d5], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1d5] = 0;
  param_1[0x1c6] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1cd])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1cd], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1cd] = 0;
  param_1[0x1be] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1c5])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1c5], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1c5] = 0;
  param_1[0x1b6] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1bd])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1bd], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x1bd] = 0;
  param_1[0x1ae] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x1b5])
  ;
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x1b5], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  puVar1 = puVar4 + 0x10;
  param_1[0x1b5] = 0;
  param_1[0x1a8] = puVar1;
  param_1[0x1ad] = 0;
  param_1[0xf3] = &PTR_FUN_049b1d28;
  param_1[0x14f] = &PTR_FUN_049b1ff8;
  param_1[0x1a2] = puVar1;
  param_1[0x1a7] = 0;
  param_1[0x19c] = puVar1;
  param_1[0x1a1] = 0;
  puVar2 = PTR_DAT_04bb2fe8;
  param_1[0x195] = PTR_DAT_04bb2fe8 + 0x10;
  uVar7 = (**(code **)(**(long **)(*(long *)puVar5 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar5 + 0x330),param_1[0x19b]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x19b], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  param_1[0x19b] = 0;
  param_1[399] = puVar1;
  param_1[0x194] = 0;
  puVar3 = PTR_DAT_04bbd520 + 0x10;
  param_1[0x18e] = 0;
  param_1[0x182] = puVar1;
  param_1[0x187] = 0;
  param_1[0x188] = puVar3;
  param_1[0x17a] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(*(long *)puVar5 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar5 + 0x330),param_1[0x181]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x181], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  param_1[0x181] = 0;
  param_1[0x11e] = &PTR_LAB_049b1e90;
  puVar1 = puVar4 + 0x10;
  param_1[0xe6] = puVar2 + 0x10;
  lVar9 = *(long *)puVar5;
  param_1[0x149] = puVar1;
  param_1[0x14e] = 0;
  param_1[0xed] = puVar1;
  param_1[0xf2] = 0;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0xec]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xec], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0xec] = 0;
  param_1[0xe0] = puVar1;
  param_1[0xe5] = 0;
  param_1[0xda] = puVar1;
  param_1[0xdf] = 0;
  param_1[0xd4] = puVar1;
  param_1[0xd9] = 0;
  param_1[0xce] = puVar1;
  param_1[0xd3] = 0;
  param_1[0xc6] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0xcd]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xcd], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  puVar1 = puVar4 + 0x10;
  param_1[0xcd] = 0;
  param_1[0xc0] = puVar1;
  param_1[0xba] = puVar1;
  param_1[0xb4] = puVar1;
  lVar9 = *(long *)puVar5;
  param_1[0xc5] = 0;
  param_1[0xbf] = 0;
  param_1[0xb9] = 0;
  param_1[0xac] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0xb3]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xb3], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0xb3] = 0;
  param_1[0xa4] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0xab]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xab], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0xab] = 0;
  param_1[0x9c] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0xa3]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0xa3], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  puVar1 = puVar4 + 0x10;
  param_1[0xa3] = 0;
  param_1[0x96] = puVar1;
  param_1[0x9b] = 0;
  param_1[0x90] = puVar1;
  param_1[0x95] = 0;
  param_1[0x88] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x8f]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x8f], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  lVar9 = *(long *)puVar5;
  param_1[0x8f] = 0;
  param_1[0x82] = puVar1;
  param_1[0x87] = 0;
  param_1[0x7c] = puVar1;
  param_1[0x81] = 0;
  param_1[0x76] = puVar1;
  param_1[0x7b] = 0;
  param_1[0x70] = puVar1;
  param_1[0x75] = 0;
  param_1[0x68] = puVar6 + 0x10;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x6f]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x6f], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  puVar4 = puVar4 + 0x10;
  param_1[0x6f] = 0;
  param_1[0x62] = puVar4;
  param_1[0x5c] = puVar4;
  param_1[0x56] = puVar4;
  param_1[0x50] = puVar4;
  param_1[0x4a] = puVar4;
  param_1[0x42] = puVar6 + 0x10;
  lVar9 = *(long *)puVar5;
  param_1[0x67] = 0;
  param_1[0x61] = 0;
  param_1[0x5b] = 0;
  param_1[0x55] = 0;
  param_1[0x4f] = 0;
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x330) + 0x88))(*(long **)(lVar9 + 0x330),param_1[0x49]);
  if (((uVar7 & 1) != 0) && (pvVar10 = (void *)param_1[0x49], pvVar10 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
      }
    }
  }
  param_1[0x49] = 0;
  param_1[0x3c] = &PTR_LAB_049b1bd8;
  param_1[0x41] = 0;
  param_1[0x2b] = PTR_DAT_04bb3578 + 0x10;
  uVar7 = (**(code **)(**(long **)(*(long *)puVar5 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar5 + 0x330),param_1[0x3b]);
  if (((uVar7 & 1) != 0) && ((long *)param_1[0x3b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x3b] + 8))();
  }
  param_1[0x3b] = 0;
  return;
}

