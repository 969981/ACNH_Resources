
undefined8 FUN_01c260f0(long param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  ushort uVar12;
  float *pfVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar1 = DAT_0534bd38;
  lVar4 = DAT_052d1100;
  uVar7 = (param_4 & 0xffff) - (uint)*(ushort *)(param_1 + 0x408);
  if (*(uint *)(param_1 + 1000) <= uVar7) {
    return 0;
  }
  puVar6 = *(uint **)(*(long *)(param_1 + 0x3f0) + (long)(int)uVar7 * 8);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar7 = *puVar6;
  if (uVar7 == 0 || puVar6 == (uint *)(ulong)uVar7) {
LAB_01c26130:
    uVar7 = 0;
  }
  else {
    puVar14 = (uint *)((long)puVar6 - (long)(ulong)uVar7);
    uVar7 = 0;
    if (*puVar14 != 0) {
      uVar7 = puVar14[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar14 + lVar2 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar2 != 0) {
          uVar9 = 0;
          if ((ulong)uVar7 != 0) {
            uVar9 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < DAT_0534bd28) &&
             (uVar7 = (uint)*(ushort *)(DAT_0534bd30 + (long)(int)uVar9 * 2), uVar7 < 10))
          goto LAB_01c26134;
        }
      }
      goto LAB_01c26130;
    }
  }
