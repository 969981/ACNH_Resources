
undefined8 * FUN_00290a8c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if (DAT_04c60f30 != (undefined8 *)0x0) {
    return DAT_04c60f30;
  }
  puVar1 = (undefined8 *)FUN_00285d10(0x90,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  FUN_00289f74(puVar1 + 1,param_1,3);
  puVar1[1] = PTR_DAT_04bcddc8 + 0x10;
  DAT_04c60f28 = puVar1 + 1;
  FUN_0029102c(puVar1);
  DAT_04c60f30 = puVar1;
  return puVar1;
}

