
bool FUN_0272f4a4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  lVar1 = DAT_0556ca20;
  if (DAT_0556ca20 != 0) {
    local_14 = 0;
    uVar2 = FUN_026d0950(DAT_0556ca20,&local_14,param_1 + 8);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = uVar2;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_14;
    }
  }
  return lVar1 != 0;
}

