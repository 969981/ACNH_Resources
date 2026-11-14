
void FUN_01ae1ef0(long *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  puVar7 = *(uint **)(param_2 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar13 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar13 != 0) {
          uVar1 = 0;
          if ((ulong)uVar6 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
             uVar6 = (uint)uVar2, uVar2 < 0xbd)) goto LAB_01ae1f88;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01ae1f88:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                       (long)puVar7);
      goto joined_r0x01ae2138;
    }
  }
  else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01ae2138:
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar11 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
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
            uVar6 = *(uint *)(puVar4 + 0x70);
            if (-1 < (int)uVar6) {
              lVar13 = (ulong)uVar6 + (long)puVar7;
              goto LAB_01ae20b8;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar7;
          lVar13 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_01ae20b8;
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar8 = (long)puVar7 + (lVar13 - (long)puVar10);
          if (lVar8 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x70) = 0xfffffffe;
          lVar13 = 0;
          if (uVar12 == 0) goto LAB_01ae20b8;
          piVar5 = (int *)(lVar8 + 4);
          while (piVar5[-1] != -0x7840ff18) {
            piVar5 = piVar5 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              lVar13 = 0;
              goto LAB_01ae20b8;
            }
          }
          iVar9 = 0;
          if (*piVar5 != -1) {
            iVar9 = *piVar5;
          }
          *(int *)(puVar4 + 0x70) = iVar9;
        } while (*puVar7 != 0);
      }
      lVar13 = 0;
LAB_01ae20b8:
      lVar8 = *(long *)PTR_PTR_04bbfea8;
      if (lVar13 != 0) {
        lVar8 = lVar13;
      }
      goto LAB_01ae2148;
    }
  }
  lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
LAB_01ae2148:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar8;
  return;
}

