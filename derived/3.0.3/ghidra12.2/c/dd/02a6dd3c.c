
uint FUN_02a6dd3c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_14;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    uVar2 = FUN_02b673a0(&local_14,*param_3);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_2 + 8) = *param_3;
      *(undefined4 *)(param_2 + 0xc) = param_3[0xc];
      uVar1 = FUN_02b59470(local_14);
      *(undefined2 *)(param_2 + 0x10) = uVar1;
      uVar1 = FUN_02b59af0(local_14);
      *(undefined2 *)(param_2 + 0x12) = uVar1;
      uVar1 = FUN_02b59d10(local_14);
      *(undefined2 *)(param_2 + 0x14) = uVar1;
      FUN_02b5a1f0(&local_38,local_14);
      *(undefined4 *)(param_2 + 0x18) = local_38;
      *(undefined4 *)(param_2 + 0x1c) = uStack_34;
      FUN_02b5c660(&local_38,local_14);
      *(undefined1 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x20) = local_38;
      *(undefined4 *)(param_2 + 0x24) = uStack_34;
      *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    }
  }
  return uVar2 & 1;
}

