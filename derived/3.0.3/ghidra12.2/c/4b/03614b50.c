
void FUN_03614b50(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_28 = CONCAT71(local_28._1_7_,8);
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,8);
  }
  else if ((int)param_1[1] == 1) {
    uVar2 = *param_2;
    uVar1 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    local_28 = uVar1 >> 0x20 | uVar1 << 0x20;
    if ((int)param_1[2] != 0xff00) {
      local_28 = uVar2;
    }
    (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  }
  else {
    local_28 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28,8);
    uVar1 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
    if ((int)param_1[2] != 0xff00) {
      uVar1 = local_28;
    }
    *param_2 = uVar1;
  }
  return;
}

