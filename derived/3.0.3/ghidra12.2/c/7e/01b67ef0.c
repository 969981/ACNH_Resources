
void FUN_01b67ef0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_4e [2];
  undefined1 local_4c [4];
  undefined2 local_48 [2];
  undefined4 local_44;
  
  uVar1 = FUN_01b639c0(local_48,local_4c,auStack_4e,param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_04bb49a0;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_44 = FUN_006bd550(param_1[1],0);
    uVar2 = FUN_01b5b4b0(uVar2,&local_44);
    FUN_01b67710(param_1,auStack_4e,local_48[0],local_4c[0],param_3,uVar2,param_4,0);
  }
  return;
}

