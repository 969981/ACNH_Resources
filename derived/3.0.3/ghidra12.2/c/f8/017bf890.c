
uint FUN_017bf890(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  
  puVar3 = PTR_DAT_04bb5c60;
  puVar2 = PTR_DAT_04bb5c58;
  if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0xd0)) &&
       (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar5 <= param_2) {
      return 0;
    }
    if (puVar5[1] == 0) {
      return 0;
    }
    if ((ushort)puVar5[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar8) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(param_1 + 0x1c8) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b8) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)param_2 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar9 = *PTR_DAT_04bb5c58;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar3 + 0x10);
          if (-1 < (int)uVar10) {
            if ((ushort *)((ulong)uVar10 + (long)puVar5) != (ushort *)0x0) {
              uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar5);
              goto LAB_017bfa1c;
            }
            break;
          }
          if (uVar10 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar5;
        uVar10 = 6;
        if ((*puVar5 == 0) || (puVar5 == puVar12)) goto LAB_017bfa1c;
        lVar6 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar12)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar5 + (lVar6 - (long)puVar12);
        if (lVar6 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar12));
        *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar13 = (int *)(lVar6 + 4);
        while (piVar13[-1] != -0x5488e152) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_017bfa18;
        }
        iVar8 = 0;
        if (*piVar13 != -1) {
          iVar8 = *piVar13;
        }
        *(int *)(puVar3 + 0x10) = iVar8;
        if (*puVar5 == 0) break;
      } while( true );
    }
LAB_017bfa18:
    uVar10 = 6;
LAB_017bfa1c:
    lVar6 = *(long *)PTR_DAT_04bb46c8;
    uVar10 = uVar10 - *(ushort *)(lVar6 + 0x200);
    if (((((uVar10 < *(uint *)(lVar6 + 0x1e0)) &&
          (lVar7 = *(long *)(*(long *)(lVar6 + 0x1e8) + (long)(int)uVar10 * 8), lVar7 != 0)) &&
         (*(long *)(lVar6 + 0xb8) != 0)) &&
        ((puVar5 = *(uint **)(*(long *)(lVar6 + 0xb8) + 8), puVar5 != (uint *)0x0 && (*puVar5 != 0))
        )) && ((uVar10 = puVar5[1], uVar10 != 0 && ((ulong)(ushort)puVar5[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
      if (lVar1 != 0) {
        uVar4 = 0;
        if ((ulong)uVar10 != 0) {
          uVar4 = (uint)((ulong)(lVar7 - lVar1) / (ulong)uVar10);
        }
        if (*puVar5 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((0 < *(int *)(lVar6 + 0x1c8)) && (uVar4 < *(uint *)(lVar6 + 0x1d0))) {
          uVar4 = (uint)*(short *)(*(long *)(lVar6 + 0x1d8) + (long)(int)uVar4 * 2);
        }
        if (uVar4 != 0xffffffff) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

