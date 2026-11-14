
undefined8 FUN_01b11fe0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *local_20;
  undefined *puStack_18;
  
  puVar5 = PTR_DAT_04bbfff0;
  puVar4 = PTR_DAT_04bbffe8;
  puVar8 = *(uint **)(param_1 + 0x10);
  uVar7 = 0;
  if (puVar8 != (uint *)0x0) {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             uVar7 = (uint)uVar3, uVar3 < 0x5b6)) goto LAB_01b12074;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01b12074:
  if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e8 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((uVar7 < *(uint *)(DAT_0532a7e8 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar7) == '\0')))) ||
       (((*puVar8 <= uVar7 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01b121b4;
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_01b120bc;
    uVar7 = 0;
  }
  else {
    if (uVar7 < *(uint *)(DAT_0532a7e8 + 0x1c0)) {
      if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar7 * 8);
      uVar7 = 0;
      if (puVar8 == (uint *)0x0) goto LAB_01b121b8;
LAB_01b120bc:
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0310) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0310 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0x54)) goto LAB_01b121b8;
          }
        }
      }
    }
LAB_01b121b4:
    uVar7 = 0;
  }
LAB_01b121b8:
  if ((int)*(uint *)(DAT_0532a820 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a820 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a820 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((uVar7 < *(uint *)(DAT_0532a820 + 200) &&
         (*(char *)(*(long *)(DAT_0532a820 + 0xd0) + (long)(int)uVar7) == '\0')))) ||
       (((*puVar8 <= uVar7 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01b12370;
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a820 + 0x1c0) <= uVar7) goto LAB_01b12370;
    if (*(uint *)(DAT_0532a820 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a820 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar11 = *PTR_DAT_04bbffe8;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 0x28);
          if (-1 < (int)uVar7) {
            puVar13 = (undefined *)((ulong)uVar7 + (long)puVar8);
            goto LAB_01b122c8;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar8;
        puVar13 = (undefined *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_01b122c8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
        puVar13 = (undefined *)0x0;
        if (uVar12 == 0) goto LAB_01b122c8;
        piVar6 = (int *)(lVar1 + 4);
        while (piVar6[-1] != 0x6c6fdb31) {
          piVar6 = piVar6 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            puVar13 = (undefined *)0x0;
            goto LAB_01b122c8;
          }
        }
        iVar9 = 0;
        if (*piVar6 != -1) {
          iVar9 = *piVar6;
        }
        *(int *)(puVar5 + 0x28) = iVar9;
      } while (*puVar8 != 0);
    }
    puVar13 = (undefined *)0x0;
LAB_01b122c8:
    puStack_18 = PTR_DAT_04c485b0;
    if (puVar13 != (undefined *)0x0) {
      puStack_18 = puVar13;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(*param_2 + 0x10))(param_2,&local_20);
    return 1;
  }
LAB_01b12370:
  *(undefined1 *)param_2[1] = 0;
  return 0;
}

