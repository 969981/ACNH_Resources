
void FUN_02b9d5dc(undefined8 param_1,long *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  uVar2 = FUN_02b98db0();
  if (*param_3 == 2) {
    local_3d = 0;
    local_80 = 0x40;
    local_7c[0] = 0;
    local_88 = local_7c;
    local_90 = PTR_DAT_04bb2bc0 + 0x10;
    uVar1 = *(undefined4 *)(*(long *)PTR_DAT_04bb3448 + 8);
    local_38 = PTR_DAT_04bb4ba0 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    local_30 = FUN_007de4b0(PTR_DAT_04bb4b98,&local_24);
    uVar3 = FUN_007dabc0(&local_38,&local_90,uVar1,2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(local_90 + 0x10))(&local_90,param_2);
    }
    (**(code **)(local_90 + 0x18))(&local_90);
    FUN_038d1270(param_2,&DAT_0409e973,local_88);
  }
  else if (*param_3 == 4) {
    FUN_02b9ceb0(uVar2,param_2);
    return;
  }
  return;
}

