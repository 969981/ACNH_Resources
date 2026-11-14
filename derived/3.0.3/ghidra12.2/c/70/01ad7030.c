
uint FUN_01ad7030(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar4 = *puVar10;
    if (uVar4 != 0 && puVar10 != (uint *)(ulong)uVar4) {
      puVar6 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
      uVar5 = 0;
      if (*puVar6 == 0) goto LAB_01ad70f8;
      uVar4 = puVar6[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar8 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar10 - lVar8) / (ulong)uVar4);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar5 < 0xbd)) goto LAB_01ad70f8;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01ad70f8:
  if (uVar5 == 0x7d) {
    if (*puVar10 != 0) {
      cVar11 = *PTR_DAT_04bbfe88;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *puVar3 = 1;
          memset(__s,0xff,0x1ac);
        }
        else {
          uVar4 = *(uint *)(__s + 0x100);
          if (-1 < (int)uVar4) {
            if ((ushort *)((ulong)uVar4 + (long)puVar10) != (ushort *)0x0) {
              uVar4 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar10);
              goto LAB_01ad7200;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar10;
        uVar4 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar6)) goto LAB_01ad7200;
        lVar8 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar10 + (lVar8 - (long)puVar6);
        if (lVar8 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
        *(undefined4 *)(__s + 0x100) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar9 = (int *)(lVar8 + 4);
        while (piVar9[-1] != 0x5c1c3044) {
          piVar9 = piVar9 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_01ad71fc;
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(__s + 0x100) = iVar1;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_01ad71fc:
    uVar4 = 0;
LAB_01ad7200:
    if (*(long *)(param_1 + 0x10) == 0) {
      return uVar4;
    }
    lVar8 = *(long *)PTR_DAT_04bb5008;
    uVar2 = uVar4 - *(ushort *)(lVar8 + 0x11f0);
    if ((uVar2 < *(uint *)(lVar8 + 0x11d0)) &&
       (*(long *)(*(long *)(lVar8 + 0x11d8) + (long)(int)uVar2 * 8) != 0)) {
      return uVar4;
    }
  }
  return 0;
}

