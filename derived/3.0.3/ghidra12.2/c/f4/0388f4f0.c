
/* WARNING: Removing unreachable block (ram,0x0388f568) */

void FUN_0388f4f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  
  puVar5 = PTR_DAT_04bcb7d8;
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bcb7d8;
  lVar17 = *(long *)(*(long *)(lVar11 + 0x90) + 0xc0);
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    bVar7 = (**(code **)(**(long **)(lVar11 + 0x68) + 0x240))();
    *(byte *)(param_1 + 0x1a6) = bVar7 & 1;
    if ((bVar7 & 1) != 0) goto LAB_0388f554;
    goto LAB_0388f6d8;
  }
LAB_0388f554:
  if (*(char *)(param_1 + 0x1a5) == '\0') {
    bVar7 = FUN_03892b40(lVar17,0);
    *(byte *)(param_1 + 0x1a5) = bVar7 & 1;
    cVar9 = *(char *)(param_1 + 0x1a4);
    if ((bVar7 & 1) != 0) goto LAB_0388f588;
  }
  else {
    cVar9 = *(char *)(param_1 + 0x1a4);
LAB_0388f588:
    if (cVar9 == '\0') {
      *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
      uVar12 = (ulong)*(uint *)(param_1 + 0x158);
      if ((int)*(uint *)(param_1 + 0x158) < 1) {
LAB_0388f61c:
        uVar12 = FUN_03893230(lVar17);
        if ((uVar12 & 1) != 0) {
          puVar8 = (uint *)(**(code **)(**(long **)(*(long *)puVar5 + 0x68) + 0x1e0))();
          uVar4 = *(ushort *)(lVar17 + 0x538);
          if (uVar4 != 0) {
            uVar10 = 0;
            do {
              uVar1 = uVar10;
              if (*(uint *)(lVar17 + 0x520) <= uVar10) {
                uVar1 = 0;
              }
              uVar2 = uVar10;
              if (*puVar8 <= uVar10) {
                uVar2 = 0;
              }
              uVar10 = uVar10 + 1;
              *(undefined1 *)(*(long *)(puVar8 + 2) + (ulong)uVar2) =
                   *(undefined1 *)(*(long *)(lVar17 + 0x528) + (ulong)uVar1);
            } while (uVar4 + 1 >> 1 != uVar10);
          }
          *(undefined1 *)(param_1 + 0x1a4) = 1;
          goto LAB_0388f6e0;
        }
      }
      else {
        pcVar15 = *(char **)(param_1 + 0x160);
        cVar9 = *(char *)(param_1 + 0x99);
        if (*(int *)(param_1 + 0x28) == 0) {
          if ((*pcVar15 == -1) || (cVar9 == *pcVar15)) {
            uVar16 = 0;
            do {
              if (uVar12 - 1 == uVar16) goto LAB_0388f61c;
              lVar11 = uVar16 + 1;
              uVar16 = uVar16 + 1;
            } while ((pcVar15[lVar11] == -1) || (cVar9 == pcVar15[lVar11]));
            if (uVar12 <= uVar16) goto LAB_0388f61c;
          }
        }
        else {
          uVar16 = 0;
          bVar6 = false;
          do {
            cVar3 = pcVar15[uVar16];
            lVar11 = (long)*(int *)(param_1 + 0x28) << 3;
            plVar14 = *(long **)(param_1 + 0x30);
            if (cVar3 != -1) {
              do {
                if (*(char *)(*plVar14 + 0x21) == cVar3) goto LAB_0388f5d0;
                plVar14 = plVar14 + 1;
                lVar11 = lVar11 + -8;
              } while (lVar11 != 0);
              if (cVar9 != cVar3) break;
            }
LAB_0388f5d0:
            uVar16 = uVar16 + 1;
            bVar6 = uVar12 <= uVar16;
          } while (uVar16 != uVar12);
          if (bVar6) goto LAB_0388f61c;
        }
      }
LAB_0388f6d8:
      cVar9 = *(char *)(param_1 + 0x1a4);
    }
  }
  if (cVar9 == '\0') {
    return;
  }
LAB_0388f6e0:
  *(char *)(lVar17 + 0x588) = (char)*(undefined4 *)(lVar17 + 0x530);
  FUN_0388d4f0(param_1);
  (**(code **)(**(long **)(*(long *)puVar5 + 0x68) + 0x1d8))(*(long **)(*(long *)puVar5 + 0x68),0);
  uVar10 = *(uint *)(*(long *)(*(long *)puVar5 + 0x68) + 0xa0);
  uVar12 = (ulong)uVar10;
  if (0 < (int)uVar10) {
    plVar14 = *(long **)(*(long *)(*(long *)puVar5 + 0x68) + 0xa8);
    do {
      if (*(char *)*plVar14 == -2) {
        lVar11 = *plVar14;
        if (lVar11 != 0) {
          *(uint *)(lVar11 + 4) = *(uint *)(lVar11 + 4) & 0xfffffffd;
        }
        break;
      }
      plVar14 = plVar14 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((*(char *)(param_1 + 0x1a4) != '\0') && (*(int *)(param_1 + 8) != 0)) {
    plVar14 = *(long **)(param_1 + 0x10);
    do {
      plVar13 = plVar14 + 1;
      *(undefined1 *)(*plVar14 + 0x30) = 0;
      plVar14 = plVar13;
    } while (plVar13 != (long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8));
  }
  return;
}

