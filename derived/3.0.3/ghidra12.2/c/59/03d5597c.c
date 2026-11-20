
void FUN_03d5597c(size_t param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    malloc(param_1);
    return;
  }
  plVar2 = DAT_05af7d98;
  if (DAT_05af7d98 == (long *)0x0) {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar3 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03d559ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,8);
  return;
}

