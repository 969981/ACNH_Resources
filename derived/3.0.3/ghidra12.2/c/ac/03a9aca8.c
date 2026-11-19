
void FUN_03a9aca8(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x288);
  if (lVar2 != 0) {
    uVar1 = param_2;
    if (*(uint *)(lVar2 + 0x5c0) <= param_2) {
      uVar1 = 0;
    }
    lVar2 = *(long *)(lVar2 + 0x5c8) + (long)(int)uVar1 * 0x808;
    FUN_03a32288(lVar2 + 1000,lVar2 + 0x7d8);
    FUN_03a32288(lVar2 + 0x5d0,lVar2 + 0x7d8);
  }
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x1b0);
    uVar1 = param_2;
    if (*(uint *)(lVar2 + 0x1a8) <= param_2) {
      uVar1 = 0;
    }
    lVar2 = lVar3 + (long)(int)uVar1 * 0x1330;
    if (*(char *)(lVar2 + 0x8f8) != '\0') {
      FUN_039499cc(DAT_05ae90c0,*(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x1330 + 0x5a8));
    }
    *(undefined1 *)(lVar2 + 0x8f8) = 0;
    lVar3 = lVar3 + (long)(int)uVar1 * 0x1330;
    *(undefined8 *)(lVar3 + 0x5a8) = 0;
    *(undefined1 *)(lVar3 + 0x8fa) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x2b8);
  if ((lVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x8f0) != '\0')) {
    lVar3 = *(long *)(lVar2 + 0x1e8);
    if (*(uint *)(lVar2 + 0x1e0) <= param_2) {
      param_2 = 0;
    }
    lVar2 = lVar3 + (long)(int)param_2 * 0x15e8;
    if (*(char *)(lVar2 + 0xf50) != '\0') {
      FUN_039499cc(DAT_05ae90c0,*(undefined8 *)(lVar2 + 0xc10));
    }
    *(undefined8 *)(lVar2 + 0xc10) = 0;
    *(undefined1 *)(lVar2 + 0xf50) = 0;
    *(undefined1 *)(lVar3 + (long)(int)param_2 * 0x15e8 + 0xf52) = 0;
  }
  return;
}

