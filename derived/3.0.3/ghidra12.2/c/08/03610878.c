
void FUN_03610878(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_03611480(param_1);
  }
  if (*(char *)(param_1 + 0x4fa) < '\0') {
    *(ushort *)(param_1 + 0x436) = 0x40 - ((ushort)param_2 & 0x3f);
    uVar2 = param_2 >> 6 & 3;
    *(char *)(param_1 + 0x445) = (char)uVar2;
    uVar2 = 0x7ee18180 >> (ulong)(uVar2 << 3);
    *(char *)(param_1 + 0x446) = (char)uVar2;
    uVar2 = (uVar2 & 0xff) >> (ulong)(*(byte *)(param_1 + 0x444) & 0x1f) & 1;
    if (*(char *)(param_1 + 0x44c) != '\0') {
      uVar2 = 0;
    }
  }
  else {
    if (2 < *(byte *)(param_1 + -0x102e)) {
      return;
    }
    *(ushort *)(param_1 + 0x436) = 0x40 - ((ushort)param_2 & 0x3f);
    *(undefined2 *)(param_1 + 0x445) = 0x8000;
    uVar2 = 0x80U >> (ulong)(*(byte *)(param_1 + 0x444) & 0x1f) & 1;
    if (*(char *)(param_1 + 0x44c) != '\0') {
      uVar2 = 0;
    }
  }
  *(char *)(param_1 + 0x447) = (char)uVar2;
  uVar1 = (ushort)*(byte *)(param_1 + 0x419);
  if (((*(byte *)(param_1 + 0x419) != 0) && (uVar1 = 0x17f, *(char *)(param_1 + 0x418) != '\0')) &&
     (*(char *)(param_1 + 0x43a) == '\0')) {
    uVar1 = 0x17f;
    if (uVar2 != 0) {
      uVar1 = *(short *)(param_1 + 0x44a) + 0x17f;
    }
  }
  *(ushort *)(param_1 + 0x4fc) = uVar1;
  return;
}

