
uint FUN_017c0740(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04bb5c60;
  puVar3 = PTR_DAT_04bb5c58;
  uVar12 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200);
  if ((uVar12 < *(uint *)(param_1 + 0x1e0)) &&
     (puVar9 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar12 * 8), puVar9 != (uint *)0x0
     )) {
    lVar8 = *(long *)PTR_DAT_04bb46c8;
    if (*puVar9 != 0) {
      cVar11 = *PTR_DAT_04bb5c58;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar12) {
            if ((ushort *)((ulong)uVar12 + (long)puVar9) != (ushort *)0x0) {
              uVar12 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar9);
              goto LAB_017c085c;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar9;
        uVar12 = 6;
        if ((*puVar9 == 0) || (puVar9 == puVar6)) goto LAB_017c085c;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar6);
        if (lVar10 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar7 = (int *)(lVar10 + 4);
        while (piVar7[-1] != -0x5488e152) {
          piVar7 = piVar7 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_017c0858;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar4 + 0x10) = iVar1;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_017c0858:
    uVar12 = 6;
LAB_017c085c:
    uVar12 = uVar12 - *(ushort *)(lVar8 + 0x200);
    if (((((uVar12 < *(uint *)(lVar8 + 0x1e0)) &&
          (lVar10 = *(long *)(*(long *)(lVar8 + 0x1e8) + (long)(int)uVar12 * 8), lVar10 != 0)) &&
         (*(long *)(lVar8 + 0xb8) != 0)) &&
        ((puVar9 = *(uint **)(*(long *)(lVar8 + 0xb8) + 8), puVar9 != (uint *)0x0 && (*puVar9 != 0))
        )) && ((uVar12 = puVar9[1], uVar12 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if ((ulong)uVar12 != 0) {
          uVar5 = (uint)((ulong)(lVar10 - lVar2) / (ulong)uVar12);
        }
        if (*puVar9 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((0 < *(int *)(lVar8 + 0x1c8)) && (uVar5 < *(uint *)(lVar8 + 0x1d0))) {
          uVar5 = (uint)*(short *)(*(long *)(lVar8 + 0x1d8) + (long)(int)uVar5 * 2);
        }
        if (uVar5 != 0xffffffff) {
          return uVar5;
        }
      }
    }
  }
  return 0;
}

