
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0044eea0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined **local_a0 [3];
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  long local_58;
  long lStack_50;
  ulong local_48;
  
  uVar4 = FUN_00428700(param_1[1],param_2[1]);
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_004274f0(param_2[1]);
    if ((uVar2 >> 3 & 1) == 0) {
      lVar8 = *param_1;
      lVar1 = param_1[1];
      uVar7 = *param_2;
      puVar5 = (undefined8 *)FUN_00426e90(lVar1,0x80);
      if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
        (*(code *)*puVar5)(lVar8,uVar7,lVar1,1);
        return 0;
      }
    }
    local_58 = *param_1;
    lStack_50 = param_1[1];
    local_48 = param_1[2];
    if ((local_48 & 1) != 0) {
      FUN_0043dd30(local_48 & 0xfffffffffffffffe);
    }
    local_70 = *param_2;
    uStack_68 = param_2[1];
    uVar4 = param_2[2];
    local_60 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
    }
    FUN_00459780(local_a0);
    local_a0[0] = &PTR_LAB_048618b0;
    local_88 = local_70;
    local_80 = uStack_68;
    local_78 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
    }
    FUN_00459260(&local_58,&local_70,local_a0);
    lVar8 = local_58;
    local_a0[0] = &PTR_LAB_048618b0;
    if ((local_78 & 1) == 0) {
      FUN_0045a270(local_a0);
    }
    else {
      FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      FUN_0045a270(local_a0);
    }
    if ((local_60 & 1) != 0) {
      FUN_0043dd50(local_60 & 0xfffffffffffffffe);
    }
    if ((local_48 & 1) != 0) {
      FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    }
    if (lVar8 != 0) {
      return 0;
    }
  }
  lVar8 = *param_1;
  lVar1 = param_1[1];
  puVar5 = (undefined8 *)FUN_00426e90(lVar1,0x40);
  if ((puVar5 == (undefined8 *)0x0) || ((code *)*puVar5 == (code *)0x0)) {
    lVar8 = param_1[1];
    uVar2 = FUN_00428440(lVar8);
    if ((lVar8 == 0) || (3 < (uVar2 & 0x1f) - 2)) {
      lVar8 = param_1[1];
      uVar4 = FUN_00428440(lVar8);
      if (lVar8 == 0) {
        return 0x80040200;
      }
      if ((uVar4 & 0x1f) != 6) {
        return 0x80040200;
      }
    }
    lVar8 = *param_1;
    lVar1 = param_1[1];
    plVar6 = (long *)FUN_00426e90(lVar1,0x400000);
    if ((plVar6 == (long *)0x0) || (pcVar9 = (code *)*plVar6, pcVar9 == (code *)0x0)) {
      plVar6 = (long *)FUN_00426e90(lVar1,0x40);
      if (plVar6 == (long *)0x0) {
        return 0x80040200;
      }
      pcVar9 = (code *)*plVar6;
      if (pcVar9 == (code *)0x0) {
        return 0x80040200;
      }
    }
    uVar4 = FUN_00427110(lVar1,&DAT_04c14570);
    if ((uVar4 & 1) == 0) {
      (*pcVar9)(lVar8,lVar1,1);
      iVar3 = FUN_00441150(param_1,param_2);
    }
    else {
      FUN_00426fc0(lVar1);
      uVar7 = *(undefined8 *)(lVar8 + 8);
      (*pcVar9)(lVar8,lVar1,1);
      *(undefined8 *)(lVar8 + 8) = uVar7;
      iVar3 = FUN_00441150(param_1,param_2);
    }
  }
  else {
    (*(code *)*puVar5)(lVar8,lVar1,1);
    iVar3 = FUN_00441150(param_1,param_2);
  }
  if (-1 < iVar3) {
    return 0;
  }
  lVar8 = *param_1;
  lVar1 = param_1[1];
  puVar5 = (undefined8 *)FUN_00426e90(lVar1,0x100);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x80040200;
  }
  if ((code *)*puVar5 == (code *)0x0) {
    return 0x80040200;
  }
  (*(code *)*puVar5)(lVar8,lVar1,1);
  return 0x80040200;
}

