
int FUN_03742610(long param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  if (*puVar8 == 0) {
    return 0;
  }
  cVar9 = DAT_05abc380;
  do {
    if (cVar9 != '\0') {
      if ((int)DAT_05abc394 < 0) {
        if ((int)DAT_05abc394 == -1) goto LAB_0374268c;
LAB_03742714:
        iVar6 = 0;
      }
      else {
        puVar1 = (ushort *)((DAT_05abc394 & 0xffffffff) + (long)puVar8);
        iVar6 = 0;
        if (puVar1 != (ushort *)0x0) {
          iVar6 = (uint)*puVar1 << 1;
        }
      }
      goto LAB_0374272c;
    }
    cVar9 = '\x01';
    DAT_05abc384 = 0xffffffffffffffff;
    DAT_05abc38c = 0xffffffffffffffff;
    DAT_05abc380 = '\x01';
    DAT_05abc3f4 = 0xffffffffffffffff;
    DAT_05abc394 = 0xffffffffffffffff;
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
LAB_0374268c:
    puVar4 = (uint *)(ulong)*puVar8;
    iVar6 = 0;
    if ((*puVar8 == 0) || (puVar8 == puVar4)) goto LAB_0374272c;
    lVar3 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar8 + (lVar3 - (long)puVar4);
    if (lVar3 == 0) goto LAB_03742714;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    DAT_05abc394 = CONCAT44(DAT_05abc394._4_4_,0xfffffffe);
    iVar6 = 0;
    if (uVar10 == 0) goto LAB_0374272c;
    piVar5 = (int *)(lVar3 + 4);
    while (piVar5[-1] != -0xf1748ef) {
      piVar5 = piVar5 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        iVar6 = 0;
        goto LAB_0374272c;
      }
    }
    iVar6 = 0;
    if (*piVar5 != -1) {
      iVar6 = *piVar5;
    }
    DAT_05abc394 = CONCAT44(DAT_05abc394._4_4_,iVar6);
  } while (*puVar8 != 0);
  iVar6 = 0;
LAB_0374272c:
  puVar8 = *(uint **)(param_1 + 8);
  uVar7 = 0;
  if (puVar8 != (uint *)0x0) {
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      return iVar6;
    }
    uVar11 = DAT_05abc384._4_4_;
    while ((int)uVar11 < 0) {
      if (uVar11 != 0xffffffff) {
        return iVar6;
      }
      lVar3 = (long)puVar8 - (ulong)uVar7;
      if (lVar3 == 0) {
        return iVar6;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) {
        return iVar6;
      }
      uVar10 = (ulong)*(ushort *)(lVar3 + 8);
      DAT_05abc384 = CONCAT44(0xfffffffe,(undefined4)DAT_05abc384);
      if (uVar10 == 0) {
        return iVar6;
      }
      puVar4 = (uint *)(lVar2 + lVar3 + 4);
      while (puVar4[-1] != 0xb11dff44) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return iVar6;
        }
      }
      uVar11 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar11 = *puVar4;
      }
      DAT_05abc384 = CONCAT44(uVar11,(undefined4)DAT_05abc384);
      uVar7 = *puVar8;
      if (uVar7 == 0) {
        return iVar6;
      }
    }
    uVar7 = 0;
    if ((ushort *)((long)puVar8 + (ulong)uVar11) != (ushort *)0x0) {
      uVar7 = (uint)*(ushort *)((long)puVar8 + (ulong)uVar11);
    }
  }
  return uVar7 + iVar6;
}

