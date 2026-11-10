
void FUN_002e2120(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  Result *pRVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  ppuVar8 = (undefined1 **)&local_a0;
  uVar6 = FUN_0030c4e4(param_3);
  if ((uVar6 & 1) == 0) {
    local_60 = (undefined1 *)((ulong)local_60 & 0xffffffff00000000);
    pRVar9 = (Result *)&local_60;
    goto LAB_002e24ac;
  }
  FUN_00314428(*(undefined8 *)(param_2 + 0xd8));
  lVar11 = *(long *)(param_2 + 0xd8);
  uVar4 = FUN_0030c224(param_3);
  *(undefined4 *)(lVar11 + 0xc) = uVar4;
  lVar11 = *(long *)(param_2 + 0xd8);
  uVar3 = FUN_0030c234(param_3);
  *(undefined2 *)(lVar11 + 0x22) = uVar3;
  lVar11 = *(long *)(param_2 + 0xd8);
  uVar3 = FUN_0030c22c(param_3);
  *(undefined2 *)(lVar11 + 0x20) = uVar3;
  lVar11 = FUN_0030c4ec(param_3);
  if (*(char *)(lVar11 + 0xf) == '\0') {
    lVar11 = *(long *)(param_2 + 0xd8);
    FUN_0018652c(&local_a0,*(undefined8 *)PTR_DAT_04bc13b8);
    FUN_001865b0(lVar11 + 0xc0,&local_a0);
    lVar11 = FUN_0030c4f4(param_3);
    if (*(char *)(lVar11 + 0xf) == '\0') goto LAB_002e21e0;
LAB_002e2254:
    FUN_00186538(&local_60,*(undefined2 *)(lVar11 + 8),*(undefined1 *)(lVar11 + 10),
                 *(undefined1 *)(lVar11 + 0xb),*(undefined1 *)(lVar11 + 0xc),
                 *(undefined1 *)(lVar11 + 0xd),*(undefined1 *)(lVar11 + 0xe));
    uVar6 = FUN_00186b68(&local_60);
    if ((uVar6 & 1) == 0) goto LAB_002e2494;
    lVar11 = *(long *)(param_2 + 0xd8);
    ppuVar8 = &local_60;
  }
  else {
    FUN_00186538(&local_60,*(undefined2 *)(lVar11 + 8),*(undefined1 *)(lVar11 + 10),
                 *(undefined1 *)(lVar11 + 0xb),*(undefined1 *)(lVar11 + 0xc),
                 *(undefined1 *)(lVar11 + 0xd),*(undefined1 *)(lVar11 + 0xe));
    uVar6 = FUN_00186b68(&local_60);
    if ((uVar6 & 1) == 0) {
LAB_002e2494:
      local_44 = 0;
      pRVar9 = (Result *)&local_44;
LAB_002e24ac:
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x10c07);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_a0 + 4),pRVar9);
      FUN_002296c4(param_1,&local_a0);
      return;
    }
    FUN_001865b0(*(long *)(param_2 + 0xd8) + 0xc0,&local_60);
    lVar11 = FUN_0030c4f4(param_3);
    if (*(char *)(lVar11 + 0xf) != '\0') goto LAB_002e2254;
LAB_002e21e0:
    lVar11 = *(long *)(param_2 + 0xd8);
    FUN_0018652c(&local_a0,*(undefined8 *)PTR_DAT_04bc13b8);
  }
  FUN_001865b0(lVar11 + 200,ppuVar8);
  local_50 = 0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  FUN_0030c280(param_3,&local_60);
  puVar2 = local_58;
  puVar1 = local_60;
  local_68 = (undefined1 *)0x0;
  lVar11 = *(long *)(param_2 + 0xd8);
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  uVar6 = (long)local_58 - (long)local_60;
  if (uVar6 == 0) {
    if ((undefined1 **)(lVar11 + 0xa8) == &local_78) goto LAB_002e2364;
  }
  else {
    if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(&local_78);
    }
    local_78 = (undefined1 *)FUN_00187df4(uVar6);
    local_68 = local_78 + uVar6;
    local_70 = local_78;
    puVar13 = puVar1;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_70 = *puVar13;
      local_70 = local_70 + 1;
      puVar13 = puVar13 + 1;
    }
    if ((undefined1 *)0x2 < puVar2 + ~(ulong)puVar1) {
      do {
        *local_70 = *puVar13;
        local_70[1] = puVar13[1];
        local_70[2] = puVar13[2];
        puVar1 = puVar13 + 3;
        puVar13 = puVar13 + 4;
        local_70[3] = *puVar1;
        local_70 = local_70 + 4;
      } while (puVar13 != puVar2);
    }
    if ((undefined1 **)(lVar11 + 0xa8) == &local_78) goto LAB_002e2364;
  }
  FUN_001a2ac0();
