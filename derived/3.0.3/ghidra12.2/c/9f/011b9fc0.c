
undefined4 FUN_011b9fc0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04bbb930;
  puVar3 = PTR_DAT_04bbb928;
  puVar7 = *(uint **)(param_1 + 8);
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return 0x7e3d1e46;
  }
  cVar11 = *PTR_DAT_04bbb928;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
      *(undefined4 *)(puVar4 + 0x58) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      uVar10 = *puVar7;
    }
    else {
      uVar10 = *(uint *)(puVar4 + 0x2c);
      if (-1 < (int)uVar10) {
        if ((short *)((ulong)uVar10 + (long)puVar7) == (short *)0x0) {
          return 0x7e3d1e46;
        }
        if (*(short *)((ulong)uVar10 + (long)puVar7) == 0) {
          return 0x7e3d1e46;
        }
        lVar6 = *(long *)PTR_DAT_04bb5c90;
        lVar8 = *(long *)(lVar6 + 0x750);
        if ((((lVar8 == 0) || (puVar7 = *(uint **)(lVar8 + 8), puVar7 == (uint *)0x0)) ||
            (*puVar7 == 0)) ||
           ((uVar10 = puVar7[1], uVar10 == 0 || ((ulong)(ushort)puVar7[2] == 0)))) {
LAB_011ba160:
          uVar10 = *(uint *)(lVar6 + 0x860);
          uVar9 = 0xffffffff;
        }
        else {
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar2 == 0) goto LAB_011ba160;
          uVar9 = 0;
          if ((ulong)uVar10 != 0) {
            uVar9 = (uint)((ulong)(*(long *)(param_1 + 8) - lVar2) / (ulong)uVar10);
          }
          if (*puVar7 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          uVar10 = *(uint *)(lVar6 + 0x860);
          if ((0 < (int)uVar10) && (uVar9 < *(uint *)(lVar6 + 0x868))) {
            uVar9 = (uint)*(short *)(*(long *)(lVar6 + 0x870) + (long)(int)uVar9 * 2);
            if (uVar10 <= uVar9) {
              return 0;
            }
            goto LAB_011ba178;
          }
        }
        if ((int)uVar10 < 1) {
          if (lVar8 == 0) {
            return 0;
          }
          if (*(uint **)(lVar8 + 8) == (uint *)0x0) {
            return 0;
          }
          uVar10 = **(uint **)(lVar8 + 8);
        }
        if (uVar10 <= uVar9) {
          return 0;
        }
LAB_011ba178:
        if (*(uint *)(lVar6 + 0x878) <= uVar9) {
          uVar9 = 0;
        }
        return *(undefined4 *)(*(long *)(lVar6 + 0x880) + (long)(int)uVar9 * 0x28 + 0x20);
      }
      if (uVar10 != 0xffffffff) {
        return 0x7e3d1e46;
      }
      uVar10 = *puVar7;
    }
    if (uVar10 == 0) {
      return 0x7e3d1e46;
    }
    puVar12 = (uint *)(ulong)uVar10;
    if (puVar7 == puVar12) {
      return 0x7e3d1e46;
    }
    lVar6 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar7 + (lVar6 - (long)puVar12);
    if (lVar6 == 0) {
      return 0x7e3d1e46;
    }
    uVar13 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
    *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
    if (uVar13 == 0) {
      return 0x7e3d1e46;
    }
    piVar5 = (int *)(lVar6 + 4);
    while (piVar5[-1] != 0x54706054) {
      piVar5 = piVar5 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 0x7e3d1e46;
      }
    }
    iVar1 = 0;
    if (*piVar5 != -1) {
      iVar1 = *piVar5;
    }
    *(int *)(puVar4 + 0x2c) = iVar1;
    if (*puVar7 == 0) {
      return 0x7e3d1e46;
    }
  } while( true );
}

