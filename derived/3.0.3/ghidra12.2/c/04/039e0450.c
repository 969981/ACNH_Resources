
void FUN_039e0450(long param_1)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = (ushort *)(param_1 + 0x2a70);
  uVar5 = *puVar1;
  uVar11 = uVar5 >> 3 & 1;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    iVar8 = 0;
    do {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x1d8) + (long)iVar8 * 0x910 + 0x308);
      if ((bVar2 >> 2 & 1) != 0) {
        bVar4 = false;
        uVar11 = 1;
        goto joined_r0x039e04c4;
      }
      if ((bVar2 >> 3 & 1) != 0) {
        bVar4 = true;
        goto joined_r0x039e04c4;
      }
      iVar8 = iVar8 + 1;
    } while (*(int *)(param_1 + 0x1d0) != iVar8);
  }
  bVar4 = false;
joined_r0x039e04c4:
  if ((uVar5 >> 5 & 1) == 0) {
    if (uVar11 != 0) goto LAB_039e04d8;
LAB_039e050c:
    if (!bVar4) goto LAB_039e051c;
  }
  else {
    FUN_039e08e0(param_1,*(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 8));
    uVar5 = *puVar1 & 0xffdf;
    *puVar1 = uVar5;
    if (uVar11 == 0) goto LAB_039e050c;
LAB_039e04d8:
    FUN_039e0c70(param_1);
  }
  FUN_039e1200(param_1);
  uVar5 = *puVar1;
LAB_039e051c:
  iVar8 = *(int *)(param_1 + 0x1d0);
  *puVar1 = uVar5 & 0xfff7;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(char *)(param_1 + 0x2a72) = '\x01' - *(char *)(param_1 + 0x2a72);
  if (iVar8 != 0) {
    lVar13 = *(long *)(param_1 + 0x1d8);
    iVar7 = 0;
    do {
      lVar12 = lVar13 + (long)iVar7 * 0x910;
      FUN_039e4b40(lVar12);
      if ((*puVar1 >> 4 & 1) != 0) {
        lVar6 = lVar13 + (long)iVar7 * 0x910;
        *(byte *)(lVar6 + 0x308) = *(byte *)(lVar6 + 0x308) | 0x20;
      }
      if (((*(char *)(lVar13 + (long)iVar7 * 0x910 + 0x30d) == -1) &&
          ((*(byte *)(lVar13 + (long)iVar7 * 0x910 + 0x308) >> 5 & 1) != 0)) &&
         (*(int *)(param_1 + 0x1e0) < *(int *)(param_1 + 0x1e4))) {
        *(long *)(*(long *)(param_1 + 0x1e8) + (long)*(int *)(param_1 + 0x1e0) * 8) = lVar12;
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar8 != iVar7);
    iVar8 = *(int *)(param_1 + 0x1d0);
    if (iVar8 != 0) {
      lVar13 = *(long *)(param_1 + 0x1d8);
      iVar7 = 0;
      do {
        lVar12 = lVar13 + (long)iVar7 * 0x910;
        cVar3 = *(char *)(lVar12 + 0x30d);
        if ((int)cVar3 != 0xffffffff) {
          if ((*(byte *)(lVar13 + (long)iVar7 * 0x910 + 0x308) >> 5 & 1) == 0) {
            uVar9 = (uint)cVar3;
            if (*(uint *)(param_1 + 0x1d0) < (uint)(int)cVar3 || *(uint *)(param_1 + 0x1d0) == uVar9
               ) {
              uVar9 = 0;
            }
            if ((*(byte *)(*(long *)(param_1 + 0x1d8) + (long)(int)uVar9 * 0x910 + 0x308) >> 5 & 1)
                == 0) goto LAB_039e05f0;
          }
          if (*(int *)(param_1 + 0x1e0) < *(int *)(param_1 + 0x1e4)) {
            *(long *)(*(long *)(param_1 + 0x1e8) + (long)*(int *)(param_1 + 0x1e0) * 8) = lVar12;
            *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
          }
        }
LAB_039e05f0:
        iVar7 = iVar7 + 1;
      } while (iVar8 != iVar7);
    }
    if (*(int *)(param_1 + 0x1e0) != 0) {
      lVar13 = (long)*(int *)(param_1 + 0x1e0) << 3;
      puVar10 = *(undefined8 **)(param_1 + 0x1e8);
      do {
        FUN_039e5500(*puVar10,*(undefined1 *)(param_1 + 0x2a72));
        lVar13 = lVar13 + -8;
        puVar10 = puVar10 + 1;
      } while (lVar13 != 0);
    }
  }
  if ((*puVar1 >> 6 & 1) != 0) {
    *puVar1 = *puVar1 & 0xffbf;
  }
  return;
}