LAB_01c26134:
  if (param_3 != uVar7) {
    return 0;
  }
  uVar7 = *puVar6;
  if (uVar7 == 0 || puVar6 == (uint *)(ulong)uVar7) {
LAB_01c26248:
    uVar12 = 0;
  }
  else {
    puVar14 = (uint *)((long)puVar6 - (long)(ulong)uVar7);
    if (((*puVar14 == 0) || (uVar7 = puVar14[1], uVar7 == 0)) || ((ulong)(ushort)puVar14[2] == 0))
    goto LAB_01c26248;
    lVar2 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar14 + lVar2 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar2 == 0) goto LAB_01c26248;
    uVar9 = 0;
    if ((ulong)uVar7 != 0) {
      uVar9 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar7);
    }
    if (*puVar14 <= uVar9) {
      uVar9 = 0xffffffff;
    }
    if ((DAT_0534bd38 <= uVar9) ||
       (uVar12 = *(ushort *)(DAT_0534bd40 + (long)(int)uVar9 * 2), 2 < uVar12)) goto LAB_01c26248;
  }
  if (param_3 - 3 < 3) {
    if (*(char *)(DAT_052d1100 + 0x80c) == '\0') {
      bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      *(undefined1 *)(DAT_052d1100 + 0x80c) = 1;
      uVar7 = (uint)(bVar3 - 0x12 < 0xfffffff4);
      *(uint *)(lVar4 + 0x808) = uVar7;
    }
    else {
      uVar7 = *(uint *)(DAT_052d1100 + 0x808);
    }
    if (uVar12 != 0) {
      if (uVar12 == 1) {
        if (uVar7 != 0) {
          return 0;
        }
      }
      else if ((uVar12 != 2) || (uVar7 != 1)) {
        return 0;
      }
    }
  }
  uVar16 = 0;
  if (*puVar6 == 0) {
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    lVar4 = (long)puVar6 - (ulong)*puVar6;
    bVar5 = lVar4 != 0;
    if ((DAT_0534bd48 & 1) == 0) {
      DAT_0534bd48 = 1;
      DAT_0534bd7c = -1;
      DAT_0534bd4c = 0xffffffffffffffff;
      DAT_0534bd54 = -1;
      DAT_0534bd64._4_4_ = 0xffffffff;
      DAT_0534bd5c = -1;
      DAT_0534bd64 = 0xffffffffffffffff;
      DAT_0534bd6c = -1;
      DAT_0534bd74 = -1;
LAB_01c26344:
      if (bVar5) {
        uVar17 = 0;
        uVar7 = DAT_0534bd64._4_4_;
        do {
          if (uVar7 != 0xffffffff) goto LAB_01c263e4;
          lVar2 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar4 == 0) goto LAB_01c263e4;
          uVar11 = (ulong)*(ushort *)(lVar4 + 8);
          DAT_0534bd64 = CONCAT44(0xfffffffe,(uint)DAT_0534bd64);
          if (uVar11 == 0) goto LAB_01c263e4;
          puVar14 = (uint *)(lVar2 + lVar4 + 4);
          while (puVar14[-1] != 0x2633f2c1) {
            puVar14 = puVar14 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c263e4;
          }
          uVar7 = *puVar14;
          uVar9 = 0;
          if (uVar7 != 0xffffffff) {
            uVar9 = uVar7;
          }
          DAT_0534bd64 = CONCAT44(uVar9,(uint)DAT_0534bd64);
        } while ((int)uVar9 < 0);
        puVar8 = (undefined4 *)((long)puVar6 + (ulong)uVar9);
        if (puVar8 != (undefined4 *)0x0) goto LAB_01c26308;
LAB_01c263e0:
        uVar17 = 0;
        goto LAB_01c263e4;
      }
      uVar17 = 0;
      uVar18 = 0;
      uVar7 = (uint)DAT_0534bd6c;
      if ((int)(uint)DAT_0534bd6c < 0) goto LAB_01c26494;
joined_r0x01c2648c:
      if ((undefined4 *)((long)puVar6 + (ulong)uVar7) == (undefined4 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)((long)puVar6 + (ulong)uVar7);
      }
    }
    else {
      if ((long)DAT_0534bd64 < 0) goto LAB_01c26344;
      puVar8 = (undefined4 *)((long)puVar6 + (ulong)DAT_0534bd64._4_4_);
      if (puVar8 == (undefined4 *)0x0) goto LAB_01c263e0;
LAB_01c26308:
      uVar17 = *puVar8;
LAB_01c263e4:
      uVar7 = (uint)DAT_0534bd6c;
      if (-1 < (int)(uint)DAT_0534bd6c) goto joined_r0x01c2648c;
      uVar18 = 0;
      uVar9 = (uint)DAT_0534bd6c;
      if (bVar5) {
        do {
          if (uVar9 != 0xffffffff) goto LAB_01c26494;
          lVar2 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar4 == 0) goto LAB_01c26494;
          uVar11 = (ulong)*(ushort *)(lVar4 + 8);
          DAT_0534bd6c = CONCAT44(DAT_0534bd6c._4_4_,0xfffffffe);
          if (uVar11 == 0) goto LAB_01c26494;
          puVar14 = (uint *)(lVar2 + lVar4 + 4);
          while (puVar14[-1] != 0x1b53db71) {
            puVar14 = puVar14 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c26494;
          }
          uVar9 = *puVar14;
          uVar7 = 0;
          if (uVar9 != 0xffffffff) {
            uVar7 = uVar9;
          }
          DAT_0534bd6c = CONCAT44(DAT_0534bd6c._4_4_,uVar7);
        } while ((int)uVar7 < 0);
        goto joined_r0x01c2648c;
      }
    }
LAB_01c26494:
    if (DAT_0534bd6c < 0) {
      uVar7 = DAT_0534bd6c._4_4_;
      if (!bVar5) goto LAB_01c264b8;
      do {
        if (uVar7 != 0xffffffff) goto LAB_01c264b8;
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 == 0) goto LAB_01c264b8;
        uVar11 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_0534bd6c = CONCAT44(0xfffffffe,(uint)DAT_0534bd6c);
        if (uVar11 == 0) goto LAB_01c264b8;
        puVar14 = (uint *)(lVar2 + lVar4 + 4);
        while (puVar14[-1] != 0x5cf3a1a1) {
          puVar14 = puVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c264b8;
        }
        uVar7 = *puVar14;
        uVar9 = 0;
        if (uVar7 != 0xffffffff) {
          uVar9 = uVar7;
        }
        DAT_0534bd6c = CONCAT44(uVar9,(uint)DAT_0534bd6c);
      } while ((int)uVar9 < 0);
    }
    else {
      uVar9 = DAT_0534bd6c._4_4_;
    }
    if ((undefined4 *)((long)puVar6 + (ulong)uVar9) != (undefined4 *)0x0) {
      uVar16 = *(undefined4 *)((long)puVar6 + (ulong)uVar9);
    }
  }
