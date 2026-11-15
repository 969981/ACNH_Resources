
undefined8 FUN_02472a24(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  char cVar15;
  
  if ((((param_3 == 1) || (pbVar1 = (byte *)(param_1 + 0x1ee8), 7 < *pbVar1)) ||
      (uVar7 = FUN_02582d8c(pbVar1,1), puVar4 = PTR_DAT_04bb4fb8, 7 < uVar7)) ||
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0' ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) == '\0')) ||
      ((uVar7 = FUN_02582d8c(pbVar1,1), puVar6 = PTR_DAT_04bbbe20, puVar5 = PTR_DAT_04bbbe18,
       7 < uVar7 ||
       ((*(char *)(*(long *)puVar4 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0' || (0x12 < param_3)))))
      ))) {
    return 0;
  }
  lVar10 = *(long *)puVar4 + (ulong)uVar7 * 0x13f0;
  lVar13 = *(long *)PTR_DAT_04bb27a8;
  if ((int)*(uint *)(lVar13 + 0x980) < 1) {
    if (((*(long *)(lVar13 + 0x870) == 0) ||
        (puVar14 = *(uint **)(*(long *)(lVar13 + 0x870) + 8), puVar14 == (uint *)0x0)) ||
       (((param_3 < *(uint *)(lVar13 + 0x888) &&
         (*(char *)(*(long *)(lVar13 + 0x890) + (long)(int)param_3) == '\0')) ||
        (((*puVar14 <= param_3 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0))))))
    goto LAB_02472c94;
    iVar11 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar14 = (uint *)((ulong)(puVar14[1] * param_3 + (uint)(ushort)puVar14[2] * 8 + iVar11) +
                      (long)puVar14);
LAB_02472b40:
    pbVar1 = (byte *)(lVar10 + 0x4c8) + param_3;
    if (0x11 < param_3) {
      pbVar1 = (byte *)(lVar10 + 0x4c8);
    }
    uVar7 = (uint)*pbVar1;
    if (puVar14 != (uint *)0x0) {
      if (*puVar14 != 0) {
        cVar15 = *PTR_DAT_04bbbe18;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar6 + 0xc);
            if (-1 < (int)uVar12) {
              if ((char *)((ulong)uVar12 + (long)puVar14) != (char *)0x0) {
                uVar12 = (uint)*(char *)((ulong)uVar12 + (long)puVar14);
                goto LAB_02472cb0;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
          }
          lVar13 = (long)puVar14 - (ulong)*puVar14;
          if ((*puVar14 == 0) || (lVar13 == 0)) break;
          lVar2 = 0xc;
          if (*(char *)(lVar13 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar13 == 0) break;
          uVar8 = (ulong)*(ushort *)(lVar13 + 8);
          *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar9 = (int *)(lVar2 + lVar13 + 4);
          while (piVar9[-1] != 0xb3be609) {
            piVar9 = piVar9 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_02472cf8;
          }
          iVar11 = 0;
          if (*piVar9 != -1) {
            iVar11 = *piVar9;
          }
          *(int *)(puVar6 + 0xc) = iVar11;
          if (*puVar14 == 0) break;
        } while( true );
      }
      goto LAB_02472cf8;
    }
    uVar12 = 1;
  }
  else {
    if (param_3 < *(uint *)(lVar13 + 0x980)) {
      uVar7 = param_3;
      if (*(uint *)(lVar13 + 0x970) <= param_3) {
        uVar7 = 0;
      }
      puVar14 = *(uint **)(*(long *)(lVar13 + 0x978) + (ulong)uVar7 * 8);
      goto LAB_02472b40;
    }
LAB_02472c94:
    pbVar1 = (byte *)(lVar10 + 0x4c8) + param_3;
    if (0x11 < param_3) {
      pbVar1 = (byte *)(lVar10 + 0x4c8);
    }
    uVar12 = 1;
    uVar7 = (uint)*pbVar1;
  }
LAB_02472cb0:
  if (uVar7 < uVar12) {
    lVar13 = lVar10 + (ulong)param_3;
    if (0x11 < param_3) {
      lVar13 = lVar10;
    }
    *(char *)(lVar13 + 0x4c8) = *(char *)(lVar13 + 0x4c8) + '\x01';
    return 0;
  }
LAB_02472cf8:
  puVar3 = (undefined1 *)(lVar10 + 0x4c8) + param_3;
  if (0x11 < param_3) {
    puVar3 = (undefined1 *)(lVar10 + 0x4c8);
  }
  *puVar3 = 0;
  *(uint *)(param_2 + 0x14) = param_3;
  return 1;
}

