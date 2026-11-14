
float FUN_01907820(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  uVar1 = (**(code **)(*param_1 + 0x158))();
  fVar7 = 0.0;
  switch(uVar1) {
  case 2:
    lVar5 = *(long *)(param_1[7] + 0x10);
    if (*(int *)(lVar5 + 0x58) != 0) goto LAB_01907878;
LAB_01907914:
    lVar5 = 0;
    break;
  case 3:
    if (*(int *)(*(long *)(param_1[7] + 0x28) + 0x58) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = **(long **)(*(long *)(param_1[7] + 0x28) + 0x60);
    }
    plVar3 = (long *)(lVar5 + 0x60);
    goto LAB_01907928;
  case 4:
    lVar5 = **(long **)(*(long *)(param_1[7] + 0x30) + 0x60);
    if (*(int *)(lVar5 + 0xe0) < 2) {
      return 0.0;
    }
    uVar6 = 1;
    do {
      if (uVar6 < *(uint *)(lVar5 + 0xc0)) {
        lVar2 = *(long *)(*(long *)(lVar5 + 200) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      lVar2 = (**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
      uVar6 = uVar6 + 1;
      fVar7 = fVar7 + *(float *)(lVar2 + 4);
    } while ((long)uVar6 < (long)*(int *)(lVar5 + 0xe0));
    return fVar7;
  default:
    goto switchD_01907864_caseD_5;
  case 6:
    lVar5 = *(long *)(param_1[7] + 0x20);
    if (*(int *)(lVar5 + 0x58) == 0) goto LAB_01907914;
LAB_01907878:
    lVar5 = **(long **)(lVar5 + 0x60);
  }
  plVar3 = (long *)(lVar5 + 0x68);
LAB_01907928:
  pfVar4 = (float *)(**(code **)(*plVar3 + 0xf0))();
  fVar7 = *pfVar4;
switchD_01907864_caseD_5:
  return fVar7;
}

