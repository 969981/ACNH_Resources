
int FUN_03bca014(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((piVar1 == (int *)0x0) || (*piVar1 != 0x56415742)) ||
      (((char)(*(ushort *)(piVar1 + 1) >> 8) == -1 && ((*(ushort *)(piVar1 + 1) & 0xff) == 0xfe))))
     || ((*(short *)((long)piVar1 + 6) != 1 ||
         (*(ushort *)(piVar1 + 0x12) <= *(ushort *)((long)piVar1 + 0x4a))))) {
    return 0;
  }
  return piVar1[(ulong)*(ushort *)((long)piVar1 + 0x4a) * 3 + 0x14];
}

