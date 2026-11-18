
void FUN_0361097c(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_03611480(param_1);
  }
  if (*(char *)(param_1 + 0x4fa) < '\0') {
    *(ushort *)(param_1 + 0x46e) = 0x40 - ((ushort)param_2 & 0x3f);
    uVar2 = param_2 >> 6 & 3;
    *(char *)(param_1 + 0x47d) = (char)uVar2;
    uVar2 = 0x7ee18180 >> (ulong)(uVar2 << 3);
    *(char *)(param_1 + 0x47e) = (char)uVar2;
    uVar2 = (uVar2 & 0xff) >> (ulong)(*(byte *)(param_1 + 0x47c) & 0x1f) & 1;
    if (*(char *)(param_1 + 0x484) != '\0') {
      uVar2 = 0;
    }
  }
  else {
    if (2 < *(byte *)(param_1 + -0x102e)) {
      return;
    }
    *(ushort *)(param_1 + 0x46e) = 0x40 - ((ushort)param_2 & 0x3f);
    *(undefined2 *)(param_1 + 0x47d) = 0x8000;
    uVar2 = 0x80U >> (ulong)(*(byte *)(param_1 + 0x47c) & 0x1f) & 1;
    if (*(char *)(param_1 + 0x484) != '\0') {
      uVar2 = 0;
    }
  }
  *(char *)(param_1 + 0x47f) = (char)uVar2;
  uVar1 = (ushort)*(byte *)(param_1 + 0x451);
  if (((*(byte *)(param_1 + 0x451) != 0) && (uVar1 = 0x17f, *(char *)(param_1 + 0x450) != '\0')) &&
     (*(char *)(param_1 + 0x472) == '\0')) {
    uVar1 = 0x17f;
    if (uVar2 != 0) {
      uVar1 = *(short *)(param_1 + 0x482) + 0x17f;
    }
  }
  *(ushort *)(param_1 + 0x4fe) = uVar1;
  return;
}

