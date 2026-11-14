
void FUN_01d6f000(undefined8 *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint *puVar14;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar3 = *(undefined8 **)(param_2 + 0x28);
    lVar5 = (long)*(int *)(param_2 + 0x20) * 8;
    do {
      lVar5 = lVar5 + -8;
      puVar13 = (ulong *)*puVar3;
      if (*puVar13 == *param_3) {
        puVar14 = *(uint **)(param_2 + 0x38);
        if (puVar14 == (uint *)0x0) goto LAB_01d6f180;
        uVar2 = *puVar14;
        if ((int)uVar2 < 1) goto LAB_01d6f180;
        puVar3 = *(undefined8 **)(puVar14 + 2);
        lVar5 = 0;
        sVar6 = (long)(int)uVar2 * 8;
        goto LAB_01d6f0e0;
      }
      puVar3 = puVar3 + 1;
    } while (*param_3 <= *puVar13 && lVar5 != 0);
  }
  puVar14 = *(uint **)(param_2 + 0x38);
  puVar3 = *(undefined8 **)(puVar14 + 2);
  uVar2 = *puVar14;
  puVar13 = (ulong *)*puVar3;
  if (0 < (int)uVar2) {
    lVar5 = 0;
    sVar6 = (long)(int)uVar2 * 8;
    do {
      sVar6 = sVar6 - 8;
      if ((ulong *)*puVar3 == puVar13) {
        iVar4 = (int)lVar5;
        if (iVar4 != 1) {
          if ((-1 < -iVar4) && (-iVar4 < (int)uVar2)) {
            if (1 - iVar4 < (int)uVar2) {
              memmove(puVar3,puVar3 + 1,sVar6);
              uVar2 = *puVar14;
            }
            *puVar14 = uVar2 - 1;
            puVar14 = *(uint **)(param_2 + 0x38);
            uVar2 = *puVar14;
          }
          if ((int)uVar2 < (int)puVar14[1]) {
            *(ulong **)(*(long *)(puVar14 + 2) + (long)(int)uVar2 * 8) = puVar13;
            *puVar14 = *puVar14 + 1;
          }
        }
        break;
      }
      lVar5 = lVar5 + -1;
      puVar3 = puVar3 + 1;
    } while ((ulong)uVar2 + lVar5 != 0);
  }
  *(undefined1 *)(puVar13 + 0xd8) = 0;
  *puVar13 = *param_3;
  uVar2 = *(int *)(param_2 + 0x20) - 1;
  if (uVar2 != 0 && 0 < *(int *)(param_2 + 0x20)) {
    lVar5 = *(long *)(param_2 + 0x28);
    uVar8 = 0;
    do {
      if ((int)uVar2 <= (int)uVar8) break;
      puVar9 = *(ulong **)(lVar5 + (ulong)uVar8 * 8);
      uVar7 = (ulong)uVar8;
      if ((uVar2 - uVar8 & 1) == 0) {
        puVar12 = puVar9;
        uVar10 = uVar7;
      }
      else {
        uVar10 = uVar7 + 1;
        puVar12 = *(ulong **)(lVar5 + uVar10 * 8);
        if (*puVar9 < *puVar12) {
          *(ulong **)(lVar5 + uVar10 * 8) = puVar9;
          *(ulong **)(lVar5 + uVar7 * 8) = puVar12;
          puVar12 = puVar9;
        }
      }
      uVar11 = (ulong)uVar2;
      uVar2 = uVar8;
      if (~uVar7 + uVar11 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 8 + uVar10 * 8);
        do {
          puVar9 = (ulong *)*puVar3;
          if (*puVar12 < *puVar9) {
            puVar3[-1] = puVar9;
            *puVar3 = puVar12;
            uVar2 = (uint)uVar10;
          }
          else {
            puVar12 = puVar9;
          }
          puVar9 = (ulong *)puVar3[1];
          if (*puVar12 < *puVar9) {
            uVar2 = (uint)uVar10 + 1;
            *puVar3 = puVar9;
            puVar3[1] = puVar12;
          }
          else {
            puVar12 = puVar9;
          }
          uVar10 = uVar10 + 2;
          puVar3 = puVar3 + 2;
        } while (uVar11 != uVar10);
      }
      if ((int)uVar2 <= (int)uVar8) break;
      puVar9 = *(ulong **)(lVar5 + (ulong)uVar2 * 8);
      uVar10 = (ulong)uVar2;
      uVar8 = uVar2;
      do {
        lVar1 = lVar5 + uVar10 * 8;
        puVar12 = *(ulong **)(lVar1 + -8);
        if (*puVar12 < *puVar9) {
          uVar8 = (uint)uVar10;
          *(ulong **)(lVar1 + -8) = puVar9;
          *(ulong **)(lVar5 + uVar10 * 8) = puVar12;
        }
        else {
          puVar9 = puVar12;
        }
        uVar10 = uVar10 - 1;
      } while ((long)uVar7 < (long)uVar10);
    } while (uVar8 != uVar2);
  }
LAB_01d6f180:
  *param_1 = puVar13;
  return;
  while( true ) {
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
    if ((ulong)uVar2 + lVar5 == 0) break;
LAB_01d6f0e0:
    sVar6 = sVar6 - 8;
    if ((ulong *)*puVar3 == puVar13) {
      iVar4 = (int)lVar5;
      if (iVar4 != 1) {
        if ((-1 < -iVar4) && (-iVar4 < (int)uVar2)) {
          if (1 - iVar4 < (int)uVar2) {
            memmove(puVar3,puVar3 + 1,sVar6);
            uVar2 = *puVar14;
          }
          *puVar14 = uVar2 - 1;
          puVar14 = *(uint **)(param_2 + 0x38);
          uVar2 = *puVar14;
        }
        if ((int)uVar2 < (int)puVar14[1]) {
          *(ulong **)(*(long *)(puVar14 + 2) + (long)(int)uVar2 * 8) = puVar13;
          *puVar14 = *puVar14 + 1;
        }
      }
      break;
    }
  }
  goto LAB_01d6f180;
}

