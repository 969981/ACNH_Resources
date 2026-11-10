
void FUN_001a4710(undefined8 *param_1,undefined ***param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined ***pppuVar11;
  bool bVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined ***local_40;
  undefined **ppuStack_38;
  
  ppuVar14 = param_2[3];
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04a426b8;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_0018b070(param_1,(long)ppuVar14 + (param_3 & 0xffffffff) + param_4,0xffffffffffffffff);
  FUN_0018b724(&local_58,param_2,param_3 & 0xffffffff);
  if (&local_58 != param_2) {
    pppuVar13 = param_2 + 1;
    uVar1 = *(undefined4 *)pppuVar13;
    uVar2 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)pppuVar13 = local_50;
    *(undefined4 *)((long)param_2 + 0xc) = uStack_4c;
    uVar10 = *(undefined2 *)(param_2 + 2);
    pppuVar3 = (undefined ***)param_2[3];
    ppuVar14 = param_2[4];
    *(undefined2 *)(param_2 + 2) = local_48;
    uVar4 = *(undefined1 *)((long)param_2 + 0x12);
    *(undefined1 *)((long)param_2 + 0x12) = local_46;
    uVar5 = *(undefined1 *)((long)param_2 + 0x13);
    *(undefined1 *)((long)param_2 + 0x13) = local_45;
    uVar6 = *(undefined1 *)((long)param_2 + 0x14);
    *(undefined1 *)((long)param_2 + 0x14) = local_44;
    uVar7 = *(undefined1 *)((long)param_2 + 0x15);
    *(undefined1 *)((long)param_2 + 0x15) = local_43;
    uVar8 = *(undefined1 *)((long)param_2 + 0x16);
    *(undefined1 *)((long)param_2 + 0x16) = local_42;
    uVar9 = *(undefined1 *)((long)param_2 + 0x17);
    *(undefined1 *)((long)param_2 + 0x17) = local_41;
    param_2[3] = (undefined **)local_40;
    param_2[4] = ppuStack_38;
    pppuVar11 = (undefined ***)&local_50;
    if (pppuVar3 != pppuVar13) {
      pppuVar11 = pppuVar3;
    }
    bVar12 = local_40 == (undefined ***)&local_50;
    local_50 = uVar1;
    uStack_4c = uVar2;
    local_48 = uVar10;
    local_46 = uVar4;
    local_45 = uVar5;
    local_44 = uVar6;
    local_43 = uVar7;
    local_42 = uVar8;
    local_41 = uVar9;
    local_40 = pppuVar11;
    ppuStack_38 = ppuVar14;
    if (bVar12) {
      param_2[3] = (undefined **)pppuVar13;
    }
  }
  local_58 = &PTR_LAB_04a426b8;
  FUN_0018b1a0(&local_58);
  return;
}

