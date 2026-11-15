
void FUN_022c89e0(int param_1,uint param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  iVar2 = 0;
  if (param_1 != 0) {
    if (param_1 == 0xd) {
      iVar2 = 1;
    }
    else if ((param_1 < DAT_0547b48c) || (DAT_0547b490 < param_1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = (param_1 - DAT_0547b48c) + 2;
    }
  }
  if (iVar2 == 0) {
    if (param_4 != -1) {
      uVar3 = 0;
      do {
        lVar4 = (long)((ulong)uVar3 << 0x20) >> 0x1b;
        if ((&DAT_0547b6e5)[lVar4] != '\0' && *(int *)((long)&DAT_0547b6e0 + lVar4) == param_4) {
          (&DAT_0547b6e6)[(long)(int)uVar3 * 0x20] = 1;
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x20);
    }
    iVar2 = *(int *)(param_3 + 8);
    iVar1 = *(int *)(param_3 + 0xc);
    if ((DAT_0547b3f0 == iVar2) && (DAT_0547b3f4 == iVar1)) {
      lVar4 = 0;
LAB_022c8ca4:
      DAT_0547b468 = DAT_0547b468 & ((byte)(1 << lVar4) ^ 0xff);
      return;
    }
    if ((DAT_0547b400 == iVar2) && (DAT_0547b404 == iVar1)) {
      lVar4 = 1;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b410 == iVar2) && (DAT_0547b414 == iVar1)) {
      lVar4 = 2;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b420 == iVar2) && (DAT_0547b424 == iVar1)) {
      lVar4 = 3;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b430 == iVar2) && (DAT_0547b434 == iVar1)) {
      lVar4 = 4;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b440 == iVar2) && (DAT_0547b444 == iVar1)) {
      lVar4 = 5;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b450 == iVar2) && (DAT_0547b454 == iVar1)) {
      lVar4 = 6;
      goto LAB_022c8ca4;
    }
    if ((DAT_0547b460 == iVar2) && (DAT_0547b464 == iVar1)) {
      lVar4 = 7;
      goto LAB_022c8ca4;
    }
    if ((param_2 >> 7 & 1) != 0) {
      return;
    }
    if (param_1 == 0x16) goto LAB_022c8a54;
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else if (param_1 == 0xd) {
      uVar3 = 1;
    }
    else if ((param_1 < DAT_0547b48c) || (DAT_0547b490 < param_1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (param_1 - DAT_0547b48c) + 2;
      if (0xd < uVar3) goto LAB_022c8bfc;
    }
    puVar5 = &DAT_0547b494 + (ulong)uVar3 * 10;
  }
  else {
    if ((param_2 >> 7 & 1) != 0) {
      return;
    }
    if (param_1 == 0x16) {
LAB_022c8a54:
      DAT_0547bac8 = DAT_0547bac8 | 1 << (ulong)((int)(char)param_2 & 0x1f);
      return;
    }
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else if (param_1 == 0xd) {
      uVar3 = 1;
    }
    else if ((param_1 < DAT_0547b48c) || (DAT_0547b490 < param_1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (param_1 - DAT_0547b48c) + 2;
      if (0xd < uVar3) {
LAB_022c8bfc:
        puVar5 = &DAT_0547b494;
        goto LAB_022c8b80;
      }
    }
    puVar5 = &DAT_0547b494 + (ulong)uVar3 * 10;
  }
LAB_022c8b80:
  puVar5[8] = puVar5[8] | 1 << (ulong)((int)(char)param_2 & 0x1f);
  return;
}

