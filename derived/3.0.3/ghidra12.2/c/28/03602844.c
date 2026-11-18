
uint FUN_03602844(char *param_1,long *param_2)

{
  uint uVar1;
  undefined1 auStack_38 [4];
  char local_34 [4];
  char local_18 [4];
  char local_14 [4];
  
  uVar1 = FUN_04002180(param_2,0,0,auStack_38);
  if ((uVar1 & 1) != 0) {
    local_34[0] = *param_1;
    (**(code **)(*param_2 + 0x28))(param_2,local_34);
    *param_1 = local_34[0] != '\0';
    local_18[0] = param_1[0x10];
    (**(code **)(*param_2 + 0x28))(param_2,local_18);
    param_1[0x10] = local_18[0] != '\0';
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x11);
    local_14[0] = param_1[0x12];
    (**(code **)(*param_2 + 0x28))(param_2,local_14);
    param_1[0x12] = local_14[0] != '\0';
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x13);
    FUN_03602950(param_2,param_1 + 0x14);
  }
  return uVar1 & 1;
}

