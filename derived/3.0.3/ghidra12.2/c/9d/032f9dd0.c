
undefined8 FUN_032f9dd0(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(ushort *)(param_1 + 0x14);
  uVar3 = uVar2 - 0x61;
  uVar4 = uVar3 >> 1;
  if (((uVar4 & 0x7fff | uVar3 * 0x8000 & 0xffff) < 0xb) &&
     ((0x495U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    return 3;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
LAB_032f9e48:
    if (4 < uVar3) {
      uVar6 = 0;
    }
    *(ushort *)(param_1 + uVar6 * 2) = uVar2;
  }
  else {
    uVar7 = (ulong)(uVar3 - 1);
    if (5 < uVar3) {
      uVar7 = 0;
    }
    if (*(short *)(param_1 + uVar7 * 2) != 0x6e) goto LAB_032f9e48;
    if (uVar2 != 0x79) {
      if (uVar2 != 0x6e) {
        *(undefined2 *)(param_1 + uVar7 * 2) =
             *(undefined2 *)(&DAT_04102e38 + (long)*(int *)(param_1 + 0x1c) * 2);
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar6 = (ulong)uVar3;
        *(uint *)(param_1 + 0xc) = uVar3;
        if (4 < uVar3) {
          uVar6 = 0;
        }
        *(undefined2 *)(param_1 + uVar6 * 2) = *(undefined2 *)(param_1 + 0x14);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        return 7;
      }
      *(undefined2 *)(param_1 + uVar7 * 2) =
           *(undefined2 *)(&DAT_04102e38 + (long)*(int *)(param_1 + 0x1c) * 2);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      goto LAB_032f9e6c;
    }
    if (4 < uVar3) {
      uVar6 = 0;
    }
    *(undefined2 *)(param_1 + uVar6 * 2) = 0x79;
  }
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 4) {
    return 7;
  }
  uVar5 = 1;
LAB_032f9e6c:
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  return 7;
}

