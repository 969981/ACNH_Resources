
void FUN_00693290(char *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 local_100 [128];
  
  nn::os::SdkMutexType::Lock();
  iVar2 = nn::util::SNPrintf(param_1,param_2,"https://%s.hac.%%.%s.srv.nintendo.net",param_3,
                             PTR_DAT_04c3fbc0);
  uVar3 = (ulong)iVar2;
  uVar1 = param_2 - uVar3;
  if (uVar3 <= param_2 && uVar1 != 0) {
    nn::os::SdkMutexType::Unlock();
    iVar2 = nn::util::VSNPrintf(param_1 + uVar3,uVar1,param_4,local_100 + 0x80);
    if ((ulong)(long)iVar2 < uVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}

