
bool FUN_001e0240(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = nn::socket::Socket(2,2,0x11);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  else {
    if (param_2 == 1) {
      iVar1 = nn::socket::Socket(2,1,6);
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 != -1) goto LAB_001e02c0;
      iVar1 = -1;
      goto LAB_001e02a0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 != -1) {
LAB_001e02c0:
    uVar2 = nn::socket::Fcntl(iVar1,3,0);
    iVar3 = nn::socket::Fcntl(iVar1,4,(ulong)(uVar2 | 0x800));
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x10) = param_2;
      return iVar1 != -1;
    }
    *(int *)(param_1 + 0x10) = param_2;
    return iVar1 != -1;
  }
LAB_001e02a0:
  return iVar1 != -1;
}

