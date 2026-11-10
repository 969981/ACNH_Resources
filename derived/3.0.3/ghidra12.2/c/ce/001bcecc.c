
void FUN_001bcecc(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcc5e8 + 0x10);
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    lVar2 = *(long *)(param_1[1] + 0x10);
    if (lVar2 != 0) {
      bVar1 = FUN_001baef0(lVar2 + 0xf0,*(undefined4 *)(param_1[1] + 8),0xf);
      *(byte *)((long)param_1 + 0x11) = (bVar1 ^ 0xff) & 1;
    }
    FUN_001a666c(param_1);
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  FUN_001e1868(param_1 + 4);
  return;
}

