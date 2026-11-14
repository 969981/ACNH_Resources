
void FUN_01b49a30(long param_1,undefined4 *param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  bVar15 = *param_3;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_68 = CONCAT71(local_68._1_7_,bVar15);
  lVar8 = FUN_02583354(DAT_055021a0,&local_68,1);
  if (lVar8 == 0) {
    return;
  }
  lVar13 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar13 + 0x83f0);
  lVar8 = *(long *)(lVar13 + 0x8410);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar13 + 0x8410) == 0) goto LAB_01b49b18;
      plVar10 = *(long **)(*(long *)(lVar13 + 0x8410) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_68 = *plVar1;
      local_60 = *(undefined8 *)(lVar13 + 0x83f8);
      uStack_58 = 0x808;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_01b49b18:
  lVar8 = *(long *)(lVar13 + 0x83f8) + *plVar1;
  FUN_027adf94(lVar8 + 0x438,param_1);
  *(undefined1 *)(lVar8 + 0x504) = *(undefined1 *)(param_1 + 0xcc);
  uVar16 = *(undefined8 *)(param_1 + 0xd6);
  uVar3 = *(undefined8 *)(param_1 + 0xde);
  uVar17 = *(undefined8 *)(param_1 + 0xe6);
  *(undefined8 *)(lVar8 + 0x506) = *(undefined8 *)(param_1 + 0xce);
  uVar18 = *(undefined8 *)(param_1 + 0x10e);
  uVar19 = *(undefined8 *)(param_1 + 0x116);
  uVar4 = *(undefined8 *)(param_1 + 0x126);
  *(undefined8 *)(lVar8 + 0x556) = *(undefined8 *)(param_1 + 0x11e);
  *(undefined8 *)(lVar8 + 0x55e) = uVar4;
  *(undefined8 *)(lVar8 + 0x546) = uVar18;
  *(undefined8 *)(lVar8 + 0x54e) = uVar19;
  uVar18 = *(undefined8 *)(param_1 + 0xee);
  uVar4 = *(undefined8 *)(param_1 + 0xf6);
  uVar19 = *(undefined8 *)(param_1 + 0xfe);
  uVar5 = *(undefined8 *)(param_1 + 0x106);
  *(undefined8 *)(lVar8 + 0x50e) = uVar16;
  *(undefined8 *)(lVar8 + 0x516) = uVar3;
  *(undefined8 *)(lVar8 + 0x51e) = uVar17;
  *(undefined8 *)(lVar8 + 0x536) = uVar19;
  *(undefined8 *)(lVar8 + 0x53e) = uVar5;
  *(undefined8 *)(lVar8 + 0x526) = uVar18;
  *(undefined8 *)(lVar8 + 0x52e) = uVar4;
  memcpy((void *)(lVar8 + 0x566),(void *)(param_1 + 0x12e),0x1e0);
  uVar16 = *(undefined8 *)(param_1 + 0x316);
  uVar18 = *(undefined8 *)(param_1 + 0x326);
  uVar19 = *(undefined8 *)(param_1 + 0x30e);
  *(undefined8 *)(lVar8 + 0x756) = *(undefined8 *)(param_1 + 0x31e);
  *(undefined8 *)(lVar8 + 0x75e) = uVar18;
  *(undefined8 *)(lVar8 + 0x746) = uVar19;
  *(undefined8 *)(lVar8 + 0x74e) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x336);
  uVar18 = *(undefined8 *)(param_1 + 0x346);
  uVar19 = *(undefined8 *)(param_1 + 0x32e);
  *(undefined8 *)(lVar8 + 0x776) = *(undefined8 *)(param_1 + 0x33e);
  *(undefined8 *)(lVar8 + 0x77e) = uVar18;
  *(undefined8 *)(lVar8 + 0x766) = uVar19;
  *(undefined8 *)(lVar8 + 0x76e) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x356);
  uVar18 = *(undefined8 *)(param_1 + 0x366);
  uVar19 = *(undefined8 *)(param_1 + 0x34e);
  *(undefined8 *)(lVar8 + 0x796) = *(undefined8 *)(param_1 + 0x35e);
  *(undefined8 *)(lVar8 + 0x79e) = uVar18;
  *(undefined8 *)(lVar8 + 0x786) = uVar19;
  *(undefined8 *)(lVar8 + 0x78e) = uVar16;
  *(undefined2 *)(lVar8 + 0x7a6) = *(undefined2 *)(param_1 + 0x36e);
  *(undefined2 *)(lVar8 + 0x7a8) = *(undefined2 *)(param_1 + 0x370);
  *(undefined4 *)(lVar8 + 0x7ac) = *(undefined4 *)(param_1 + 0x374);
  *(undefined8 *)(lVar8 + 0x7b0) = *(undefined8 *)(param_1 + 0x378);
  *(undefined8 *)(lVar8 + 0x7b8) = *(undefined8 *)(param_1 + 0x380);
  *(undefined8 *)(lVar8 + 0x7c0) = *(undefined8 *)(param_1 + 0x388);
  *(undefined8 *)(lVar8 + 0x7c8) = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(lVar8 + 2000) = *(undefined8 *)(param_1 + 0x398);
  uVar18 = *(undefined8 *)(param_1 + 0x3a8);
  uVar16 = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined4 *)(lVar8 + 0x7e8) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined8 *)(lVar8 + 0x7d8) = uVar16;
  *(undefined8 *)(lVar8 + 0x7e0) = uVar18;
  if ((*(long *)(lVar13 + 0x8410) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar13 + 0x8410) + 0x20), plVar10 != (long *)0x0)) {
    local_68 = *plVar1;
    local_60 = *(undefined8 *)(lVar13 + 0x83f8);
    uStack_58 = 0x808;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
  }
  lVar2 = *plVar1;
  lVar8 = *(long *)(lVar13 + 0x83f8);
  lVar14 = *(long *)PTR_DAT_04bb32e8;
  uVar7 = *(ushort *)(lVar14 + 0x4060);
  bVar15 = *(byte *)(lVar14 + 0x4062);
  bVar6 = *(byte *)(lVar14 + 0x4063);
  uVar11 = nn::time::IsValidDate((uint)uVar7,(uint)bVar15,(uint)bVar6);
  if ((uVar11 & 1) != 0) {
    lVar8 = lVar8 + lVar2;
    *(ushort *)(lVar8 + 0x4f4) = uVar7;
    *(byte *)(lVar8 + 0x4f6) = bVar15;
    *(byte *)(lVar8 + 0x4f7) = bVar6;
  }
  if ((*(long *)(lVar13 + 0x8410) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar13 + 0x8410) + 0x20), plVar10 != (long *)0x0)) {
    local_68 = *plVar1;
    local_60 = *(undefined8 *)(lVar13 + 0x83f8);
    uStack_58 = 0x808;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
  }
  *(undefined4 *)(*(long *)(lVar13 + 0x83f8) + *plVar1 + 0x800) = *param_2;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x8410) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x8410) + 0x18), puVar12 != (undefined8 *)0x0))
  {
    (**(code **)*puVar12)();
  }
  return;
}

