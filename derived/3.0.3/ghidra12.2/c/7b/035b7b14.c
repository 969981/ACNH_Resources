
uint FUN_035b7b14(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  undefined1 auStack_18 [4];
  char local_14 [4];
  
  uVar3 = FUN_04002180(param_2,2,2,auStack_18);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 1));
    (**(code **)(*param_2 + 0x28))(param_2,&local_38);
    *(bool *)(param_1 + 1) = (char)local_38 != '\0';
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
    }
    puVar1 = (ulong *)(param_1 + 8);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar1;
      uVar3 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      local_38 = uVar3 >> 0x20 | uVar3 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_38 = uVar4;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    }
    else {
      local_38 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
      uVar3 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar3 = local_38;
      }
      *puVar1 = uVar3;
    }
    uVar2 = FUN_04002180(param_2,0,0,&local_38);
    if ((uVar2 & 1) != 0) {
      local_14[0] = *(char *)(param_1 + 0x12);
      (**(code **)(*param_2 + 0x28))(param_2,local_14);
      *(bool *)(param_1 + 0x12) = local_14[0] != '\0';
      local_14[0] = *(char *)(param_1 + 0x10);
      (**(code **)(*param_2 + 0x28))(param_2,local_14);
      *(bool *)(param_1 + 0x10) = local_14[0] != '\0';
      if ((int)param_2[1] == 0) {
        *(bool *)(param_1 + 0x11) = local_14[0] != '\0';
      }
    }
  }
  return uVar2 & 1;
}

