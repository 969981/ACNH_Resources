
bool FUN_001e0318(long param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  sockaddr sStack_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  sockaddr sStack_40;
  undefined1 local_3f;
  ushort local_3e;
  uint local_24;
  
  memset(&sStack_50,0,0x10);
  local_4f = 2;
  local_4e = nn::socket::InetHtons(*param_2);
  local_4c = 0;
  iVar2 = nn::socket::Bind(*(int *)(param_1 + 0xc),&sStack_50,0x10);
  if ((iVar2 == 0) && (*param_2 == 0)) {
    iVar3 = *(int *)(param_1 + 0xc);
    memset(&sStack_40,0,0x10);
    local_24 = 0x10;
    local_3f = 2;
    iVar3 = nn::socket::GetSockName(iVar3,&sStack_40,&local_24);
    if (iVar3 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = nn::socket::InetNtohs(local_3e);
    }
    *param_2 = uVar1;
  }
  return iVar2 == 0;
}

