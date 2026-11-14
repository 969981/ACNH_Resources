
void FUN_017fe8b4(undefined1 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  char cVar15;
  undefined2 uVar16;
  short sVar17;
  short sVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *param_1 = 1;
  local_88 = PTR_DAT_04bb7648;
  *param_2 = 1;
  local_88 = local_88 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar19 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar19 == 0)) {
    puVar2 = (undefined2 *)(lVar12 + 0x2c);
    if ((*(ushort *)(lVar12 + 0x28) & 0x40) != 0) {
      puVar2 = (undefined2 *)(lVar12 + 0x2a);
    }
    uVar16 = *puVar2;
  }
  else if ((*(long **)(lVar19 + 0x60) == (long *)0x0) ||
          (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x60), puVar10 == (undefined8 *)0x0)) {
    uVar16 = *(undefined2 *)(*(long *)(lVar19 + 0x48) + *(long *)(lVar19 + 0x40) + 2);
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar16 = *(undefined2 *)(*(long *)(lVar19 + 0x48) + *(long *)(lVar19 + 0x40) + 2);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x60) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x60) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  local_80 = CONCAT22(local_80._2_2_,uVar16);
  local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
  lVar12 = FUN_03775a30(&local_88);
  if (lVar12 == 0) {
    return;
  }
  local_68 = (undefined *)0xfffe;
  lVar19 = lVar12 + 0x380 + ((ulong)local_a0 & 0xffffffff) * 0x658;
  if (1 < (uint)local_a0) {
    lVar19 = lVar12 + 0x380;
  }
  FUN_0277d4ac(&local_68);
  local_70 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_70);
  plVar13 = *(long **)(lVar19 + 0x140);
  if (plVar13 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if ((undefined8 *)*plVar13 != (undefined8 *)0x0) {
      uVar11 = (*(code *)**(undefined8 **)*plVar13)();
      plVar13 = *(long **)(lVar19 + 0x140);
    }
  }
  plVar20 = (long *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 8);
  puVar4 = (undefined *)*plVar20;
  puVar1 = (undefined *)*plVar20;
  if ((((uVar11 & 1) != 0) && (plVar13 != (long *)0x0)) &&
     ((undefined8 *)plVar13[1] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)plVar13[1])();
    plVar13 = *(long **)(lVar19 + 0x140);
  }
  local_70 = puVar4;
  local_68 = puVar1;
  if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
    sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x1a);
  }
  else {
    uVar11 = (*(code *)**(undefined8 **)*plVar13)();
    sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x1a);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x140) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x140) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  if ((*(long **)(lVar19 + 0x3a8) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x3a8), puVar10 == (undefined8 *)0x0)) {
    sVar17 = *(short *)(*(long *)(lVar19 + 0x390) + *(long *)(lVar19 + 0x388) + 0xc);
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    sVar17 = *(short *)(*(long *)(lVar19 + 0x390) + *(long *)(lVar19 + 0x388) + 0xc);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x3a8) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x3a8) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  puVar1 = PTR_DAT_04bb3170;
  plVar20 = (long *)(lVar19 + 0x390);
  plVar13 = (long *)(lVar19 + 0x388);
  if ((sVar17 == 0) && (sVar18 == *(short *)PTR_DAT_04bb3170)) {
    plVar14 = *(long **)(lVar19 + 0x140);
    if (plVar14 == (long *)0x0) goto LAB_017febd8;
LAB_017feb90:
    if ((undefined8 *)*plVar14 == (undefined8 *)0x0) goto LAB_017febd8;
    uVar11 = (*(code *)**(undefined8 **)*plVar14)();
    bVar3 = *(byte *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x20);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x140) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x140) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  else {
    local_88 = (undefined *)0x2aa6;
    FUN_0277d4ac(&local_88);
    local_68 = local_88;
    local_70 = local_88;
    plVar14 = *(long **)(lVar19 + 0x140);
    if (plVar14 != (long *)0x0) goto LAB_017feb90;
LAB_017febd8:
    bVar3 = *(byte *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x20);
  }
  if ((bVar3 & 1) == 0) goto LAB_017feecc;
  plVar14 = *(long **)(lVar19 + 0x140);
  if ((plVar14 == (long *)0x0) || ((undefined8 *)*plVar14 == (undefined8 *)0x0)) {
    cVar15 = *(char *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x1e);
LAB_017fec44:
    if (plVar14 != (long *)0x0) goto LAB_017fec48;
LAB_017fec60:
    uVar11 = 0;
  }
  else {
    uVar11 = (*(code *)**(undefined8 **)*plVar14)();
    cVar15 = *(char *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x1e);
    plVar14 = *(long **)(lVar19 + 0x140);
    if ((uVar11 & 1) == 0) goto LAB_017fec44;
    if (plVar14 == (long *)0x0) goto LAB_017fec60;
    if ((undefined8 *)plVar14[1] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar14[1])();
      plVar14 = *(long **)(lVar19 + 0x140);
      goto LAB_017fec44;
    }
