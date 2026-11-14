
void FUN_01a5e3b0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *__s;
  undefined4 uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  char cVar12;
  long *plVar13;
  ushort uVar14;
  uint *puVar15;
  
  __s = PTR_DAT_04bbfe90;
  lVar8 = *(long *)(param_1 + 0x57e58);
  uVar14 = *(ushort *)(lVar8 + 0x1f8);
  uVar4 = *(ushort *)(lVar8 + 0x1fa);
  if (uVar4 < uVar14) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar8 = *(long *)(param_1 + 0x57e58);
    uVar6 = (uint)uVar14 - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (puVar15 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar15 != (uint *)0x0)) {
      plVar13 = plVar1;
      if (*puVar15 != 0) {
        cVar12 = DAT_05326940;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(__s,0xff,0x1ac);
            uVar6 = *puVar15;
          }
          else {
            uVar6 = *(uint *)(__s + 0x128);
            if (-1 < (int)uVar6) {
              if (((ushort *)((ulong)uVar6 + (long)puVar15) != (ushort *)0x0) &&
                 (uVar5 = *(ushort *)((ulong)uVar6 + (long)puVar15), uVar5 >> 3 < 0x753)) {
                plVar13 = plVar1 + (ulong)uVar5 * 3;
              }
              break;
            }
            if (uVar6 != 0xffffffff) break;
            uVar6 = *puVar15;
          }
          if ((uVar6 == 0) || (puVar9 = (uint *)(ulong)uVar6, puVar15 == puVar9)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar9)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar15 + (lVar8 - (long)puVar9);
          if (lVar8 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar9));
          *(undefined4 *)(__s + 0x128) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar8 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_01a5e56c;
          }
          iVar3 = 0;
          if (*piVar11 != -1) {
            iVar3 = *piVar11;
          }
          *(int *)(__s + 0x128) = iVar3;
          if (*puVar15 == 0) break;
        } while( true );
      }
LAB_01a5e56c:
      if (*puVar15 != 0) {
        cVar12 = DAT_05326940;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(__s,0xff,0x1ac);
          }
          else {
            uVar6 = *(uint *)(__s + 0x18c);
            if (-1 < (int)uVar6) {
              lVar8 = (ulong)uVar6 + (long)puVar15;
              goto LAB_01a5e428;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar9 = (uint *)(ulong)*puVar15;
          lVar8 = 0;
          if ((*puVar15 == 0) || (puVar15 == puVar9)) goto LAB_01a5e428;
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar9)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar2 = (long)puVar15 + (lVar8 - (long)puVar9);
          if (lVar2 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar9));
          *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
          lVar8 = 0;
          if (uVar10 == 0) goto LAB_01a5e428;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != 0x3febc642) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              lVar8 = 0;
              goto LAB_01a5e428;
            }
          }
          iVar3 = 0;
          if (*piVar11 != -1) {
            iVar3 = *piVar11;
          }
          *(int *)(__s + 0x18c) = iVar3;
        } while (*puVar15 != 0);
      }
      lVar8 = 0;
LAB_01a5e428:
      lVar2 = *(long *)PTR_PTR_04bc0008;
      if (lVar8 != 0) {
        lVar2 = lVar8;
      }
      plVar13[1] = lVar2;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      uVar7 = FUN_006bd550(plVar13[1],0);
      *(undefined4 *)(plVar13 + 2) = uVar7;
    }
    uVar14 = uVar14 + 1;
    if (uVar4 < uVar14) {
      return;
    }
  } while( true );
}

