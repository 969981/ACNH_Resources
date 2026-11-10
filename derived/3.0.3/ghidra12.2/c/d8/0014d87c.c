
long FUN_0014d87c(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_c0 [128];
  
  lVar2 = nnsocketRecv(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600),param_3,param_4,0);
  *param_5 = 0;
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    if ((iVar1 == 0xb) || (iVar1 == 4)) {
      uVar4 = 0x51;
    }
    else {
      memset(auStack_c0,0,0x80);
      lVar5 = *param_1;
      uVar3 = FUN_0014df28(iVar1,auStack_c0,0x80);
      FUN_0014d5f8(lVar5,"Recv failure: %s",uVar3);
      *(int *)(*param_1 + 0x11e0) = iVar1;
      uVar4 = 0x38;
    }
    *param_5 = uVar4;
  }
  return lVar2;
}

