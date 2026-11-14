
uint FUN_01b022d0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if ((puVar11 == (uint *)0x0) || (lVar10 = *(long *)PTR_DAT_04bb46c8, lVar10 == 0)) {
    uVar5 = 0x17;
  }
  else {
    uVar5 = 0;
    if (*puVar11 != 0) {
      cVar12 = *PTR_DAT_04bbfe88;
      do {
        if (cVar12 != '\0') {
          uVar4 = *(uint *)(__s + 4);
          if ((int)uVar4 < 0) {
            if (uVar4 == 0xffffffff) goto LAB_01b02368;
LAB_01b023e4:
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((ushort *)((ulong)uVar4 + (long)puVar11) != (ushort *)0x0) {
              uVar5 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar11);
            }
          }
          goto LAB_01b023f8;
        }
        cVar12 = '\x01';
        *puVar3 = 1;
        memset(__s,0xff,0x1ac);
LAB_01b02368:
        puVar8 = (uint *)(ulong)*puVar11;
        uVar5 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar8)) goto LAB_01b023f8;
        lVar7 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar11 + (lVar7 - (long)puVar8);
        if (lVar7 == 0) goto LAB_01b023e4;
        uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
        *(undefined4 *)(__s + 4) = 0xfffffffe;
        uVar5 = 0;
        if (uVar6 == 0) goto LAB_01b023f8;
        piVar9 = (int *)(lVar7 + 4);
        while (piVar9[-1] != -0x63cd307e) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            uVar5 = 0;
            goto LAB_01b023f8;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(__s + 4) = iVar1;
      } while (*puVar11 != 0);
      uVar5 = 0;
    }
LAB_01b023f8:
    uVar5 = uVar5 - *(ushort *)(lVar10 + 0x200);
    if (((((uVar5 < *(uint *)(lVar10 + 0x1e0)) &&
          (lVar7 = *(long *)(*(long *)(lVar10 + 0x1e8) + (long)(int)uVar5 * 8), lVar7 != 0)) &&
         (*(long *)(lVar10 + 0xb8) != 0)) &&
        ((puVar11 = *(uint **)(*(long *)(lVar10 + 0xb8) + 8), puVar11 != (uint *)0x0 &&
         (*puVar11 != 0)))) &&
       ((uVar5 = puVar11[1], uVar5 != 0 && ((ulong)(ushort)puVar11[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar2 != 0) {
        uVar4 = 0;
        if ((ulong)uVar5 != 0) {
          uVar4 = (uint)((ulong)(lVar7 - lVar2) / (ulong)uVar5);
        }
        if (*puVar11 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((0 < *(int *)(lVar10 + 0x1c8)) && (uVar4 < *(uint *)(lVar10 + 0x1d0))) {
          uVar4 = (uint)*(short *)(*(long *)(lVar10 + 0x1d8) + (long)(int)uVar4 * 2);
        }
        if (uVar4 != 0xffffffff) {
          return uVar4;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

