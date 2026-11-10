
/* WARNING: Type propagation algorithm not settling */

void FUN_002e1a00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
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
  FUN_00314428(*(undefined8 *)(param_2 + 0xd8));
  lVar10 = *(long *)(param_2 + 0xd8);
  uVar3 = FUN_002a4678(param_3);
  *(undefined2 *)(lVar10 + 0x22) = uVar3;
  lVar10 = *(long *)(param_2 + 0xd8);
  uVar3 = FUN_002a4670(param_3);
  *(undefined2 *)(lVar10 + 0x20) = uVar3;
  lVar10 = FUN_002eb32c(param_3);
  if (*(char *)(lVar10 + 0xf) == '\0') {
    lVar10 = *(long *)(param_2 + 0xd8);
    FUN_0018652c(&local_a0,*(undefined8 *)PTR_DAT_04bc13b8);
    FUN_001865b0(lVar10 + 0xc0,&local_a0);
    lVar10 = FUN_002eb334(param_3);
    if (*(char *)(lVar10 + 0xf) == '\0') goto LAB_002e1aa4;
LAB_002e1afc:
    FUN_00186538(&local_60,*(undefined2 *)(lVar10 + 8),*(undefined1 *)(lVar10 + 10),
                 *(undefined1 *)(lVar10 + 0xb),*(undefined1 *)(lVar10 + 0xc),
                 *(undefined1 *)(lVar10 + 0xd),*(undefined1 *)(lVar10 + 0xe));
    uVar6 = FUN_00186b68(&local_60);
    if ((uVar6 & 1) == 0) {
LAB_002e1cd0:
      local_44 = 0;
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x10c07);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_a0 + 4),(Result *)&local_44);
      FUN_002296c4(param_1,&local_a0);
      return;
    }
    lVar10 = *(long *)(param_2 + 0xd8);
    ppuVar8 = &local_60;
  }
  else {
    FUN_00186538(&local_60,*(undefined2 *)(lVar10 + 8),*(undefined1 *)(lVar10 + 10),
                 *(undefined1 *)(lVar10 + 0xb),*(undefined1 *)(lVar10 + 0xc),
                 *(undefined1 *)(lVar10 + 0xd),*(undefined1 *)(lVar10 + 0xe));
    uVar6 = FUN_00186b68(&local_60);
    if ((uVar6 & 1) == 0) goto LAB_002e1cd0;
    FUN_001865b0(*(long *)(param_2 + 0xd8) + 0xc0,&local_60);
    lVar10 = FUN_002eb334(param_3);
    if (*(char *)(lVar10 + 0xf) != '\0') goto LAB_002e1afc;
LAB_002e1aa4:
    lVar10 = *(long *)(param_2 + 0xd8);
    FUN_0018652c(&local_a0,*(undefined8 *)PTR_DAT_04bc13b8);
  }
  FUN_001865b0(lVar10 + 200,ppuVar8);
  local_50 = 0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  FUN_002eb380(param_3,&local_60);
  puVar2 = local_58;
  puVar1 = local_60;
  local_68 = (undefined1 *)0x0;
  lVar10 = *(long *)(param_2 + 0xd8);
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  uVar6 = (long)local_58 - (long)local_60;
  if (uVar6 == 0) {
    if ((undefined1 **)(lVar10 + 0xa8) == &local_78) goto LAB_002e1c04;
  }
  else {
    if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(&local_78);
    }
    local_78 = (undefined1 *)FUN_00187df4(uVar6);
    local_68 = local_78 + uVar6;
    local_70 = local_78;
    puVar12 = puVar1;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_70 = *puVar12;
      local_70 = local_70 + 1;
      puVar12 = puVar12 + 1;
    }
    if ((undefined1 *)0x2 < puVar2 + ~(ulong)puVar1) {
      do {
        *local_70 = *puVar12;
        local_70[1] = puVar12[1];
        local_70[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        local_70[3] = *puVar1;
        local_70 = local_70 + 4;
      } while (puVar12 != puVar2);
    }
    if ((undefined1 **)(lVar10 + 0xa8) == &local_78) goto LAB_002e1c04;
  }
  FUN_001a2ac0();
