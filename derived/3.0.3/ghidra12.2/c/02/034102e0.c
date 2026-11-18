
void FUN_034102e0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  if (puVar10 != (undefined8 *)0x0) {
    uVar9 = *(uint *)(param_1 + 0x20);
    uVar13 = *(uint *)(puVar10 + 1);
    if (uVar9 < uVar13) {
      plVar11 = (long *)*puVar10;
      lVar14 = puVar10[2];
      iVar1 = (int)plVar11[2];
      if (0 < iVar1) {
        lVar12 = 0;
        lVar17 = *plVar11 + (long)*(int *)((long)plVar11 + 0xc) * 0x60 + 0x54;
LAB_03410334:
        iVar2 = 0;
        if ((int)plVar11[1] <= (int)(*(int *)((long)plVar11 + 0xc) + (uint)lVar12)) {
          iVar2 = (int)plVar11[1];
        }
        if (*(int *)(lVar17 + (long)iVar2 * -0x60) != *(int *)(lVar14 + (long)(int)uVar9 * 0x10 + 8)
           ) goto code_r0x03410350;
        uVar13 = iVar1 - 1;
        if ((uint)lVar12 < uVar13) {
          do {
            iVar4 = (int)plVar11[1];
            iVar5 = *(int *)((long)plVar11 + 0xc);
            iVar1 = (int)lVar12 + iVar5;
            iVar2 = 0;
            if (iVar4 <= iVar1 + 1) {
              iVar2 = iVar4;
            }
            iVar3 = 0;
            if (iVar4 <= iVar1) {
              iVar3 = iVar4;
            }
            lVar17 = *plVar11 + (lVar12 + ((long)iVar5 - (long)iVar2)) * 0x60;
            lVar14 = lVar12 + ((long)iVar5 - (long)iVar3);
            lVar12 = lVar12 + 1;
            puVar15 = (undefined8 *)(*plVar11 + lVar14 * 0x60);
            uVar16 = *(undefined8 *)(lVar17 + 0x90);
            uVar6 = *(undefined8 *)(lVar17 + 0x78);
            uVar7 = *(undefined8 *)(lVar17 + 0x80);
            puVar15[5] = *(undefined8 *)(lVar17 + 0x88);
            puVar15[6] = uVar16;
            puVar15[3] = uVar6;
            puVar15[4] = uVar7;
            uVar16 = *(undefined8 *)(lVar17 + 0xb0);
            uVar6 = *(undefined8 *)(lVar17 + 0x98);
            uVar7 = *(undefined8 *)(lVar17 + 0xa0);
            puVar15[9] = *(undefined8 *)(lVar17 + 0xa8);
            puVar15[10] = uVar16;
            puVar15[7] = uVar6;
            puVar15[8] = uVar7;
            uVar16 = *(undefined8 *)(lVar17 + 0x70);
            uVar6 = *(undefined8 *)(lVar17 + 0x68);
            *puVar15 = *(undefined8 *)(lVar17 + 0x60);
            uVar8 = *(undefined4 *)(lVar17 + 0xb8);
            puVar15[1] = uVar6;
            puVar15[2] = uVar16;
            *(undefined4 *)(puVar15 + 0xb) = uVar8;
            uVar13 = (int)plVar11[2] - 1;
          } while ((int)lVar12 < (int)uVar13);
        }
        *(uint *)(plVar11 + 2) = uVar13;
        uVar13 = *(uint *)(puVar10 + 1);
        lVar14 = puVar10[2];
      }
LAB_03410408:
      if (uVar13 <= uVar9) {
        uVar9 = 0;
      }
      *(undefined8 *)(lVar14 + (long)(int)uVar9 * 0x10 + 8) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
code_r0x03410350:
  lVar12 = lVar12 + 1;
  lVar17 = lVar17 + 0x60;
  if (iVar1 == (int)lVar12) goto LAB_03410408;
  goto LAB_03410334;
}

