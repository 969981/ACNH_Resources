
void FUN_002bf0f4(void)

{
  long lVar1;
  
  if (DAT_04c611a0 != (undefined8 *)0x0) {
    FUN_002bf160();
    (**(code **)*DAT_04c611a0)();
    DAT_04c611a0 = (undefined8 *)0x0;
  }
  lVar1 = DAT_04c611a8;
  if (DAT_04c611a8 != 0) {
    FUN_00285e00(DAT_04c611a8);
    FUN_00285dc0(lVar1);
    DAT_04c611a8 = 0;
  }
  return;
}

