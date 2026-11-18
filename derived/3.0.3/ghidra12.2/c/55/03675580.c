
void FUN_03675580(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_2c [4];
  uint local_28;
  uint local_24;
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_2c[0] = 4;
    (**(code **)(*param_1 + 0x20))(param_1,local_2c,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,4);
  }
  else if ((int)param_1[1] == 1) {
    uVar1 = *param_2;
    uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    local_28 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_28 = uVar1;
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_28);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_24,4);
    uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar1 = local_24;
    }
    *param_2 = uVar1;
  }
  return;
}

