
void FUN_004c87d0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),0x18,0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x20,8);
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)(int)uVar3 * 8) = puVar1;
  *(uint *)(param_1 + 0x28) = uVar3 + 1;
  uVar2 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined2 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = uVar2;
  puVar1[2] = 0x22222222;
  local_60 = *(long *)(param_1 + 0x18);
  local_50 = *(undefined8 *)(local_60 + 0x98);
  local_40 = *(undefined8 *)(local_60 + 0xa0);
  uStack_48 = *(undefined8 *)(local_60 + 0xa8);
  uStack_38 = *(undefined8 *)(local_60 + 0xb0);
  lStack_58 = local_60;
  FUN_004c88b0(&local_60,param_3,puVar1 + 2);
  return;
}

