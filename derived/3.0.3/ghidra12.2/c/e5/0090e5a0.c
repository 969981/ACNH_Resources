
void FUN_0090e5a0(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined *puVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar12 = PTR_PTR_04bb2238;
  lVar10 = *(long *)(param_2 + 0x20);
  if (lVar10 != 0) {
    if ((int)*(uint *)(lVar10 + 0x1c0) < 1) {
      if ((((*(long *)(lVar10 + 0xb0) != 0) &&
           (puVar9 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
          ((*(uint *)(lVar10 + 200) <= param_3 ||
           (*(char *)(*(long *)(lVar10 + 0xd0) + (long)(int)param_3) != '\0')))) &&
         (((param_3 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * param_3 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                         (long)puVar9);
        goto joined_r0x0090e734;
      }
    }
    else if (param_3 < *(uint *)(lVar10 + 0x1c0)) {
      if (*(uint *)(lVar10 + 0x1b0) <= param_3) {
        param_3 = 0;
      }
      puVar9 = *(uint **)(*(long *)(lVar10 + 0x1b8) + (ulong)param_3 * 8);
joined_r0x0090e734:
      if (puVar9 != (uint *)0x0) {
        uVar3 = *puVar9;
        param_1[1] = PTR_DAT_04bb2020 + 0x10;
        param_1[3] = 0;
        param_1[4] = 0x3f80000000000000;
        if (uVar3 != 0) {
          cVar13 = DAT_04cf01e0;
          do {
            if (cVar13 != '\0') {
              if (DAT_04cf01ec < 0) {
                if (DAT_04cf01ec._4_4_ == 0xffffffff) goto LAB_0090e650;
              }
              else if ((undefined2 *)((ulong)DAT_04cf01ec._4_4_ + (long)puVar9) != (undefined2 *)0x0
                      ) {
                uVar5 = *(undefined2 *)((ulong)DAT_04cf01ec._4_4_ + (long)puVar9);
                goto LAB_0090e77c;
              }
LAB_0090e778:
              uVar5 = 0;
LAB_0090e77c:
              uVar3 = *puVar9;
              *(undefined2 *)param_1 = uVar5;
              if (uVar3 == 0) goto LAB_0090e814;
              uVar6 = DAT_04cf01f4._4_4_;
              goto LAB_0090e7a4;
            }
            cVar13 = '\x01';
            DAT_04cf01e4 = -1;
            DAT_04cf01ec = -1;
            DAT_04cf01e0 = '\x01';
            DAT_04cf01f4 = 0xffffffffffffffff;
LAB_0090e650:
            puVar8 = (uint *)(ulong)*puVar9;
            uVar5 = 0;
            if ((*puVar9 == 0) || (puVar9 == puVar8)) goto LAB_0090e77c;
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar8)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + (lVar10 - (long)puVar8);
            if (lVar10 == 0) goto LAB_0090e778;
            uVar4 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar8));
            DAT_04cf01ec = CONCAT44(0xfffffffe,(uint)DAT_04cf01ec);
            uVar5 = 0;
            if (uVar4 == 0) goto LAB_0090e77c;
            piVar7 = (int *)(lVar10 + 4);
            while (piVar7[-1] != 0x54706054) {
              piVar7 = piVar7 + 2;
              uVar4 = uVar4 - 1;
              if (uVar4 == 0) {
                uVar5 = 0;
                goto LAB_0090e77c;
              }
            }
            iVar11 = 0;
            if (*piVar7 != -1) {
              iVar11 = *piVar7;
            }
            DAT_04cf01ec = CONCAT44(iVar11,(uint)DAT_04cf01ec);
          } while (*puVar9 != 0);
        }
        *(undefined2 *)param_1 = 0;
        goto LAB_0090e814;
      }
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = 0xffff;
  param_1[1] = puVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = *(undefined8 *)(puVar12 + 8);
  param_1[3] = 0;
  goto LAB_0090e75c;
LAB_0090e7a4:
  do {
    if (-1 < (int)uVar6) {
      puVar12 = (undefined *)((long)puVar9 + (ulong)uVar6);
LAB_0090e900:
      uVar14 = 0;
      uVar3 = *puVar9;
      puVar1 = PTR_DAT_04c47d20;
      if (puVar12 != (undefined *)0x0) {
        puVar1 = puVar12;
      }
      param_1[2] = puVar1;
      if (uVar3 == 0) goto LAB_0090e820;
      uVar16 = 0;
      uVar17 = 0;
      uVar15 = 0;
      uVar6 = (uint)DAT_04cf01ec;
      goto LAB_0090e944;
    }
    if ((uVar6 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar3, lVar10 == 0)) {
LAB_0090e8fc:
      puVar12 = (undefined *)0x0;
      goto LAB_0090e900;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_0090e8fc;
    uVar4 = (ulong)*(ushort *)(lVar10 + 8);
    DAT_04cf01f4 = CONCAT44(0xfffffffe,(undefined4)DAT_04cf01f4);
    if (uVar4 == 0) goto LAB_0090e8fc;
    puVar8 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar8[-1] != 0x977adfce) {
      puVar8 = puVar8 + 2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) goto LAB_0090e8fc;
    }
    uVar6 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar6 = *puVar8;
    }
    DAT_04cf01f4 = CONCAT44(uVar6,(undefined4)DAT_04cf01f4);
    uVar3 = *puVar9;
  } while (uVar3 != 0);
LAB_0090e814:
  param_1[2] = PTR_DAT_04c47d20;
  uVar14 = 0;
LAB_0090e820:
  uVar17 = uVar14;
  uVar15 = 0;
  if (*puVar9 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    cVar13 = DAT_04cf01e0;
    do {
      if (cVar13 != '\0') {
        if (DAT_04cf01e4 < 0) {
          if (DAT_04cf01e4._4_4_ != 0xffffffff) goto LAB_0090e9c8;
          goto LAB_0090e874;
        }
        if ((undefined4 *)((ulong)DAT_04cf01e4._4_4_ + (long)puVar9) == (undefined4 *)0x0) {
LAB_0090e9c8:
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)((ulong)DAT_04cf01e4._4_4_ + (long)puVar9);
        }
LAB_0090e9cc:
        uVar3 = *puVar9;
        if (uVar3 == 0) goto LAB_0090ea80;
        uVar6 = (uint)DAT_04cf01e4;
        goto LAB_0090e9f0;
      }
      cVar13 = '\x01';
      DAT_04cf01e4 = -1;
      DAT_04cf01ec = -1;
      DAT_04cf01e0 = '\x01';
      DAT_04cf01f4 = 0xffffffffffffffff;
LAB_0090e874:
      lVar10 = (long)puVar9 - (ulong)*puVar9;
      if ((*puVar9 == 0) || (lVar10 == 0)) goto LAB_0090e9cc;
      lVar2 = 0xc;
      if (*(char *)(lVar10 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar10 == 0) goto LAB_0090e9cc;
      uVar4 = (ulong)*(ushort *)(lVar10 + 8);
      DAT_04cf01e4 = CONCAT44(0xfffffffe,(uint)DAT_04cf01e4);
      if (uVar4 == 0) goto LAB_0090e9cc;
      piVar7 = (int *)(lVar2 + lVar10 + 4);
      while (piVar7[-1] != -0x5fa1a061) {
        piVar7 = piVar7 + 2;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_0090e9cc;
      }
      iVar11 = 0;
      if (*piVar7 != -1) {
        iVar11 = *piVar7;
      }
      DAT_04cf01e4 = CONCAT44(iVar11,(uint)DAT_04cf01e4);
    } while (*puVar9 != 0);
    uVar16 = 0;
    uVar15 = 0;
  }
  goto LAB_0090ea80;
LAB_0090e9f0:
  if (-1 < (int)uVar6) {
    if ((undefined4 *)((long)puVar9 + (ulong)uVar6) != (undefined4 *)0x0) {
      uVar15 = *(undefined4 *)((long)puVar9 + (ulong)uVar6);
    }
    goto LAB_0090ea80;
  }
  if ((uVar6 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar3, lVar10 == 0))
  goto LAB_0090ea80;
  lVar2 = 0xc;
  if (*(char *)(lVar10 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar10 == 0) goto LAB_0090ea80;
  uVar4 = (ulong)*(ushort *)(lVar10 + 8);
  DAT_04cf01e4 = CONCAT44(DAT_04cf01e4._4_4_,0xfffffffe);
  if (uVar4 == 0) goto LAB_0090ea80;
  puVar8 = (uint *)(lVar2 + lVar10 + 4);
  while (puVar8[-1] != 0x68bed0ef) {
    puVar8 = puVar8 + 2;
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) goto LAB_0090ea80;
  }
  uVar6 = 0;
  if (*puVar8 != 0xffffffff) {
    uVar6 = *puVar8;
  }
  DAT_04cf01e4 = CONCAT44(DAT_04cf01e4._4_4_,uVar6);
  uVar3 = *puVar9;
  if (uVar3 == 0) goto LAB_0090ea80;
  goto LAB_0090e9f0;
  while( true ) {
    if (uVar6 != 0xffffffff) goto LAB_0090e820;
    lVar10 = (long)puVar9 - (ulong)uVar3;
    if (lVar10 == 0) goto LAB_0090e820;
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_0090e820;
    uVar4 = (ulong)*(ushort *)(lVar10 + 8);
    DAT_04cf01ec = CONCAT44(DAT_04cf01ec._4_4_,0xfffffffe);
    if (uVar4 == 0) goto LAB_0090e820;
    puVar8 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar8[-1] != 0x85e476d) {
      puVar8 = puVar8 + 2;
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) goto LAB_0090e820;
    }
    uVar6 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar6 = *puVar8;
    }
    DAT_04cf01ec = CONCAT44(DAT_04cf01ec._4_4_,uVar6);
    uVar3 = *puVar9;
    if (uVar3 == 0) break;
LAB_0090e944:
    if (-1 < (int)uVar6) {
      if ((undefined4 *)((long)puVar9 + (ulong)uVar6) != (undefined4 *)0x0) {
        uVar14 = *(undefined4 *)((long)puVar9 + (ulong)uVar6);
      }
      goto LAB_0090e820;
    }
  }
LAB_0090ea80:
  *(undefined4 *)(param_1 + 3) = uVar17;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar16;
  *(undefined4 *)(param_1 + 4) = uVar15;
LAB_0090e75c:
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
  return;
}

