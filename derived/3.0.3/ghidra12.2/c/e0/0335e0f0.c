
void FUN_0335e0f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *local_90;
  undefined2 *puStack_88;
  undefined2 local_7c [2];
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar13 = 0;
  lVar6 = param_1 + 0x300;
  puVar1 = PTR_DAT_04bc8e78 + 0x10;
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  do {
    puStack_88 = local_7c;
    local_7c[0] = 0;
    uStack_68 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + lVar13) + 0x20) + 0x18);
    local_70 = &DAT_040c1e5f;
    local_90 = puVar1;
    local_78 = puVar2;
    local_78 = (undefined *)FUN_0328b6d0(&uStack_68,&local_78,0);
    FUN_032d67f0(&local_78,&local_90);
    lVar10 = *(long *)(lVar6 + lVar13);
    if (lVar10 != 0) {
      FUN_0328a0b0(lVar10,6,1,0);
      if (((*(ushort *)(lVar10 + 0x578) >> 5 & 1) == 0) ||
         ((*(ushort *)(lVar10 + 0x578) >> 4 & 1) == 0)) {
        uVar7 = *(ushort *)(lVar10 + 0x250) | 0x200;
      }
      else {
        uVar7 = *(ushort *)(lVar10 + 0x250) & 0xfdff;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
      *(ushort *)(lVar10 + 0x250) = uVar7;
      FUN_0328a2b0(lVar10,0);
      lVar10 = *(long *)(lVar10 + 0x428);
      if ((lVar10 != 0) && (plVar11 = (long *)(lVar10 + 8), *plVar11 != 0)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
        if (*(long *)(lVar12 + 0x18) == lVar10) {
          plVar5 = *(long **)(lVar12 + 0x138);
          *(undefined8 *)(lVar12 + 0x18) = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5,lVar10,0);
          }
          *(long *)(lVar12 + 0x48) = lVar12 + 0x28;
          *(long *)(lVar12 + 0x50) = lVar12 + 0x28;
LAB_0335e2a4:
          *(undefined8 *)(lVar12 + 0x60) = 0;
        }
        else if (*(long *)(lVar12 + 0x60) == lVar10) goto LAB_0335e2a4;
        lVar3 = *(long *)(lVar10 + 0x10);
        lVar4 = *(long *)(lVar10 + 0x18);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *plVar11 = 0;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        if (*(long **)(lVar12 + 0x58) == plVar11) {
          *(long *)(lVar12 + 0x58) = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar4;
        }
      }
    }
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x98);
  *(undefined4 *)(param_1 + 0x176c) = 0;
  FUN_032883c0(*(undefined8 *)(param_1 + 0x398),0);
  lVar13 = *(long *)(param_1 + 0x398);
  FUN_0328a0b0(lVar13,6,1,0);
  if (((*(ushort *)(lVar13 + 0x578) >> 5 & 1) == 0) || ((*(ushort *)(lVar13 + 0x578) >> 4 & 1) == 0)
     ) {
    uVar7 = *(ushort *)(lVar13 + 0x250) | 0x200;
  }
  else {
    uVar7 = *(ushort *)(lVar13 + 0x250) & 0xfdff;
  }
  local_78._0_4_ = 9;
  *(ushort *)(lVar13 + 0x250) = uVar7;
  FUN_032883c0(*(undefined8 *)(param_1 + 0x3a0),0);
  lVar13 = *(long *)(param_1 + 0x3a0);
  FUN_0328a0b0(lVar13,6,1,0);
  if (((*(ushort *)(lVar13 + 0x578) >> 5 & 1) == 0) || ((*(ushort *)(lVar13 + 0x578) >> 4 & 1) == 0)
     ) {
    uVar7 = *(ushort *)(lVar13 + 0x250) | 0x200;
  }
  else {
    uVar7 = *(ushort *)(lVar13 + 0x250) & 0xfdff;
  }
  local_78._0_4_ = 9;
  *(ushort *)(lVar13 + 0x250) = uVar7;
  plVar11 = *(long **)(param_1 + 0xdf0);
  *(undefined2 *)(param_1 + 0x177c) = 0;
  *(undefined8 *)(param_1 + 0xdf8) = 0;
  *(undefined4 *)(param_1 + 0x1768) = 0;
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar13 = 0;
  bVar9 = 0;
  do {
    if (*(long *)(*(long *)(lVar6 + lVar13) + 0x428) ==
        *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18)) {
      lVar10 = *(long *)(*(long *)(lVar6 + lVar13) + 0x420);
      bVar8 = 0;
      if (lVar10 != 0) {
        local_78._0_4_ = 0;
        bVar8 = *(byte *)(lVar10 + 0x148) & 1;
      }
      bVar9 = bVar8 | bVar9;
    }
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x98);
  if (*(char *)(param_1 + 0x177f) != '\0') {
    bVar9 = 1;
    *(undefined1 *)(param_1 + 0x177f) = 0;
  }
  if (*(int *)(param_1 + 0x176c) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
    *(long *)(lVar6 + 0x48) = lVar6 + 0x28;
    *(long *)(lVar6 + 0x50) = lVar6 + 0x28;
    plVar11 = *(long **)(param_1 + 0xdf0);
  }
  lVar6 = plVar11[700];
  if (*(long *)(*(long *)(plVar11[0x72] + 0x18) + 0x18) != lVar6) {
    plVar11[0x2fa] = 0;
    lVar10 = *(long *)(plVar11[0x72] + 0x18);
    for (lVar13 = *(long *)(lVar10 + 0x58); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x10)) {
      local_78._0_4_ = 0;
      if ((*(byte *)(lVar13 + 0x58) & 1) != 0) {
        (**(code **)(*(long *)(lVar13 + -8) + 0x30))();
      }
    }
    FUN_03290a60(lVar10,lVar6,0,0);
    *(long *)(lVar10 + 0x48) = lVar10 + 0x28;
    *(long *)(lVar10 + 0x50) = lVar10 + 0x28;
    plVar11 = *(long **)(param_1 + 0xdf0);
  }
  if (bVar9 != 0) {
    lVar6 = plVar11[700];
    if (*(long *)(*(long *)(plVar11[0x72] + 0x18) + 0x18) == lVar6) goto LAB_0335e530;
    plVar11[0x2fa] = 0;
    lVar10 = *(long *)(plVar11[0x72] + 0x18);
    for (lVar13 = *(long *)(lVar10 + 0x58); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x10)) {
      local_78._0_4_ = 0;
      if ((*(byte *)(lVar13 + 0x58) & 1) != 0) {
        (**(code **)(*(long *)(lVar13 + -8) + 0x30))();
      }
    }
    FUN_03290a60(lVar10,lVar6,0,0);
    *(long *)(lVar10 + 0x48) = lVar10 + 0x28;
    *(long *)(lVar10 + 0x50) = lVar10 + 0x28;
    plVar11 = *(long **)(param_1 + 0xdf0);
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
LAB_0335e530:
  (**(code **)(*plVar11 + 0x18))();
  return;
}

