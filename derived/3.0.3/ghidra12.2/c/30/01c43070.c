
void FUN_01c43070(long param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200);
  if (*(uint *)(param_1 + 0x1e0) <= uVar3) {
    return;
  }
  puVar6 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar3 * 8);
  if (puVar6 == (uint *)0x0) {
    return;
  }
  uVar11 = 0;
  if (*puVar6 == 0) {
    uVar13 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    cVar7 = DAT_0534cd78;
    do {
      if (cVar7 != '\0') {
        if (DAT_0534cd7c < 0) {
          if (DAT_0534cd7c._4_4_ == 0xffffffff) {
            uVar3 = *puVar6;
            if (uVar3 != 0) goto LAB_01c43114;
          }
          else {
LAB_01c431a4:
            uVar12 = 0;
          }
        }
        else {
          if ((undefined4 *)((ulong)DAT_0534cd7c._4_4_ + (long)puVar6) == (undefined4 *)0x0)
          goto LAB_01c431a4;
          uVar12 = *(undefined4 *)((ulong)DAT_0534cd7c._4_4_ + (long)puVar6);
        }
LAB_01c431a8:
        uVar3 = *puVar6;
        if (uVar3 != 0) {
          uVar9 = (uint)DAT_0534cd84;
          goto LAB_01c431cc;
        }
        uVar13 = 0;
        goto LAB_01c43314;
      }
      cVar7 = '\x01';
      DAT_0534cd7c = -1;
      DAT_0534cd84 = 0xffffffffffffffff;
      DAT_0534cd78 = '\x01';
      DAT_0534cdac = 0xffffffff;
      DAT_0534cd8c = 0xffffffffffffffff;
      DAT_0534cd94 = 0xffffffffffffffff;
      DAT_0534cd9c = 0xffffffffffffffff;
      DAT_0534cda4 = 0xffffffffffffffff;
      uVar3 = *puVar6;
      if (uVar3 == 0) goto LAB_01c431a8;
LAB_01c43114:
      puVar10 = (uint *)(ulong)uVar3;
      if (puVar6 == puVar10) goto LAB_01c431a8;
      lVar4 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar6 + (lVar4 - (long)puVar10);
      if (lVar4 == 0) goto LAB_01c431a8;
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      DAT_0534cd7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534cd7c);
      if (uVar8 == 0) goto LAB_01c431a8;
      piVar5 = (int *)(lVar4 + 4);
      while (piVar5[-1] != -0x20cc11b8) {
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_01c431a8;
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      DAT_0534cd7c = CONCAT44(iVar1,(undefined4)DAT_0534cd7c);
    } while (*puVar6 != 0);
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
  }
  goto LAB_01c43314;
LAB_01c43290:
  if (-1 < (int)uVar9) {
    if ((undefined4 *)((long)puVar6 + (ulong)uVar9) != (undefined4 *)0x0) {
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar9);
    }
    goto LAB_01c43314;
  }
  if ((uVar9 != 0xffffffff) || (lVar4 = (long)puVar6 - (ulong)uVar3, lVar4 == 0)) goto LAB_01c43314;
  lVar2 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar4 == 0) goto LAB_01c43314;
  uVar8 = (ulong)*(ushort *)(lVar4 + 8);
  DAT_0534cd84 = CONCAT44(0xfffffffe,(uint)DAT_0534cd84);
  if (uVar8 == 0) goto LAB_01c43314;
  puVar10 = (uint *)(lVar2 + lVar4 + 4);
  while (puVar10[-1] != 0xa5f3bd28) {
    puVar10 = puVar10 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_01c43314;
  }
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = *puVar10;
  }
  DAT_0534cd84 = CONCAT44(uVar9,(uint)DAT_0534cd84);
  uVar3 = *puVar6;
  if (uVar3 == 0) goto LAB_01c43314;
  goto LAB_01c43290;
  while( true ) {
    uVar13 = 0;
    if ((uVar9 != 0xffffffff) || (lVar4 = (long)puVar6 - (ulong)uVar3, lVar4 == 0))
    goto LAB_01c4326c;
    lVar2 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar4 == 0) goto LAB_01c4326c;
    uVar8 = (ulong)*(ushort *)(lVar4 + 8);
    DAT_0534cd84 = CONCAT44(DAT_0534cd84._4_4_,0xfffffffe);
    if (uVar8 == 0) goto LAB_01c4326c;
    puVar10 = (uint *)(lVar2 + lVar4 + 4);
    while (puVar10[-1] != 0xe253c7f8) {
      puVar10 = puVar10 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_01c4326c;
    }
    uVar13 = 0;
    uVar9 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar9 = *puVar10;
    }
    DAT_0534cd84 = CONCAT44(DAT_0534cd84._4_4_,uVar9);
    uVar3 = *puVar6;
    if (uVar3 == 0) break;
LAB_01c431cc:
    if (-1 < (int)uVar9) {
      if ((undefined4 *)((long)puVar6 + (ulong)uVar9) == (undefined4 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)((long)puVar6 + (ulong)uVar9);
      }
LAB_01c4326c:
      uVar3 = *puVar6;
      if (uVar3 == 0) goto LAB_01c43314;
      uVar9 = DAT_0534cd84._4_4_;
      goto LAB_01c43290;
    }
  }
  uVar11 = 0;
LAB_01c43314:
  *param_2 = uVar12;
  param_2[1] = uVar13;
  param_2[2] = uVar11;
  return;
}

