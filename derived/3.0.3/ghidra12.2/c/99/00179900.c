
undefined8 FUN_00179900(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00143300(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if ((FILE *)puVar1[2] != (FILE *)0x0) {
      fclose((FILE *)puVar1[2]);
    }
    puVar1[2] = 0;
  }
  return 0;
}

