
void FUN_02640184(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04a882d0;
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    lVar2 = *(long *)(param_1[1] + 0x28);
    if (*(char *)(param_1 + 2) == '\0') {
      if (lVar2 == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(lVar2 + 0x18);
    }
    else {
      if (lVar2 == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(lVar2 + 8);
    }
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026401cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)();
      return;
    }
  }
  return;
}

