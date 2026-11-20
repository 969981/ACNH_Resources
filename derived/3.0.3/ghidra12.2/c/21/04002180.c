
undefined8 FUN_04002180(long *param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_40;
  undefined1 local_3c [4];
  uint local_38;
  uint local_34;
  
  local_40 = param_2;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_3c[0] = 4;
    (**(code **)(*param_1 + 0x20))(param_1,local_3c,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_40,4);
    iVar1 = (int)param_1[1];
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_38 = param_2;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_38);
    iVar1 = (int)param_1[1];
    local_40 = param_2;
  }
  else {
    local_34 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_34,4);
    uVar2 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_40 = local_34;
    }
    iVar1 = (int)param_1[1];
  }
  if ((iVar1 != 0) || ((uVar3 = 0, local_40 <= param_2 && (param_3 <= local_40)))) {
    uVar3 = 1;
    *param_4 = local_40;
  }
  return uVar3;
}

