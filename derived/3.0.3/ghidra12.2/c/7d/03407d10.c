
bool FUN_03407d10(void)

{
  undefined *puVar1;
  
  if (DAT_04c487d4 == -1) {
    return false;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if (((*(uint *)(puVar1 + 4) & 1) == 0) || (DAT_0537d558 == 0)) {
    return false;
  }
  return *(int *)(DAT_0537d558 + 0x80) == 3;
}

