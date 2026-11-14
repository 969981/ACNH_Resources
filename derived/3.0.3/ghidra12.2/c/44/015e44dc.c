
void FUN_015e44dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  
  *param_1 = &PTR_FUN_049afb50;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x2a1] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = puVar3 + 0x10;
  param_1[0x296] = puVar3 + 0x10;
  puVar2 = PTR_DAT_04bb3550;
  puVar4 = PTR_DAT_04bb3058;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb3550 + 0x10;
  param_1[0x28e] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x295])
  ;
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x295], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  puVar5 = PTR_DAT_04bb33a8;
  param_1[0x295] = 0;
  param_1[0x28d] = 0;
  param_1[0x287] = 0;
  param_1[0x27a] = puVar1;
  param_1[0x288] = puVar5 + 0x10;
  param_1[0x282] = puVar5 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0x281]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x281], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  lVar8 = *(long *)puVar4;
  param_1[0x281] = 0;
  param_1[0x272] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x279])
  ;
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x279], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  lVar8 = *(long *)puVar4;
  param_1[0x279] = 0;
  param_1[0x26a] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x271])
  ;
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x271], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x271] = 0;
  param_1[0x264] = puVar1;
  param_1[0x269] = 0;
  param_1[0x25e] = puVar1;
  param_1[0x263] = 0;
  param_1[600] = puVar1;
  param_1[0x25d] = 0;
  param_1[0x252] = puVar1;
  param_1[599] = 0;
  param_1[0x24c] = puVar1;
  param_1[0x251] = 0;
  param_1[0x246] = puVar1;
  param_1[0x24b] = 0;
  param_1[0x240] = puVar1;
  param_1[0x245] = 0;
  param_1[0x23a] = puVar1;
  param_1[0x23f] = 0;
  param_1[0x234] = puVar1;
  lVar8 = *(long *)puVar4;
  puVar2 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x239] = 0;
  param_1[0x22e] = puVar1;
  param_1[0x233] = 0;
  param_1[0x228] = puVar1;
  param_1[0x22d] = 0;
  param_1[0x221] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x227])
  ;
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x227], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  param_1[0x227] = 0;
  param_1[0x1c4] = &PTR_LAB_049afcb8;
  param_1[0x21b] = puVar1;
  param_1[0x220] = 0;
  param_1[0x215] = puVar1;
  param_1[0x21a] = 0;
  param_1[0x20f] = puVar1;
  param_1[0x214] = 0;
  param_1[0x209] = puVar1;
  param_1[0x20e] = 0;
  puVar2 = PTR_DAT_04bb5950;
  lVar8 = *(long *)puVar4;
  puVar1 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x1fc] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x208])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x208] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x208] + 8))();
  }
  lVar8 = *(long *)puVar4;
  param_1[0x208] = 0;
  param_1[0x1ef] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x1fb])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x1fb] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1fb] + 8))();
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x1fb] = 0;
  param_1[0x1be] = puVar1;
  param_1[0x1b8] = puVar1;
  param_1[0x1b2] = puVar1;
  param_1[0x1ac] = puVar1;
  lVar8 = *(long *)puVar4;
  param_1[0x167] = &PTR_LAB_049afcb8;
  param_1[0x1c3] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b1] = 0;
  param_1[0x19f] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x1ab])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x1ab] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1ab] + 8))();
  }
  lVar8 = *(long *)puVar4;
  param_1[0x1ab] = 0;
  param_1[0x192] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x19e])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x19e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x19e] + 8))();
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x19e] = 0;
  param_1[0x161] = puVar1;
  param_1[0x15b] = puVar1;
  param_1[0x155] = puVar1;
  param_1[0x14f] = puVar1;
  lVar8 = *(long *)puVar4;
  param_1[0x10a] = &PTR_LAB_049afcb8;
  param_1[0x166] = 0;
  param_1[0x160] = 0;
  param_1[0x15a] = 0;
  param_1[0x154] = 0;
  param_1[0x142] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x14e])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x14e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x14e] + 8))();
  }
  lVar8 = *(long *)puVar4;
  param_1[0x14e] = 0;
  param_1[0x135] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x141])
  ;
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x141] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x141] + 8))();
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x141] = 0;
  param_1[0x104] = puVar1;
  param_1[0xfe] = puVar1;
  param_1[0xf8] = puVar1;
  param_1[0xf2] = puVar1;
  lVar8 = *(long *)puVar4;
  param_1[0xad] = &PTR_LAB_049afcb8;
  param_1[0x109] = 0;
  param_1[0x103] = 0;
  param_1[0xfd] = 0;
  param_1[0xf7] = 0;
  param_1[0xe5] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xf1]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0xf1] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xf1] + 8))();
  }
  lVar8 = *(long *)puVar4;
  param_1[0xf1] = 0;
  param_1[0xd8] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xe4]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0xe4] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xe4] + 8))();
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x50] = &PTR_LAB_049afcb8;
  param_1[0xa7] = puVar1;
  param_1[0xa1] = puVar1;
  param_1[0x9b] = puVar1;
  param_1[0x95] = puVar1;
  lVar8 = *(long *)puVar4;
  param_1[0xe4] = 0;
  param_1[0xac] = 0;
  param_1[0xa6] = 0;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  param_1[0x88] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x94]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x94] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x94] + 8))();
  }
  lVar8 = *(long *)puVar4;
  param_1[0x94] = 0;
  param_1[0x7b] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x87]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x87] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x87] + 8))();
  }
  puVar1 = PTR_DAT_04bbd520;
  puVar3 = puVar3 + 0x10;
  param_1[0x87] = 0;
  param_1[0x2b] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb62c0;
  param_1[0x4f] = 0;
  param_1[0x49] = 0;
  param_1[0x43] = 0;
  param_1[0x4a] = puVar3;
  param_1[0x44] = puVar3;
  param_1[0x3d] = 0;
  param_1[0x3e] = puVar3;
  param_1[0x37] = 0;
  param_1[0x38] = puVar1 + 0x10;
  param_1[0x31] = 0;
  param_1[0x32] = puVar1 + 0x10;
  return;
}

