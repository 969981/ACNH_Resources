
void FUN_032490b0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  undefined *local_50;
  long lStack_48;
  
  puVar6 = PTR_DAT_04bb6448;
  puVar5 = PTR_DAT_04bb6440;
  lVar12 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar12 + 0x1d40) < 1) {
    if (*(long *)(lVar12 + 0x1c30) == 0) {
      return;
    }
    puVar10 = *(uint **)(*(long *)(lVar12 + 0x1c30) + 8);
    if (puVar10 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar12 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar12 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar10 <= param_2) {
      return;
    }
    if (puVar10[1] == 0) {
      return;
    }
    if ((ushort)puVar10[2] == 0) {
      return;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar10 = (uint *)((ulong)(puVar10[1] * param_2 + (uint)(ushort)puVar10[2] * 8 + iVar7) +
                      (long)puVar10);
  }
  else {
    if (*(uint *)(lVar12 + 0x1d40) <= param_2) {
      return;
    }
    uVar11 = param_2;
    if (*(uint *)(lVar12 + 0x1d30) <= param_2) {
      uVar11 = 0;
    }
    puVar10 = *(uint **)(*(long *)(lVar12 + 0x1d38) + (ulong)uVar11 * 8);
  }
  if (puVar10 != (uint *)0x0) {
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bb6440;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar6 + 0x48);
          if (-1 < (int)uVar11) {
            lVar12 = (ulong)uVar11 + (long)puVar10;
            goto LAB_032491e8;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar10;
        lVar12 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar15)) goto LAB_032491e8;
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar15)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar2 = (long)puVar10 + (lVar12 - (long)puVar15);
        if (lVar2 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar15));
        *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
        lVar12 = 0;
        if (uVar9 == 0) goto LAB_032491e8;
        piVar16 = (int *)(lVar2 + 4);
        while (piVar16[-1] != 0x45f320f2) {
          piVar16 = piVar16 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            lVar12 = 0;
            goto LAB_032491e8;
          }
        }
        iVar7 = 0;
        if (*piVar16 != -1) {
          iVar7 = *piVar16;
        }
        *(int *)(puVar6 + 0x48) = iVar7;
      } while (*puVar10 != 0);
    }
    lVar12 = 0;
LAB_032491e8:
    lStack_48 = *(long *)PTR_PTR_04bb6438;
    if (lVar12 != 0) {
      lStack_48 = lVar12;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    uVar9 = FUN_03256ab0(&local_50);
    if ((uVar9 & 1) == 0) {
      lVar12 = param_1 + 0x1f8;
      uVar8 = FUN_02798760(lVar12,&local_50);
      iVar7 = FUN_02798b88(lVar12,&local_50,uVar8);
      if (0 < iVar7) {
        iVar17 = 0;
        do {
          iVar17 = iVar17 + 1;
          uVar9 = FUN_0279bb10(lVar12,&local_50,iVar17);
          if ((uVar9 & 1) == 0) {
            lVar12 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
            if (lVar12 == 0) {
              return;
            }
            goto LAB_03249360;
          }
        } while (iVar7 != iVar17);
      }
    }
    else {
      iVar7 = FUN_03258260(param_2);
      if (0 < iVar7) {
        iVar17 = 0;
        do {
          iVar1 = iVar17 + 1;
          uVar9 = FUN_0279d6d0(param_1 + 0x1f8,&local_50,iVar17);
          if (((uVar9 & 1) != 0) &&
             (uVar9 = FUN_0279bb10(param_1 + 0x1f8,&local_50,iVar1), (uVar9 & 1) == 0)) {
            lVar12 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
            if (lVar12 == 0) {
              return;
            }
            iVar17 = iVar17 + 1;
LAB_03249360:
            if (*(uint *)(lVar12 + 0x298) < 2) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(lVar12 + 0x444) + *(int *)(lVar12 + 0x2e8) * *(int *)(lVar12 + 0x440)
              ;
            }
            uVar11 = 0xffffffff;
            if (iVar7 < *(int *)(lVar12 + 0x3d4)) {
              iVar1 = *(int *)(lVar12 + 0x2e8);
              iVar4 = 0;
              if (iVar1 != 0) {
                iVar4 = iVar7 / iVar1;
              }
              iVar13 = *(int *)(lVar12 + 0x430) - *(int *)(lVar12 + 0x438);
              if ((*(byte *)(lVar12 + 1000) >> 1 & 1) != 0) {
                uVar3 = *(uint *)(lVar12 + 0x434);
                uVar11 = 0;
                if ((int)uVar3 < iVar13) {
                  uVar11 = ~uVar3;
                }
                if (iVar13 < 0) {
                  uVar11 = uVar3 + 1;
                }
                iVar13 = uVar11 + iVar13;
              }
              uVar11 = (iVar7 - iVar4 * iVar1) + (iVar4 - iVar13) * iVar1;
              if (*(int *)(lVar12 + 0x208) <= (int)uVar11 || 0x7fffffff < uVar11) {
                uVar11 = 0xffffffff;
              }
            }
            if (*(uint *)(param_1 + 0x218) <= uVar11) {
              uVar11 = 0;
            }
            FUN_0312c9d0(*(undefined8 *)(*(long *)(param_1 + 0x220) + (long)(int)uVar11 * 8),iVar17,
                         param_2);
            return;
          }
          iVar17 = iVar1;
        } while (iVar7 != iVar1);
      }
    }
  }
  return;
}

