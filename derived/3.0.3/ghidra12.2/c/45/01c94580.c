
void FUN_01c94580(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  
  if (7 < *(byte *)(param_1 + 0x225)) {
    lVar6 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0x10);
    if (lVar6 != 0) {
      cVar2 = *(char *)(*(long *)(DAT_05ae6a60 + 0x68) + 0x18);
      lVar4 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar4 == lVar6 && *(char *)(param_1 + 0x20) == cVar2) {
        lVar8 = 0;
      }
      else if (lVar5 == lVar6 && *(char *)(param_1 + 0x40) == cVar2) {
        lVar8 = 1;
        lVar5 = lVar6;
      }
      else if (*(long *)(param_1 + 0x58) == lVar6 && *(char *)(param_1 + 0x60) == cVar2) {
        lVar8 = 2;
      }
      else if (*(long *)(param_1 + 0x78) == lVar6 && *(char *)(param_1 + 0x80) == cVar2) {
        lVar8 = 3;
      }
      else if (*(long *)(param_1 + 0x98) == lVar6 && *(char *)(param_1 + 0xa0) == cVar2) {
        lVar8 = 4;
      }
      else if (*(long *)(param_1 + 0xb8) == lVar6 && *(char *)(param_1 + 0xc0) == cVar2) {
        lVar8 = 5;
      }
      else if ((*(long *)(param_1 + 0xd8) == lVar6) && (*(char *)(param_1 + 0xe0) == cVar2)) {
        lVar8 = 6;
      }
      else {
        if (*(long *)(param_1 + 0xf8) != lVar6) {
          return;
        }
        if (*(char *)(param_1 + 0x100) != cVar2) {
          return;
        }
        lVar8 = 7;
      }
      bVar7 = (&DAT_0548e168)[lVar8];
      plVar1 = (long *)(param_1 + 0x18) + (ulong)bVar7 * 4;
      if (7 < bVar7) {
        bVar7 = 0xff;
        plVar1 = &DAT_053565d0;
      }
      *(byte *)(param_1 + 0x225) = bVar7;
      lVar6 = *plVar1;
      uVar3 = 1;
      if (lVar4 == lVar6) {
        uVar3 = 2;
      }
      if (lVar5 != lVar6) {
        uVar3 = (uint)(lVar4 == lVar6);
      }
      if (*(long *)(param_1 + 0x58) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      if (*(long *)(param_1 + 0x78) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      if (*(long *)(param_1 + 0x98) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      if (*(long *)(param_1 + 0xb8) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      if (*(long *)(param_1 + 0xd8) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      if (*(long *)(param_1 + 0xf8) == lVar6) {
        uVar3 = uVar3 + 1;
      }
      *(uint *)(param_1 + 0x228) = uVar3;
    }
  }
  return;
}

