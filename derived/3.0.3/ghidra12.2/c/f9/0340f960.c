
void FUN_0340f960(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 != 0xffffffff) {
    if (uVar8 < 0x10e) {
      lVar10 = param_2 + 8 + (ulong)uVar8 * 0x1a8;
      if (*(int *)(lVar10 + 0x1a0) != 0) {
        lVar11 = param_2 + 8 + (ulong)uVar8 * 0x1a8;
        **(undefined1 **)(lVar11 + 0x60) = 0;
        *(undefined1 *)(lVar11 + 0xf0) = 0;
        if (((*(int *)(lVar11 + 0x100) != 1) && ((*(byte *)(lVar11 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar11 + 0x140) == -1)) {
          *(undefined4 *)(lVar11 + 0x140) = 1;
        }
        *(undefined4 *)(lVar10 + 0x1a0) = 0;
        if (*(int *)(param_1 + 0x18) == -1) goto LAB_0340f9e0;
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
LAB_0340f9e0:
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  if (puVar12 != (undefined8 *)0x0) {
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar15 = *(uint *)(puVar12 + 1);
    if (uVar8 < uVar15) {
      plVar13 = (long *)*puVar12;
      lVar10 = puVar12[2];
      iVar1 = (int)plVar13[2];
      if (0 < iVar1) {
        lVar14 = 0;
        lVar11 = *plVar13 + (long)*(int *)((long)plVar13 + 0xc) * 0x60 + 0x54;
LAB_0340fa30:
        iVar2 = 0;
        if ((int)plVar13[1] <= (int)(*(int *)((long)plVar13 + 0xc) + (uint)lVar14)) {
          iVar2 = (int)plVar13[1];
        }
        if (*(int *)(lVar11 + (long)iVar2 * -0x60) != *(int *)(lVar10 + (long)(int)uVar8 * 0x10 + 8)
           ) goto code_r0x0340fa4c;
        uVar15 = iVar1 - 1;
        if ((uint)lVar14 < uVar15) {
          do {
            iVar4 = (int)plVar13[1];
            iVar5 = *(int *)((long)plVar13 + 0xc);
            iVar1 = (int)lVar14 + iVar5;
            iVar2 = 0;
            if (iVar4 <= iVar1 + 1) {
              iVar2 = iVar4;
            }
            iVar3 = 0;
            if (iVar4 <= iVar1) {
              iVar3 = iVar4;
            }
            lVar11 = *plVar13 + (lVar14 + ((long)iVar5 - (long)iVar2)) * 0x60;
            lVar10 = lVar14 + ((long)iVar5 - (long)iVar3);
            lVar14 = lVar14 + 1;
            puVar16 = (undefined8 *)(*plVar13 + lVar10 * 0x60);
            uVar17 = *(undefined8 *)(lVar11 + 0x90);
            uVar6 = *(undefined8 *)(lVar11 + 0x78);
            uVar7 = *(undefined8 *)(lVar11 + 0x80);
            puVar16[5] = *(undefined8 *)(lVar11 + 0x88);
            puVar16[6] = uVar17;
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            uVar17 = *(undefined8 *)(lVar11 + 0xb0);
            uVar6 = *(undefined8 *)(lVar11 + 0x98);
            uVar7 = *(undefined8 *)(lVar11 + 0xa0);
            puVar16[9] = *(undefined8 *)(lVar11 + 0xa8);
            puVar16[10] = uVar17;
            puVar16[7] = uVar6;
            puVar16[8] = uVar7;
            uVar17 = *(undefined8 *)(lVar11 + 0x70);
            uVar6 = *(undefined8 *)(lVar11 + 0x68);
            *puVar16 = *(undefined8 *)(lVar11 + 0x60);
            uVar9 = *(undefined4 *)(lVar11 + 0xb8);
            puVar16[1] = uVar6;
            puVar16[2] = uVar17;
            *(undefined4 *)(puVar16 + 0xb) = uVar9;
            uVar15 = (int)plVar13[2] - 1;
          } while ((int)lVar14 < (int)uVar15);
        }
        *(uint *)(plVar13 + 2) = uVar15;
        uVar15 = *(uint *)(puVar12 + 1);
        lVar10 = puVar12[2];
      }
LAB_0340fb04:
      if (uVar15 <= uVar8) {
        uVar8 = 0;
      }
      *(undefined8 *)(lVar10 + (long)(int)uVar8 * 0x10 + 8) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
code_r0x0340fa4c:
  lVar14 = lVar14 + 1;
  lVar11 = lVar11 + 0x60;
  if (iVar1 == (int)lVar14) goto LAB_0340fb04;
  goto LAB_0340fa30;
}

