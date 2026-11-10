
void FUN_0014b854(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf78);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0014b7c4(param_1,2,2);
  do {
    lVar1 = FUN_0014b8f4(param_1,*puVar2,*(undefined8 *)(param_1 + 0xf90),
                         *(ulong *)(param_1 + 0xf60) >> 5 & 1);
    if (lVar1 == 0) {
      FUN_0014d430(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
    }
    else {
      *(long *)(param_1 + 0xf90) = lVar1;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
  FUN_0014e11c(*(undefined8 *)(param_1 + 0xf78));
  *(undefined8 *)(param_1 + 0xf78) = 0;
  FUN_0014b80c(param_1,2);
  return;
}

