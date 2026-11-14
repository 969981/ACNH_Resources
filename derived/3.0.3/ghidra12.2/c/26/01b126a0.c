
void FUN_01b126a0(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  undefined2 uVar13;
  ulong uVar14;
  
  puVar6 = PTR_DAT_04bbfff0;
  puVar5 = PTR_DAT_04bbffe8;
  puVar9 = *(uint **)(param_2 + 0x10);
  uVar8 = 0;
  if (puVar9 != (uint *)0x0) {
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             uVar8 = (uint)uVar4, uVar4 < 0x5b6)) goto LAB_01b12734;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01b12734:
  if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e8 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(DAT_0532a7e8 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01b12868;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
    if (puVar9 != (uint *)0x0) goto LAB_01b12770;
    uVar8 = 0;
  }
  else {
    if (uVar8 < *(uint *)(DAT_0532a7e8 + 0x1c0)) {
      if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar8) {
        uVar8 = 0;
      }
      puVar9 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar8 * 8);
      uVar8 = 0;
      if (puVar9 == (uint *)0x0) goto LAB_01b1286c;
LAB_01b12770:
      uVar8 = *puVar9;
      if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
        puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
        if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar11[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar8 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0310) &&
               (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0310 + 8) + (long)(int)uVar2 * 2),
               uVar8 = (uint)uVar4, uVar4 < 0x54)) goto LAB_01b1286c;
          }
        }
      }
    }
LAB_01b12868:
    uVar8 = 0;
  }
LAB_01b1286c:
  if ((int)*(uint *)(DAT_0532a820 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a820 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a820 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(DAT_0532a820 + 200) &&
         (*(char *)(*(long *)(DAT_0532a820 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01b129e8;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a820 + 0x1c0) <= uVar8) goto LAB_01b129e8;
    if (*(uint *)(DAT_0532a820 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a820 + 0x1b8) + (ulong)uVar8 * 8);
  }
  if (puVar9 != (uint *)0x0) {
    if (*puVar9 == 0) {
LAB_01b12a10:
      uVar13 = 0xfffe;
LAB_01b12a14:
      *(undefined2 *)param_1 = uVar13;
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      FUN_0277d4ac(param_1);
      return;
    }
    cVar12 = *PTR_DAT_04bbffe8;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar6 + 0x14);
        if (-1 < (int)uVar8) {
          if ((undefined2 *)((ulong)uVar8 + (long)puVar9) != (undefined2 *)0x0) {
            uVar13 = *(undefined2 *)((ulong)uVar8 + (long)puVar9);
            goto LAB_01b12a14;
          }
          goto LAB_01b12a10;
        }
        if (uVar8 != 0xffffffff) goto LAB_01b12a10;
      }
      puVar11 = (uint *)(ulong)*puVar9;
      uVar13 = 0xfffe;
      if ((*puVar9 == 0) || (puVar9 == puVar11)) goto LAB_01b12a14;
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_01b12a10;
      uVar14 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      if (uVar14 == 0) goto LAB_01b12a10;
      piVar7 = (int *)(lVar1 + 4);
      while (piVar7[-1] != 0x2ca34410) {
        piVar7 = piVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_01b12a10;
      }
      iVar10 = 0;
      if (*piVar7 != -1) {
        iVar10 = *piVar7;
      }
      *(int *)(puVar6 + 0x14) = iVar10;
      if (*puVar9 == 0) goto LAB_01b12a10;
    } while( true );
  }
LAB_01b129e8:
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar3;
  return;
}

