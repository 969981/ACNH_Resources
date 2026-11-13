
uint FUN_0130dbe0(long param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bbbeb8;
  puVar4 = PTR_DAT_04bbbeb0;
  puVar9 = *(uint **)(param_1 + 8);
  if (puVar9 != (uint *)0x0) {
    uVar6 = *puVar9;
    if (uVar6 != 0) {
      cVar12 = *PTR_DAT_04bbbeb0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar6 = *puVar9;
        }
        else {
          uVar7 = *(uint *)puVar5;
          if (-1 < (int)uVar7) {
            if ((ushort *)((ulong)uVar7 + (long)puVar9) != (ushort *)0x0) {
              uVar6 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar9);
              goto LAB_0130dce0;
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar3 = (uint *)(ulong)uVar6;
        uVar6 = 0;
        if ((puVar3 == (uint *)0x0) || (uVar6 = 0, puVar9 == puVar3)) goto LAB_0130dce0;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar3)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar3);
        uVar6 = 0;
        if (lVar10 == 0) goto LAB_0130dce0;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar3));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar10 + 4);
        while (piVar8[-1] != 0x2df085cc) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0130dcdc;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)puVar5 = iVar1;
        uVar6 = *puVar9;
        if (uVar6 == 0) break;
      } while( true );
    }
LAB_0130dcdc:
    uVar6 = 0;
LAB_0130dce0:
    lVar10 = *(long *)PTR_DAT_04bb46c8;
    uVar6 = uVar6 - *(ushort *)(lVar10 + 0x200);
    if (((((uVar6 < *(uint *)(lVar10 + 0x1e0)) &&
          (lVar11 = *(long *)(*(long *)(lVar10 + 0x1e8) + (long)(int)uVar6 * 8), lVar11 != 0)) &&
         (*(long *)(lVar10 + 0xb8) != 0)) &&
        ((puVar9 = *(uint **)(*(long *)(lVar10 + 0xb8) + 8), puVar9 != (uint *)0x0 && (*puVar9 != 0)
         ))) && ((uVar6 = puVar9[1], uVar6 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar7 = 0;
        if ((ulong)uVar6 != 0) {
          uVar7 = (uint)((ulong)(lVar11 - lVar2) / (ulong)uVar6);
        }
        if (*puVar9 <= uVar7) {
          uVar7 = 0xffffffff;
        }
        if ((0 < *(int *)(lVar10 + 0x1c8)) && (uVar7 < *(uint *)(lVar10 + 0x1d0))) {
          uVar7 = (uint)*(short *)(*(long *)(lVar10 + 0x1d8) + (long)(int)uVar7 * 2);
        }
        if (uVar7 != 0xffffffff) {
          return uVar7;
        }
      }
    }
  }
  return 0;
}

