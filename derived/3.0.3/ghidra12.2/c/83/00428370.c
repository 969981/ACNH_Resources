
ulong FUN_00428370(ulong *param_1)

{
  ulong uVar1;
  
  do {
    uVar1 = *param_1;
    if (((uint)uVar1 >> 2 & 1) != 0) {
      return param_1[(uVar1 >> 1 & 1) + (uVar1 & 1) + 2];
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return 0;
}

