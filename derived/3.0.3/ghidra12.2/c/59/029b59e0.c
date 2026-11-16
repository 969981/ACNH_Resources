
void FUN_029b59e0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  if (uVar3 < *(uint *)(param_1 + 0x30) && (int)uVar3 < (int)*(uint *)(param_1 + 0x30)) {
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    lVar4 = param_1 + 0x20;
    uVar6 = uVar2 + 1;
    uVar1 = uVar6 & 3;
    if (2 < uVar2) {
      uVar6 = uVar6 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar4 = *(long *)(lVar4 + 8);
    }
    if ((lVar4 != 0) && (lVar5 = lVar4 + -0x48, lVar5 != 0)) {
      while (lVar5 != param_1 + -0x28) {
        if (*(char *)(lVar5 + 10) == '\0') {
          if ((-1 < *(char *)(lVar5 + 0xc)) || ((*(byte *)(lVar5 + 8) & 1) != 0)) break;
          *(undefined1 *)(lVar5 + 10) = 2;
        }
        lVar4 = *(long *)(lVar4 + 8);
        uVar3 = uVar3 + 1;
        lVar5 = lVar4 + -0x48;
      }
    }
  }
  *param_2 = uVar3;
  return;
}