LAB_01c264b8:
  *param_2 = uVar17;
  param_2[1] = uVar18;
  param_2[2] = uVar16;
  puVar14 = (uint *)(ulong)*puVar6;
  if (*puVar6 == 0) {
LAB_01c26530:
    uVar16 = 0;
  }
  else {
    if ((DAT_0534bd48 & 1) == 0) {
      DAT_0534bd48 = 1;
      DAT_0534bd7c = -1;
      DAT_0534bd4c = 0xffffffffffffffff;
      DAT_0534bd54 = -1;
      DAT_0534bd64._0_4_ = 0xffffffff;
      DAT_0534bd5c = -1;
      DAT_0534bd64 = 0xffffffffffffffff;
      DAT_0534bd6c = -1;
      DAT_0534bd74 = -1;
LAB_01c26528:
      uVar7 = (uint)DAT_0534bd64;
      if (puVar6 != puVar14) {
        do {
          if (uVar7 != 0xffffffff) goto LAB_01c26530;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar14);
          if (lVar4 == 0) goto LAB_01c26530;
          uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          DAT_0534bd64 = CONCAT44(DAT_0534bd64._4_4_,0xfffffffe);
          if (uVar11 == 0) goto LAB_01c26530;
          puVar15 = (uint *)(lVar4 + 4);
          while (puVar15[-1] != 0xd200ffd3) {
            puVar15 = puVar15 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c26530;
          }
          uVar7 = *puVar15;
          uVar9 = 0;
          if (uVar7 != 0xffffffff) {
            uVar9 = uVar7;
          }
          DAT_0534bd64 = CONCAT44(DAT_0534bd64._4_4_,uVar9);
        } while ((int)uVar9 < 0);
        pfVar13 = (float *)((long)puVar6 + (ulong)uVar9);
        if (pfVar13 != (float *)0x0) goto LAB_01c264e4;
      }
      goto LAB_01c26530;
    }
    if ((int)(uint)DAT_0534bd64 < 0) goto LAB_01c26528;
    pfVar13 = (float *)((long)puVar6 + (DAT_0534bd64 & 0xffffffff));
    if (pfVar13 == (float *)0x0) goto LAB_01c26530;
