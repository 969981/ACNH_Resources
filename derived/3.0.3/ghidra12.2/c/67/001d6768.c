
void FUN_001d6768(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcc770 + 0x10);
  if (*(char *)((long)param_1 + 9) != '\0') {
    lVar2 = *(long *)(param_1[3] + 0xc0);
    if (lVar2 != 0) {
      bVar1 = FUN_001baef0(lVar2 + 0xf0,*(undefined4 *)(param_1[3] + 8),1);
      *(byte *)((long)param_1 + 9) = (bVar1 ^ 0xff) & 1;
    }
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    FUN_001dca74(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x28));
    FUN_001dcab8(lVar2 + 8,*(undefined8 *)(lVar2 + 0x10));
    FUN_00185ac4(lVar2);
  }
  if ((long *)param_1[3] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d67f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 8))();
  return;
}