LAB_017fec48:
    uVar11 = 0;
    if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
      uVar11 = (*(code *)**(undefined8 **)*plVar14)();
    }
  }
  plVar14 = (long *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120));
  puVar5 = (undefined *)*plVar14;
  puVar4 = (undefined *)*plVar14;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x140) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x140) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (cVar15 == '\x03') {
    if ((*(long **)(lVar19 + 0x140) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x140), puVar10 == (undefined8 *)0x0)) {
      sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x18);
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x18);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x140) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x140) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    if ((*(long **)(lVar19 + 0x3a8) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x3a8), puVar10 == (undefined8 *)0x0)) {
      sVar17 = *(short *)(*plVar20 + *plVar13 + 0xe);
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      sVar17 = *(short *)(*plVar20 + *plVar13 + 0xe);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x3a8) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x3a8) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    if ((sVar17 == 0) && (sVar18 == *(short *)puVar1)) {
      local_68 = puVar5;
    }
    else {
      local_88 = (undefined *)0x2aa6;
      FUN_0277d4ac(&local_88);
      local_68 = local_88;
    }
  }
  else if (cVar15 == '\x01') {
    if ((*(long **)(lVar19 + 0x140) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x140), puVar10 == (undefined8 *)0x0)) {
      sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x18);
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      sVar18 = *(short *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120) + 0x18);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x140) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x140) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    if ((*(long **)(lVar19 + 0x3a8) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x3a8), puVar10 == (undefined8 *)0x0)) {
      sVar17 = *(short *)(*plVar20 + *plVar13 + 0xe);
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      sVar17 = *(short *)(*plVar20 + *plVar13 + 0xe);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x3a8) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x3a8) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    if ((sVar17 == 0) && (sVar18 == *(short *)puVar1)) {
      local_70 = puVar4;
    }
    else {
      local_88 = (undefined *)0x2aa6;
      FUN_0277d4ac(&local_88);
      local_70 = local_88;
    }
  }
LAB_017feecc:
  puVar4 = PTR_DAT_04bb43c0;
  local_78 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (undefined4)local_68;
  uStack_7c = local_68._4_4_;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_88 = puVar1;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_68);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8), lVar12 != 0)) {
        local_78 = lVar12;
      }
    }
  }
  uVar7 = FUN_01b01f10(&local_88);
  iVar8 = FUN_0277d6c4(&local_68);
  lVar12 = *(long *)puVar4;
  uVar6 = 0x13e;
  if (iVar8 != 0x2aa6) {
    uVar6 = uVar7;
  }
  local_90 = 0;
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  local_a0 = puVar1;
  uVar7 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_70);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8), lVar12 != 0)) {
        local_90 = lVar12;
      }
    }
  }
  uVar9 = FUN_01b01f10(&local_a0);
  iVar8 = FUN_0277d6c4(&local_70);
  uVar7 = 0x13e;
  if (iVar8 != 0x2aa6) {
    uVar7 = uVar9;
  }
  if ((*(long **)(lVar19 + 0x3a8) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x3a8), puVar10 == (undefined8 *)0x0)) {
    uVar9 = (uint)*(ushort *)(*plVar20 + *plVar13 + 4);
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar9 = (uint)*(ushort *)(*plVar20 + *plVar13 + 4);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar19 + 0x3a8) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x3a8) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  puVar1 = PTR_DAT_04bb46d0;
  if ((((uVar6 ^ 0xffffffff) & 0xffff) != 0) &&
     ((iVar8 = FUN_017c1ba0(*(undefined8 *)PTR_DAT_04bb46d0,uVar6,1), (uVar9 >> 1 & 1) != 0 ||
      (iVar8 == 0)))) {
    *param_1 = 0;
  }
  if ((((uVar7 ^ 0xffffffff) & 0xffff) != 0) &&
     ((iVar8 = FUN_017c1ba0(*(undefined8 *)puVar1,uVar7,1), (uVar9 >> 1 & 1) != 0 || (iVar8 == 0))))
  {
    *param_2 = 0;
  }
  return;
}

