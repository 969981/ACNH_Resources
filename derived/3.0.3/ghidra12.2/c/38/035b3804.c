
uint FUN_035b3804(char *param_1,long *param_2)

{
  uint uVar1;
  undefined1 auStack_18 [4];
  char local_14 [4];
  
  uVar1 = FUN_04002180(param_2,2,2,auStack_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 1);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 2);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 3);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 4);
    if ((int)param_2[1] == 0) {
      param_1[5] = param_1[4] != '\0' || param_1[3] != *param_1;
    }
    local_14[0] = param_1[6];
    (**(code **)(*param_2 + 0x28))(param_2,local_14);
    param_1[6] = local_14[0] != '\0';
  }
  return uVar1 & 1;
}

