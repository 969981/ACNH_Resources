
void FUN_02cd2178(long *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  (**(code **)(*param_1 + 0x398))(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,param_2);
  lVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  if (((lVar2 != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(lVar2 + 0x3cc))) {
    if (param_2 < 10) {
      *(undefined4 *)((long)param_1 + (ulong)param_2 * 4 + 0x1c3ec) = 0xffffffff;
    }
    FUN_02bc30b0(param_1 + 0x387b,lVar2);
  }
  FUN_02cd0f3c(param_1,iVar1,1);
  (**(code **)(*param_1 + 0x400))(param_1,param_2);
  (**(code **)(*param_1 + 0x488))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x02cd2278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3a0))(param_1,param_2);
  return;
}

