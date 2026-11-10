
void FUN_002df7a0(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *local_d0 [5];
  undefined8 *local_a8 [2];
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 *local_68;
  
  if (param_3 == (long *)0x0) {
LAB_002e02b8:
    local_d0[0] = (undefined *)((ulong)local_d0[0] & 0xffffffff00000000);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)local_d0);
    goto LAB_002e06e8;
  }
  FUN_00313854(*(undefined8 *)(param_2 + 0x80));
  uVar8 = FUN_002bdaf0(param_3);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_002931dc(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002df808;
LAB_002df844:
    lVar12 = *(long *)(param_2 + 0x80);
    uVar3 = FUN_002931d4(param_3);
    *(undefined2 *)(lVar12 + 0x22) = uVar3;
    uVar8 = FUN_002931bc(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002df814;
LAB_002df860:
    uVar8 = FUN_002bdb3c(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002df830;
LAB_002df86c:
    iVar7 = FUN_002bdb2c(param_3);
    iVar5 = (uint)(iVar7 == 1) << 1;
    if (iVar7 == 0) {
      iVar5 = 1;
    }
    if (iVar5 == 2) {
      uVar6 = FUN_002bdb34(param_3);
      FUN_00313b58(*(undefined8 *)(param_2 + 0x80),2,(uVar6 ^ 1) & 1);
      uVar8 = FUN_002bde24(param_3);
      goto joined_r0x002df9a8;
    }
    if (iVar5 == 1) {
      uVar6 = FUN_002bdb34(param_3);
      goto LAB_002df8a0;
    }
    FUN_00313b58(*(undefined8 *)(param_2 + 0x80),0,0);
    uVar8 = FUN_002bde24(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002df8bc;
LAB_002df9cc:
    uVar8 = FUN_002bdbd0(param_3);
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0x80);
    uVar4 = FUN_002bdae8(param_3);
    FUN_00313b90(uVar14,uVar4);
    uVar8 = FUN_002931dc(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002df844;
LAB_002df808:
    uVar8 = FUN_002931bc(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002df860;
LAB_002df814:
    lVar12 = *(long *)(param_2 + 0x80);
    uVar3 = FUN_002931b4(param_3);
    *(undefined2 *)(lVar12 + 0x20) = uVar3;
    uVar8 = FUN_002bdb3c(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002df86c;
LAB_002df830:
    uVar6 = 0;
LAB_002df8a0:
    FUN_00313b58(*(undefined8 *)(param_2 + 0x80),1,uVar6 & 1);
    uVar8 = FUN_002bde24(param_3);
joined_r0x002df9a8:
    if ((uVar8 & 1) == 0) goto LAB_002df9cc;
LAB_002df8bc:
    FUN_002bde1c(param_3);
    iVar5 = FUN_00227d94();
    lVar12 = *(long *)(param_2 + 0x80);
    if (iVar5 == 2) {
      FUN_002bde1c(param_3);
      uVar14 = FUN_00227acc();
      local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
      puVar13 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = &local_90;
      uStack_78 = 0x10;
      local_98 = puVar13;
      FUN_0018b1d0(&local_98,uVar14,0xffffffffffffffff);
    }
    else {
      FUN_002bde1c(param_3);
      uVar14 = FUN_00227acc();
      local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
      puVar13 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = &local_90;
      uStack_78 = 0x10;
      local_98 = puVar13;
      FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
    }
    FUN_00189504(lVar12 + 0xf8,&local_98);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdbd0(param_3);
  }
  if ((uVar8 & 1) != 0) {
    FUN_002bdf20(param_3);
    iVar5 = FUN_00227cb0();
    if (iVar5 != 0) {
      FUN_002bdf20(param_3);
      iVar5 = FUN_00227d94();
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      if (iVar5 == 2) {
        FUN_002bdf20(param_3);
        uVar9 = FUN_00227acc();
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar13 = PTR_DAT_04bc0ec8 + 0x10;
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar13;
        FUN_0018b1d0(&local_98,uVar9,0xffffffffffffffff);
      }
      else {
        FUN_002bdf20(param_3);
        uVar9 = FUN_00227acc();
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar13 = PTR_DAT_04bc0ec8 + 0x10;
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar13;
        FUN_0018b070(&local_98,uVar9,0xffffffffffffffff);
      }
      uVar8 = FUN_00313bf4(uVar14,&local_98);
      local_98 = puVar13;
      FUN_0018b1a0(&local_98);
      if ((uVar8 & 1) == 0) goto LAB_002e02b8;
    }
  }
  FUN_00313bc4(*(undefined8 *)(param_2 + 0x80),0);
  uVar8 = FUN_002bdf4c(param_3);
  if ((uVar8 & 1) != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x80);
    uVar4 = FUN_002bdf44(param_3);
    FUN_00313bd8(uVar14,uVar4);
  }
  uVar8 = FUN_002be2d8(param_3);
  if ((uVar8 & 1) != 0) {
    lVar12 = *(long *)(param_2 + 0x80);
    uVar4 = FUN_002be2d0(param_3);
    *(undefined4 *)(lVar12 + 0x120) = uVar4;
  }
  lVar12 = *(long *)(param_2 + 0xb0);
  FUN_00202558(lVar12 + 0x10,*(undefined8 *)(lVar12 + 0x18));
  *(undefined8 **)(lVar12 + 0x10) = (undefined8 *)(lVar12 + 0x18);
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  uVar8 = FUN_002bdf60(param_3);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_002bdf88(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002dfbb8;
LAB_002dfce0:
    lVar12 = *(long *)(param_2 + 0xb0);
    uVar4 = FUN_002bdf80(param_3);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea30,0xffffffffffffffff);
    FUN_0018d8ac(local_d0,uVar4);
    local_a8[0] = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                          &local_68);
    FUN_0018d620(lVar12 + 0x48,local_d0);
    FUN_0018d854(local_d0);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdf74(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002dfbc4;
LAB_002dfd84:
    uVar8 = FUN_002bdf9c(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002dfc68;
LAB_002dfd90:
    lVar12 = *(long *)(param_2 + 0xb0);
    uVar6 = FUN_002bdf94(param_3);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea38,0xffffffffffffffff);
    FUN_0018d8d0(local_d0,uVar6 & 1);
    local_a8[0] = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                          &local_68);
    FUN_0018d620(lVar12 + 0x48,local_d0);
    FUN_0018d854(local_d0);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdfb0(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002dfc78;
LAB_002dfe38:
    uVar8 = FUN_002bdfc4(param_3);
  }
  else {
    lVar12 = *(long *)(param_2 + 0xb0);
    uVar4 = FUN_002bdf58(param_3);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea20,0xffffffffffffffff);
    FUN_0018d8ac(local_d0,uVar4);
    local_a8[0] = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                          &local_68);
    FUN_0018d620(lVar12 + 0x48,local_d0);
    FUN_0018d854(local_d0);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdf88(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002dfce0;
LAB_002dfbb8:
    uVar8 = FUN_002bdf74(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002dfd84;
LAB_002dfbc4:
    lVar12 = *(long *)(param_2 + 0xb0);
    uVar4 = FUN_002bdf6c(param_3);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea28,0xffffffffffffffff);
    FUN_0018d8ac(local_d0,uVar4);
    local_a8[0] = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                          &local_68);
    FUN_0018d620(lVar12 + 0x48,local_d0);
    FUN_0018d854(local_d0);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdf9c(param_3);
    if ((uVar8 & 1) != 0) goto LAB_002dfd90;
LAB_002dfc68:
    uVar8 = FUN_002bdfb0(param_3);
    if ((uVar8 & 1) == 0) goto LAB_002dfe38;
LAB_002dfc78:
    FUN_002bdfa8(param_3);
    iVar5 = FUN_00227d94();
    uVar14 = *(undefined8 *)(param_2 + 0xb0);
    if (iVar5 == 2) {
      FUN_002bdfa8(param_3);
      uVar9 = FUN_00227acc();
      local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
      puVar13 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = &local_90;
      uStack_78 = 0x10;
      local_98 = puVar13;
      FUN_0018b1d0(&local_98,uVar9,0xffffffffffffffff);
    }
    else {
      FUN_002bdfa8(param_3);
      uVar9 = FUN_00227acc();
      local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
      puVar13 = PTR_DAT_04bc0ec8 + 0x10;
      local_80 = &local_90;
      uStack_78 = 0x10;
      local_98 = puVar13;
      FUN_0018b070(&local_98,uVar9,0xffffffffffffffff);
    }
    FUN_003136a0(uVar14,&local_98);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    uVar8 = FUN_002bdfc4(param_3);
  }
  if ((uVar8 & 1) != 0) {
    uVar14 = FUN_002bdfbc(param_3);
    FUN_002bed30(uVar14,*(undefined8 *)(param_2 + 0x130));
    lVar12 = *(long *)(param_2 + 0xb0);
    FUN_001e18ec(local_d0,*(undefined8 *)(param_2 + 0x130));
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea40,0xffffffffffffffff);
    FUN_0018d8e0(local_a8,local_d0);
    local_68 = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                          &uStack_69);
    FUN_0018d620(lVar12 + 0x48,local_a8);
    FUN_0018d854(local_a8);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
    local_d0[0] = puVar13;
    FUN_0018b1a0(local_d0);
  }
  puVar1 = PTR_piecewise_construct_04bcbf80;
  iVar5 = 0;
  puVar13 = PTR_DAT_04bc0ec8 + 0x10;
  do {
    puVar10 = (undefined8 *)FUN_002be310(param_3,iVar5);
    lVar12 = FUN_002be2f8(param_3,iVar5);
    if ((lVar12 != 0) && (iVar7 = FUN_00227cb0(), iVar7 != 0)) {
      switch(*(undefined4 *)(puVar10 + 1)) {
      case 1:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        uStack_78 = 0x10;
        local_98 = puVar13;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d888(local_d0,*puVar10);
        puVar15 = puVar13;
        break;
      case 2:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar15 = PTR_DAT_04bc0ec8 + 0x10;
        uStack_78 = 0x10;
        local_98 = puVar15;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d878(local_d0,*puVar10);
        break;
      case 3:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar15 = PTR_DAT_04bc0ec8 + 0x10;
        uStack_78 = 0x10;
        local_98 = puVar15;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d8ac(local_d0,*(undefined4 *)puVar10);
        break;
      case 4:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar15 = PTR_DAT_04bc0ec8 + 0x10;
        uStack_78 = 0x10;
        local_98 = puVar15;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d898(local_d0,*(undefined4 *)puVar10);
        break;
      case 5:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar15 = PTR_DAT_04bc0ec8 + 0x10;
        uStack_78 = 0x10;
        local_98 = puVar15;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d8d0(local_d0,*(undefined1 *)puVar10);
        break;
      case 6:
        lVar16 = *(long *)(param_2 + 0xb0);
        uVar14 = FUN_00227acc(lVar12);
        local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
        puVar15 = PTR_DAT_04bc0ec8 + 0x10;
        uStack_78 = 0x10;
        local_98 = puVar15;
        local_80 = &local_90;
        FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
        FUN_0018d8c0(*puVar10,local_d0);
        break;
      default:
        goto switchD_002e0004_default;
      }
      local_a8[0] = &local_98;
      lVar12 = FUN_00203760(lVar16 + 0x10,&local_98,puVar1,local_a8,&local_68);
      FUN_0018d620(lVar12 + 0x48,local_d0);
      FUN_0018d854(local_d0);
      local_98 = puVar15;
      FUN_0018b1a0(&local_98);
    }
switchD_002e0004_default:
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  lVar12 = FUN_002be334(param_3,0);
  if ((lVar12 != 0) && (lVar12 = FUN_002be344(param_3,0), lVar12 != 0)) {
    lVar12 = *(long *)(param_2 + 0xb0);
    FUN_002be334(param_3,0);
    uVar14 = FUN_00227acc();
    local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
    puVar13 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = &local_90;
    uStack_78 = 0x10;
    local_98 = puVar13;
    FUN_0018b070(&local_98,uVar14,0xffffffffffffffff);
    FUN_002be344(param_3,0);
    uVar14 = FUN_00227acc();
    FUN_0018d9c0(local_d0,uVar14);
    local_a8[0] = &local_98;
    lVar12 = FUN_00203760(lVar12 + 0x10,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                          &local_68);
    FUN_0018d620(lVar12 + 0x48,local_d0);
    FUN_0018d854(local_d0);
    local_98 = puVar13;
    FUN_0018b1a0(&local_98);
  }
  uVar8 = FUN_002bdfd0(param_3);
  if ((uVar8 & 1) != 0) {
    FUN_00314f0c(*(long *)(param_2 + 0x80) + 200,*(undefined8 *)(param_2 + 0xb0));
  }
  if ((*(long **)PTR_DAT_04bcb8d8 == (long *)0x0) ||
     (uVar8 = (**(code **)(**(long **)PTR_DAT_04bcb8d8 + 0x58))(), (uVar8 & 1) == 0)) {
    bVar11 = false;
    uVar8 = (**(code **)(*param_3 + 0x38))(param_3);
  }
  else {
    uVar4 = FUN_002bdae8(param_3);
    puVar13 = PTR_DAT_04bccf00;
    *(undefined4 *)(PTR_DAT_04bccf00 + 0x94) = uVar4;
    uVar3 = FUN_002931d4(param_3);
    *(undefined2 *)(puVar13 + 0xb0) = uVar3;
    uVar2 = FUN_002be2c8(param_3);
    puVar13[0xb2] = uVar2;
    bVar11 = true;
    uVar8 = (**(code **)(*param_3 + 0x38))(param_3);
  }
  if ((uVar8 & 1) != 0) {
    local_88 = 0;
    local_98 = (undefined *)0x0;
    local_90 = (undefined *)0x0;
    FUN_002be050(param_3,&local_98);
    FUN_00313ba4(*(undefined8 *)(param_2 + 0x80),&local_98);
    if (local_98 != (undefined *)0x0) {
      local_90 = local_98;
      FUN_00187e4c();
    }
  }
  uVar8 = FUN_002bdbf8(param_3,0);
  if (bVar11) {
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_002bdbf8(param_3,1);
      if ((uVar8 & 1) == 0) goto LAB_002e0388;
LAB_002e0504:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,1);
      FUN_00313b98(uVar14,1,uVar4);
      uVar4 = FUN_002bdbdc(param_3,1);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0x9c) = uVar4;
      uVar8 = FUN_002bdbf8(param_3,2);
      if ((uVar8 & 1) != 0) goto LAB_002e0398;
