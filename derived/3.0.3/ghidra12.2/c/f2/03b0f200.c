
void FUN_03b0f200(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,byte *param_5)

{
  ulong uVar1;
  long *plVar2;
  long local_48;
  undefined8 local_40;
  int local_38;
  
  plVar2 = *(long **)(param_4 + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar1 = *(ulong *)(param_5 + 0x18);
    if (*(ulong *)(param_5 + 0x18) <= (ulong)(long)*(int *)(param_5 + 0x20)) {
      uVar1 = (long)*(int *)(param_5 + 0x20);
    }
    (**(code **)(*param_1 + 0xe8))(param_1,param_3,uVar1);
    if ((0 < *(int *)(param_5 + 0x20)) && (param_1[0x1b] != 0)) {
      (**(code **)(*param_1 + 0x158))
                (param_1,*(undefined8 *)(param_5 + 0x10),*(int *)(param_5 + 0x20),0,0xffffffff,0,0);
    }
  }
  else {
    local_38 = -1;
    local_48 = 0;
    local_40 = 0;
    if ((*param_5 >> 1 & 1) != 0) {
      local_38 = (int)*(undefined8 *)(param_5 + 0x18);
    }
    (**(code **)(*plVar2 + 0x10))
              (plVar2,&local_48,param_1[0x1c],*(undefined8 *)(param_4 + 0x20),param_1,
               *(undefined8 *)(param_5 + 8));
    if (local_48 == 0) {
      local_48 = *(long *)(param_5 + 0x10);
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(param_5 + 0x20));
      if (local_38 != -1) {
        local_40 = CONCAT44(local_38,*(undefined4 *)(param_5 + 0x20));
      }
    }
    (**(code **)(*param_1 + 0x138))(param_1,param_3,param_4,&local_48);
  }
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(param_4 + 0x20));
  return;
}

