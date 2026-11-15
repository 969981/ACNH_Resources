
void FUN_021350d4(long param_1,int param_2)

{
  long lVar1;
  undefined *local_30;
  char *pcStack_28;
  
  if (((param_2 != 3) && (param_2 != 0x29)) &&
     (lVar1 = FUN_021c9770(*(undefined4 *)(param_1 + 0x3c),1), lVar1 != 0)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "FallPit";
    FUN_021c2600(lVar1,&local_30,0);
  }
  FUN_02133484(param_1,param_2);
  return;
}

