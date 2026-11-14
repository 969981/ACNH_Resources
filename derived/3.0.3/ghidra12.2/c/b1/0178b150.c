
bool FUN_0178b150(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  char cVar11;
  ulong uVar12;
  void *pvVar13;
  uint *puVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined1 *__dest;
  undefined1 *__src;
  void *pvVar17;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  
  if (*(char *)(param_1 + 0x298) == '\0') {
    bVar5 = false;
    cVar11 = *(char *)(param_1 + 0x528);
  }
  else {
    FUN_00759290(param_1 + 0x2a0);
    bVar5 = *(int *)(param_1 + 0x2a0) != 0;
    cVar11 = *(char *)(param_1 + 0x528);
  }
  if (cVar11 != '\0') {
    return bVar5;
  }
  *(undefined1 *)(param_1 + 0x528) = 1;
  uVar16 = *(undefined8 *)(param_2 + 0x78);
  FUN_0074ed40(uVar16,PTR_DAT_04bbe390,0);
  puVar4 = PTR_DAT_04bbe400;
  puVar3 = PTR_DAT_04bbe3f8;
  lVar7 = *(long *)PTR_DAT_04bb46d0;
  uVar2 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(lVar7 + 0x400);
  if (*(uint *)(lVar7 + 0x3e0) <= uVar2) {
    return bVar5;
  }
  puVar8 = *(uint **)(*(long *)(lVar7 + 1000) + (long)(int)uVar2 * 8);
  if (puVar8 == (uint *)0x0) {
    return bVar5;
  }
  if (*puVar8 != 0) {
    cVar11 = *PTR_DAT_04bbe3f8;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x30);
        if (-1 < (int)uVar2) {
          pvVar13 = (void *)((ulong)uVar2 + (long)puVar8);
          goto LAB_0178b2d8;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*puVar8;
      pvVar13 = (void *)0x0;
      if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_0178b2d8;
      lVar7 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar8 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
      pvVar13 = (void *)0x0;
      if (uVar12 == 0) goto LAB_0178b2d8;
      piVar15 = (int *)(lVar7 + 4);
      while (piVar15[-1] != 0x4b9c4229) {
        piVar15 = piVar15 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          pvVar13 = (void *)0x0;
          goto LAB_0178b2d8;
        }
      }
      iVar6 = 0;
      if (*piVar15 != -1) {
        iVar6 = *piVar15;
      }
      *(int *)(puVar4 + 0x30) = iVar6;
    } while (*puVar8 != 0);
  }
  pvVar13 = (void *)0x0;
LAB_0178b2d8:
  pvVar17 = *(void **)PTR_PTR_04bbe3f0;
  if (pvVar13 != (void *)0x0) {
    pvVar17 = pvVar13;
  }
  if (pvVar17 == (void *)0x0) {
    return bVar5;
  }
  pvVar13 = *(void **)(param_1 + 0x360);
  if (pvVar13 != pvVar17) {
    lVar7 = 0;
    do {
      if (*(char *)((long)pvVar17 + lVar7) == '\0') goto LAB_0178b34c;
      if (*(char *)((long)pvVar17 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178b34c;
      }
      if (*(char *)((long)pvVar17 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178b34c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178b34c:
    iVar6 = (int)lVar7;
    if (*(int *)(param_1 + 0x368) <= (int)lVar7) {
      iVar6 = *(int *)(param_1 + 0x368) + -1;
    }
    memcpy(pvVar13,pvVar17,(long)iVar6);
    *(undefined1 *)((long)pvVar13 + (long)iVar6) = 0;
  }
  FUN_0074ed40(uVar16,param_1 + 0x358,0);
  puVar3 = PTR_DAT_04bbe330;
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(char *)(param_1 + 0x488) == '\0') {
      return bVar5;
    }
    pvVar13 = *(void **)(param_1 + 0x3f8);
    (**(code **)(*(long *)PTR_DAT_04bbe330 + 0x18))(PTR_DAT_04bbe330);
    pvVar17 = *(void **)(puVar3 + 8);
    if (pvVar13 != pvVar17) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar7 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_0178b4ac;
        lVar9 = *(long *)(puVar3 + 8) + lVar7;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0178b4ac;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0178b4ac;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0178b4ac:
      iVar6 = (int)lVar7;
      if (*(int *)(param_1 + 0x400) <= (int)lVar7) {
        iVar6 = *(int *)(param_1 + 0x400) + -1;
      }
      memcpy(pvVar13,pvVar17,(long)iVar6);
      *(undefined1 *)((long)pvVar13 + (long)iVar6) = 0;
    }
    FUN_0074ed40(uVar16,param_1 + 0x3f0,0);
    local_d8 = 0x80;
    local_e0 = local_d4;
    local_55 = 0;
    local_d4[0] = 0;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    FUN_01afe7a0(&local_e8,*(undefined4 *)(param_1 + 0x294));
    lVar7 = param_1 + 0x490;
    __dest = *(undefined1 **)(param_1 + 0x498);
    (**(code **)(local_e8 + 0x18))(&local_e8);
    __src = local_e0;
    if (__dest == local_e0) goto LAB_0178b5b8;
    (**(code **)(local_e8 + 0x18))(&local_e8);
    lVar9 = 0;
    do {
      if (local_e0[lVar9] == '\0') goto LAB_0178b590;
      if (local_e0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178b590;
      }
      if (local_e0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178b590;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0178b590:
    iVar6 = (int)lVar9;
    iVar10 = *(int *)(param_1 + 0x4a0);
  }
  else {
    lVar7 = param_1 + 0x3f0;
    __dest = *(undefined1 **)(param_1 + 0x3f8);
    (**(code **)(*(long *)PTR_DAT_04bbe330 + 0x18))(PTR_DAT_04bbe330);
    __src = *(undefined1 **)(puVar3 + 8);
    if (__dest == __src) goto LAB_0178b5b8;
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar9) == '\0') {
LAB_0178b490:
        iVar6 = (int)lVar9;
        iVar10 = *(int *)(param_1 + 0x400);
        goto LAB_0178b594;
      }
      lVar1 = *(long *)(puVar3 + 8) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        iVar10 = *(int *)(param_1 + 0x400);
        iVar6 = (int)lVar9 + 1;
        goto LAB_0178b594;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0178b490;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar10 = *(int *)(param_1 + 0x400);
    iVar6 = 0;
  }
LAB_0178b594:
  if (iVar10 <= iVar6) {
    iVar6 = iVar10 + -1;
  }
  memcpy(__dest,__src,(long)iVar6);
  __dest[iVar6] = 0;
LAB_0178b5b8:
  FUN_0074ed40(uVar16,lVar7,0);
  return bVar5;
}

