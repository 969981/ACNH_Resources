
bool FUN_0291e3c8(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
    uVar4 = FUN_0251a5a0();
    if ((uVar4 & 1) == 0) {
      return false;
    }
    uVar4 = FUN_01391740(DAT_051a9970);
    if ((uVar4 & 1) == 0) {
      return false;
    }
  }
  lVar2 = DAT_0537d558;
  uVar4 = (**(code **)(**(long **)(DAT_05aec400 + 0x3d8) + 0x68))();
  if ((uVar4 & 1) != 0) {
    return false;
  }
  if ((1 < *(uint *)(lVar2 + 0x80)) && (*(char *)(*(long *)(lVar2 + 0x10) + 0x1f9) != '\0')) {
    return false;
  }
  uVar1 = *(uint *)(DAT_05aec9a0 + 0x32c);
  if (uVar1 != 0) {
    if (uVar1 == 0x120) {
      if (*(char *)(DAT_05aec9a0 + 0x335) == '\0') {
        return false;
      }
      if ((*(int *)(DAT_05aec868 + 0x32c) != 1) &&
         (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) == '\0')) {
        return false;
      }
      if (*(int *)(DAT_05aec9a0 + 0x344) != 0) {
        return false;
      }
    }
    else {
      if (uVar1 != 0x100) {
        return false;
      }
      if ((*(char *)(DAT_05aec9a0 + 0x335) == '\0') ||
         ((*(int *)(DAT_05aec868 + 0x32c) != 1 &&
          (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) == '\0')))) {
        if (*(char *)(DAT_05aec9a0 + 0x336) == '\0') {
          return false;
        }
        if (*(int *)(DAT_05aec868 + 0x32c) != 2) {
          return false;
        }
      }
    }
  }
  uVar1 = *(uint *)(DAT_05aec9a0 + 0x330) | uVar1;
  bVar3 = (uVar1 & 0x20) == 0;
  if ((uVar1 >> 5 & 1) == 0) {
    return bVar3;
  }
  if ((param_2 & 1) == 0) {
    return false;
  }
  return bVar3;
}

