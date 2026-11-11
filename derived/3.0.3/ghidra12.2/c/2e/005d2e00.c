
void FUN_005d2e00(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
                 long param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  FUN_004385d0(&uStack_b0);
  uVar1 = *(uint *)(param_3 + 0x20);
  if (uVar1 == (*(uint *)(param_3 + 0x24) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_3 + 0x18,0x70);
    uVar1 = *(uint *)(param_3 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)(int)uVar1 * 0x70);
  *puVar3 = 0;
  FUN_00438630(puVar3 + 2,&uStack_b0);
  puVar3[8] = local_80;
  puVar3[9] = local_78;
  puVar3[0xc] = local_60;
  puVar3[0xd] = local_58;
  puVar3[10] = local_70;
  puVar3[0xb] = local_68;
  *(uint *)(param_3 + 0x20) = uVar1 + 1;
  FUN_004385e0(&uStack_b0);
  lVar2 = *(long *)(param_3 + 0x18) + (long)*(int *)(param_3 + 0x20) * 0x70;
  *(undefined8 *)(lVar2 + -0x70) = param_4;
  FUN_00438670(lVar2 + -0x60,param_5);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(lVar2 + -0x30) = uVar4;
  auVar5 = FUN_005d2f20(param_4,param_5);
  *(undefined1 (*) [16])(lVar2 + -0x20) = auVar5;
  *(undefined8 *)(lVar2 + -8) = uVar7;
  *(undefined8 *)(lVar2 + -0x10) = uVar6;
  FUN_004435a0(param_4);
  return;
}

