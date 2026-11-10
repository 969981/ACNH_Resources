
void FUN_0029cef4(undefined8 param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  if ((*(long *)(param_2 + 0x30) == 0) || (uVar1 = FUN_002212e4(), (uVar1 & 1) == 0)) {
    if ((*(long *)(param_2 + 0x20) == 0) || (uVar1 = FUN_002212e4(), (uVar1 & 1) == 0)) {
      if (((*(long *)(param_2 + 0x38) != 0) && (uVar1 = FUN_002212e4(), (uVar1 & 1) != 0)) ||
         (*(int *)(param_2 + 0xd8) - 2U < 6)) goto LAB_0029cf90;
      if ((*(long *)(param_2 + 0x70) == 0) || (uVar1 = FUN_002212e4(), (uVar1 & 1) == 0)) {
        local_24 = 0;
        local_44 = 0x8c56;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
        FUN_002296c4(auStack_34,&local_44);
        FUN_0029c264(param_2,2,8,auStack_34);
        goto LAB_0029cf90;
      }
      plVar2 = *(long **)(param_2 + 0x70);
      pcVar3 = *(code **)(*plVar2 + 0xb8);
    }
    else {
      plVar2 = *(long **)(param_2 + 0x20);
      pcVar3 = *(code **)(*plVar2 + 0x48);
    }
  }
  else {
    plVar2 = *(long **)(param_2 + 0x30);
    pcVar3 = *(code **)(*plVar2 + 0x38);
  }
  (*pcVar3)(plVar2,param_3);
LAB_0029cf90:
  local_44 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

