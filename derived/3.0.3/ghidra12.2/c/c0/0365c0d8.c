
void FUN_0365c0d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x206c) == 0) {
    *(undefined4 *)(param_1 + 0x206c) = *(undefined4 *)(param_1 + 0x2070);
    if ((*(char *)(param_1 + 0x2078) != '\0' && *(uint *)(param_1 + 0x2074) != 0) &&
       (uVar1 = *(uint *)(param_1 + 0x2084), 7 < uVar1)) {
      uVar2 = uVar1 >> (ulong)(*(uint *)(param_1 + 0x2074) & 0x1f);
      if (*(char *)(param_1 + 0x2079) == '\0') {
        uVar2 = uVar2 + uVar1;
        if (0x7ff < uVar2) goto LAB_0365c148;
      }
      else {
        uVar2 = ~uVar2 + uVar1 & 0x7ff;
      }
      *(uint *)(param_1 + 0x2084) = uVar2;
    }
  }
  else {
    *(int *)(param_1 + 0x206c) = *(int *)(param_1 + 0x206c) + -1;
  }
LAB_0365c148:
  if (*(char *)(param_1 + 0x207a) != '\0') {
    *(undefined1 *)(param_1 + 0x207a) = 0;
    *(undefined4 *)(param_1 + 0x206c) = *(undefined4 *)(param_1 + 0x2070);
  }
  if (*(int *)(param_1 + 0x20b8) == 0) {
    *(undefined4 *)(param_1 + 0x20b8) = *(undefined4 *)(param_1 + 0x20bc);
    if (((*(char *)(param_1 + 0x20c4) != '\0') && (*(uint *)(param_1 + 0x20c0) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x20d0), 7 < uVar1)) {
      uVar2 = uVar1 >> (ulong)(*(uint *)(param_1 + 0x20c0) & 0x1f);
      if (*(char *)(param_1 + 0x20c5) != '\0') {
        uVar2 = -uVar2;
      }
      if (uVar2 + uVar1 < 0x800) {
        *(uint *)(param_1 + 0x20d0) = uVar2 + uVar1;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x20b8) = *(int *)(param_1 + 0x20b8) + -1;
  }
  if (*(char *)(param_1 + 0x20c6) != '\0') {
    *(undefined1 *)(param_1 + 0x20c6) = 0;
    *(undefined4 *)(param_1 + 0x20b8) = *(undefined4 *)(param_1 + 0x20bc);
  }
  return;
}

