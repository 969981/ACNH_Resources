
void FUN_0143b2a0(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x544) == '\0') {
    iVar2 = 4;
  }
  else {
    uVar1 = FUN_0254ddc4(param_1 + 0x3ac);
    if ((uVar1 & 1) == 0) {
      return;
    }
    iVar2 = 3;
  }
  if ((iVar2 != 0) && (DAT_0556aa70 != 0)) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
  }
  if (*(int *)(param_1 + 0x368) != iVar2) {
    FUN_03ebb160(param_1 + 0x360);
  }
  return;
}

