
int FUN_037427e0(long param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  uint uVar10;
  
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if (*puVar7 == 0) {
    return 0;
  }
  cVar8 = DAT_05abc380;
  do {
    if (cVar8 != '\0') {
      if (DAT_05abc394 < 0) {
        if (DAT_05abc394._4_4_ == 0xffffffff) goto LAB_0374285c;
LAB_037428e4:
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        if ((ushort *)((ulong)DAT_05abc394._4_4_ + (long)puVar7) != (ushort *)0x0) {
          iVar5 = (uint)*(ushort *)((ulong)DAT_05abc394._4_4_ + (long)puVar7) << 1;
        }
      }
      goto LAB_037428fc;
    }
    cVar8 = '\x01';
    DAT_05abc384 = 0xffffffffffffffff;
    DAT_05abc38c = 0xffffffffffffffff;
    DAT_05abc380 = '\x01';
    DAT_05abc3f4 = 0xffffffffffffffff;
    DAT_05abc394 = -1;
    DAT_05abc39c = 0xffffffffffffffff;
    DAT_05abc3a4 = 0xffffffffffffffff;
    DAT_05abc3ac = 0xffffffffffffffff;
    DAT_05abc3b4 = 0xffffffffffffffff;
    DAT_05abc3bc = 0xffffffffffffffff;
    DAT_05abc3c4 = 0xffffffffffffffff;
    DAT_05abc3cc = 0xffffffffffffffff;
    DAT_05abc3d4 = 0xffffffffffffffff;
    DAT_05abc3dc = 0xffffffffffffffff;
    DAT_05abc3e4 = 0xffffffffffffffff;
    DAT_05abc3ec = 0xffffffffffffffff;
LAB_0374285c:
    puVar3 = (uint *)(ulong)*puVar7;
    iVar5 = 0;
    if ((*puVar7 == 0) || (puVar7 == puVar3)) goto LAB_037428fc;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar3)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar3);
    if (lVar2 == 0) goto LAB_037428e4;
    uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar3));
    DAT_05abc394 = CONCAT44(0xfffffffe,(undefined4)DAT_05abc394);
    iVar5 = 0;
    if (uVar9 == 0) goto LAB_037428fc;
    piVar4 = (int *)(lVar2 + 4);
    while (piVar4[-1] != -0x75d71b8f) {
      piVar4 = piVar4 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        iVar5 = 0;
        goto LAB_037428fc;
      }
    }
    iVar5 = 0;
    if (*piVar4 != -1) {
      iVar5 = *piVar4;
    }
    DAT_05abc394 = CONCAT44(iVar5,(undefined4)DAT_05abc394);
  } while (*puVar7 != 0);
  iVar5 = 0;
LAB_037428fc:
  puVar7 = *(uint **)(param_1 + 8);
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return iVar5;
    }
    uVar10 = (uint)DAT_05abc38c;
    while ((int)uVar10 < 0) {
      if (uVar10 != 0xffffffff) {
        return iVar5;
      }
      lVar2 = (long)puVar7 - (ulong)uVar6;
      if (lVar2 == 0) {
        return iVar5;
      }
      lVar1 = 0xc;
      if (*(char *)(lVar2 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar2 == 0) {
        return iVar5;
      }
      uVar9 = (ulong)*(ushort *)(lVar2 + 8);
      DAT_05abc38c = CONCAT44(DAT_05abc38c._4_4_,0xfffffffe);
      if (uVar9 == 0) {
        return iVar5;
      }
      puVar3 = (uint *)(lVar1 + lVar2 + 4);
      while (puVar3[-1] != 0xcbddac24) {
        puVar3 = puVar3 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          return iVar5;
        }
      }
      uVar10 = 0;
      if (*puVar3 != 0xffffffff) {
        uVar10 = *puVar3;
      }
      DAT_05abc38c = CONCAT44(DAT_05abc38c._4_4_,uVar10);
      uVar6 = *puVar7;
      if (uVar6 == 0) {
        return iVar5;
      }
    }
    uVar6 = 0;
    if ((ushort *)((long)puVar7 + (ulong)uVar10) != (ushort *)0x0) {
      uVar6 = (uint)*(ushort *)((long)puVar7 + (ulong)uVar10);
    }
  }
  return uVar6 + iVar5;
}

