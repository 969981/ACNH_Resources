
void FUN_0025b6fc(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  uVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (uVar2 < uVar1) {
    local_44 = 0x10c07;
  }
  else {
    __src = (void *)(**(code **)(*param_3 + 0x10))(param_3);
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    memmove((void *)((long)__src + (uVar4 & 0xffffffff)),__src,uVar5 & 0xffffffff);
    (**(code **)(*param_2 + 0xb0))(param_2,__src);
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    (**(code **)(*param_3 + 0x20))(param_3,uVar3);
    local_44 = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

