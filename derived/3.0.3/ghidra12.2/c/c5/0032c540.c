
void FUN_0032c540(void)

{
  ulong uVar1;
  long lVar2;
  
  if (DAT_04c61bd8 != (long *)0x0) {
    if (0 < (int)DAT_04c61bf0) {
      uVar1 = DAT_04c61bf0 & 0xffffffff;
      lVar2 = 0;
      do {
        (**(code **)(*DAT_04c61bd8 + 0x18))(DAT_04c61bd8,*(undefined8 *)(DAT_04c61be8 + lVar2));
        *(undefined8 *)(DAT_04c61be8 + lVar2) = 0;
        lVar2 = lVar2 + 8;
      } while (uVar1 * 8 != lVar2);
    }
    DAT_04c61bf0 = 0;
  }
  return;
}

