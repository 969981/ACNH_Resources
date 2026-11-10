
ulong FUN_0015905c(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar2 = (int)param_1;
  if (iVar2 != 0) {
    param_1 = param_1 & 0xffffffff;
    if (iVar2 < 0) {
      nnsocketSetLastErrno(0x16);
      param_1 = 0xffffffff;
    }
    else {
      auVar5 = FUN_00147178();
      puVar1 = PTR_DAT_04bcb6f0;
      do {
        iVar3 = nnsocketPoll(0,0,param_1);
        if ((iVar3 != -1) ||
           ((iVar4 = nnsocketGetLastErrno(), iVar4 != 0 &&
            ((iVar3 = -1, iVar4 != 4 || (*(int *)puVar1 != 0)))))) goto LAB_001590f8;
        auVar6 = FUN_00147178();
        iVar3 = FUN_001471a8(auVar6._0_8_,auVar6._8_8_,auVar5._0_8_,auVar5._8_8_);
        param_1 = (ulong)(uint)(iVar2 - iVar3);
      } while (iVar2 - iVar3 != 0 && iVar3 <= iVar2);
      iVar3 = 0;
LAB_001590f8:
      param_1 = (ulong)-(uint)(iVar3 != 0);
    }
  }
  return param_1;
}

