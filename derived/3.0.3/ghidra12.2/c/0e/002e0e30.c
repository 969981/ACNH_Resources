
void FUN_002e0e30(undefined8 param_1,long param_2,long param_3,byte param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [4];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 *local_68;
  
  if (param_3 == 0) goto LAB_002e1204;
  FUN_002d5154(*(undefined8 *)(param_2 + 0xd0));
  uVar8 = FUN_0030d094(param_3);
  lVar20 = *(long *)(param_2 + 0xd0);
  uVar10 = uVar8 | 2;
  if ((param_4 & 1) == 0) {
    uVar10 = uVar8;
  }
  *(uint *)(lVar20 + 0x10) = uVar10;
  uVar7 = FUN_0030ca0c(param_3);
  *(undefined2 *)(lVar20 + 0xe2) = uVar7;
  lVar20 = *(long *)(param_2 + 0xd0);
  uVar7 = FUN_0030ca04(param_3);
  *(undefined2 *)(lVar20 + 0xe0) = uVar7;
  *(byte *)(*(long *)(param_2 + 0xd0) + 0x30) = param_4 & 1;
  iVar9 = FUN_0030ca14(param_3);
  iVar11 = (uint)(iVar9 == 1) << 1;
  if (iVar9 == 0) {
    iVar11 = 1;
  }
  if (iVar11 == 2) {
    uVar10 = FUN_0030ca1c(param_3);
    uVar10 = uVar10 ^ 1;
    uVar12 = 0x62;
    iVar11 = 2;
  }
  else if (iVar11 == 1) {
    uVar10 = FUN_0030ca1c(param_3);
    uVar12 = 0x5f;
    iVar11 = 1;
  }
  else {
    uVar10 = 0;
    uVar12 = 0x60;
  }
  lVar20 = *(long *)(param_2 + 0xd0);
  *(int *)(lVar20 + 0xe4) = iVar11;
  *(undefined4 *)(lVar20 + 0xe8) = uVar12;
  *(uint *)(lVar20 + 0xec) = uVar10 & 1;
  FUN_0030cc44(param_3);
  iVar11 = FUN_00227d94();
  lVar20 = *(long *)(param_2 + 0xd0);
  if (iVar11 == 2) {
    FUN_0030cc44(param_3);
    uVar13 = FUN_00227acc();
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b1d0(&local_98,uVar13,0xffffffffffffffff);
  }
  else {
    FUN_0030cc44(param_3);
    uVar13 = FUN_00227acc();
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
  }
  FUN_00189504(lVar20 + 0x88,&local_98);
  local_98 = puVar19;
  FUN_0018b1a0(&local_98);
  FUN_0030ccf0(param_3);
  iVar11 = FUN_00227d94();
  lVar20 = *(long *)(param_2 + 0xd0);
  if (iVar11 == 2) {
    FUN_0030ccf0(param_3);
    uVar13 = FUN_00227acc();
    puVar19 = PTR_DAT_04bc0ec8;
    local_90[0] = 0;
    local_98 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    FUN_0018b1d0(&local_98,uVar13,0xffffffffffffffff);
    lVar14 = FUN_0018b798(&local_98);
    if (lVar14 == 0) goto LAB_002e109c;
LAB_002e1034:
    uVar15 = FUN_00313c4c(&local_98);
    if ((uVar15 & 1) == 0) {
      local_98 = puVar19 + 0x10;
      FUN_0018b1a0(&local_98);
LAB_002e1204:
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,0x10c07);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)&local_c0);
      FUN_002296c4(param_1,&local_98);
      return;
    }
    FUN_00189504(lVar20 + 0xf0,&local_98);
  }
  else {
    FUN_0030ccf0(param_3);
    uVar13 = FUN_00227acc();
    puVar19 = PTR_DAT_04bc0ec8;
    local_90[0] = 0;
    local_98 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
    lVar14 = FUN_0018b798(&local_98);
    if (lVar14 != 0) goto LAB_002e1034;
LAB_002e109c:
    FUN_0018a58c(lVar20 + 0xf0,&DAT_0407ebb1);
  }
  local_98 = puVar19 + 0x10;
  FUN_0018b1a0(&local_98);
  lVar20 = *(long *)(param_2 + 0xd0);
  bVar6 = FUN_0030ccf8(param_3);
  if (bVar6 < 0x65) {
    *(byte *)(lVar20 + 0x50) = bVar6;
  }
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_0030ce30(param_3,&local_c0);
  if ((undefined8 *)(*(long *)(param_2 + 0xd0) + 0x38) != &local_c0) {
    FUN_001a2ac0();
  }
  local_d8 = FUN_0030cb84(param_3,0);
  local_d4 = FUN_0030cb84(param_3,1);
  local_d0 = FUN_0030cb84(param_3,2);
  local_cc = FUN_0030cb84(param_3,3);
  local_c8 = FUN_0030cb84(param_3,4);
  local_c4 = FUN_0030cb84(param_3,5);
  FUN_002e7bd0(*(long *)(param_2 + 0xd0) + 0x18,&local_d8,&local_c0,6);
  lVar20 = FUN_0030d4e8(param_3);
  if (*(char *)(lVar20 + 0xf) == '\0') {
    plVar18 = (long *)PTR_DAT_04bc13b8;
LAB_002e123c:
    lVar20 = *(long *)(param_2 + 0xd0);
    puVar17 = (undefined8 *)*plVar18;
  }
  else {
    lVar20 = FUN_0030d4e8(param_3);
    if (((ulong)*(ushort *)(lVar20 + 8) << 0x28 | (ulong)*(byte *)(lVar20 + 10) << 0x20 |
         (ulong)*(byte *)(lVar20 + 0xb) << 0x18 | (ulong)*(byte *)(lVar20 + 0xc) << 0x10 |
         (ulong)*(byte *)(lVar20 + 0xd) << 8 | (ulong)*(byte *)(lVar20 + 0xe)) == 0x270f0c1f173b3b)
    {
      plVar18 = (long *)PTR_DAT_04bcbe78;
      goto LAB_002e123c;
    }
    lVar20 = FUN_0030d4e8(param_3);
    uVar7 = *(undefined2 *)(lVar20 + 8);
    lVar20 = FUN_0030d4e8(param_3);
    uVar1 = *(undefined1 *)(lVar20 + 10);
    lVar20 = FUN_0030d4e8(param_3);
    uVar2 = *(undefined1 *)(lVar20 + 0xb);
    lVar20 = FUN_0030d4e8(param_3);
    uVar3 = *(undefined1 *)(lVar20 + 0xc);
    lVar20 = FUN_0030d4e8(param_3);
    uVar4 = *(undefined1 *)(lVar20 + 0xd);
    lVar20 = FUN_0030d4e8(param_3);
    FUN_00186538(&local_98,uVar7,uVar1,uVar2,uVar3,uVar4,*(undefined1 *)(lVar20 + 0xe));
    lVar20 = *(long *)(param_2 + 0xd0);
    puVar17 = &local_98;
  }
  FUN_001865b0(lVar20 + 0x80,puVar17);
  lVar20 = *(long *)(param_2 + 0xb0);
  FUN_00202558(lVar20 + 0x10,*(undefined8 *)(lVar20 + 0x18));
  *(undefined8 **)(lVar20 + 0x10) = (undefined8 *)(lVar20 + 0x18);
  *(undefined8 *)(lVar20 + 0x18) = 0;
  *(undefined8 *)(lVar20 + 0x20) = 0;
  uVar15 = FUN_0030cda8(param_3);
  if ((uVar15 & 1) == 0) goto LAB_002e16f0;
  uVar15 = FUN_0030cd24(param_3);
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_0030cd34(param_3);
    if ((uVar15 & 1) != 0) goto LAB_002e17e8;
