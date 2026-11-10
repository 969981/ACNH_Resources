
void FUN_0033de30(undefined4 param_1,long param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x1d9) != '\0') {
    lVar1 = *(long *)(param_2 + (long)param_4 * 8 + 0x438);
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x1e0);
      FUN_0033db00(param_1,param_2,param_3,lVar1,param_5);
      lVar1 = lVar2;
    }
  }
  return;
}

