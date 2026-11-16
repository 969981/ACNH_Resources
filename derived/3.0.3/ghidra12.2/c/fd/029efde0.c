
void FUN_029efde0(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined2 uVar6;
  long lVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < 1) {
    *(undefined2 *)(param_1 + 0x137c) = 1;
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x139c);
  uVar5 = (uint)bVar3;
  if (bVar3 < uVar2) {
    uVar1 = uVar5 + 1 & 3;
    lVar7 = param_1;
    if (2 < uVar5) {
      uVar8 = uVar5 + 1 & 0x1fc;
      do {
        uVar8 = uVar8 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar8 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    uVar6 = 1;
    if ((lVar7 != 0) && ((undefined2 *)(lVar7 + -8) != (undefined2 *)0x0)) {
      uVar6 = *(undefined2 *)(lVar7 + -8);
    }
  }
  else {
    uVar6 = 1;
  }
  *(undefined2 *)(param_1 + 0x137c) = uVar6;
  cVar4 = '\0';
  if (uVar2 != 0) {
    cVar4 = (char)((uVar5 + 1) / uVar2);
  }
  *(byte *)(param_1 + 0x139c) = (char)(uVar5 + 1) - cVar4 * (char)uVar2;
  return;
}

