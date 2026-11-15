
/* WARNING: Removing unreachable block (ram,0x02115028) */

uint FUN_02114fa8(void)

{
  uint *puVar1;
  
  if ((*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) == 0) || (DAT_04c487d4 == -1)) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 >> 0x15 & 1;
}