LAB_002e054c:
      uVar8 = FUN_002bdbf8(param_3,3);
      if ((uVar8 & 1) == 0) goto LAB_002e03e0;
LAB_002e055c:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,3);
      FUN_00313b98(uVar14,3,uVar4);
      uVar4 = FUN_002bdbdc(param_3,3);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0xa4) = uVar4;
      uVar8 = FUN_002bdbf8(param_3,4);
      if ((uVar8 & 1) != 0) goto LAB_002e03f0;
LAB_002e05a4:
      uVar8 = FUN_002bdbf8(param_3,5);
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,0);
      FUN_00313b98(uVar14,0,uVar4);
      uVar4 = FUN_002bdbdc(param_3,0);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0x98) = uVar4;
      uVar8 = FUN_002bdbf8(param_3,1);
      if ((uVar8 & 1) != 0) goto LAB_002e0504;
LAB_002e0388:
      uVar8 = FUN_002bdbf8(param_3,2);
      if ((uVar8 & 1) == 0) goto LAB_002e054c;
LAB_002e0398:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,2);
      FUN_00313b98(uVar14,2,uVar4);
      uVar4 = FUN_002bdbdc(param_3,2);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0xa0) = uVar4;
      uVar8 = FUN_002bdbf8(param_3,3);
      if ((uVar8 & 1) != 0) goto LAB_002e055c;
