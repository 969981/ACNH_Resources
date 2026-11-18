
ulong FUN_03271420(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  puVar4 = PTR_DAT_04bb32e0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if ((lVar7 == 0) || (*(uint *)(lVar7 + 0x298) < 2)) {
    FUN_033d0598(PTR_DAT_04bb32e0);
    iVar2 = *(int *)(param_1 + 0x220);
    uVar3 = 0;
    if (*(uint *)(param_1 + 0xaa8e8) != 0xffffffff) {
      uVar3 = *(uint *)(param_1 + 0xaa8e8);
    }
    lVar6 = FUN_033d0598(puVar4);
    lVar7 = lVar6 + 0x164;
    if (iVar2 != 1) {
      lVar7 = lVar6 + 0x100;
    }
    piVar1 = (int *)(lVar7 + 0x30) + uVar3;
    if (0xb < uVar3) {
      piVar1 = (int *)(lVar7 + 0x30);
    }
    iVar2 = *piVar1;
    if ((iVar2 != -1) && (0 < (int)*(uint *)(param_1 + 0x228))) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x46c10) == 0) {
          if (iVar2 == -1) {
            return uVar5;
          }
        }
        else {
          uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x230) + uVar5 * 8) + 0xc);
          iVar8 = -1;
          if (uVar3 <= *(int *)(param_1 + 0x46c10) - 1U) {
            iVar8 = **(int **)(*(long *)(param_1 + 0x46c18) + (long)(int)uVar3 * 8);
          }
          if (iVar2 == iVar8) {
            return uVar5;
          }
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(param_1 + 0x228) != uVar5);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(uint)(*(int *)(lVar7 + 0x444) +
                         *(int *)(lVar7 + 0x2e8) * *(int *)(lVar7 + 0x440));
  }
  return uVar5;
}

