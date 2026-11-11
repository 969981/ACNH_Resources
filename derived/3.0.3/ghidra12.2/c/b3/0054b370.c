
undefined8 FUN_0054b370(long param_1,int param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  
  lVar13 = *(long *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x134);
  cVar6 = FUN_0054b560(*(undefined8 *)(*(long *)(lVar13 + 0x60) + (long)iVar4 * 8));
  if (cVar6 == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
    if (0 < *(int *)(param_1 + 0x48)) {
      uVar15 = 0;
      do {
        uVar7 = FUN_005160a0(lVar13,iVar4,uVar15 & 0xffffffff);
        if ((uVar7 & 1) != 0) {
          lVar16 = *(long *)(*(long *)(param_1 + 0x40) + uVar15 * 8);
          if (*(char *)(lVar16 + 0x248) == '\0') {
            bVar5 = false;
            lVar10 = *(long *)(lVar16 + 0x260);
LAB_0054b404:
            if (lVar10 == 0) goto LAB_0054b524;
          }
          else {
            bVar5 = *(long *)(lVar16 + 0x250) != 0;
            lVar10 = *(long *)(lVar16 + 0x260);
            if (!bVar5) goto LAB_0054b404;
          }
          piVar8 = (int *)FUN_0053b340(lVar16);
          piVar9 = (int *)FUN_0053bf90(lVar16);
          bVar5 = (bool)(bVar5 & *piVar8 == param_2);
          iVar3 = *piVar9;
          if ((bVar5) || (lVar10 != 0 && iVar3 == param_2)) {
            if (bVar5) {
              uVar2 = piVar8[1] >> 5;
              uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
              *(uint *)(*param_3 + uVar7) =
                   *(uint *)(*param_3 + uVar7) | 1 << (ulong)(piVar8[1] & 0x1f);
            }
            if ((lVar10 != 0 && iVar3 == param_2) && (iVar3 = piVar9[4], iVar3 != 0)) {
              puVar12 = *(uint **)(piVar9 + 2);
              lVar16 = (long)iVar3 * 4 + -4;
              puVar11 = puVar12;
              if (((uint)lVar16 >> 2 & 1) == 0) {
                uVar2 = (int)*puVar12 >> 5;
                uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                *(uint *)(*param_3 + uVar7) =
                     *(uint *)(*param_3 + uVar7) | 1 << (ulong)(*puVar12 & 0x1f);
                puVar11 = puVar12 + 1;
              }
              if (lVar16 != 0) {
                do {
                  uVar2 = (int)*puVar11 >> 5;
                  uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                  *(uint *)(*param_3 + uVar7) =
                       *(uint *)(*param_3 + uVar7) | 1 << (ulong)(*puVar11 & 0x1f);
                  puVar1 = puVar11 + 1;
                  uVar2 = (int)*puVar1 >> 5;
                  uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                  puVar11 = puVar11 + 2;
                  *(uint *)(*param_3 + uVar7) =
                       *(uint *)(*param_3 + uVar7) | 1 << (ulong)(*puVar1 & 0x1f);
                } while (puVar11 != puVar12 + iVar3);
              }
            }
          }
        }
LAB_0054b524:
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)*(int *)(param_1 + 0x48));
    }
  }
  return uVar14;
}

