
undefined8
FUN_02674700(byte *param_1,uint param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_44 [4];
  
  if (7 < *param_1) {
    return 0;
  }
  uVar5 = FUN_02582d8c(param_1,1);
  if (((7 < uVar5) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0')) {
    if (7 < *param_1) {
      return 0;
    }
    uVar5 = FUN_02582d8c(param_1,1);
    if (7 < uVar5) {
      return 0;
    }
    lVar6 = *(long *)PTR_DAT_04bb4fb8;
    if (*(char *)(lVar6 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0') {
      return 0;
    }
    if (*(char *)(lVar6 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0') {
      return 0;
    }
    if (*(int *)(lVar6 + (ulong)uVar5 * 0x13f0 + 0x13d0) != 1) {
      return 0;
    }
  }
  local_44[0] = *param_1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_44,1);
  puVar4 = PTR_DAT_04bb43c0;
  if (lVar6 == 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  if (*(long *)puVar4 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_02648c90(param_1,param_3,0);
    }
  }
  lVar14 = lVar6 + 0x194b0;
  lVar15 = lVar14;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar15 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar15 + 0x98) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar15 + 0x98), puVar7 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar7)();
    uVar5 = uVar5 ^ 1;
  }
  uVar13 = (ulong)param_2;
  if (param_2 < 0x28) {
    lVar1 = *(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78);
    uVar11 = *(uint *)(lVar1 + 0x158);
    if (0x13 < uVar11) {
      uVar11 = 0x14;
    }
    puVar2 = (undefined1 *)(lVar1 + 0xa4) + (param_2 - uVar11);
    if (0x13 < param_2 - uVar11) {
      puVar2 = (undefined1 *)(lVar1 + 0xa4);
    }
    puVar3 = (undefined1 *)(lVar1 + uVar13 + 0x15c);
    if (uVar11 <= param_2) {
      puVar3 = puVar2;
    }
    uVar12 = *puVar3;
  }
  else {
    uVar12 = 0xff;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar14 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar15 = *(long *)(lVar14 + 0x98);
  if (lVar15 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar14 + 0x98);
      uVar8 = uVar8 & 0xffffffff;
      if (lVar15 == 0) goto LAB_026749cc;
    }
    plVar9 = *(long **)(lVar15 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar14 + 0x78);
      uStack_70 = *(undefined8 *)(lVar14 + 0x80);
      local_68 = 0x17c;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_026749cc:
  uVar10 = FUN_027fa2dc(*(long *)(lVar14 + 0x80) + *(long *)(lVar14 + 0x78),uVar13,param_3,param_5);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x98) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x98) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  if (param_4 == 2) {
    FUN_02674040(lVar6,uVar13,uVar12);
  }
  else if (param_4 == 1) {
    FUN_02673de0(lVar6,uVar13,param_3);
  }
  FUN_02674420(lVar6);
  return 1;
}