LAB_01c264e4:
    uVar16 = (undefined4)(long)(*pfVar13 * 11930465.0);
  }
  param_2[3] = uVar16;
  uVar9 = 0;
  uVar7 = *puVar6;
  if ((uVar7 != 0) && (puVar6 != (uint *)(ulong)uVar7)) {
    puVar14 = (uint *)((long)puVar6 - (long)(ulong)uVar7);
    uVar9 = 0;
    if (*puVar14 != 0) {
      uVar7 = puVar14[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar4 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar14 + lVar4 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar4 != 0) {
          uVar9 = 0;
          if ((ulong)uVar7 != 0) {
            uVar9 = (uint)((ulong)((long)puVar6 - lVar4) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < uVar1) &&
             (uVar9 = (uint)*(ushort *)(DAT_0534bd40 + (long)(int)uVar9 * 2), uVar9 < 3))
          goto LAB_01c265bc;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01c265bc:
  param_2[0x32] = uVar9;
  puVar14 = (uint *)(ulong)*puVar6;
  if (*puVar6 != 0) {
    if ((DAT_0534bd48 & 1) == 0) {
      DAT_0534bd48 = 1;
      DAT_0534bd7c = -1;
      DAT_0534bd4c = 0xffffffffffffffff;
      DAT_0534bd54 = -1;
      DAT_0534bd74._4_4_ = 0xffffffff;
      DAT_0534bd5c = -1;
      DAT_0534bd64 = 0xffffffffffffffff;
      DAT_0534bd6c = -1;
      DAT_0534bd74 = -1;
LAB_01c2661c:
      uVar7 = DAT_0534bd74._4_4_;
      if (puVar6 == puVar14) {
LAB_01c26624:
        puVar14 = (uint *)0x0;
      }
      else {
        do {
          if (uVar7 != 0xffffffff) goto LAB_01c26624;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar14);
          if (lVar4 == 0) goto LAB_01c26624;
          uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          DAT_0534bd74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd74);
          if (uVar11 == 0) goto LAB_01c26624;
          puVar15 = (uint *)(lVar4 + 4);
          while (puVar15[-1] != 0x91eaeedd) {
            puVar15 = puVar15 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c26624;
          }
          uVar7 = *puVar15;
          uVar1 = 0;
          if (uVar7 != 0xffffffff) {
            uVar1 = uVar7;
          }
          DAT_0534bd74 = CONCAT44(uVar1,(undefined4)DAT_0534bd74);
        } while ((int)uVar1 < 0);
        pcVar10 = (char *)((long)puVar6 + (ulong)uVar1);
        if (pcVar10 != (char *)0x0) goto LAB_01c265e4;
        puVar14 = (uint *)0x0;
      }
    }
    else {
      if (DAT_0534bd74 < 0) goto LAB_01c2661c;
      pcVar10 = (char *)((long)puVar6 + (ulong)DAT_0534bd74._4_4_);
      puVar14 = (uint *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_01c26628;
LAB_01c265e4:
      puVar14 = (uint *)(ulong)(*pcVar10 != '\0');
    }
  }
LAB_01c26628:
  *(char *)(param_2 + 0x33) = (char)puVar14;
  puVar14 = (uint *)(ulong)*puVar6;
  if (*puVar6 != 0) {
    if ((DAT_0534bd48 & 1) == 0) {
      DAT_0534bd48 = 1;
      DAT_0534bd7c = -1;
      DAT_0534bd4c = 0xffffffffffffffff;
      DAT_0534bd54 = -1;
      DAT_0534bd7c._4_4_ = 0xffffffff;
      DAT_0534bd5c = -1;
      DAT_0534bd64 = 0xffffffffffffffff;
      DAT_0534bd6c = -1;
      DAT_0534bd74 = -1;
LAB_01c26688:
      uVar7 = DAT_0534bd7c._4_4_;
      if (puVar6 == puVar14) {
LAB_01c26690:
        puVar14 = (uint *)0x0;
      }
      else {
        do {
          if (uVar7 != 0xffffffff) goto LAB_01c26690;
          lVar4 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar6 + (lVar4 - (long)puVar14);
          if (lVar4 == 0) goto LAB_01c26690;
          uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          DAT_0534bd7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd7c);
          if (uVar11 == 0) goto LAB_01c26690;
          puVar15 = (uint *)(lVar4 + 4);
          while (puVar15[-1] != 0xf58109f5) {
            puVar15 = puVar15 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c26690;
          }
          uVar7 = *puVar15;
          uVar1 = 0;
          if (uVar7 != 0xffffffff) {
            uVar1 = uVar7;
          }
          DAT_0534bd7c = CONCAT44(uVar1,(undefined4)DAT_0534bd7c);
        } while ((int)uVar1 < 0);
        pcVar10 = (char *)((long)puVar6 + (ulong)uVar1);
        if (pcVar10 != (char *)0x0) goto LAB_01c26650;
        puVar14 = (uint *)0x0;
      }
    }
    else {
      if (DAT_0534bd7c < 0) goto LAB_01c26688;
      pcVar10 = (char *)((long)puVar6 + (ulong)DAT_0534bd7c._4_4_);
      puVar14 = (uint *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_01c26694;
LAB_01c26650:
      puVar14 = (uint *)(ulong)(*pcVar10 != '\0');
    }
  }
LAB_01c26694:
  *(char *)((long)param_2 + 0xcd) = (char)puVar14;
  uVar16 = 0;
  if (*puVar6 == 0) {
    uVar18 = 0;
    uVar17 = 0;
    goto LAB_01c26af8;
  }
  lVar4 = (long)puVar6 - (ulong)*puVar6;
  bVar5 = lVar4 != 0;
  if ((DAT_0534bd48 & 1) == 0) {
    DAT_0534bd54._4_4_ = 0xffffffff;
    DAT_0534bd48 = 1;
    DAT_0534bd4c = 0xffffffffffffffff;
    DAT_0534bd54 = -1;
    DAT_0534bd7c = -1;
    DAT_0534bd5c = -1;
    DAT_0534bd64 = 0xffffffffffffffff;
    DAT_0534bd6c = -1;
    DAT_0534bd74 = -1;
LAB_01c26704:
    if (bVar5) {
      uVar17 = 0;
      uVar7 = DAT_0534bd54._4_4_;
      do {
        if (uVar7 != 0xffffffff) goto LAB_01c26960;
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 == 0) goto LAB_01c26960;
        uVar11 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_0534bd54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd54);
        if (uVar11 == 0) goto LAB_01c26960;
        puVar14 = (uint *)(lVar2 + lVar4 + 4);
        while (puVar14[-1] != 0x1f3893e5) {
          puVar14 = puVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c26960;
        }
        uVar7 = *puVar14;
        uVar1 = 0;
        if (uVar7 != 0xffffffff) {
          uVar1 = uVar7;
        }
        DAT_0534bd54 = CONCAT44(uVar1,(undefined4)DAT_0534bd54);
      } while ((int)uVar1 < 0);
      puVar8 = (undefined4 *)((long)puVar6 + (ulong)uVar1);
      if (puVar8 != (undefined4 *)0x0) goto LAB_01c266c8;
LAB_01c2695c:
      uVar17 = 0;
      goto LAB_01c26960;
    }
    uVar17 = 0;
    uVar7 = (uint)DAT_0534bd5c;
joined_r0x01c26718:
    uVar18 = 0;
    if (-1 < (int)uVar7) goto LAB_01c2696c;
  }
  else {
    if (DAT_0534bd54 < 0) goto LAB_01c26704;
    puVar8 = (undefined4 *)((long)puVar6 + (ulong)DAT_0534bd54._4_4_);
    if (puVar8 == (undefined4 *)0x0) goto LAB_01c2695c;
LAB_01c266c8:
    uVar17 = *puVar8;
LAB_01c26960:
    uVar7 = (uint)DAT_0534bd5c;
    if ((int)(uint)DAT_0534bd5c < 0) {
      uVar18 = 0;
      if ((uint)DAT_0534bd5c == 0xffffffff && bVar5) {
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 != 0) {
          uVar11 = (ulong)*(ushort *)(lVar4 + 8);
          DAT_0534bd5c = CONCAT44(DAT_0534bd5c._4_4_,0xfffffffe);
          if (uVar11 != 0) {
            puVar14 = (uint *)(lVar2 + lVar4 + 4);
            do {
              if (puVar14[-1] == 0x2258ba55) {
                uVar7 = 0;
                if (*puVar14 != 0xffffffff) {
                  uVar7 = *puVar14;
                }
                DAT_0534bd5c = CONCAT44(DAT_0534bd5c._4_4_,uVar7);
                goto joined_r0x01c26718;
              }
              puVar14 = puVar14 + 2;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
    else {
LAB_01c2696c:
      if ((undefined4 *)((long)puVar6 + (ulong)uVar7) == (undefined4 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)((long)puVar6 + (ulong)uVar7);
      }
    }
  }
  uVar7 = DAT_0534bd5c._4_4_;
  if (DAT_0534bd5c < 0) {
    if (DAT_0534bd5c._4_4_ == 0xffffffff && bVar5) {
      lVar2 = 0xc;
      if (*(char *)(lVar4 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar4 != 0) {
        uVar11 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_0534bd5c = CONCAT44(0xfffffffe,(uint)DAT_0534bd5c);
        if (uVar11 != 0) {
          puVar14 = (uint *)(lVar2 + lVar4 + 4);
          do {
            if (puVar14[-1] == 0x65f8c085) {
              uVar7 = 0;
              if (*puVar14 != 0xffffffff) {
                uVar7 = *puVar14;
              }
              DAT_0534bd5c = CONCAT44(uVar7,(uint)DAT_0534bd5c);
              if (-1 < (int)uVar7) goto LAB_01c269f4;
              break;
            }
            puVar14 = puVar14 + 2;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
  }
  else {
LAB_01c269f4:
    if ((undefined4 *)((long)puVar6 + (ulong)uVar7) != (undefined4 *)0x0) {
      uVar16 = *(undefined4 *)((long)puVar6 + (ulong)uVar7);
    }
  }
LAB_01c26af8:
  param_2[0x37] = uVar17;
  param_2[0x38] = uVar18;
  param_2[0x39] = uVar16;
  return 1;
}

