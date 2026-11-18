
void FUN_03405830(int *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  
  iVar2 = *param_2;
  if (param_1[9] < iVar2) {
    return;
  }
  param_1[0x1b] = iVar2;
  iVar6 = param_2[1];
  if (iVar2 <= param_2[1]) {
    iVar6 = iVar2;
  }
  param_1[0x28] = iVar6;
  param_1[0x1c] = param_2[2];
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 4);
  plVar5 = (long *)(param_2 + 6);
  uVar1 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((uVar1 & 1) == 0) {
    *(undefined ***)(param_1 + 0x20) = &PTR_LAB_04b296e0;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  *(undefined2 *)(param_1 + 0x29) = 0;
  if (0 < param_1[8]) {
    lVar3 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0xc);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 10) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar7 = puVar8;
      *(undefined8 **)(param_1 + 0xc) = puVar7;
      puVar8 = puVar7;
    } while (lVar3 < param_1[8]);
  }
  param_1[8] = 0;
  if ((0 < param_1[0x1b]) && (0 < param_1[9])) {
    iVar6 = 0;
    iVar2 = 0;
    do {
      if (iVar6 < param_1[9]) {
        puVar8 = *(undefined8 **)(param_1 + 0xc);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0xc) = *puVar8;
        }
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = 0;
        iVar6 = param_1[8];
        if (iVar6 < param_1[9]) {
          *(undefined8 **)(*(long *)(param_1 + 10) + (long)iVar6 * 8) = puVar8;
          iVar6 = param_1[8] + 1;
          param_1[8] = iVar6;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x1b]);
  }
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    plVar9 = *(long **)(param_1 + 2);
    uVar10 = uVar1 & 3;
    plVar5 = plVar9;
    if (uVar10 != 0) {
      plVar4 = plVar9;
      do {
        plVar5 = plVar4 + 1;
        uVar10 = uVar10 - 1;
        *(undefined4 *)(*plVar4 + 0x20) = 0xffffffff;
        plVar4 = plVar5;
      } while (uVar10 != 0);
    }
    if (2 < (uVar1 - 1 & 0x1fffffffffffffff)) {
      do {
        *(undefined4 *)(*plVar5 + 0x20) = 0xffffffff;
        *(undefined4 *)(plVar5[1] + 0x20) = 0xffffffff;
        *(undefined4 *)(plVar5[2] + 0x20) = 0xffffffff;
        plVar4 = plVar5 + 3;
        plVar5 = plVar5 + 4;
        *(undefined4 *)(*plVar4 + 0x20) = 0xffffffff;
      } while (plVar5 != plVar9 + uVar1);
    }
  }
  FUN_03405a20((float)param_1[0x11] - (float)param_1[0x10] * (float)param_1[0x28],param_1[0x12],
               param_1);
  return;
}

