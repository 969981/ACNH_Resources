
void FUN_03bee770(long param_1)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar3 = 0;
    do {
      lVar5 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(int *)(*(long *)(param_1 + 0x38) + lVar5) =
           *(int *)(*(long *)(param_1 + 0x38) + lVar5) + *(int *)(param_1 + 0x70);
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    do {
      lVar5 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(int *)(*(long *)(param_1 + 0x40) + lVar5) =
           *(int *)(*(long *)(param_1 + 0x40) + lVar5) + *(int *)(param_1 + 0x70);
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = 0;
    lVar5 = 8;
    do {
      uVar3 = uVar3 + 1;
      *(int *)(*(long *)(param_1 + 0x58) + lVar5) =
           *(int *)(*(long *)(param_1 + 0x58) + lVar5) + *(int *)(param_1 + 0x70);
      lVar5 = lVar5 + 0x14;
    } while (uVar3 < *(uint *)(param_1 + 0x1c));
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar4 = *(uint *)(param_1 + 0x70);
  if (uVar2 < uVar4) {
    uVar3 = *(ulong *)PTR_DAT_04bb38c0;
    uVar6 = *(ulong *)PTR_DAT_04bb38c8;
    do {
      piVar8 = (int *)(uVar6 | uVar2);
      piVar1 = piVar8 + 0x40000000;
      if (uVar3 <= uVar2) {
        piVar1 = piVar8;
      }
      if (*piVar1 - 1U < 2) {
        iVar7 = 8;
      }
      else if (*piVar1 == 0) {
        if ((char)piVar1[1] == '\0') {
          piVar1[2] = piVar1[2] + uVar4;
          iVar7 = 0x10;
          uVar4 = *(uint *)(param_1 + 0x70);
        }
        else {
          iVar7 = 0x10;
        }
      }
      else {
        iVar7 = 0;
      }
      uVar2 = iVar7 + uVar2;
    } while (uVar2 < uVar4);
  }
  return;
}

