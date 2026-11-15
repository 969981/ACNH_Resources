
void FUN_024fc2c0(uint *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint local_58;
  uint local_54;
  
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 == 0) {
LAB_024fc408:
    param_1[0] = 0xfffe;
    param_1[1] = 0;
    puVar9 = param_1 + 0xc;
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar1 = param_1 + 10;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar8 = param_1 + 8;
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar11 = param_1 + 6;
    puVar11[0] = 0;
    puVar11[1] = 0;
    puVar12 = param_1 + 4;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar13 = param_1 + 2;
    puVar13[0] = 0;
    puVar13[1] = 0;
    FUN_0277d4ac(param_1);
    puVar13[0] = 0xfffe;
    puVar13[1] = 0;
    FUN_0277d4ac(puVar13);
    puVar12[0] = 0xfffe;
    puVar12[1] = 0;
    FUN_0277d4ac(puVar12);
    puVar11[0] = 0xfffe;
    puVar11[1] = 0;
    FUN_0277d4ac(puVar11);
    puVar8[0] = 0xfffe;
    puVar8[1] = 0;
    FUN_0277d4ac(puVar8);
    puVar1[0] = 0xfffe;
    puVar1[1] = 0;
    FUN_0277d4ac(puVar1);
    puVar9[0] = 0xfffe;
    puVar9[1] = 0;
    FUN_0277d4ac(puVar9);
    return;
  }
  if ((int)*(uint *)(lVar3 + 0x1c0) < 1) {
    if ((((*(long *)(lVar3 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar3 + 200) &&
         (*(char *)(*(long *)(lVar3 + 0xd0) + (long)(int)param_3) == '\0')))) ||
       (((*puVar9 <= param_3 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_024fc408;
    iVar4 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * param_3 + (uint)(ushort)puVar9[2] * 8 + iVar4) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(lVar3 + 0x1c0) <= param_3) goto LAB_024fc408;
    if (*(uint *)(lVar3 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar3 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar9 == (uint *)0x0) goto LAB_024fc408;
  uVar10 = 0xfffe;
  param_1[0] = 0xfffe;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  param_1[2] = 0xfffe;
  param_1[3] = 0;
  FUN_0277d4ac();
  param_1[4] = 0xfffe;
  param_1[5] = 0;
  FUN_0277d4ac();
  param_1[6] = 0xfffe;
  param_1[7] = 0;
  FUN_0277d4ac();
  param_1[8] = 0xfffe;
  param_1[9] = 0;
  FUN_0277d4ac();
  param_1[10] = 0xfffe;
  param_1[0xb] = 0;
  FUN_0277d4ac();
  param_1[0xc] = 0xfffe;
  param_1[0xd] = 0;
  FUN_0277d4ac();
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 != 0) {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc84._4_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc4cc:
      uVar5 = DAT_054ecc84._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar5 != 0xffffffff) goto LAB_024fc4d4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc4d4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc84 = CONCAT44(0xfffffffe,(uint)DAT_054ecc84);
          if (uVar7 == 0) goto LAB_024fc4d4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x291a1b04) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc4d4;
          }
          uVar5 = *puVar8;
          uVar6 = 0;
          if (uVar5 != 0xffffffff) {
            uVar6 = uVar5;
          }
          DAT_054ecc84 = CONCAT44(uVar6,(uint)DAT_054ecc84);
        } while ((int)uVar6 < 0);
        goto joined_r0x024fc868;
      }
    }
    else {
      uVar6 = DAT_054ecc84._4_4_;
      if ((long)DAT_054ecc84 < 0) goto LAB_024fc4cc;
joined_r0x024fc868:
      if ((ushort *)((long)puVar9 + (ulong)uVar6) != (ushort *)0x0) {
        uVar10 = *(ushort *)((long)puVar9 + (ulong)uVar6);
        goto LAB_024fc4d8;
      }
    }
LAB_024fc4d4:
    uVar10 = 0xfffe;
  }
LAB_024fc4d8:
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  *param_1 = local_58;
  param_1[1] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fc54c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc7c._0_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc544:
      uVar6 = (uint)DAT_054ecc7c;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fc54c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc54c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc7c = CONCAT44(DAT_054ecc7c._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fc54c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x2b57b24a) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc54c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecc7c = CONCAT44(DAT_054ecc7c._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fc518;
      }
      goto LAB_024fc54c;
    }
    if ((int)(uint)DAT_054ecc7c < 0) goto LAB_024fc544;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054ecc7c & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fc54c;
LAB_024fc518:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[2] = local_58;
  param_1[3] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fc5c4:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc7c._4_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc5bc:
      uVar6 = DAT_054ecc7c._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fc5c4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc5c4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc7c = CONCAT44(0xfffffffe,(uint)DAT_054ecc7c);
          if (uVar7 == 0) goto LAB_024fc5c4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x9403c267) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc5c4;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecc7c = CONCAT44(uVar5,(uint)DAT_054ecc7c);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fc590;
      }
      goto LAB_024fc5c4;
    }
    if ((long)DAT_054ecc7c < 0) goto LAB_024fc5bc;
    puVar2 = (ushort *)((long)puVar9 + (ulong)DAT_054ecc7c._4_4_);
    if (puVar2 == (ushort *)0x0) goto LAB_024fc5c4;
