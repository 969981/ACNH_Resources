
void FUN_0231d604(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if ((*(uint *)(param_1 + 0x17d8) >> 2 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 4;
  uVar5 = *(uint *)(param_1 + 0x17cc);
  if ((uVar5 >> 0x15 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1858) == 0) goto LAB_0231d6ec;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar4 = (**(code **)(*plVar2 + 0x148))();
  uVar5 = *(uint *)(param_1 + 0x1854);
  uVar3 = *(uint *)(lVar4 + 4);
  if (uVar3 == uVar5) {
    lVar6 = 0;
  }
  else {
    uVar1 = uVar3 - uVar5;
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      uVar1 = uVar5 - uVar3;
    }
    if (uVar1 < 0x80000001) {
      lVar7 = -1;
    }
    else {
      lVar7 = 1;
    }
    lVar6 = -lVar7;
    if (uVar5 < uVar3) {
      lVar6 = lVar7;
    }
  }
  lVar6 = lVar6 * (ulong)*(uint *)(param_1 + 0x1858);
  uVar1 = uVar3 + (int)lVar6;
  if (lVar6 < 1) {
    if (lVar6 < 0) {
      if (uVar1 < uVar3) {
        if (uVar3 < uVar5 || uVar5 < uVar1) goto LAB_0231d6c4;
      }
      else if (uVar3 < uVar5 && uVar5 < uVar1) goto LAB_0231d6c4;
      goto LAB_0231d6e4;
    }
    if ((int)lVar6 != 0) {
      return;
    }
  }
  else {
    if (uVar3 < uVar1) {
      if (uVar5 < uVar3 || uVar1 < uVar5) goto LAB_0231d6c4;
    }
    else if (uVar5 < uVar3 && uVar1 < uVar5) {
LAB_0231d6c4:
      *(uint *)(lVar4 + 4) = uVar1;
      return;
    }
LAB_0231d6e4:
    *(uint *)(lVar4 + 4) = uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0x17cc);
LAB_0231d6ec:
  *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffdfffff;
  return;
}

