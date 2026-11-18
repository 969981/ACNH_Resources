
uint FUN_036583b4(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint local_38;
  uint local_34;
  
  uVar4 = FUN_04002180(param_2,3,2,&local_44);
  if ((uVar4 & 1) != 0) {
    FUN_0365850c(param_1,param_2);
    if (local_44 < 3) {
      local_40[0] = 0;
      (**(code **)(*param_2 + 0x28))(param_2,local_40);
    }
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_3c[0] = 4;
      (**(code **)(*param_2 + 0x20))(param_2,local_3c,1);
    }
    puVar1 = (uint *)(param_1 + 8);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = *puVar1;
      uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      local_38 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_38 = uVar2;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    }
    else {
      local_34 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
      uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar2 = local_34;
      }
      *puVar1 = uVar2;
    }
    FUN_03652360(param_2,param_1 + 0xc,param_1 + 0x1c);
  }
  return uVar4 & 1;
}

