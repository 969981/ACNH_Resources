
void FUN_00196f90(long param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char local_4 [4];
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  piVar6 = (int *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28));
  if (uVar5 < 4) {
    iVar7 = 0;
  }
  else {
    uVar8 = uVar5 >> 2 & 3;
    if ((uVar5 >> 2) - 1 < 3) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      uVar9 = uVar5 >> 2 & 0x3ffffffffffffffc;
      do {
        iVar2 = *piVar6;
        piVar3 = piVar6 + 1;
        uVar9 = uVar9 - 4;
        piVar1 = piVar6 + 2;
        piVar4 = piVar6 + 3;
        piVar6 = piVar6 + 4;
        iVar7 = *piVar4 + *piVar1 + *piVar3 + iVar2 + iVar7;
      } while (uVar9 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      iVar7 = *piVar6 + iVar7;
      piVar6 = piVar6 + 1;
    }
    piVar6 = (int *)(*(long *)(param_1 + 0x10) +
                    *(long *)(param_1 + 0x28) + (uVar5 & 0xfffffffffffffffc));
  }
  if ((uVar5 & 3) != 0) {
    param_2 = (char)*piVar6 + param_2;
    if (((uVar5 & 3) != 1) && (param_2 = *(char *)((long)piVar6 + 1) + param_2, (uVar5 & 3) != 2)) {
      param_2 = *(char *)((long)piVar6 + 2) + param_2;
    }
  }
  local_4[0] = (char)iVar7 + (char)((uint)iVar7 >> 8) + (char)((uint)iVar7 >> 0x10) +
               (char)((uint)iVar7 >> 0x18) + param_2;
  FUN_00193030(param_1,local_4,1,0xffffffffffffffff);
  return;
}

