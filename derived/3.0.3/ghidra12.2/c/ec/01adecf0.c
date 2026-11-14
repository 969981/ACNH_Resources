
void FUN_01adecf0(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  undefined *puVar13;
  
  puVar4 = PTR_DAT_04bbff90;
  puVar1 = PTR_DAT_04bbff88;
  puVar7 = *(uint **)(param_2 + 0x10);
  if (puVar7 == (uint *)0x0) goto LAB_01adef3c;
  uVar6 = *puVar7;
  if (uVar6 == 0 || puVar7 == (uint *)(ulong)uVar6) {
LAB_01aded80:
    uVar6 = 0;
  }
  else {
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    if (((*puVar10 == 0) || (uVar6 = puVar10[1], uVar6 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
    goto LAB_01aded80;
    lVar8 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar8 == 0) goto LAB_01aded80;
    uVar2 = 0;
    if ((ulong)uVar6 != 0) {
      uVar2 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar6);
    }
    if (*puVar10 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0020 <= uVar2) ||
       (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
       uVar6 = (uint)uVar3, 0x5b5 < uVar3)) goto LAB_01aded80;
  }
  if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e8 + 0xb0) == 0) ||
         (puVar7 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
        ((uVar6 < *(uint *)(DAT_0532a7e8 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar6) == '\0')))) ||
       (((*puVar7 <= uVar6 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_01adef3c;
    iVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a7e8 + 0x1c0) <= uVar6) goto LAB_01adef3c;
    if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar11 = *PTR_DAT_04bbff88;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x3c);
          if (-1 < (int)uVar6) {
            puVar13 = (undefined *)((ulong)uVar6 + (long)puVar7);
            goto LAB_01adeea8;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar7;
        puVar13 = (undefined *)0x0;
        if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_01adeea8;
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + (lVar8 - (long)puVar10);
        if (lVar8 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
        puVar13 = (undefined *)0x0;
        if (uVar12 == 0) goto LAB_01adeea8;
        piVar5 = (int *)(lVar8 + 4);
        while (piVar5[-1] != -0x7c3341f1) {
          piVar5 = piVar5 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            puVar13 = (undefined *)0x0;
            goto LAB_01adeea8;
          }
        }
        iVar9 = 0;
        if (*piVar5 != -1) {
          iVar9 = *piVar5;
        }
        *(int *)(puVar4 + 0x3c) = iVar9;
      } while (*puVar7 != 0);
    }
    puVar13 = (undefined *)0x0;
LAB_01adeea8:
    puVar1 = PTR_DAT_04c48530;
    if (puVar13 != (undefined *)0x0) {
      puVar1 = puVar13;
    }
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar1;
    return;
  }
LAB_01adef3c:
  lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar8;
  return;
}