LAB_002e1c04:
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    FUN_00187e4c(local_78);
  }
  uVar6 = FUN_002eb358(param_3,0);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002eb358(param_3,1);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,0);
    FUN_003144cc(uVar11,0,uVar5);
    uVar6 = FUN_002eb358(param_3,1);
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002eb358(param_3,2);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,1);
    FUN_003144cc(uVar11,1,uVar5);
    uVar6 = FUN_002eb358(param_3,2);
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002eb358(param_3,3);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,2);
    FUN_003144cc(uVar11,2,uVar5);
    uVar6 = FUN_002eb358(param_3,3);
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002eb358(param_3,4);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,3);
    FUN_003144cc(uVar11,3,uVar5);
    uVar6 = FUN_002eb358(param_3,4);
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002eb358(param_3,5);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,4);
    FUN_003144cc(uVar11,4,uVar5);
    uVar6 = FUN_002eb358(param_3,5);
  }
  if ((uVar6 & 1) == 0) {
    FUN_002eb370(param_3);
    iVar4 = FUN_00227d94();
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = FUN_002eb33c(param_3,5);
    FUN_003144cc(uVar11,5,uVar5);
    FUN_002eb370(param_3);
    iVar4 = FUN_00227d94();
    uVar11 = *(undefined8 *)(param_2 + 0xd8);
  }
  if (iVar4 == 2) {
    FUN_002eb370(param_3);
    uVar7 = FUN_00227acc();
    local_98[0] = 0;
    puVar9 = PTR_DAT_04bc0ec8 + 0x10;
    local_88 = local_98;
    uStack_80 = 0x10;
    local_a0 = puVar9;
    FUN_0018b1d0(&local_a0,uVar7,0xffffffffffffffff);
  }
  else {
    FUN_002eb370(param_3);
    uVar7 = FUN_00227acc();
    local_98[0] = 0;
    puVar9 = PTR_DAT_04bc0ec8 + 0x10;
    local_88 = local_98;
    uStack_80 = 0x10;
    local_a0 = puVar9;
    FUN_0018b070(&local_a0,uVar7,0xffffffffffffffff);
  }
  FUN_0031a4bc(uVar11,&local_a0);
  local_a0 = puVar9;
  FUN_0018b1a0(&local_a0);
  FUN_002eb378(param_3);
  iVar4 = FUN_00227cb0();
  if (iVar4 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_002eb378(param_3);
    iVar4 = FUN_00227d94();
    lVar10 = *(long *)(param_2 + 0xd8);
    if (iVar4 == 2) {
      FUN_002eb378(param_3);
      uVar11 = FUN_00227acc();
      local_98[0] = 0;
      puVar9 = PTR_DAT_04bc0ec8 + 0x10;
      local_88 = local_98;
      uStack_80 = 0x10;
      local_a0 = puVar9;
      FUN_0018b1d0(&local_a0,uVar11,0xffffffffffffffff);
    }
    else {
      FUN_002eb378(param_3);
      uVar11 = FUN_00227acc();
      local_98[0] = 0;
      puVar9 = PTR_DAT_04bc0ec8 + 0x10;
      local_88 = local_98;
      uStack_80 = 0x10;
      local_a0 = puVar9;
      FUN_0018b070(&local_a0,uVar11,0xffffffffffffffff);
    }
    FUN_00189504(lVar10 + 0x68,&local_a0);
    local_a0 = puVar9;
    FUN_0018b1a0(&local_a0);
    uVar11 = 1;
  }
  FUN_003144bc(*(undefined8 *)(param_2 + 0xd8),uVar11);
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

