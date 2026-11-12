
undefined8 FUN_007128e0(void)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  short sVar6;
  undefined *__s;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  uint *puVar16;
  char cVar17;
  undefined *local_70;
  char *pcStack_68;
  
  lVar15 = *(long *)PTR_DAT_04bb32e8;
  uVar9 = FUN_00a8117c(lVar15 + 0x4060);
  if ((uVar9 & 1) == 0) {
    cVar5 = *(char *)(lVar15 + 0x4064);
    lVar15 = *(long *)PTR_DAT_04bb27d0;
    if (((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) || (*(int *)(lVar15 + 0x80) != 1)) {
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
        if (0xff < (uint)(int)sVar6) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) {
          return 0;
        }
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "TodayGlobalEventId";
      local_70 = puVar1;
      iVar7 = FUN_0273ea30(&local_70);
      if (iVar7 != 0xffff) {
        pcStack_68 = "TodayGlobalEventId";
        lVar15 = *(long *)PTR_DAT_04bb32f0;
        local_70 = puVar1;
        uVar8 = FUN_0273ea30(&local_70);
        __s = PTR_DAT_04bb3250;
        puVar1 = PTR_DAT_04bb3248;
        uVar4 = *(ushort *)(lVar15 + 0x420);
        uVar8 = (uVar8 & 0xffff) - (uint)uVar4;
        if ((((uVar8 < *(uint *)(lVar15 + 0x400)) &&
             (puVar16 = *(uint **)(*(long *)(lVar15 + 0x408) + (long)(int)uVar8 * 8),
             puVar16 != (uint *)0x0)) ||
            ((-(uint)uVar4 < *(uint *)(lVar15 + 0x400) &&
             (puVar16 = *(uint **)(*(long *)(lVar15 + 0x408) + (ulong)uVar4 * -8),
             puVar16 != (uint *)0x0)))) && (*puVar16 != 0)) {
          cVar17 = *PTR_DAT_04bb3248;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *puVar1 = 1;
              memset(__s,0xff,0x288);
            }
            else {
              uVar8 = *(uint *)(__s + 0x2c);
              if (-1 < (int)uVar8) {
                if ((char *)((ulong)uVar8 + (long)puVar16) == (char *)0x0) {
                  return 0;
                }
                if (*(char *)((ulong)uVar8 + (long)puVar16) == '\0') {
                  return 0;
                }
                uVar8 = *puVar16;
                if (uVar8 == 0) goto LAB_00712b94;
                uVar13 = *(uint *)(__s + 0x13c);
                goto LAB_00712b28;
              }
              if (uVar8 != 0xffffffff) {
                return 0;
              }
            }
            puVar12 = (uint *)(ulong)*puVar16;
            if (*puVar16 == 0) {
              return 0;
            }
            if (puVar16 == puVar12) {
              return 0;
            }
            lVar15 = 0xc;
            if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar16 + (lVar15 - (long)puVar12);
            if (lVar15 == 0) {
              return 0;
            }
            uVar9 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
            *(undefined4 *)(__s + 0x2c) = 0xfffffffe;
            if (uVar9 == 0) {
              return 0;
            }
            piVar14 = (int *)(lVar15 + 4);
            while (piVar14[-1] != 0x32c643e6) {
              piVar14 = piVar14 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                return 0;
              }
            }
            iVar7 = 0;
            if (*piVar14 != -1) {
              iVar7 = *piVar14;
            }
            *(int *)(__s + 0x2c) = iVar7;
            if (*puVar16 == 0) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
LAB_00712b28:
  do {
    if (-1 < (int)uVar13) {
      uVar8 = 0;
      if ((byte *)((long)puVar16 + (ulong)uVar13) != (byte *)0x0) {
        uVar8 = (uint)*(byte *)((long)puVar16 + (ulong)uVar13);
      }
LAB_00712bc4:
      uVar13 = *puVar16;
      if (uVar13 == 0) goto LAB_00712c94;
      uVar11 = *(uint *)(__s + 0x140);
      goto LAB_00712be8;
    }
    if ((uVar13 != 0xffffffff) || (lVar15 = (long)puVar16 - (ulong)uVar8, lVar15 == 0)) {
LAB_00712bc0:
      uVar8 = 0;
      goto LAB_00712bc4;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar15 == 0) goto LAB_00712bc0;
    uVar9 = (ulong)*(ushort *)(lVar15 + 8);
    *(undefined4 *)(__s + 0x13c) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_00712bc0;
    puVar12 = (uint *)(lVar2 + lVar15 + 4);
    while (puVar12[-1] != 0x8d58a3bf) {
      puVar12 = puVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_00712bc0;
    }
    uVar13 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar13 = *puVar12;
    }
    *(uint *)(__s + 0x13c) = uVar13;
    uVar8 = *puVar16;
  } while (uVar8 != 0);
LAB_00712b94:
  uVar8 = 0x18;
  goto LAB_00712ca0;
LAB_00712be8:
  if ((int)uVar11 < 0) {
    if ((uVar11 != 0xffffffff) || (lVar15 = (long)puVar16 - (ulong)uVar13, lVar15 == 0))
    goto LAB_00712c94;
    lVar2 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar15 == 0) goto LAB_00712c94;
    uVar9 = (ulong)*(ushort *)(lVar15 + 8);
    *(undefined4 *)(__s + 0x140) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_00712c94;
    puVar12 = (uint *)(lVar2 + lVar15 + 4);
    while (puVar12[-1] != 0x73a932ae) {
      puVar12 = puVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_00712c94;
    }
    uVar11 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar11 = *puVar12;
    }
    *(uint *)(__s + 0x140) = uVar11;
    uVar13 = *puVar16;
    if (uVar13 == 0) goto LAB_00712c94;
    goto LAB_00712be8;
  }
  if ((byte *)((long)puVar16 + (ulong)uVar11) != (byte *)0x0) {
    bVar3 = *(byte *)((long)puVar16 + (ulong)uVar11);
    uVar13 = (uint)bVar3;
    uVar11 = uVar8 + 0x18;
    if (4 < uVar8) {
      uVar11 = uVar8;
    }
    if (bVar3 < 5) {
      uVar13 = bVar3 + 0x18;
    }
    goto LAB_00712ca4;
  }
LAB_00712c94:
  if (uVar8 < 5) {
    uVar8 = uVar8 + 0x18;
  }
LAB_00712ca0:
  uVar13 = 0x18;
  uVar11 = uVar8;
LAB_00712ca4:
  uVar10 = 0;
  if (((int)uVar11 <= (int)cVar5) && ((int)cVar5 < (int)uVar13)) {
    uVar10 = 1;
  }
  return uVar10;
}