LAB_024fc590:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[4] = local_58;
  param_1[5] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fc63c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc94._0_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc634:
      uVar6 = (uint)DAT_054ecc94;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fc63c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc63c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc94 = CONCAT44(DAT_054ecc94._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fc63c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x870f1e29) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc63c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecc94 = CONCAT44(DAT_054ecc94._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fc608;
      }
      goto LAB_024fc63c;
    }
    if ((int)(uint)DAT_054ecc94 < 0) goto LAB_024fc634;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054ecc94 & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fc63c;
LAB_024fc608:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[6] = local_58;
  param_1[7] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fc6b4:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc84._0_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc6ac:
      uVar6 = (uint)DAT_054ecc84;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fc6b4;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc6b4;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc84 = CONCAT44(DAT_054ecc84._4_4_,0xfffffffe);
          if (uVar7 == 0) goto LAB_024fc6b4;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0xcc136eb5) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc6b4;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecc84 = CONCAT44(DAT_054ecc84._4_4_,uVar5);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fc680;
      }
      goto LAB_024fc6b4;
    }
    if ((int)(uint)DAT_054ecc84 < 0) goto LAB_024fc6ac;
    puVar2 = (ushort *)((long)puVar9 + (DAT_054ecc84 & 0xffffffff));
    if (puVar2 == (ushort *)0x0) goto LAB_024fc6b4;
LAB_024fc680:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[8] = local_58;
  param_1[9] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 == 0) {
LAB_024fc72c:
    uVar10 = 0xfffe;
  }
  else {
    if ((DAT_054ecc78 & 1) == 0) {
      DAT_054ecc78 = 1;
      DAT_054ecc9c = 0xffffffff;
      DAT_054ecc7c = 0xffffffffffffffff;
      DAT_054ecc84 = 0xffffffffffffffff;
      DAT_054ecc8c._4_4_ = 0xffffffff;
      DAT_054ecc8c = 0xffffffffffffffff;
      DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc724:
      uVar6 = DAT_054ecc8c._4_4_;
      if (puVar9 != puVar1) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_024fc72c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
          if (lVar3 == 0) goto LAB_024fc72c;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
          DAT_054ecc8c = CONCAT44(0xfffffffe,(uint)DAT_054ecc8c);
          if (uVar7 == 0) goto LAB_024fc72c;
          puVar8 = (uint *)(lVar3 + 4);
          while (puVar8[-1] != 0x39ed7f5a) {
            puVar8 = puVar8 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_024fc72c;
          }
          uVar6 = *puVar8;
          uVar5 = 0;
          if (uVar6 != 0xffffffff) {
            uVar5 = uVar6;
          }
          DAT_054ecc8c = CONCAT44(uVar5,(uint)DAT_054ecc8c);
        } while ((int)uVar5 < 0);
        puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
        if (puVar2 != (ushort *)0x0) goto LAB_024fc6f8;
      }
      goto LAB_024fc72c;
    }
    if ((long)DAT_054ecc8c < 0) goto LAB_024fc724;
    puVar2 = (ushort *)((long)puVar9 + (ulong)DAT_054ecc8c._4_4_);
    if (puVar2 == (ushort *)0x0) goto LAB_024fc72c;
LAB_024fc6f8:
    uVar10 = *puVar2;
  }
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[10] = local_58;
  param_1[0xb] = local_54;
  puVar1 = (uint *)(ulong)*puVar9;
  if (*puVar9 != 0) {
    if ((DAT_054ecc78 & 1) != 0) {
      if ((int)(uint)DAT_054ecc8c < 0) goto LAB_024fc79c;
      puVar2 = (ushort *)((long)puVar9 + (DAT_054ecc8c & 0xffffffff));
      if (puVar2 == (ushort *)0x0) goto LAB_024fc7a4;
LAB_024fc770:
      uVar10 = *puVar2;
      goto LAB_024fc7a8;
    }
    DAT_054ecc78 = 1;
    DAT_054ecc9c = 0xffffffff;
    DAT_054ecc7c = 0xffffffffffffffff;
    DAT_054ecc84 = 0xffffffffffffffff;
    DAT_054ecc8c._0_4_ = 0xffffffff;
    DAT_054ecc8c = 0xffffffffffffffff;
    DAT_054ecc94 = 0xffffffffffffffff;
LAB_024fc79c:
    uVar6 = (uint)DAT_054ecc8c;
    if (puVar9 != puVar1) {
      do {
        if (uVar6 != 0xffffffff) goto LAB_024fc7a4;
        lVar3 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar1)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar9 + (lVar3 - (long)puVar1);
        if (lVar3 == 0) goto LAB_024fc7a4;
        uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar1));
        DAT_054ecc8c = CONCAT44(DAT_054ecc8c._4_4_,0xfffffffe);
        if (uVar7 == 0) goto LAB_024fc7a4;
        puVar8 = (uint *)(lVar3 + 4);
        while (puVar8[-1] != 0xce827d47) {
          puVar8 = puVar8 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_024fc7a4;
        }
        uVar6 = *puVar8;
        uVar5 = 0;
        if (uVar6 != 0xffffffff) {
          uVar5 = uVar6;
        }
        DAT_054ecc8c = CONCAT44(DAT_054ecc8c._4_4_,uVar5);
      } while ((int)uVar5 < 0);
      puVar2 = (ushort *)((long)puVar9 + (ulong)uVar5);
      if (puVar2 != (ushort *)0x0) goto LAB_024fc770;
    }
  }
LAB_024fc7a4:
  uVar10 = 0xfffe;
LAB_024fc7a8:
  local_58 = (uint)uVar10;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  param_1[0xc] = local_58;
  param_1[0xd] = local_54;
  return;
}

