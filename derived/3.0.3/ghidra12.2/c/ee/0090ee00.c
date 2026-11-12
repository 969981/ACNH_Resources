
void FUN_0090ee00(undefined8 *param_1,long param_2,uint param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 uVar7;
  int *piVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined *puVar13;
  char cVar14;
  ulong uVar15;
  
  lVar10 = *(long *)(param_2 + 0x30);
  if (lVar10 == 0) {
LAB_0090efa8:
    puVar13 = PTR_DAT_04bb2020 + 0x10;
    *param_1 = 0xffff;
    param_1[1] = puVar13;
    uVar12 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    param_1[2] = uVar12;
    param_1[3] = puVar13;
    param_1[6] = uVar12;
    param_1[4] = uVar12;
    param_1[5] = puVar13;
    return;
  }
  if ((int)*(uint *)(lVar10 + 0x1c0) < 1) {
    if ((((*(long *)(lVar10 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar10 + 200) &&
         (*(char *)(*(long *)(lVar10 + 0xd0) + (long)(int)param_3) == '\0')))) ||
       (((*puVar9 <= param_3 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_0090efa8;
    iVar11 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * param_3 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(lVar10 + 0x1c0) <= param_3) goto LAB_0090efa8;
    if (*(uint *)(lVar10 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar10 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar9 == (uint *)0x0) goto LAB_0090efa8;
  puVar13 = PTR_DAT_04bb2020 + 0x10;
  uVar12 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  uVar4 = *puVar9;
  param_1[1] = puVar13;
  param_1[3] = puVar13;
  param_1[4] = uVar12;
  param_1[5] = puVar13;
  param_1[6] = uVar12;
  if (uVar4 != 0) {
    cVar14 = DAT_04cf0210;
    do {
      puVar6 = (uint *)(ulong)uVar4;
      if (cVar14 != '\0') {
        if ((int)DAT_04cf0214 < 0) {
          if ((int)DAT_04cf0214 == -1) {
            uVar7 = 0;
            if (puVar6 != (uint *)0x0) goto LAB_0090eec8;
          }
          else {
LAB_0090efe8:
            uVar7 = 0;
          }
        }
        else {
          puVar1 = (undefined2 *)((DAT_04cf0214 & 0xffffffff) + (long)puVar9);
          if (puVar1 == (undefined2 *)0x0) goto LAB_0090efe8;
          uVar7 = *puVar1;
        }
LAB_0090efec:
        uVar4 = *puVar9;
        *(undefined2 *)param_1 = uVar7;
        if (uVar4 == 0) goto LAB_0090f084;
        uVar5 = (uint)DAT_04cf021c;
        goto LAB_0090f014;
      }
      DAT_04cf0214 = 0xffffffffffffffff;
      DAT_04cf021c = 0xffffffffffffffff;
      cVar14 = '\x01';
      DAT_04cf0224 = 0xffffffff;
      puVar6 = (uint *)(ulong)*puVar9;
      DAT_04cf0210 = '\x01';
      uVar7 = 0;
      if (puVar6 == (uint *)0x0) goto LAB_0090efec;
LAB_0090eec8:
      uVar7 = 0;
      if (puVar9 == puVar6) goto LAB_0090efec;
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + (lVar10 - (long)puVar6);
      uVar7 = 0;
      if (lVar10 == 0) goto LAB_0090efec;
      uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
      DAT_04cf0214 = CONCAT44(DAT_04cf0214._4_4_,0xfffffffe);
      if (uVar15 == 0) goto LAB_0090efe8;
      piVar8 = (int *)(lVar10 + 4);
      while (piVar8[-1] != 0x54706054) {
        piVar8 = piVar8 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_0090efe8;
      }
      iVar11 = 0;
      if (*piVar8 != -1) {
        iVar11 = *piVar8;
      }
      DAT_04cf0214 = CONCAT44(DAT_04cf0214._4_4_,iVar11);
      uVar4 = *puVar9;
    } while (uVar4 != 0);
  }
  *(undefined2 *)param_1 = 0;
  goto LAB_0090f084;
  while( true ) {
    if ((uVar5 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar4, lVar10 == 0))
    goto LAB_0090f158;
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_0090f158;
    uVar15 = (ulong)*(ushort *)(lVar10 + 8);
    DAT_04cf021c = CONCAT44(0xfffffffe,(uint)DAT_04cf021c);
    if (uVar15 == 0) goto LAB_0090f158;
    puVar6 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar6[-1] != 0xdcfb52e8) {
      puVar6 = puVar6 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_0090f158;
    }
    uVar5 = 0;
    if (*puVar6 != 0xffffffff) {
      uVar5 = *puVar6;
    }
    DAT_04cf021c = CONCAT44(uVar5,(uint)DAT_04cf021c);
    uVar4 = *puVar9;
    if (uVar4 == 0) break;
LAB_0090f0d4:
    if (-1 < (int)uVar5) {
      puVar13 = (undefined *)((long)puVar9 + (ulong)uVar5);
      goto LAB_0090f15c;
    }
  }
  puVar13 = (undefined *)0x0;
  param_1[4] = PTR_DAT_04c47d40;
  goto LAB_0090f238;
LAB_0090f158:
  puVar13 = (undefined *)0x0;
  goto LAB_0090f15c;
LAB_0090f014:
  do {
    if (-1 < (int)uVar5) {
      puVar13 = (undefined *)((long)puVar9 + (ulong)uVar5);
LAB_0090f09c:
      uVar4 = *puVar9;
      puVar3 = PTR_DAT_04c47d38;
      if (puVar13 != (undefined *)0x0) {
        puVar3 = puVar13;
      }
      param_1[2] = puVar3;
      if (uVar4 == 0) goto LAB_0090f158;
      uVar5 = DAT_04cf021c._4_4_;
      goto LAB_0090f0d4;
    }
    if ((uVar5 != 0xffffffff) || (lVar10 = (long)puVar9 - (ulong)uVar4, lVar10 == 0)) {
LAB_0090f098:
      puVar13 = (undefined *)0x0;
      goto LAB_0090f09c;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_0090f098;
    uVar15 = (ulong)*(ushort *)(lVar10 + 8);
    DAT_04cf021c = CONCAT44(DAT_04cf021c._4_4_,0xfffffffe);
    if (uVar15 == 0) goto LAB_0090f098;
    puVar6 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar6[-1] != 0x977adfce) {
      puVar6 = puVar6 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_0090f098;
    }
    uVar5 = 0;
    if (*puVar6 != 0xffffffff) {
      uVar5 = *puVar6;
    }
    DAT_04cf021c = CONCAT44(DAT_04cf021c._4_4_,uVar5);
    uVar4 = *puVar9;
  } while (uVar4 != 0);
LAB_0090f084:
  puVar13 = (undefined *)0x0;
  param_1[2] = PTR_DAT_04c47d38;
LAB_0090f15c:
  uVar4 = *puVar9;
  puVar3 = PTR_DAT_04c47d40;
  if (puVar13 != (undefined *)0x0) {
    puVar3 = puVar13;
  }
  param_1[4] = puVar3;
  if (uVar4 != 0) {
    cVar14 = DAT_04cf0210;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        DAT_04cf0214 = 0xffffffffffffffff;
        DAT_04cf021c = 0xffffffffffffffff;
        DAT_04cf0210 = '\x01';
        DAT_04cf0224 = 0xffffffff;
      }
      else {
        if (-1 < (int)DAT_04cf0224) {
          puVar13 = (undefined *)((ulong)DAT_04cf0224 + (long)puVar9);
          goto LAB_0090f238;
        }
        if (DAT_04cf0224 != 0xffffffff) break;
      }
      puVar6 = (uint *)(ulong)*puVar9;
      puVar13 = (undefined *)0x0;
      if ((*puVar9 == 0) || (puVar9 == puVar6)) goto LAB_0090f238;
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + (lVar10 - (long)puVar6);
      if (lVar10 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
      DAT_04cf0224 = 0xfffffffe;
      puVar13 = (undefined *)0x0;
      if (uVar15 == 0) goto LAB_0090f238;
      puVar6 = (uint *)(lVar10 + 4);
      while (puVar6[-1] != 0xdfa56cb9) {
        puVar6 = puVar6 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          puVar13 = (undefined *)0x0;
          goto LAB_0090f238;
        }
      }
      DAT_04cf0224 = 0;
      if (*puVar6 != 0xffffffff) {
        DAT_04cf0224 = *puVar6;
      }
    } while (*puVar9 != 0);
  }
  puVar13 = (undefined *)0x0;
LAB_0090f238:
  puVar3 = PTR_DAT_04c47d48;
  if (puVar13 != (undefined *)0x0) {
    puVar3 = puVar13;
  }
  param_1[6] = puVar3;
  return;
}

