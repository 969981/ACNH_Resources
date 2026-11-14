
long FUN_017bfc80(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar4 = PTR_DAT_04bb5c60;
  puVar3 = PTR_DAT_04bb5c58;
  uVar7 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200);
  if ((uVar7 < *(uint *)(param_1 + 0x1e0)) &&
     (puVar5 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar7 * 8), puVar5 != (uint *)0x0)
     ) {
    if (*puVar5 == 0) {
LAB_017bfd8c:
      uVar7 = 0;
    }
    else {
      cVar6 = *PTR_DAT_04bb5c58;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
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
          uVar7 = *(uint *)(puVar4 + 0x18);
          if (-1 < (int)uVar7) {
            if ((ushort *)((ulong)uVar7 + (long)puVar5) == (ushort *)0x0) goto LAB_017bfd8c;
            uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar5);
            goto LAB_017bfd90;
          }
          if (uVar7 != 0xffffffff) goto LAB_017bfd8c;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        uVar7 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_017bfd90;
        lVar9 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar5 + (lVar9 - (long)puVar10);
        if (lVar9 == 0) goto LAB_017bfd8c;
        uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
        uVar7 = 0;
        if (uVar8 == 0) goto LAB_017bfd90;
        piVar11 = (int *)(lVar9 + 4);
        while (piVar11[-1] != -0x703128ef) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar7 = 0;
            goto LAB_017bfd90;
          }
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar4 + 0x18) = iVar2;
      } while (*puVar5 != 0);
      uVar7 = 0;
    }
LAB_017bfd90:
    puVar4 = PTR_DAT_04bbe4c0;
    puVar3 = PTR_DAT_04bbe4b8;
    uVar7 = uVar7 - *(ushort *)(param_1 + 0xe00);
    if ((uVar7 < *(uint *)(param_1 + 0xde0)) &&
       (puVar5 = *(uint **)(*(long *)(param_1 + 0xde8) + (long)(int)uVar7 * 8),
       puVar5 != (uint *)0x0)) {
      if (*puVar5 != 0) {
        cVar6 = *PTR_DAT_04bbe4b8;
        do {
          if (cVar6 == '\0') {
            cVar6 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar7) {
              lVar9 = (ulong)uVar7 + (long)puVar5;
              goto LAB_017bfe88;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar5;
          lVar9 = 0;
          if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_017bfe88;
          lVar9 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar1 = (long)puVar5 + (lVar9 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          lVar9 = 0;
          if (uVar8 == 0) goto LAB_017bfe88;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x4b9c4229) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              lVar9 = 0;
              goto LAB_017bfe88;
            }
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          *(int *)(puVar4 + 0x14) = iVar2;
        } while (*puVar5 != 0);
      }
      lVar9 = 0;
LAB_017bfe88:
      lVar1 = *(long *)PTR_PTR_04bbe4d8;
      if (lVar9 != 0) {
        lVar1 = lVar9;
      }
      return lVar1;
    }
  }
  return 0;
}

