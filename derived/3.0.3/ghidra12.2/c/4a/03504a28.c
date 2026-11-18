
void FUN_03504a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05766528 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05766528);
    if (iVar1 != 0) {
      DAT_05766520 = '\x01';
      __cxa_guard_release(&DAT_05766528);
    }
  }
  uVar2 = 5;
  if (DAT_05766520 == '\0') {
    uVar2 = 0;
  }
  uVar2 = FUN_0385ad38(param_2,param_3,uVar2,0);
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  return;
}