LAB_002e03e0:
      uVar8 = FUN_002bdbf8(param_3,4);
      if ((uVar8 & 1) == 0) goto LAB_002e05a4;
LAB_002e03f0:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,4);
      FUN_00313b98(uVar14,4,uVar4);
      uVar4 = FUN_002bdbdc(param_3,4);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0xa8) = uVar4;
      uVar8 = FUN_002bdbf8(param_3,5);
    }
    if ((uVar8 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,5);
      FUN_00313b98(uVar14,5,uVar4);
      uVar4 = FUN_002bdbdc(param_3,5);
      *(undefined4 *)(PTR_DAT_04bccf00 + 0xac) = uVar4;
    }
  }
  else {
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_002bdbf8(param_3,1);
      if ((uVar8 & 1) == 0) goto LAB_002e0470;
LAB_002e0604:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,1);
      FUN_00313b98(uVar14,1,uVar4);
      uVar8 = FUN_002bdbf8(param_3,2);
      if ((uVar8 & 1) != 0) goto LAB_002e0480;
LAB_002e0634:
      uVar8 = FUN_002bdbf8(param_3,3);
      if ((uVar8 & 1) == 0) goto LAB_002e04b0;
LAB_002e0644:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,3);
      FUN_00313b98(uVar14,3,uVar4);
      uVar8 = FUN_002bdbf8(param_3,4);
      if ((uVar8 & 1) != 0) goto LAB_002e04c0;
