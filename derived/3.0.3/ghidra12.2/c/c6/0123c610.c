
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0123c610(int param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_05150390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05150390), iVar1 != 0)) {
    _DAT_05150370 = 0x980000009a;
    DAT_05150378 = 0x990000009b;
    DAT_05150380 = 0x9600000097;
    DAT_05150388 = 0x9c00000094;
    __cxa_guard_release(&DAT_05150390);
  }
  if (param_1 == DAT_05150370) {
    lVar2 = 0;
  }
  else if (param_1 == _DAT_05150374) {
    lVar2 = 1;
  }
  else if (param_1 == (int)DAT_05150378) {
    lVar2 = 2;
  }
  else if (param_1 == DAT_05150378._4_4_) {
    lVar2 = 3;
  }
  else if (param_1 == (int)DAT_05150380) {
    lVar2 = 4;
  }
  else if (param_1 == DAT_05150380._4_4_) {
    lVar2 = 5;
  }
  else if (param_1 == (int)DAT_05150388) {
    lVar2 = 6;
  }
  else {
    lVar2 = 7;
    if (param_1 != DAT_05150388._4_4_) {
      lVar2 = 0;
    }
  }
  *param_2 = *(undefined4 *)((long)&DAT_04174896 + lVar2 * 6);
  *(undefined2 *)(param_2 + 1) = (&DAT_0417489a)[lVar2 * 3];
  return (&DAT_04057a60)[lVar2];
}

