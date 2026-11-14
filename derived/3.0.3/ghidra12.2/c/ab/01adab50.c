
void FUN_01adab50(long param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  undefined2 uVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar5 = PTR_DAT_04bbff08;
  puVar4 = PTR_DAT_04bbff00;
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar6 = 0x21;
  }
  else {
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0xa2)) goto LAB_01adabe8;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01adabe8:
  if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) == 0) ||
         (puVar7 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
        ((uVar6 < *(uint *)(DAT_0532a7a0 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar6) == '\0')))) ||
       (((*puVar7 <= uVar6 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_01adad74;
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar6) goto LAB_01adad74;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 == 0) {
LAB_01adad90:
      uVar11 = 0;
    }
    else {
      cVar10 = *PTR_DAT_04bbff00;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x40);
          if (-1 < (int)uVar6) {
            if ((undefined2 *)((ulong)uVar6 + (long)puVar7) == (undefined2 *)0x0) goto LAB_01adad90;
            uVar11 = *(undefined2 *)((ulong)uVar6 + (long)puVar7);
            goto LAB_01adad94;
          }
          if (uVar6 != 0xffffffff) goto LAB_01adad90;
        }
        puVar9 = (uint *)(ulong)*puVar7;
        uVar11 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar9)) goto LAB_01adad94;
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) goto LAB_01adad90;
        uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
        uVar11 = 0;
        if (uVar12 == 0) goto LAB_01adad94;
        piVar13 = (int *)(lVar1 + 4);
        while (piVar13[-1] != -0x37604851) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar11 = 0;
            goto LAB_01adad94;
          }
        }
        iVar8 = 0;
        if (*piVar13 != -1) {
          iVar8 = *piVar13;
        }
        *(int *)(puVar5 + 0x40) = iVar8;
      } while (*puVar7 != 0);
      uVar11 = 0;
    }
LAB_01adad94:
    *(undefined2 *)param_2 = uVar11;
    *param_2 = *param_2 & 0xfe;
    return;
  }
LAB_01adad74:
  param_2[0] = 0;
  param_2[1] = 0;
  return;
}