LAB_002e12fc:
    uVar15 = FUN_0030cd44(param_3);
    if ((uVar15 & 1) != 0) goto LAB_002e188c;
LAB_002e1308:
    uVar15 = FUN_0030cd54(param_3);
    if ((uVar15 & 1) != 0) goto LAB_002e1930;
LAB_002e1314:
    uVar15 = FUN_0030cd5c(param_3);
  }
  else {
    lVar20 = *(long *)(param_2 + 0xb0);
    uVar12 = FUN_0030cd1c(param_3);
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea20,0xffffffffffffffff);
    FUN_0018d8ac(local_a8,uVar12);
    local_68 = &local_98;
    lVar20 = FUN_00203760(lVar20 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar20 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
    uVar15 = FUN_0030cd34(param_3);
    if ((uVar15 & 1) == 0) goto LAB_002e12fc;
LAB_002e17e8:
    lVar20 = *(long *)(param_2 + 0xb0);
    uVar12 = FUN_0030cd2c(param_3);
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea30,0xffffffffffffffff);
    FUN_0018d8ac(local_a8,uVar12);
    local_68 = &local_98;
    lVar20 = FUN_00203760(lVar20 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar20 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
    uVar15 = FUN_0030cd44(param_3);
    if ((uVar15 & 1) == 0) goto LAB_002e1308;
LAB_002e188c:
    lVar20 = *(long *)(param_2 + 0xb0);
    uVar12 = FUN_0030cd3c(param_3);
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea28,0xffffffffffffffff);
    FUN_0018d8ac(local_a8,uVar12);
    local_68 = &local_98;
    lVar20 = FUN_00203760(lVar20 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar20 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
    uVar15 = FUN_0030cd54(param_3);
    if ((uVar15 & 1) == 0) goto LAB_002e1314;
LAB_002e1930:
    FUN_0030cd4c(param_3);
    iVar11 = FUN_00227d94();
    uVar13 = *(undefined8 *)(param_2 + 0xb0);
    if (iVar11 == 2) {
      FUN_0030cd4c(param_3);
      uVar16 = FUN_00227acc();
      local_90[0] = 0;
      puVar19 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = local_90;
      uStack_78 = 0x10;
      local_98 = puVar19;
      FUN_0018b1d0(&local_98,uVar16,0xffffffffffffffff);
    }
    else {
      FUN_0030cd4c(param_3);
      uVar16 = FUN_00227acc();
      local_90[0] = 0;
      puVar19 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = local_90;
      uStack_78 = 0x10;
      local_98 = puVar19;
      FUN_0018b070(&local_98,uVar16,0xffffffffffffffff);
    }
    FUN_003136a0(uVar13,&local_98);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
    uVar15 = FUN_0030cd5c(param_3);
  }
  if ((uVar15 & 1) != 0) {
    lVar20 = *(long *)(param_2 + 0xb0);
    uVar10 = FUN_0030cd5c(param_3);
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea48,0xffffffffffffffff);
    FUN_0018d8d0(local_a8,uVar10 & 1);
    local_68 = &local_98;
    lVar20 = FUN_00203760(lVar20 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar20 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
  }
  puVar5 = PTR_piecewise_construct_04bcbf80;
  iVar11 = 0;
  puVar19 = PTR_DAT_04bc0ec8 + 0x10;
  do {
    puVar17 = (undefined8 *)FUN_0030cd7c(param_3,iVar11);
    lVar20 = FUN_0030cd64(param_3,iVar11);
    if ((lVar20 != 0) && (iVar9 = FUN_00227cb0(), iVar9 != 0)) {
      switch(*(undefined4 *)(puVar17 + 1)) {
      case 1:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        local_98 = puVar19;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d888(local_a8,*puVar17);
        puVar21 = puVar19;
        break;
      case 2:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        puVar21 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = puVar21;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d878(local_a8,*puVar17);
        break;
      case 3:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        puVar21 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = puVar21;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d8ac(local_a8,*(undefined4 *)puVar17);
        break;
      case 4:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        puVar21 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = puVar21;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d898(local_a8,*(undefined4 *)puVar17);
        break;
      case 5:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        puVar21 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = puVar21;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d8d0(local_a8,*(undefined1 *)puVar17);
        break;
      case 6:
        lVar14 = *(long *)(param_2 + 0xb0);
        uVar13 = FUN_00227acc(lVar20);
        local_90[0] = 0;
        uStack_78 = 0x10;
        puVar21 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = puVar21;
        local_80 = local_90;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        FUN_0018d8c0(*puVar17,local_a8);
        break;
      default:
        goto switchD_002e14c8_default;
      }
      local_68 = &local_98;
      lVar20 = FUN_00203760(lVar14 + 0x10,&local_98,puVar5,&local_68,&uStack_69);
      FUN_0018d620(lVar20 + 0x48,local_a8);
      FUN_0018d854(local_a8);
      local_98 = puVar21;
      FUN_0018b1a0(&local_98);
    }
switchD_002e14c8_default:
    iVar11 = iVar11 + 1;
  } while (iVar11 != 3);
  lVar20 = FUN_0030cd88(param_3,0);
  if ((lVar20 != 0) && (lVar20 = FUN_0030cd98(param_3,0), lVar20 != 0)) {
    lVar20 = *(long *)(param_2 + 0xb0);
    FUN_0030cd88(param_3,0);
    uVar13 = FUN_00227acc();
    local_90[0] = 0;
    puVar19 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar19;
    FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
    FUN_0030cd98(param_3,0);
    uVar13 = FUN_00227acc();
    FUN_0018d9c0(local_a8,uVar13);
    local_68 = &local_98;
    lVar20 = FUN_00203760(lVar20 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar20 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar19;
    FUN_0018b1a0(&local_98);
  }
  FUN_00314f0c(*(long *)(param_2 + 0xd0) + 0x58,*(undefined8 *)(param_2 + 0xb0));
LAB_002e16f0:
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  local_a8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)local_a8);
  FUN_002296c4(param_1,&local_98);
  if (local_c0 != 0) {
    local_b8 = local_c0;
    FUN_00187e4c();
  }
  return;
}

