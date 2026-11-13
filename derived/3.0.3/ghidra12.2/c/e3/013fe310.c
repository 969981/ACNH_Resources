
long FUN_013fe310(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  
  lVar8 = (long)(((*(int *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) << 8) >> 0x18) <<
                (*(int *)(DAT_04da7238 + 0x65204) == 1)) + -1;
  uVar7 = (uint)lVar8;
  if ((int)*(uint *)(param_1 + 0x510) < 1) {
    if (*(long *)(param_1 + 0x400) == 0) {
      return 0;
    }
    puVar9 = *(uint **)(*(long *)(param_1 + 0x400) + 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if ((uVar7 < *(uint *)(param_1 + 0x418)) &&
       (*(char *)(*(long *)(param_1 + 0x420) + lVar8) == '\0')) {
      return 0;
    }
    if (*puVar9 <= uVar7) {
      return 0;
    }
    if (puVar9[1] == 0) {
      return 0;
    }
    if ((ushort)puVar9[2] == 0) {
      return 0;
    }
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar7 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(param_1 + 0x510) <= uVar7) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x500) <= uVar7) {
      uVar7 = 0;
    }
    puVar9 = *(uint **)(*(long *)(param_1 + 0x508) + (ulong)uVar7 * 8);
  }
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  uVar7 = 0;
  if (*puVar9 != 0) {
    cVar11 = DAT_051b6998;
    do {
      if (cVar11 != '\0') {
        if (DAT_051b699c < 0) {
          if (DAT_051b699c._4_4_ == 0xffffffff) goto LAB_013fe3d8;
LAB_013fe4bc:
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((char *)((ulong)DAT_051b699c._4_4_ + (long)puVar9) != (char *)0x0) {
            uVar7 = (uint)(*(char *)((ulong)DAT_051b699c._4_4_ + (long)puVar9) != '\0');
          }
        }
LAB_013fe4d8:
        uVar3 = *puVar9;
        if (uVar3 == 0) goto LAB_013fe630;
        uVar13 = (uint)DAT_051b69a4;
        goto LAB_013fe4fc;
      }
      cVar11 = '\x01';
      DAT_051b699c = -1;
      DAT_051b69a4 = 0xffffffffffffffff;
      DAT_051b6998 = '\x01';
LAB_013fe3d8:
      puVar5 = (uint *)(ulong)*puVar9;
      uVar7 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar5)) goto LAB_013fe4d8;
      lVar8 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar9 + (lVar8 - (long)puVar5);
      if (lVar8 == 0) goto LAB_013fe4bc;
      uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
      DAT_051b699c = CONCAT44(0xfffffffe,(undefined4)DAT_051b699c);
      uVar7 = 0;
      if (uVar12 == 0) goto LAB_013fe4d8;
      piVar6 = (int *)(lVar8 + 4);
      while (piVar6[-1] != 0x748db6d8) {
        piVar6 = piVar6 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar7 = 0;
          goto LAB_013fe4d8;
        }
      }
      iVar10 = 0;
      if (*piVar6 != -1) {
        iVar10 = *piVar6;
      }
      DAT_051b699c = CONCAT44(iVar10,(undefined4)DAT_051b699c);
    } while (*puVar9 != 0);
    uVar7 = 0;
  }
  goto LAB_013fe630;
LAB_013fe5a8:
  if (-1 < (int)uVar13) {
    if ((char *)((long)puVar9 + (ulong)uVar13) != (char *)0x0) {
      if (*(char *)((long)puVar9 + (ulong)uVar13) != '\0') {
        uVar7 = uVar7 | 4;
      }
    }
    goto LAB_013fe630;
  }
  if ((uVar13 != 0xffffffff) || (lVar8 = (long)puVar9 - (ulong)uVar3, lVar8 == 0))
  goto LAB_013fe630;
  lVar1 = 0xc;
  if (*(char *)(lVar8 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar8 == 0) goto LAB_013fe630;
  uVar12 = (ulong)*(ushort *)(lVar8 + 8);
  DAT_051b69a4 = CONCAT44(0xfffffffe,(uint)DAT_051b69a4);
  if (uVar12 == 0) goto LAB_013fe630;
  puVar5 = (uint *)(lVar1 + lVar8 + 4);
  while (puVar5[-1] != 0xfb867bc1) {
    puVar5 = puVar5 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_013fe630;
  }
  uVar13 = 0;
  if (*puVar5 != 0xffffffff) {
    uVar13 = *puVar5;
  }
  DAT_051b69a4 = CONCAT44(uVar13,(uint)DAT_051b69a4);
  uVar3 = *puVar9;
  if (uVar3 == 0) goto LAB_013fe630;
  goto LAB_013fe5a8;
  while( true ) {
    if ((uVar13 != 0xffffffff) || (lVar8 = (long)puVar9 - (ulong)uVar3, lVar8 == 0))
    goto LAB_013fe584;
    lVar1 = 0xc;
    if (*(char *)(lVar8 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar8 == 0) goto LAB_013fe584;
    uVar12 = (ulong)*(ushort *)(lVar8 + 8);
    DAT_051b69a4 = CONCAT44(DAT_051b69a4._4_4_,0xfffffffe);
    if (uVar12 == 0) goto LAB_013fe584;
    puVar5 = (uint *)(lVar1 + lVar8 + 4);
    while (puVar5[-1] != 0xc44b9674) {
      puVar5 = puVar5 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_013fe584;
    }
    uVar13 = 0;
    if (*puVar5 != 0xffffffff) {
      uVar13 = *puVar5;
    }
    DAT_051b69a4 = CONCAT44(DAT_051b69a4._4_4_,uVar13);
    uVar3 = *puVar9;
    if (uVar3 == 0) break;
LAB_013fe4fc:
    if (-1 < (int)uVar13) {
      if ((char *)((long)puVar9 + (ulong)uVar13) != (char *)0x0) {
        if (*(char *)((long)puVar9 + (ulong)uVar13) != '\0') {
          uVar7 = uVar7 | 2;
        }
      }
LAB_013fe584:
      uVar3 = *puVar9;
      if (uVar3 != 0) {
        uVar13 = DAT_051b69a4._4_4_;
        goto LAB_013fe5a8;
      }
      break;
    }
  }
LAB_013fe630:
  uVar3 = (uVar7 >> 1 & 1) + (uVar7 & 1);
  uVar13 = uVar3 + (uVar7 >> 2);
  if (uVar13 != 0) {
    uVar4 = (param_2 ^ param_2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar2 = (int)((ulong)uVar13 * (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) >> 0x20) + 1;
    if ((uVar7 & 1) != uVar2) {
      if (uVar3 == uVar2) {
        return 1;
      }
      return (ulong)(uVar13 == uVar2) << 1;
    }
  }
  return 0;
}

