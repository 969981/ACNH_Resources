
void FUN_002a95b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                 int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_70;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar3 = (int *)&local_70;
  local_50 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  uVar1 = (**(code **)(*param_5 + 0x48))(param_5);
  FUN_002a885c(&local_60,param_2,param_3,uVar1 & 1);
  FUN_00229780(&local_50,&local_60);
  if (local_50 == 0) {
    if (param_4 == 0) {
      local_60 = 0x10c07;
    }
    else {
      if (*(long *)(param_2 + 0x28) == 0) {
        *(long *)(param_2 + 0x28) = param_4;
        *(long **)(param_2 + 0x930) = param_5;
        local_70 = 0;
        FUN_002282f0(&local_70);
        FUN_0028d520(&local_60,local_70 & 0xffffffff);
        uVar2 = FUN_0028d5d8(&local_60);
        *(undefined8 *)(param_2 + 0x948) = uVar2;
        *(undefined4 *)(param_2 + 0x968) = 0;
        if (param_6 == 0) {
          local_70 = CONCAT44(local_70._4_4_,0x10c07);
        }
        else {
          *(int *)(param_2 + 0x938) = param_6;
          memset((void *)(param_2 + 0x944),0,4);
          local_70 = local_70 & 0xffffffff00000000;
        }
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)&local_34);
        goto LAB_002a96ec;
      }
      local_60 = 0x10c08;
    }
    local_70 = local_70 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
    piVar3 = &local_60;
  }
  else {
    piVar3 = &local_50;
  }
LAB_002a96ec:
  FUN_002296c4(param_1,piVar3);
  return;
}

