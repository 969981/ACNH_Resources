
undefined8
FUN_001e0520(long param_1,void *param_2,ulong param_3,undefined4 *param_4,ulong *param_5,
            uint param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint local_5c;
  int local_58 [2];
  sockaddr sStack_50;
  undefined1 local_4f;
  ushort local_4e;
  uint local_4c;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    return 4;
  }
  memset(&sStack_50,0,0x10);
  local_4f = 2;
  local_58[1] = 0x10;
  DAT_04c5e5d4 = DAT_04c5e5d4 + 1;
  uVar4 = nn::socket::RecvFrom
                    (*(int *)(param_1 + 0xc),param_2,param_3,(param_6 & 1) << 7,&sStack_50,
                     (uint *)(local_58 + 1));
  if (-1 < (long)uVar4) {
    if (uVar4 == 0) {
      local_5c = 4;
      nn::socket::GetSockOpt(*(int *)(param_1 + 0xc),0xffff,0x1007,local_58,&local_5c);
      if (local_58[0] == 100) {
        return 4;
      }
    }
    DAT_04c5e5d0 = DAT_04c5e5d0 + 1;
    if (param_4 != (undefined4 *)0x0) {
      uVar2 = nn::socket::InetNtohl(local_4c);
      *param_4 = uVar2;
      uVar1 = nn::socket::InetNtohs(local_4e);
      *(undefined2 *)(param_4 + 2) = uVar1;
    }
    if (param_5 == (ulong *)0x0) {
      return 0;
    }
    *param_5 = uVar4 & 0xffffffff;
    return 0;
  }
  iVar3 = nn::socket::GetLastErrno();
  if (iVar3 < 100) {
    if (iVar3 == 9) {
      return 4;
    }
    if (iVar3 == 0xb) {
      return 2;
    }
  }
  else {
    if (iVar3 == 100) {
      return 4;
    }
    if (iVar3 == 0x6c) {
      return 4;
    }
  }
  return 1;
}

