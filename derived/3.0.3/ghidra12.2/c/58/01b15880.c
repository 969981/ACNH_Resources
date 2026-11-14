
uint FUN_01b15880(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_1 + 8);
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  if (*(long *)puVar2 == 0) goto LAB_01b15b1c;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01b15b1c;
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar1 = *puVar7;
    uVar5 = 0;
    if ((uVar1 != 0) && (puVar7 != (uint *)(ulong)uVar1)) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar1);
      uVar5 = 0;
      if (*puVar9 != 0) {
        uVar5 = puVar9[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar5 < 0xbd)) goto LAB_01b1597c;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_01b1597c:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
        ((uVar5 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar5) == '\0')))) ||
       (((*puVar7 <= uVar5 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_01b15b1c;
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar5 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar5) goto LAB_01b15b1c;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar5) {
      uVar5 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar5 * 8);
  }
  if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
    cVar10 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar4 + 0x24);
        if (-1 < (int)uVar5) {
          if (((char *)((ulong)uVar5 + (long)puVar7) == (char *)0x0) ||
             (*(char *)((ulong)uVar5 + (long)puVar7) == '\0')) break;
          uVar5 = FUN_01ae59b0(param_1);
          uVar5 = uVar5 ^ 1;
          goto LAB_01b15b20;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)*puVar7;
      uVar5 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar9)) goto LAB_01b15b20;
      lVar12 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar7 + (lVar12 - (long)puVar9);
      if (lVar12 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
      *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar6 = (int *)(lVar12 + 4);
      while (piVar6[-1] != 0x472724ed) {
        uVar5 = 0;
        piVar6 = piVar6 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01b15b20;
      }
      uVar5 = 0;
      iVar8 = 0;
      if (*piVar6 != -1) {
        iVar8 = *piVar6;
      }
      *(int *)(puVar4 + 0x24) = iVar8;
      if (*puVar7 == 0) goto LAB_01b15b20;
    } while( true );
  }
LAB_01b15b1c:
  uVar5 = 0;
LAB_01b15b20:
  return uVar5 & 1;
}

