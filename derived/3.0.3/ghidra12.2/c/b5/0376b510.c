
undefined8 FUN_0376b510(long param_1,ushort param_2)

{
  void *__src;
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  void *pvVar10;
  uint *puVar11;
  int *piVar12;
  void *__dest;
  
  puVar3 = PTR_DAT_04bc0678;
  puVar2 = PTR_DAT_04bc0670;
  if (499 < param_2) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb4958;
  if (lVar7 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(lVar7 + (ulong)param_2 * 2 + 0x620);
  if ((int)*(uint *)(lVar7 + 0x1c0) < 1) {
    if (*(long *)(lVar7 + 0xb0) == 0) {
      return 0;
    }
    puVar5 = *(uint **)(*(long *)(lVar7 + 0xb0) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    uVar4 = (uint)uVar1;
    if ((uVar4 < *(uint *)(lVar7 + 200)) &&
       (*(char *)(*(long *)(lVar7 + 0xd0) + (ulong)uVar4) == '\0')) {
      return 0;
    }
    if (*puVar5 <= uVar4) {
      return 0;
    }
    if (puVar5[1] == 0) {
      return 0;
    }
    if ((ushort)puVar5[2] == 0) {
      return 0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
  }
  else {
    if (*(uint *)(lVar7 + 0x1c0) <= (uint)uVar1) {
      return 0;
    }
    uVar4 = (uint)uVar1;
    if (*(uint *)(lVar7 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(uint **)(*(long *)(lVar7 + 0x1b8) + (ulong)uVar4 * 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
  }
  if (*puVar5 != 0) {
    cVar8 = *PTR_DAT_04bc0670;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar3 + 0x48);
        if (-1 < (int)uVar4) {
          pvVar10 = (void *)((ulong)uVar4 + (long)puVar5);
          goto LAB_0376b658;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar5;
      pvVar10 = (void *)0x0;
      if ((*puVar5 == 0) || (puVar5 == puVar11)) goto LAB_0376b658;
      lVar7 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar5 + (lVar7 - (long)puVar11);
      if (lVar7 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
      *(undefined4 *)(puVar3 + 0x48) = 0xfffffffe;
      pvVar10 = (void *)0x0;
      if (uVar9 == 0) goto LAB_0376b658;
      piVar12 = (int *)(lVar7 + 4);
      while (piVar12[-1] != 0x34c8eed5) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          pvVar10 = (void *)0x0;
          goto LAB_0376b658;
        }
      }
      iVar6 = 0;
      if (*piVar12 != -1) {
        iVar6 = *piVar12;
      }
      *(int *)(puVar3 + 0x48) = iVar6;
    } while (*puVar5 != 0);
  }
  pvVar10 = (void *)0x0;
LAB_0376b658:
  __dest = *(void **)(param_1 + 8);
  __src = *(void **)PTR_PTR_04bc0668;
  if (pvVar10 != (void *)0x0) {
    __src = pvVar10;
  }
  if (__dest != __src) {
    lVar7 = 0;
    do {
      if (*(char *)((long)__src + lVar7) == '\0') goto LAB_0376b738;
      if (*(char *)((long)__src + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0376b738;
      }
      if (*(char *)((long)__src + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0376b738;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0376b738:
    iVar6 = (int)lVar7;
    if (*(int *)(param_1 + 0x10) <= (int)lVar7) {
      iVar6 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  return 1;
}

