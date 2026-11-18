
void FUN_0349784c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1ce08);
  if (plVar1 != (long *)0x0) {
    if ((int)plVar1[0x15] == 5 || (int)plVar1[0x15] == 2) {
      FUN_03869260(param_1,plVar1);
      *(undefined1 *)((long)plVar1 + 0x165) = 1;
    }
    else if (*(uint *)(plVar1 + 0x15) < 7 &&
             (1 << (ulong)(*(uint *)(plVar1 + 0x15) & 0x1f) & 0x58U) != 0) {
      (**(code **)(*plVar1 + 0xa8))(plVar1);
    }
  }
  FUN_03d5c660(*(undefined8 *)(param_1 + 0x228),0);
  return;
}

