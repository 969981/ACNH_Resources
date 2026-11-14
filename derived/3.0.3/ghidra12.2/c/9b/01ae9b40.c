
bool FUN_01ae9b40(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
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
  
  puVar6 = PTR_DAT_04bbfeb8;
  puVar5 = PTR_DAT_04bbfeb0;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar2 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar7 = (uint)uVar4, uVar4 < 0xbd)) goto LAB_01ae9bd8;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01ae9bd8:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((uVar7 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')))) ||
       (((*puVar8 <= uVar7 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01ae9d78;
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) goto LAB_01ae9d78;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar6 + 0x2c);
        if (-1 < (int)uVar7) {
          if (((char *)((ulong)uVar7 + (long)puVar8) == (char *)0x0) ||
             (*(char *)((ulong)uVar7 + (long)puVar8) == '\0')) break;
          iVar9 = (int)(long)((float)(*(byte *)(param_1 + 10) & 3) * 90.0 * 11930465.0);
          goto LAB_01ae9d7c;
        }
        if (uVar7 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar8;
      iVar9 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_01ae9d7c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
      iVar9 = 0;
      if (uVar12 == 0) goto LAB_01ae9d7c;
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != -0x6f43f7ab) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          iVar9 = 0;
          goto LAB_01ae9d7c;
        }
      }
      iVar9 = 0;
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar6 + 0x2c) = iVar1;
      if (*puVar8 == 0) goto LAB_01ae9d7c;
    } while( true );
  }
LAB_01ae9d78:
  iVar9 = 0;
LAB_01ae9d7c:
  uVar7 = (iVar9 - (int)(long)((float)param_2 * 90.0 * 11930465.0)) + 0x20000000U >> 0x1e;
  return (uVar7 & 1) == 0 && uVar7 < 4;
}

