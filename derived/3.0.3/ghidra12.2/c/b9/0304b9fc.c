
void FUN_0304b9fc(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar9;
  long lVar8;
  
  if ((int)(param_3 | param_2) < 0) {
    return;
  }
  if ((int)param_2 < 3) {
    if (2 < (int)param_3) goto LAB_0304ba8c;
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x228) == 3) {
        uVar5 = 5;
        goto LAB_0304ba6c;
      }
    }
    else if ((param_3 == 2) && (*(int *)(param_1 + 0x228) == 5)) {
      uVar5 = 3;
LAB_0304ba6c:
      *(undefined4 *)(param_1 + 0x228) = uVar5;
    }
LAB_0304ba70:
    *(uint *)(param_1 + 0x224) = param_3;
    uVar6 = 1;
  }
  else {
    if ((int)param_3 < 3) goto LAB_0304ba70;
    if (param_3 == 3) {
      if (*(int *)(param_1 + 0x224) == 0) {
        *(undefined4 *)(param_1 + 0x224) = 1;
      }
    }
    else if ((param_3 == 5) && (*(int *)(param_1 + 0x224) == 2)) {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
LAB_0304ba8c:
    uVar6 = 0;
    *(uint *)(param_1 + 0x228) = param_3;
  }
  uVar4 = *(uint *)(param_1 + 0x224);
  lVar7 = *(long *)(param_1 + 0x218);
  if ((int)uVar4 < 3) {
    plVar9 = (long *)(lVar7 + 0x570) + uVar4;
    if (2 < uVar4) {
      plVar9 = (long *)(lVar7 + 0x570);
    }
  }
  else {
    if (5 < uVar4) {
      lVar8 = 0;
      goto LAB_0304bad8;
    }
    plVar9 = (long *)(lVar7 + (ulong)(uVar4 - 3) * 8 + 0x588);
  }
  lVar8 = *plVar9;
LAB_0304bad8:
  uVar4 = *(uint *)(param_1 + 0x228);
  if ((int)uVar4 < 3) {
    plVar9 = (long *)(lVar7 + 0x570) + uVar4;
    if (2 < uVar4) {
      plVar9 = (long *)(lVar7 + 0x570);
    }
  }
  else {
    if (5 < uVar4) {
      return;
    }
    plVar9 = (long *)(lVar7 + (ulong)(uVar4 - 3) * 8 + 0x588);
  }
  if ((lVar8 == 0) || (lVar7 = *plVar9, lVar7 == 0)) {
    return;
  }
  lVar2 = lVar7;
  if (uVar6 == 0) {
    lVar2 = lVar8;
    lVar8 = lVar7;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x218) + 0x1460);
  puVar3 = puVar1 + uVar6;
  if (7 < uVar6) {
    puVar3 = puVar1;
  }
  *puVar3 = *(undefined8 *)(lVar2 + 0x218);
  return;
}

