
void FUN_0134278c(long param_1,long param_2,int param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *local_a0;
  ushort local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  
  if (param_2 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar13 + 7) != -0x17df00c3) {
    return;
  }
  if (*(long *)(param_2 + 0x150) == 0) {
    return;
  }
  if (param_3 != DAT_05197b74) {
    return;
  }
  if (*(int *)(param_1 + 0x360) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x340) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = **(long **)(param_1 + 0x348);
  }
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
  uVar4 = *puVar7;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x60) + 0xf0))();
  uVar5 = *puVar7;
  local_a0 = PTR_DAT_04bb7648 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar14 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar14 == 0)) {
    puVar1 = (ushort *)(lVar12 + 0x2c);
    if ((*(ushort *)(lVar12 + 0x28) & 0x40) != 0) {
      puVar1 = (ushort *)(lVar12 + 0x2a);
    }
    local_98 = *puVar1;
  }
  else if ((*(long **)(lVar14 + 0x60) == (long *)0x0) ||
          (puVar13 = (undefined8 *)**(long **)(lVar14 + 0x60), puVar13 == (undefined8 *)0x0)) {
    local_98 = *(ushort *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
  }
  else {
    uVar8 = (**(code **)*puVar13)();
    local_98 = *(ushort *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x60) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x60) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
  }
  lVar12 = FUN_03775a30(&local_a0);
  if (lVar12 == 0) goto LAB_01342b30;
  lVar14 = *(long *)(lVar12 + 0x1b0);
  if (lVar14 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar12 + 0x1b0);
      uVar8 = uVar8 & 0xffffffff;
      if (lVar14 == 0) goto LAB_013429c8;
    }
    plVar9 = *(long **)(lVar14 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar12 + 400);
      local_70 = *(undefined **)(lVar12 + 0x198);
      local_68 = 0x2acc;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_013429c8:
  lVar14 = *(long *)(lVar12 + 0x198) + *(long *)(lVar12 + 400);
  *(char *)(lVar14 + 1) = (char)uVar4;
  *(char *)(lVar14 + 2) = (char)uVar5;
  if ((*(long *)(lVar12 + 0x1b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar12 + 0x1b0) + 0x20), plVar9 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar12 + 400);
    local_70 = *(undefined **)(lVar12 + 0x198);
    local_68 = 0x2acc;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  lVar14 = *(long *)(lVar12 + 400);
  lVar3 = *(long *)(lVar12 + 0x198);
  puVar10 = (undefined2 *)(**(code **)(*(long *)(lVar11 + 0x90) + 0xf0))();
  *(undefined2 *)(lVar3 + lVar14 + 4) = *puVar10;
  if ((*(long *)(lVar12 + 0x1b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar12 + 0x1b0) + 0x20), plVar9 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar12 + 400);
    local_70 = *(undefined **)(lVar12 + 0x198);
    local_68 = 0x2acc;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  lVar14 = *(long *)(lVar12 + 400);
  lVar3 = *(long *)(lVar12 + 0x198);
  puVar10 = (undefined2 *)(**(code **)(*(long *)(lVar11 + 0xc0) + 0xf0))();
  *(undefined2 *)(lVar3 + lVar14 + 6) = *puVar10;
  if ((*(long *)(lVar12 + 0x1b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar12 + 0x1b0) + 0x20), plVar9 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar12 + 400);
    local_70 = *(undefined **)(lVar12 + 0x198);
    local_68 = 0x2acc;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  lVar14 = *(long *)(lVar12 + 400);
  lVar3 = *(long *)(lVar12 + 0x198);
  puVar10 = (undefined2 *)(**(code **)(*(long *)(lVar11 + 0xf0) + 0xf0))((long *)(lVar11 + 0xf0));
  *(undefined2 *)(lVar3 + lVar14 + 8) = *puVar10;
  if ((*(long *)(lVar12 + 0x1b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar12 + 0x1b0) + 0x20), plVar9 != (long *)0x0)) {
    local_78 = *(undefined8 *)(lVar12 + 400);
    local_70 = *(undefined **)(lVar12 + 0x198);
    local_68 = 0x2acc;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  lVar11 = *(long *)(lVar12 + 0x198) + *(long *)(lVar12 + 400);
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(lVar11 + 0xc) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(lVar11 + 0x10) = uVar2;
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0x1b0) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x1b0) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
LAB_01342b30:
  local_58 = 0;
  local_68 = CONCAT44(uVar5,uVar4);
  local_60 = 0;
  local_98 = local_98 & 0xff00;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_94 = 0;
  local_80 = 0;
  local_a0 = PTR_DAT_04bc4608 + 0x10;
  local_78 = CONCAT44(local_78._4_4_,param_3);
  local_7c = 0;
  uStack_88 = 0;
  local_70 = local_90;
  FUN_02a8f958(&local_a0,&local_78);
  FUN_02a59250(param_2 + 0x148,&local_a0);
  return;
}

