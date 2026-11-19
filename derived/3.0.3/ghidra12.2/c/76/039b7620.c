
bool FUN_039b7620(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar3 = (ulong)*(byte *)(param_2 + 0xef);
  if (uVar3 == 0) {
    uVar3 = (ulong)*(byte *)(param_2 + 0xed);
    if (uVar3 == 0) {
      return true;
    }
    piVar6 = (int *)*param_3;
    piVar8 = (int *)*param_4;
    uVar4 = uVar3;
    piVar5 = piVar6;
    piVar7 = piVar8;
    do {
      if (*piVar5 != *piVar7) {
        return false;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar4 != 0);
    piVar5 = piVar8 + 1;
    piVar7 = piVar6 + 1;
    uVar4 = uVar3;
    do {
      if (*piVar7 != *piVar5) {
        return false;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar4 != 0);
    piVar5 = piVar6 + 2;
    piVar7 = piVar8 + 2;
    do {
      uVar3 = uVar3 - 1;
      bVar2 = *piVar5 == *piVar7;
      if (!bVar2) {
        return bVar2;
      }
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar3 != 0);
  }
  else {
    piVar6 = (int *)param_3[2];
    piVar8 = (int *)param_4[2];
    uVar4 = uVar3;
    piVar5 = piVar6;
    piVar7 = piVar8;
    do {
      if (*piVar5 != *piVar7) {
        return false;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar4 != 0);
    bVar1 = *(byte *)(param_2 + 0xed);
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0) {
      piVar5 = (int *)*param_3;
      uVar9 = uVar4;
      piVar7 = (int *)*param_4;
      do {
        if (*piVar5 != *piVar7) {
          return false;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 6;
        piVar7 = piVar7 + 6;
      } while (uVar9 != 0);
    }
    piVar5 = piVar8 + 1;
    piVar7 = piVar6 + 1;
    uVar9 = uVar3;
    do {
      if (*piVar7 != *piVar5) {
        return false;
      }
      uVar9 = uVar9 - 1;
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar9 != 0);
    if (bVar1 != 0) {
      piVar5 = (int *)(*param_4 + 4);
      piVar7 = (int *)(*param_3 + 4);
      uVar9 = uVar4;
      do {
        if (*piVar7 != *piVar5) {
          return false;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 6;
        piVar7 = piVar7 + 6;
      } while (uVar9 != 0);
    }
    piVar5 = piVar6 + 2;
    piVar7 = piVar8 + 2;
    do {
      if (*piVar5 != *piVar7) {
        return false;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar3 != 0);
    if (bVar1 == 0) {
      return true;
    }
    piVar5 = (int *)(*param_4 + 8);
    piVar7 = (int *)(*param_3 + 8);
    do {
      uVar4 = uVar4 - 1;
      bVar2 = *piVar7 == *piVar5;
      if (!bVar2) {
        return bVar2;
      }
      piVar5 = piVar5 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar4 != 0);
  }
  return bVar2;
}

