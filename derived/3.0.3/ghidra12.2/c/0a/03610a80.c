
void FUN_03610a80(long param_1,ushort param_2)

{
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_03611480(param_1);
  }
  if ((*(char *)(param_1 + 0x4fa) < '\0') || (*(byte *)(param_1 + -0x102e) < 3)) {
    *(ushort *)(param_1 + 0x4a6) = 0x100 - (param_2 & 0xff);
  }
  return;
}

