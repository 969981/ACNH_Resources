
void FUN_03b0c070(uint *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  if (*param_1 != 0) {
    uVar11 = 0;
    do {
      lVar17 = *(long *)(param_1 + 6);
      uVar16 = uVar11;
      if (param_1[4] <= uVar11) {
        uVar16 = 0;
      }
      plVar12 = (long *)(lVar17 + (long)(int)uVar16 * 0xb0);
      if (((*(byte *)(plVar12 + 8) & 1) != 0) &&
         (puVar13 = (uint *)(lVar17 + (long)(int)uVar16 * 0xb0 + 0x24), *puVar13 != 0)) {
        uVar15 = 0;
        do {
          lVar14 = (long)(int)uVar15;
          uVar15 = uVar15 + 1;
          *(undefined4 *)
           (*(long *)(**(long **)(*(long *)(*plVar12 + 0x38) + lVar14 * 8) + 0x10) + 0x1c) = 0;
          uVar6 = *puVar13;
        } while (uVar15 < uVar6);
        if ((uVar6 != 0) && (*(int *)(lVar17 + (long)(int)uVar16 * 0xb0 + 0x28) != 0)) {
          lVar17 = lVar17 + (long)(int)uVar16 * 0xb0;
          uVar16 = 0;
          do {
            uVar2 = *(ushort *)(*(long *)(lVar17 + 0x30) + (long)(int)uVar16 * 2);
            if (0 < (short)uVar2) {
              lVar14 = *(long *)(lVar17 + 0x10) + (long)(int)(*(int *)(lVar17 + 0x20) * uVar16) * 8;
              lVar8 = *(long *)(*(long *)(lVar17 + 0x38) + (ulong)uVar16 * 8);
              if (uVar2 == 1) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                do {
                  lVar10 = *(long *)(lVar8 + 0x10);
                  puVar1 = (undefined8 *)(lVar14 + uVar9 * 8);
                  uVar9 = uVar9 + 2;
                  uVar7 = *puVar1;
                  iVar3 = *(int *)(lVar10 + 0x1c);
                  *(int *)(lVar10 + 0x1c) = iVar3 + 1;
                  *(undefined8 *)(*(long *)(lVar10 + 0x10) + (long)iVar3 * 8) = uVar7;
                  lVar10 = *(long *)(lVar8 + 0x10);
                  uVar7 = puVar1[1];
                  iVar3 = *(int *)(lVar10 + 0x1c);
                  *(int *)(lVar10 + 0x1c) = iVar3 + 1;
                  *(undefined8 *)(*(long *)(lVar10 + 0x10) + (long)iVar3 * 8) = uVar7;
                } while (((ulong)uVar2 & 0xfffe) != uVar9);
              }
              if ((uVar2 & 1) != 0) {
                lVar8 = *(long *)(lVar8 + 0x10);
                uVar7 = *(undefined8 *)(lVar14 + uVar9 * 8);
                iVar3 = *(int *)(lVar8 + 0x1c);
                *(int *)(lVar8 + 0x1c) = iVar3 + 1;
                *(undefined8 *)(*(long *)(lVar8 + 0x10) + (long)iVar3 * 8) = uVar7;
              }
              uVar6 = *puVar13;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar6);
          lVar17 = *plVar12;
          if (((*(byte *)(lVar17 + 0x281) & 3) == 0) &&
             (lVar14 = *(long *)(lVar17 + 0x70), (*(byte *)(lVar14 + 0x5599) & 1) != 0)) {
            puVar13 = (uint *)(lVar14 + 0x4e58);
            do {
              uVar16 = *puVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
              if (bVar5) {
                *puVar13 = uVar16 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            *(long *)(*(long *)(lVar14 + 0x4e60) +
                     (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3)) = lVar17;
            *(byte *)(lVar17 + 0x281) = *(byte *)(lVar17 + 0x281) | 2;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *param_1);
  }
  return;
}

