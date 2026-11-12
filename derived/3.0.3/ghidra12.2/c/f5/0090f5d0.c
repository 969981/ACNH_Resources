
void FUN_0090f5d0(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 uVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  
  puVar10 = PTR_PTR_04bb2238;
  lVar11 = *(long *)(param_2 + 0x40);
  if (lVar11 == 0) {
LAB_0090f768:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    *param_1 = 0xffff;
    param_1[1] = puVar1;
    uVar9 = *(undefined8 *)(puVar10 + 8);
    param_1[2] = uVar9;
    param_1[3] = puVar1;
    param_1[4] = uVar9;
    return;
  }
  if ((int)*(uint *)(lVar11 + 0x1c0) < 1) {
    if ((((*(long *)(lVar11 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar11 + 200) &&
         (*(char *)(*(long *)(lVar11 + 0xd0) + (long)(int)param_3) == '\0')))) ||
       (((*puVar8 <= param_3 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_0090f768;
    iVar13 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * param_3 + (uint)(ushort)puVar8[2] * 8 + iVar13) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(lVar11 + 0x1c0) <= param_3) goto LAB_0090f768;
    if (*(uint *)(lVar11 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar8 == (uint *)0x0) goto LAB_0090f768;
  uVar9 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  puVar10 = PTR_DAT_04bb2020 + 0x10;
  param_1[1] = puVar10;
  uVar4 = *puVar8;
  param_1[3] = puVar10;
  param_1[4] = uVar9;
  if (uVar4 != 0) {
    cVar12 = DAT_04cf023c;
    do {
      puVar5 = (uint *)(ulong)uVar4;
      if (cVar12 != '\0') {
        if ((int)DAT_04cf0240 < 0) {
          if ((int)DAT_04cf0240 == -1) {
            uVar6 = 0;
            if (puVar5 != (uint *)0x0) goto LAB_0090f690;
          }
          else {
LAB_0090f794:
            uVar6 = 0;
          }
        }
        else {
          puVar2 = (undefined2 *)((DAT_04cf0240 & 0xffffffff) + (long)puVar8);
          if (puVar2 == (undefined2 *)0x0) goto LAB_0090f794;
          uVar6 = *puVar2;
        }
LAB_0090f798:
        uVar4 = *puVar8;
        *(undefined2 *)param_1 = uVar6;
        if (uVar4 == 0) goto LAB_0090f834;
        uVar15 = (uint)DAT_04cf0248;
        goto LAB_0090f7c0;
      }
      DAT_04cf0240 = 0xffffffffffffffff;
      DAT_04cf0248 = 0xffffffffffffffff;
      cVar12 = '\x01';
      puVar5 = (uint *)(ulong)*puVar8;
      DAT_04cf023c = '\x01';
      uVar6 = 0;
      if (puVar5 == (uint *)0x0) goto LAB_0090f798;
LAB_0090f690:
      uVar6 = 0;
      if (puVar8 == puVar5) goto LAB_0090f798;
      lVar11 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar8 + (lVar11 - (long)puVar5);
      uVar6 = 0;
      if (lVar11 == 0) goto LAB_0090f798;
      uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
      DAT_04cf0240 = CONCAT44(DAT_04cf0240._4_4_,0xfffffffe);
      if (uVar14 == 0) goto LAB_0090f794;
      piVar7 = (int *)(lVar11 + 4);
      while (piVar7[-1] != 0x54706054) {
        piVar7 = piVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0090f794;
      }
      iVar13 = 0;
      if (*piVar7 != -1) {
        iVar13 = *piVar7;
      }
      DAT_04cf0240 = CONCAT44(DAT_04cf0240._4_4_,iVar13);
      uVar4 = *puVar8;
    } while (uVar4 != 0);
  }
  *(undefined2 *)param_1 = 0;
  goto LAB_0090f834;
  while( true ) {
    if (uVar15 != 0xffffffff) goto LAB_0090f8fc;
    lVar11 = (long)puVar8 - (ulong)uVar4;
    puVar10 = (undefined *)0x0;
    if (lVar11 == 0) break;
    lVar3 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar11 == 0) goto LAB_0090f8fc;
    uVar14 = (ulong)*(ushort *)(lVar11 + 8);
    DAT_04cf0248 = CONCAT44(0xfffffffe,(uint)DAT_04cf0248);
    puVar10 = (undefined *)0x0;
    if (uVar14 == 0) break;
    puVar5 = (uint *)(lVar3 + lVar11 + 4);
    while (puVar5[-1] != 0xc05200e1) {
      puVar5 = puVar5 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) {
        puVar10 = (undefined *)0x0;
        goto LAB_0090f900;
      }
    }
    puVar10 = (undefined *)0x0;
    uVar15 = 0;
    if (*puVar5 != 0xffffffff) {
      uVar15 = *puVar5;
    }
    DAT_04cf0248 = CONCAT44(uVar15,(uint)DAT_04cf0248);
    uVar4 = *puVar8;
    if (uVar4 == 0) break;
LAB_0090f884:
    if (-1 < (int)uVar15) {
      puVar10 = (undefined *)((long)puVar8 + (ulong)uVar15);
      break;
    }
  }
  goto LAB_0090f900;
LAB_0090f8fc:
  puVar10 = (undefined *)0x0;
  goto LAB_0090f900;
LAB_0090f7c0:
  do {
    if (-1 < (int)uVar15) {
      puVar10 = (undefined *)((long)puVar8 + (ulong)uVar15);
LAB_0090f84c:
      uVar4 = *puVar8;
      puVar1 = PTR_DAT_04c47d60;
      if (puVar10 != (undefined *)0x0) {
        puVar1 = puVar10;
      }
      param_1[2] = puVar1;
      if (uVar4 == 0) goto LAB_0090f8fc;
      uVar15 = DAT_04cf0248._4_4_;
      goto LAB_0090f884;
    }
    if ((uVar15 != 0xffffffff) || (lVar11 = (long)puVar8 - (ulong)uVar4, lVar11 == 0)) {
LAB_0090f848:
      puVar10 = (undefined *)0x0;
      goto LAB_0090f84c;
    }
    lVar3 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar11 == 0) goto LAB_0090f848;
    uVar14 = (ulong)*(ushort *)(lVar11 + 8);
    DAT_04cf0248 = CONCAT44(DAT_04cf0248._4_4_,0xfffffffe);
    if (uVar14 == 0) goto LAB_0090f848;
    puVar5 = (uint *)(lVar3 + lVar11 + 4);
    while (puVar5[-1] != 0x977adfce) {
      puVar5 = puVar5 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_0090f848;
    }
    uVar15 = 0;
    if (*puVar5 != 0xffffffff) {
      uVar15 = *puVar5;
    }
    DAT_04cf0248 = CONCAT44(DAT_04cf0248._4_4_,uVar15);
    uVar4 = *puVar8;
  } while (uVar4 != 0);
LAB_0090f834:
  puVar10 = (undefined *)0x0;
  param_1[2] = PTR_DAT_04c47d60;
LAB_0090f900:
  puVar1 = PTR_DAT_04c47d68;
  if (puVar10 != (undefined *)0x0) {
    puVar1 = puVar10;
  }
  param_1[4] = puVar1;
  return;
}

