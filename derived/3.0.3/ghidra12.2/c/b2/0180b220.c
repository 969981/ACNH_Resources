
/* WARNING: Removing unreachable block (ram,0x0180b294) */

uint FUN_0180b220(void)

{
  uint *puVar1;
  
  if ((DAT_05292338 == 0) || (DAT_04c487d4 == -1)) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 >> 7 & 1;
}

