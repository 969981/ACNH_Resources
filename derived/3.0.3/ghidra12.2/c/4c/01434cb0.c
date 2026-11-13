
uint FUN_01434cb0(long *param_1,uint param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined4 uStack_38;
  byte local_34;
  
  uVar1 = (**(code **)(*param_1 + 0x198))();
  if (param_2 < uVar1) {
    if ((param_3 & 1) != 0) {
      lVar2 = param_1[0x5d];
      local_54 = *(undefined4 *)(lVar2 + 0x2d0);
      local_4c = DAT_04c487d4;
      local_4a = (undefined1)local_54;
      local_48 = (undefined2)*(undefined4 *)(lVar2 + 0x2c8);
      local_46 = (undefined2)*(undefined4 *)(lVar2 + 0x2cc);
      FUN_01476a50(&local_54);
      local_44 = local_54;
      uStack_40 = uStack_50;
      local_3c = param_2;
      uStack_38 = param_4;
      local_34 = (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
      local_34 = local_34 & 1;
      uVar1 = FUN_0150b318(&local_4c);
      goto LAB_01434db0;
    }
    uVar3 = (**(code **)(*param_1 + 0x1b0))(param_1);
    if (((uVar3 & 1) == 0) || (*(uint *)(param_1 + 0x50) != param_2)) {
      FUN_03ebb160(param_1 + 0x4f,param_2);
      (**(code **)(*param_1 + 0x218))(param_1,param_2,param_4);
      uVar1 = 1;
      goto LAB_01434db0;
    }
  }
  uVar1 = 0;
LAB_01434db0:
  return uVar1 & 1;
}

