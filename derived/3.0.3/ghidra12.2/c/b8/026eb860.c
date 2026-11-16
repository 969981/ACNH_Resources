
int FUN_026eb860(void *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                int param_6)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  lVar1 = DAT_0556ca20;
  if ((param_1 == (void *)0x0) || (DAT_0556ca20 == 0)) {
    iVar2 = 7;
  }
  else {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x80);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    iVar2 = FUN_026cf750(DAT_0556ca20,param_2,0x300,param_5,0);
    if (iVar2 == 1) {
      iVar2 = FUN_026cf750(lVar1,param_1,param_3,param_4,param_6);
      if (iVar2 == 1) {
        FUN_028b7d30(auStack_50,2,param_2 + 0x100);
        FUN_028b7f90(auStack_60,2,param_2 + 0x100);
        nn::crypto::DecryptAes128CtrPartial
                  (param_1,(ulong)param_3,auStack_50,0x10,auStack_60,0x10,(long)param_6,param_1,
                   (ulong)param_3);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

