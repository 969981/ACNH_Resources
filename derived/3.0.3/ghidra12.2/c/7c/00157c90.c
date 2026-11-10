
void FUN_00157c90(long *param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  undefined4 local_24;
  
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    return;
  }
  lVar6 = *param_1;
  memset(auStack_140,0,0x100);
  memset(auStack_240,0,0x100);
  if ((*(uint *)((long)param_1 + 0x41c) & 0x8000002) == 0) {
    memset(auStack_2c0,0,0x80);
    local_24 = 0x100;
    iVar1 = nnsocketGetPeerName(param_2,auStack_140,&local_24);
    if (iVar1 == 0) {
      local_24 = 0x100;
      memset(auStack_240,0,0x100);
      iVar1 = nnsocketGetSockName(param_2,auStack_240,&local_24);
      if (iVar1 == 0) {
        uVar7 = FUN_00157eb4(auStack_140,(void *)((long)param_1 + 0x1a2),param_1 + 0x3a);
        if ((uVar7 & 1) == 0) {
          puVar4 = (uint *)__errno_location();
          uVar7 = (ulong)*puVar4;
          uVar3 = FUN_0014df28(uVar7,auStack_2c0,0x80);
          pcVar5 = "ssrem inet_ntop() failed with errno %d: %s";
        }
        else {
          memcpy(param_1 + 0x11,(void *)((long)param_1 + 0x1a2),0x2e);
          uVar7 = FUN_00157eb4(auStack_240,param_1 + 0x3b,param_1 + 0x41);
          if ((uVar7 & 1) != 0) {
            lVar6 = *param_1;
            goto LAB_00157cf8;
          }
          puVar4 = (uint *)__errno_location();
          uVar7 = (ulong)*puVar4;
          uVar3 = FUN_0014df28(uVar7,auStack_2c0,0x80);
          pcVar5 = "ssloc inet_ntop() failed with errno %d: %s";
        }
      }
      else {
        uVar2 = nnsocketGetLastErrno();
        uVar7 = uVar2 & 0xffffffff;
        uVar3 = FUN_0014df28(uVar2,auStack_2c0,0x80);
        pcVar5 = "getsockname() failed with errno %d: %s";
      }
    }
    else {
      uVar2 = nnsocketGetLastErrno();
      uVar7 = uVar2 & 0xffffffff;
      uVar3 = FUN_0014df28(uVar2,auStack_2c0,0x80);
      pcVar5 = "getpeername() failed with errno %d: %s";
    }
    FUN_0014d5f8(lVar6,pcVar5,uVar7,uVar3);
  }
  else {
LAB_00157cf8:
    memcpy((void *)(lVar6 + 0x1668),(void *)((long)param_1 + 0x1a2),0x2e);
    memcpy((void *)(*param_1 + 0x16a0),param_1 + 0x3b,0x2e);
    *(undefined8 *)(*param_1 + 0x16d8) = *(undefined8 *)param_1[0x88];
    *(undefined4 *)(*param_1 + 0x16e0) = *(undefined4 *)(param_1[0x88] + 0x80);
    *(long *)(*param_1 + 0x1698) = param_1[0x3a];
    *(long *)(*param_1 + 0x16d0) = param_1[0x41];
  }
  return;
}

