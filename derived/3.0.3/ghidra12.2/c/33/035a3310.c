
/* WARNING: Removing unreachable block (ram,0x035a3374) */

uint FUN_035a3310(void)

{
  undefined *puVar1;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  return *(uint *)(puVar1 + 4) & 1;
}