LAB_002e0674:
      uVar8 = FUN_002bdbf8(param_3,5);
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,0);
      FUN_00313b98(uVar14,0,uVar4);
      uVar8 = FUN_002bdbf8(param_3,1);
      if ((uVar8 & 1) != 0) goto LAB_002e0604;
LAB_002e0470:
      uVar8 = FUN_002bdbf8(param_3,2);
      if ((uVar8 & 1) == 0) goto LAB_002e0634;
LAB_002e0480:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,2);
      FUN_00313b98(uVar14,2,uVar4);
      uVar8 = FUN_002bdbf8(param_3,3);
      if ((uVar8 & 1) != 0) goto LAB_002e0644;
LAB_002e04b0:
      uVar8 = FUN_002bdbf8(param_3,4);
      if ((uVar8 & 1) == 0) goto LAB_002e0674;
LAB_002e04c0:
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,4);
      FUN_00313b98(uVar14,4,uVar4);
      uVar8 = FUN_002bdbf8(param_3,5);
    }
    if ((uVar8 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      uVar4 = FUN_002bdbdc(param_3,5);
      FUN_00313b98(uVar14,5,uVar4);
    }
  }
  uVar6 = 0xa10;
  if ((param_4 & 1) == 0) {
    uVar6 = 0x800;
  }
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  local_d0[0] = (undefined *)((ulong)local_d0[0] & 0xffffffff00000000);
  *(uint *)(*(long *)(param_2 + 0x80) + 0x2c) = *(uint *)(*(long *)(param_2 + 0x80) + 0x2c) | uVar6;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)local_d0);
LAB_002e06e8:
  FUN_002296c4(param_1,&local_98);
  return;
}

