
undefined8 FUN_00314070(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0018b798(param_2);
  if (lVar1 == 0) {
    FUN_0018a58c(param_1 + 0x108,&DAT_0407ebb1);
  }
  else {
    lVar1 = FUN_0018b3b0(*(undefined8 *)(param_2 + 0x18));
    if (lVar1 == 0) {
      return 0;
    }
    FUN_00189504(param_1 + 0x108,param_2);
  }
  return 1;
}

