
void FUN_01d715b0(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long *local_28;
  
  lVar1 = *param_3;
  if (((char)param_3[0xd7] != '\0' && lVar1 != 0) && (*(int *)(param_2 + 0x28) != 0)) {
    puVar2 = *(undefined8 **)(param_2 + 0x30);
    lVar3 = (long)*(int *)(param_2 + 0x28) << 3;
    do {
      plVar11 = (long *)*puVar2;
      if (*plVar11 == 0) {
        *plVar11 = lVar1;
        if (*(int *)(param_2 + 0x28) < 2) goto LAB_01d71614;
        lVar1 = *(long *)(param_2 + 0x30);
        uVar6 = 0;
        uVar5 = *(int *)(param_2 + 0x28) - 1;
        goto LAB_01d71668;
      }
      if (*plVar11 == lVar1) goto LAB_01d71614;
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  plVar11 = (long *)0x0;
  goto LAB_01d71614;
  while( true ) {
    puVar7 = *(ulong **)(lVar1 + (ulong)uVar6 * 8);
    uVar4 = (ulong)uVar6;
    if ((uVar5 - uVar6 & 1) == 0) {
      puVar10 = puVar7;
      uVar8 = uVar4;
    }
    else {
      uVar8 = uVar4 + 1;
      puVar10 = *(ulong **)(lVar1 + uVar8 * 8);
      if (*puVar7 < *puVar10) {
        *(ulong **)(lVar1 + uVar8 * 8) = puVar7;
        *(ulong **)(lVar1 + uVar4 * 8) = puVar10;
        puVar10 = puVar7;
      }
    }
    uVar9 = (ulong)uVar5;
    uVar5 = uVar6;
    if (~uVar4 + uVar9 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 8 + uVar8 * 8);
      do {
        puVar7 = (ulong *)*puVar2;
        if (*puVar10 < *puVar7) {
          puVar2[-1] = puVar7;
          *puVar2 = puVar10;
          uVar5 = (uint)uVar8;
        }
        else {
          puVar10 = puVar7;
        }
        puVar7 = (ulong *)puVar2[1];
        if (*puVar10 < *puVar7) {
          uVar5 = (uint)uVar8 + 1;
          *puVar2 = puVar7;
          puVar2[1] = puVar10;
        }
        else {
          puVar10 = puVar7;
        }
        uVar8 = uVar8 + 2;
        puVar2 = puVar2 + 2;
      } while (uVar9 != uVar8);
    }
    if ((int)uVar5 <= (int)uVar6) break;
    puVar7 = *(ulong **)(lVar1 + (ulong)uVar5 * 8);
    uVar8 = (ulong)uVar5;
    uVar6 = uVar5;
    do {
      lVar3 = lVar1 + uVar8 * 8;
      puVar10 = *(ulong **)(lVar3 + -8);
      if (*puVar10 < *puVar7) {
        uVar6 = (uint)uVar8;
        *(ulong **)(lVar3 + -8) = puVar7;
        *(ulong **)(lVar1 + uVar8 * 8) = puVar10;
      }
      else {
        puVar7 = puVar10;
      }
      uVar8 = uVar8 - 1;
    } while ((long)uVar4 < (long)uVar8);
    if (uVar6 == uVar5) break;
LAB_01d71668:
    if ((int)uVar5 <= (int)uVar6) break;
  }
LAB_01d71614:
  local_28 = plVar11;
  FUN_01d71790(param_2,&local_28,param_3);
  *param_1 = plVar11;
  return;
}

