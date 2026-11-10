
undefined8 FUN_001ef2d0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_18;
  int iStack_14;
  
  iStack_14 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  local_18 = iVar1;
  if ((iStack_14 != 0) &&
     (uVar2 = nn::socket::SetSockOpt(param_2,0xffff,0x1001,&iStack_14,4), (int)uVar2 != 0)) {
    return uVar2;
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = nn::socket::SetSockOpt(param_2,0xffff,0x1002,&local_18,4);
  return uVar2;
}

