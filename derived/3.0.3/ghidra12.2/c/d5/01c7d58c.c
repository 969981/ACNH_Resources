
bool FUN_01c7d58c(uint *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*DAT_053512e0;
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    plVar1 = plVar2 + 1 + (ulong)*param_1 * 0x2d;
    if (3 < *param_1) {
      plVar1 = plVar2 + 1;
    }
    if (((char)plVar1[0xb] != '\0' && (char)plVar1[0x26] != '\0') && (char)plVar1[0x28] != '\0') {
      return (char)*plVar1 == '\0';
    }
  }
  return false;
}

