
void FUN_01b615d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_44 [4];
  undefined2 local_28 [2];
  undefined4 local_24;
  
  uVar1 = FUN_01b61690(local_28,local_44,param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)PTR_DAT_04bb49a0;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_24 = FUN_006bd550(param_1[1],0);
  uVar2 = FUN_01b5b4b0(uVar2,&local_24);
  FUN_01b60120(param_1,local_28[0],local_44[0],uVar2,param_3,0);
  return;
}

