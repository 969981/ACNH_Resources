
void FUN_03b0c610(long param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  ushort auStack_1010 [2048];
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    iVar5 = 0;
    do {
      lVar14 = (long)iVar5;
      iVar5 = iVar5 + 1;
      lVar14 = **(long **)(lVar7 + lVar14 * 8);
      auStack_1010
      [(ulong)*(ushort *)
               (*(long *)(*(long *)(lVar14 + 8) + 0x50) + (ulong)*(ushort *)(lVar14 + 0x16) * 0xc +
               4) & 0x7ff] = 0xffff;
    } while (iVar3 != iVar5);
  }
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x78);
    iVar5 = 0;
    do {
      lVar14 = (long)iVar5;
      iVar5 = iVar5 + 1;
      lVar14 = **(long **)(lVar7 + lVar14 * 8);
      auStack_1010
      [(ulong)*(ushort *)
               (*(long *)(*(long *)(lVar14 + 8) + 0x50) + (ulong)*(ushort *)(lVar14 + 0x16) * 0xc +
               4) & 0x7ff] = 0xffff;
    } while (iVar3 != iVar5);
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      plVar9 = *(long **)(*(long *)(param_1 + 0x38) + (long)iVar5 * 8);
      uVar16 = (ulong)*(ushort *)
                       (*(long *)(*(long *)(*plVar9 + 8) + 0x50) +
                        (ulong)*(ushort *)(*plVar9 + 0x16) * 0xc + 4) & 0x7ff;
      uVar11 = (uint)auStack_1010[uVar16];
      if (uVar11 == 0xffff) {
        uVar4 = *(ushort *)(param_1 + 0x88);
        *(ushort *)((long)plVar9 + 0x16) = uVar4;
        uVar11 = *(uint *)(param_1 + 0x88);
        auStack_1010[uVar16] = uVar4;
        if (*(uint *)(param_1 + 0x98) <= uVar11) {
          uVar11 = 0;
        }
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar11 * 8);
        *(ushort *)(puVar2 + 1) = uVar4;
        *puVar2 = (int)plVar9[2];
        if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
          *(undefined4 **)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x88) * 8) = puVar2;
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        }
      }
      else {
        *(ushort *)((long)plVar9 + 0x16) = auStack_1010[uVar16];
        if (*(uint *)(param_1 + 0x98) <= uVar11) {
          uVar11 = 0;
        }
        fVar17 = *(float *)(*(long *)(param_1 + 0xa0) + (ulong)uVar11 * 8);
        if (fVar17 <= *(float *)(plVar9 + 2)) {
          fVar17 = *(float *)(plVar9 + 2);
        }
        *(float *)(*(long *)(param_1 + 0xa0) + (ulong)uVar11 * 8) = fVar17;
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
  }
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 != 0) {
    iVar5 = 0;
    do {
      plVar9 = *(long **)(*(long *)(param_1 + 0x78) + (long)iVar5 * 8);
      uVar16 = (ulong)*(ushort *)
                       (*(long *)(*(long *)(*plVar9 + 8) + 0x50) +
                        (ulong)*(ushort *)(*plVar9 + 0x16) * 0xc + 4) & 0x7ff;
      uVar11 = (uint)auStack_1010[uVar16];
      if (uVar11 == 0xffff) {
        uVar4 = *(ushort *)(param_1 + 0x88);
        *(ushort *)((long)plVar9 + 0x16) = uVar4;
        uVar11 = *(uint *)(param_1 + 0x88);
        auStack_1010[uVar16] = uVar4;
        if (*(uint *)(param_1 + 0x98) <= uVar11) {
          uVar11 = 0;
        }
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar11 * 8);
        *(ushort *)(puVar2 + 1) = uVar4;
        *puVar2 = (int)plVar9[2];
        if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
          *(undefined4 **)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x88) * 8) = puVar2;
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        }
      }
      else {
        *(ushort *)((long)plVar9 + 0x16) = auStack_1010[uVar16];
        if (*(uint *)(param_1 + 0x98) <= uVar11) {
          uVar11 = 0;
        }
        fVar17 = *(float *)(*(long *)(param_1 + 0xa0) + (ulong)uVar11 * 8);
        if (fVar17 <= *(float *)(plVar9 + 2)) {
          fVar17 = *(float *)(plVar9 + 2);
        }
        *(float *)(*(long *)(param_1 + 0xa0) + (ulong)uVar11 * 8) = fVar17;
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
  }
  uVar11 = *(uint *)(param_1 + 0x88);
  if (1 < (int)uVar11) {
    puVar6 = *(undefined8 **)(param_1 + 0x90);
    uVar16 = (ulong)(uVar11 >> 1);
    do {
      uVar15 = (uint)uVar16 * 2;
      pfVar8 = (float *)puVar6[uVar16 - 1 & 0xffffffff];
      if ((int)uVar11 < (int)uVar15) {
        uVar12 = (uint)uVar16;
      }
      else {
        uVar10 = uVar16 & 0xffffffff;
        do {
          if ((int)uVar15 < (int)uVar11) {
            uVar13 = uVar15 | *(float *)(puVar6 + (int)uVar15)[-1] < *(float *)puVar6[(int)uVar15];
          }
          else {
            uVar13 = uVar15;
          }
          uVar12 = (uint)uVar10;
          if (*(float *)puVar6[(int)(uVar13 - 1)] <= *pfVar8) break;
          puVar6[(int)((uint)uVar10 - 1)] = (float *)puVar6[(int)(uVar13 - 1)];
          uVar15 = uVar13 * 2;
          uVar10 = (ulong)uVar13;
          uVar12 = uVar13;
        } while ((int)uVar15 <= (int)uVar11);
      }
      puVar6[(int)(uVar12 - 1)] = pfVar8;
      bVar1 = 1 < (long)uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar1);
    uVar10 = (ulong)uVar11 - 1;
    uVar16 = uVar10 & 0xffffffff;
    pfVar8 = (float *)puVar6[uVar16];
    puVar6[uVar16] = *puVar6;
    uVar16 = (ulong)uVar11;
    if (2 < uVar11) {
      do {
        uVar11 = 2;
        uVar15 = 1;
        do {
          if ((int)uVar11 < (int)uVar10) {
            uVar12 = uVar11 | *(float *)(puVar6 + (int)uVar11)[-1] < *(float *)puVar6[(int)uVar11];
          }
          else {
            uVar12 = uVar11;
          }
          lVar7 = (long)(int)(uVar15 - 1);
          if (*(float *)puVar6[(int)(uVar12 - 1)] <= *pfVar8) goto LAB_03b0c980;
          puVar6[lVar7] = (float *)puVar6[(int)(uVar12 - 1)];
          uVar11 = uVar12 << 1;
          uVar15 = uVar12;
        } while ((long)(int)uVar11 < (long)uVar16);
        lVar7 = (long)(int)(uVar12 - 1);
LAB_03b0c980:
        puVar6[lVar7] = pfVar8;
        uVar16 = uVar10 - 1 & 0xffffffff;
        pfVar8 = (float *)puVar6[uVar16];
        puVar6[uVar16] = *puVar6;
        bVar1 = 2 < uVar10;
        uVar16 = uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    *puVar6 = pfVar8;
  }
  return;
}

