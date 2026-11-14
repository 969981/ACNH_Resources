
void FUN_016ce6a0(undefined2 *param_1,uint *param_2)

{
  undefined2 *__dest;
  undefined2 *__src;
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  undefined2 uVar10;
  ushort uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  uint local_38;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bbc450;
  puVar3 = PTR_DAT_04bbc448;
  if (*param_2 == 0) {
LAB_016ce7ac:
    uVar10 = 0;
  }
  else {
    cVar9 = *PTR_DAT_04bbc448;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar6) {
          if ((undefined2 *)((ulong)uVar6 + (long)param_2) == (undefined2 *)0x0) goto LAB_016ce7ac;
          uVar10 = *(undefined2 *)((ulong)uVar6 + (long)param_2);
          goto LAB_016ce7b0;
        }
        if (uVar6 != 0xffffffff) goto LAB_016ce7ac;
      }
      puVar14 = (uint *)(ulong)*param_2;
      uVar10 = 0;
      if ((*param_2 == 0) || (param_2 == puVar14)) goto LAB_016ce7b0;
      lVar8 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar14)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)param_2 + (lVar8 - (long)puVar14);
      if (lVar8 == 0) goto LAB_016ce7ac;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      uVar10 = 0;
      if (uVar13 == 0) goto LAB_016ce7b0;
      piVar15 = (int *)(lVar8 + 4);
      while (piVar15[-1] != 0x54706054) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar10 = 0;
          goto LAB_016ce7b0;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0xc) = iVar7;
    } while (*param_2 != 0);
    uVar10 = 0;
  }
LAB_016ce7b0:
  *param_1 = uVar10;
  *(undefined1 *)(param_1 + 1) = 1;
  if (*param_2 != 0) {
    cVar9 = *puVar3;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0x14);
        if (-1 < (int)uVar6) {
          puVar12 = (undefined2 *)((ulong)uVar6 + (long)param_2);
          goto LAB_016ce87c;
        }
        if (uVar6 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*param_2;
      puVar12 = (undefined2 *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar14)) goto LAB_016ce87c;
      lVar8 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar14)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)param_2 + (lVar8 - (long)puVar14);
      if (lVar8 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
      puVar12 = (undefined2 *)0x0;
      if (uVar13 == 0) goto LAB_016ce87c;
      piVar15 = (int *)(lVar8 + 4);
      while (piVar15[-1] != -0x54426bb7) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          puVar12 = (undefined2 *)0x0;
          goto LAB_016ce87c;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x14) = iVar7;
    } while (*param_2 != 0);
  }
  puVar12 = (undefined2 *)0x0;
LAB_016ce87c:
  puVar2 = PTR_PTR_04bbddd8;
  *(undefined1 *)((long)param_1 + 0x23) = 0;
  __dest = param_1 + 0xe;
  __src = *(undefined2 **)puVar2;
  if (puVar12 != (undefined2 *)0x0) {
    __src = puVar12;
  }
  *(undefined4 *)(param_1 + 0xc) = 8;
  *(undefined **)(param_1 + 4) = PTR_DAT_04bb6a30 + 0x10;
  *(undefined2 **)(param_1 + 8) = __dest;
  if (__dest != __src) {
    lVar8 = 0;
    do {
      if (*(char *)((long)__src + lVar8) == '\0') goto LAB_016ce900;
      if (*(char *)((long)__src + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_016ce900;
      }
      if (*(char *)((long)__src + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_016ce900;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_016ce900:
    iVar7 = (int)lVar8;
    if (6 < iVar7) {
      iVar7 = 7;
    }
    memcpy(__dest,__src,(long)iVar7);
    *(undefined1 *)((long)__dest + (long)iVar7) = 0;
  }
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined **)(param_1 + 4) = PTR_DAT_04bb3768 + 0x10;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)puVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  if (*param_2 == 0) {
LAB_016cea2c:
    bVar5 = false;
  }
  else {
    cVar9 = *puVar3;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0x20);
        if (-1 < (int)uVar6) {
          if ((char *)((ulong)uVar6 + (long)param_2) == (char *)0x0) goto LAB_016cea2c;
          bVar5 = *(char *)((ulong)uVar6 + (long)param_2) != '\0';
          goto LAB_016cea30;
        }
        if (uVar6 != 0xffffffff) goto LAB_016cea2c;
      }
      puVar14 = (uint *)(ulong)*param_2;
      bVar5 = false;
      if ((*param_2 == 0) || (param_2 == puVar14)) goto LAB_016cea30;
      lVar8 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar14)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)param_2 + (lVar8 - (long)puVar14);
      if (lVar8 == 0) goto LAB_016cea2c;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
      bVar5 = false;
      if (uVar13 == 0) goto LAB_016cea30;
      piVar15 = (int *)(lVar8 + 4);
      while (piVar15[-1] != -0xadf9240) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          bVar5 = false;
          goto LAB_016cea30;
        }
      }
      iVar7 = 0;
      if (*piVar15 != -1) {
        iVar7 = *piVar15;
      }
      *(int *)(puVar4 + 0x20) = iVar7;
    } while (*param_2 != 0);
    bVar5 = false;
  }
LAB_016cea30:
  *(bool *)(param_1 + 0x18) = bVar5;
  if (*param_2 == 0) {
LAB_016ceb0c:
    uVar11 = 0xffff;
LAB_016ceb10:
    local_38 = (uint)uVar11;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    puVar3 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_38);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        *(uint *)(param_1 + 0x14) = local_38;
        *(undefined4 *)(param_1 + 0x16) = local_34;
      }
    }
    return;
  }
  cVar9 = *puVar3;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(uint *)(puVar4 + 8);
      if (-1 < (int)uVar6) {
        if ((ushort *)((ulong)uVar6 + (long)param_2) != (ushort *)0x0) {
          uVar11 = *(ushort *)((ulong)uVar6 + (long)param_2);
          goto LAB_016ceb10;
        }
        goto LAB_016ceb0c;
      }
      if (uVar6 != 0xffffffff) goto LAB_016ceb0c;
    }
    puVar14 = (uint *)(ulong)*param_2;
    uVar11 = 0xffff;
    if ((*param_2 == 0) || (param_2 == puVar14)) goto LAB_016ceb10;
    lVar8 = 0xc;
    if (*(char *)((long)param_2 + (10 - (long)puVar14)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)param_2 + (lVar8 - (long)puVar14);
    if (lVar8 == 0) goto LAB_016ceb0c;
    uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar14));
    *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_016ceb0c;
    piVar15 = (int *)(lVar8 + 4);
    while (piVar15[-1] != -0x787186c2) {
      piVar15 = piVar15 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_016ceb0c;
    }
    iVar7 = 0;
    if (*piVar15 != -1) {
      iVar7 = *piVar15;
    }
    *(int *)(puVar4 + 8) = iVar7;
    if (*param_2 == 0) goto LAB_016ceb0c;
  } while( true );
}

