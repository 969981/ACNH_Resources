
void FUN_0017b244(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298), lVar2 != 0)) {
    lVar1 = param_1 + (long)param_2 * 0x18 + 0x290;
    FUN_0017bdfc(lVar1);
    if (*(char *)(lVar2 + 0x108) == '\0') {
      FUN_0017be54(lVar1);
      return;
    }
  }
  return;
}

