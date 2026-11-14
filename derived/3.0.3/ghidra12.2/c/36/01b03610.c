
/* WARNING: Removing unreachable block (ram,0x01b03620) */
/* WARNING: Removing unreachable block (ram,0x01b03664) */
/* WARNING: Removing unreachable block (ram,0x01b03698) */
/* WARNING: Removing unreachable block (ram,0x01b036cc) */

undefined8 FUN_01b03610(int param_1)

{
  undefined8 uVar1;
  
  if (DAT_0532a75c == param_1) {
    uVar1 = 1;
  }
  else if (DAT_0532a760 == param_1) {
    uVar1 = 2;
  }
  else {
    if (DAT_0532a764 != param_1) {
      return 0;
    }
    uVar1 = 3;
  }
  return uVar1;
}

