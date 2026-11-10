
void FUN_001a4858(undefined **param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined **ppuVar13;
  bool bVar14;
  undefined **ppuVar15;
  undefined *local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined **local_40;
  undefined *puStack_38;
  
  FUN_0018b724(param_1,param_2 & 0xffffffff);
  local_50 = local_50 & 0xffffff00;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  puStack_38 = (undefined *)0x10;
  local_58 = puVar1;
  local_40 = (undefined **)&local_50;
  FUN_0018b070(&local_58,param_1[3] + (param_2 & 0xffffffff) + param_3,0xffffffffffffffff);
  if (&local_58 != param_1) {
    ppuVar15 = param_1 + 1;
    uVar2 = *(uint *)ppuVar15;
    uVar3 = *(undefined4 *)((long)param_1 + 0xc);
    *(uint *)ppuVar15 = local_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_4c;
    uVar12 = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(param_1 + 2) = local_48;
    uVar6 = *(undefined1 *)((long)param_1 + 0x12);
    *(undefined1 *)((long)param_1 + 0x12) = local_46;
    uVar7 = *(undefined1 *)((long)param_1 + 0x13);
    *(undefined1 *)((long)param_1 + 0x13) = local_45;
    uVar8 = *(undefined1 *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x14) = local_44;
    uVar9 = *(undefined1 *)((long)param_1 + 0x15);
    *(undefined1 *)((long)param_1 + 0x15) = local_43;
    uVar10 = *(undefined1 *)((long)param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x16) = local_42;
    uVar11 = *(undefined1 *)((long)param_1 + 0x17);
    *(undefined1 *)((long)param_1 + 0x17) = local_41;
    ppuVar4 = (undefined **)param_1[3];
    puVar5 = param_1[4];
    param_1[3] = (undefined *)local_40;
    param_1[4] = puStack_38;
    ppuVar13 = (undefined **)&local_50;
    if (ppuVar4 != ppuVar15) {
      ppuVar13 = ppuVar4;
    }
    bVar14 = local_40 == (undefined **)&local_50;
    local_50 = uVar2;
    uStack_4c = uVar3;
    local_48 = uVar12;
    local_46 = uVar6;
    local_45 = uVar7;
    local_44 = uVar8;
    local_43 = uVar9;
    local_42 = uVar10;
    local_41 = uVar11;
    local_40 = ppuVar13;
    puStack_38 = puVar5;
    if (bVar14) {
      param_1[3] = (undefined *)ppuVar15;
    }
  }
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  return;
}

