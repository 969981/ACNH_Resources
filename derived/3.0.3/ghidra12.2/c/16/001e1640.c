
undefined8 FUN_001e1640(long param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_190;
  undefined8 uStack_188;
  addrinfo *local_180;
  int local_178 [13];
  char acStack_144 [256];
  char acStack_44 [20];
  
  iVar1 = strcmp(param_2,"255.255.255.255");
  if (iVar1 == 0) {
LAB_001e1798:
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    return 1;
  }
  iVar1 = strcmp(param_2,"localhost");
  if (iVar1 == 0) {
    param_2 = "127.0.0.1";
    do {
      iVar1 = strcmp("127.0.0.1","255.255.255.255");
      if (iVar1 == 0) goto LAB_001e1798;
      iVar1 = strcmp("127.0.0.1","localhost");
    } while (iVar1 == 0);
  }
  FUN_0018c0e8(param_2,acStack_144,0x100);
  iVar1 = nn::socket::InetPton(2,acStack_144,local_178);
  if (iVar1 < 1) {
    local_178[0] = -1;
  }
  piVar2 = (int *)(param_1 + 0xc);
  *piVar2 = local_178[0];
  if ((local_178[0] == -1) && (DAT_04be22cd != '\0')) {
    local_180 = (addrinfo *)0x0;
    memset(local_178,0,0x30);
    local_178[1] = 2;
    iVar1 = nn::socket::GetAddrInfo(acStack_144,(char *)0x0,(addrinfo *)local_178,&local_180);
    if ((iVar1 != 0) || (local_180 == (addrinfo *)0x0)) {
      return 0;
    }
    *piVar2 = *(int *)(*(long *)(local_180 + 0x20) + 4);
    nn::socket::FreeAddrInfo(local_180);
    local_190 = 0;
    uStack_188 = 0;
    nn::socket::InetNtop(2,piVar2,acStack_44,0x14);
    FUN_0018c0b8(acStack_44,&local_190,0x10);
  }
  return 1;
}

