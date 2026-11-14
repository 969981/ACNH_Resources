
void FUN_01727510(undefined1 *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x1138) != 0)) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar7 != 0) {
      if (((int)param_3 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_3)) {
        local_25 = 0;
        local_128 = 0x100;
        puStack_130 = local_124;
        local_124[0] = 0;
        local_138 = PTR_DAT_04bb21f8 + 0x10;
        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_138,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + (ulong)param_3 * 0x10) + 0x98);
        if ((((lVar7 != 0) && ((*(byte *)(lVar7 + 0x32) >> 5 & 1) != 0)) &&
            (iVar1 = *(int *)(lVar7 + 0x9c), iVar1 != 0)) &&
           (lVar10 = *(long *)(lVar7 + 0x18), lVar10 != 0)) {
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            if (*(uint *)(lVar7 + 0x10) <= uVar8) {
              uVar9 = 0;
            }
            uVar13 = (ulong)uVar9;
            if ((lVar10 != 0) &&
               (lVar14 = *(long *)(lVar10 + uVar13 * 0x20), *(int *)(lVar14 + 4) == 0x15)) {
              iVar2 = *(int *)(lVar14 + 8);
              if (iVar2 < 0x60000000) {
                lVar5 = lVar10 + uVar13 * 0x20;
                lVar12 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
                piVar6 = (int *)(lVar12 + iVar2);
                if (*piVar6 < 3) {
                  bVar3 = false;
                }
                else {
                  bVar3 = *(int *)(((ulong)(uint)piVar6[3] & 0xfffffff) + lVar12 + 4) != 0;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
                piVar6 = (int *)(lVar5 + iVar2);
                if (1 < *piVar6) {
                  piVar6 = (int *)(((ulong)(uint)piVar6[2] & 0xfffffff) + lVar5 + 4);
                  goto LAB_01727658;
                }
                bVar4 = false;
              }
              else {
                uVar9 = iVar2 + 0xa0000000;
                if (*(uint *)(lVar7 + 0x80) <= uVar9) {
                  uVar9 = 0;
                }
                lVar5 = *(long *)(lVar7 + 0x88) + (ulong)uVar9 * 0x32;
                piVar6 = (int *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x21));
                bVar3 = *(int *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x22)) != 0;
LAB_01727658:
                bVar4 = *piVar6 != 0;
              }
              iVar2 = *(int *)(lVar14 + 8);
              if (iVar2 < 0x60000000) {
                lVar10 = *(long *)(*(long *)(lVar10 + uVar13 * 0x20 + 0x10) + 8);
                piVar6 = (int *)(lVar10 + iVar2);
                if (0 < *piVar6) {
                  puVar11 = (uint *)(((ulong)(uint)piVar6[1] & 0xfffffff) + lVar10 + 4);
                  goto LAB_017276c8;
                }
                uVar9 = 0;
              }
              else {
                uVar9 = iVar2 + 0xa0000000;
                if (*(uint *)(lVar7 + 0x80) <= uVar9) {
                  uVar9 = 0;
                }
                lVar10 = *(long *)(lVar7 + 0x88) + (ulong)uVar9 * 0x32;
                puVar11 = (uint *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x20));
LAB_017276c8:
                uVar9 = *puVar11;
              }
              if (bVar4) {
                if ((uVar9 < 8) && (uVar9 + 7 < 0xf)) {
                  param_1[1] = param_1[1] | (byte)(1 << (ulong)(uVar9 & 7));
                }
                *param_1 = 1;
              }
              if (bVar3) {
                if ((uVar9 < 8) && (uVar9 + 7 < 0xf)) {
                  param_1[2] = param_1[2] | (byte)(1 << (ulong)(uVar9 & 7));
                }
                *param_1 = 1;
              }
            }
            if (iVar1 - 1U == uVar8) {
              return;
            }
            lVar10 = *(long *)(lVar7 + 0x18);
            uVar8 = uVar8 + 1;
          } while( true );
        }
      }
    }
  }
  return;
}