LAB_002e2364:
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    FUN_00187e4c(local_78);
  }
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,0);
  FUN_003144cc(uVar12,0,uVar4);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,1);
  FUN_003144cc(uVar12,1,uVar4);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,2);
  FUN_003144cc(uVar12,2,uVar4);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,3);
  FUN_003144cc(uVar12,3,uVar4);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,4);
  FUN_003144cc(uVar12,4,uVar4);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = FUN_0030c23c(param_3,5);
  FUN_003144cc(uVar12,5,uVar4);
  FUN_0030c26c(param_3);
  iVar5 = FUN_00227d94();
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  if (iVar5 == 2) {
    FUN_0030c26c(param_3);
    uVar7 = FUN_00227acc();
    local_98[0] = 0;
    puVar10 = PTR_DAT_04bc0ec8 + 0x10;
    local_88 = local_98;
    uStack_80 = 0x10;
    local_a0 = puVar10;
    FUN_0018b1d0(&local_a0,uVar7,0xffffffffffffffff);
  }
  else {
    FUN_0030c26c(param_3);
    uVar7 = FUN_00227acc();
    local_98[0] = 0;
    puVar10 = PTR_DAT_04bc0ec8 + 0x10;
    local_88 = local_98;
    uStack_80 = 0x10;
    local_a0 = puVar10;
    FUN_0018b070(&local_a0,uVar7,0xffffffffffffffff);
  }
  FUN_0031a4bc(uVar12,&local_a0);
  local_a0 = puVar10;
  FUN_0018b1a0(&local_a0);
  uVar6 = FUN_0030c260(param_3);
  if ((uVar6 & 1) != 0) {
    FUN_003144bc(*(undefined8 *)(param_2 + 0xd8),1);
  }
  FUN_0030c258(param_3);
  iVar5 = FUN_00227cb0();
  if (iVar5 != 0) {
    FUN_0030c258(param_3);
    iVar5 = FUN_00227d94();
    lVar11 = *(long *)(param_2 + 0xd8);
    if (iVar5 == 2) {
      FUN_0030c258(param_3);
      uVar12 = FUN_00227acc();
      local_98[0] = 0;
      puVar10 = PTR_DAT_04bc0ec8 + 0x10;
      local_88 = local_98;
      uStack_80 = 0x10;
      local_a0 = puVar10;
      FUN_0018b1d0(&local_a0,uVar12,0xffffffffffffffff);
    }
    else {
      FUN_0030c258(param_3);
      uVar12 = FUN_00227acc();
      local_98[0] = 0;
      puVar10 = PTR_DAT_04bc0ec8 + 0x10;
      local_88 = local_98;
      uStack_80 = 0x10;
      local_a0 = puVar10;
      FUN_0018b070(&local_a0,uVar12,0xffffffffffffffff);
    }
    FUN_00189504(lVar11 + 0x68,&local_a0);
    local_a0 = puVar10;
    FUN_0018b1a0(&local_a0);
  }
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_a0 + 4),(Result *)&local_44);
  FUN_002296c4(param_1,&local_a0);
  if (local_60 == (undefined1 *)0x0) {
    return;
  }
  local_58 = local_60;
  FUN_00187e4c();
  return;
}

