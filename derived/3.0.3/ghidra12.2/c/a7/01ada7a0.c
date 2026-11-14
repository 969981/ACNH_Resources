
long FUN_01ada7a0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar6 = PTR_DAT_04bbff08;
  puVar5 = PTR_DAT_04bbff00;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0x21;
  }
  else {
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
          if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
             uVar7 = (uint)uVar4, uVar4 < 0xa2)) goto LAB_01ada838;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01ada838:
  if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar7 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
       (((uVar7 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
      goto joined_r0x01ada9c0;
    }
  }
  else if (uVar7 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01ada9c0:
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar11 = *PTR_DAT_04bbff00;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 0x2c);
          if (-1 < (int)uVar7) {
            if (((byte *)((ulong)uVar7 + (long)puVar8) == (byte *)0x0) ||
               (bVar3 = *(byte *)((ulong)uVar7 + (long)puVar8), uVar7 = (uint)bVar3, 0xd < bVar3))
            goto LAB_01ada9c4;
            goto LAB_01ada9c8;
          }
          if (uVar7 != 0xffffffff) goto LAB_01ada9c4;
        }
        puVar10 = (uint *)(ulong)*puVar8;
        uVar7 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_01ada9c8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) goto LAB_01ada9c4;
        uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        uVar7 = 0;
        if (uVar12 == 0) goto LAB_01ada9c8;
        piVar13 = (int *)(lVar1 + 4);
        while (piVar13[-1] != 0x46489ce7) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar7 = 0;
            goto LAB_01ada9c8;
          }
        }
        iVar9 = 0;
        if (*piVar13 != -1) {
          iVar9 = *piVar13;
        }
        *(int *)(puVar6 + 0x2c) = iVar9;
      } while (*puVar8 != 0);
      uVar7 = 0;
      goto LAB_01ada9c8;
    }
  }
LAB_01ada9c4:
  uVar7 = 0;
LAB_01ada9c8:
  if ((int)*(uint *)(DAT_0532a7b0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7b0 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(DAT_0532a7b0 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7b0 + 200) <= uVar7 ||
         (*(char *)(*(long *)(DAT_0532a7b0 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
       (((uVar7 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      return (ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) + (long)puVar8;
    }
  }
  else if (uVar7 < *(uint *)(DAT_0532a7b0 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7b0 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    return *(long *)(*(long *)(DAT_0532a7b0 + 0x1b8) + (ulong)uVar7 * 8);
  }
  return 0;
}

