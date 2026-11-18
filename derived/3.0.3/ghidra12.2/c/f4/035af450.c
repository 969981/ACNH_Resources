
undefined8 FUN_035af450(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  plVar1 = DAT_05a607f8;
  uVar2 = (ulong)DAT_05a607e8;
  if (0 < (int)DAT_05a607e8) {
    puVar3 = DAT_05a607f0;
    do {
      if (*(long *)*puVar3 == param_2) {
        return 0;
      }
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (DAT_05a607ec <= (int)DAT_05a607e8) {
    return 0;
  }
  if (DAT_05a607f8 != (long *)0x0) {
    DAT_05a607f8 = (long *)*DAT_05a607f8;
  }
  *plVar1 = param_2;
  if ((int)DAT_05a607e8 < DAT_05a607ec) {
    DAT_05a607f0[(int)DAT_05a607e8] = plVar1;
    DAT_05a607e8 = DAT_05a607e8 + 1;
  }
  return 1;
}

