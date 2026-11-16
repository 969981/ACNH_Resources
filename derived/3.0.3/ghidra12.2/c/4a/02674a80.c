
undefined8
FUN_02674a80(undefined4 *param_1,uint param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  lVar6 = FUN_026eec4c(DAT_05574040,*param_1);
  puVar4 = PTR_DAT_04bb43c0;
  if (lVar6 == 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  if (*(long *)puVar4 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_02649bf0(lVar6,param_3,0);
    }
  }
  lVar13 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar10 = *(long **)(lVar11 + 0x98);
    if (plVar10 != (long *)0x0) goto LAB_02674b64;
LAB_02674b80:
    uVar5 = 1;
  }
  else {
    plVar10 = *(long **)(lVar6 + 0x19548);
    lVar11 = lVar13;
    if (plVar10 == (long *)0x0) goto LAB_02674b80;
LAB_02674b64:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02674b80;
    uVar5 = (*(code *)**(undefined8 **)*plVar10)();
    uVar5 = uVar5 ^ 1;
  }
  uVar14 = (ulong)param_2;
  if (param_2 < 0x28) {
    lVar1 = *(long *)(lVar11 + 0x80) + *(long *)(lVar11 + 0x78);
    uVar12 = *(uint *)(lVar1 + 0x158);
    if (0x13 < uVar12) {
      uVar12 = 0x14;
    }
    puVar2 = (undefined1 *)(lVar1 + 0xa4) + (param_2 - uVar12);
    if (0x13 < param_2 - uVar12) {
      puVar2 = (undefined1 *)(lVar1 + 0xa4);
    }
    puVar3 = (undefined1 *)(lVar1 + uVar14 + 0x15c);
    if (uVar12 <= param_2) {
      puVar3 = puVar2;
    }
    uVar15 = *puVar3;
  }
  else {
    uVar15 = 0xff;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar11 + 0x98) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x98);
  }
  else {
    lVar11 = *(long *)(lVar6 + 0x19548);
  }
  if (lVar11 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar10 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar13 + 0x98) == 0) goto LAB_02674c7c;
      plVar10 = *(long **)(*(long *)(lVar13 + 0x98) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar13 + 0x78);
      uStack_70 = *(undefined8 *)(lVar13 + 0x80);
      local_68 = 0x17c;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
LAB_02674c7c:
  uVar8 = FUN_027fa2dc(*(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78),uVar14,param_3,param_5);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (param_4 == 2) {
    FUN_02674040(lVar6,uVar14,uVar15);
  }
  else if (param_4 == 1) {
    FUN_02673de0(lVar6,uVar14,param_3);
  }
  FUN_02674420(lVar6);
  return 1;
}

