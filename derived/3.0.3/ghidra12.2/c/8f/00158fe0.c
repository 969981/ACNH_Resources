
void FUN_00158fe0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [128];
  undefined4 local_4;
  
  uVar3 = *param_1;
  local_4 = 1;
  iVar1 = nnsocketSetSockOpt(param_2,0xffff,0x800,&local_4,4);
  if (iVar1 < 0) {
    memset(auStack_a0,0,0x80);
    uVar2 = nnsocketGetLastErrno();
    uVar2 = FUN_0014df28(uVar2,auStack_a0,0x80);
    FUN_0014d430(uVar3,"Could not set SO_NOSIGPIPE: %s\n",uVar2);
  }
  return;
}

