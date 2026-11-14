
/* WARNING: Type propagation algorithm not settling */

void FUN_01af15c0(short *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *__s;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  
  __s = PTR_DAT_04bbfe90;
  puVar6 = PTR_DAT_04bbfe88;
  puVar12 = *(uint **)(param_2 + 0x10);
  if (puVar12 == (uint *)0x0) goto LAB_01af190c;
  uVar13 = *puVar12;
  if (uVar13 == 0 || puVar12 == (uint *)(ulong)uVar13) {
LAB_01af167c:
    uVar7 = 0;
    uVar13 = *(uint *)PTR_DAT_04bc00c8;
  }
  else {
    puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar13);
    if (((*puVar10 == 0) || (uVar13 = puVar10[1], uVar13 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
    goto LAB_01af167c;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar2 == 0) goto LAB_01af167c;
    uVar3 = 0;
    if ((ulong)uVar13 != 0) {
      uVar3 = (uint)((ulong)((long)puVar12 - lVar2) / (ulong)uVar13);
    }
    uVar13 = *(uint *)PTR_DAT_04bc00c8;
    if (*puVar10 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((uVar13 <= uVar3) ||
       (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2), 0xbc < uVar7))
    {
      uVar7 = 0;
    }
  }
  if ((uVar7 & 0xfffd) != 0xa4) {
    uVar3 = *puVar12;
    uVar8 = 0;
    if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
      puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
      uVar8 = 0;
      if (*puVar10 != 0) {
        uVar3 = puVar10[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar2 != 0) {
            uVar8 = 0;
            if ((ulong)uVar3 != 0) {
              uVar8 = (uint)((ulong)((long)puVar12 - lVar2) / (ulong)uVar3);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < uVar13) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
               uVar8 < 0xbd)) goto LAB_01af1728;
          }
        }
        uVar8 = 0;
      }
    }
LAB_01af1728:
    if ((uVar8 - 0xa5 & 0xfffffffd) != 0) goto LAB_01af190c;
  }
  if (*puVar12 != 0) {
    cVar14 = *PTR_DAT_04bbfe88;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *puVar6 = 1;
        memset(__s,0xff,0x1ac);
        uVar13 = *puVar12;
      }
      else {
        uVar13 = *(uint *)(__s + 0x110);
        if (-1 < (int)uVar13) {
          if (((short *)((ulong)uVar13 + (long)puVar12) != (short *)0x0) &&
             (sVar5 = *(short *)((ulong)uVar13 + (long)puVar12), sVar5 != 0)) {
            *param_1 = sVar5;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            FUN_0277d4ac(param_1);
            return;
          }
          break;
        }
        if (uVar13 != 0xffffffff) break;
        uVar13 = *puVar12;
      }
      if ((uVar13 == 0) || (puVar10 = (uint *)(ulong)uVar13, puVar12 == puVar10)) break;
      lVar2 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar12 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
      *(undefined4 *)(__s + 0x110) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != -0x411f8e26) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_01af190c;
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(__s + 0x110) = iVar1;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_01af190c:
  uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 2) = uVar4;
  return;
}

