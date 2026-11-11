
long FUN_0053a360(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = FUN_00438810(0x140);
  puVar2 = param_2 + 4;
  FUN_00513a30(lVar4,param_1,*param_2,puVar2);
  if (*(char *)(param_2 + 1) != '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        lVar7 = *(long *)(*(long *)(lVar4 + 0x40) + lVar8 * 8);
        if (lVar7 != 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x20) + lVar8 * 8);
          uVar3 = *(uint *)(lVar6 + 0x48);
          if (uVar3 != 0) {
            uVar9 = 0;
            lVar6 = *(long *)(*(long *)(lVar6 + 0x78) + (long)(int)param_2[2] * 8);
            do {
              uVar10 = -(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4;
              FUN_00482150(*(long *)(lVar7 + 0x20) + uVar10,puVar2,*(long *)(lVar6 + 0x20) + uVar10)
              ;
              FUN_00482150(*(long *)(lVar7 + 0x30) + uVar10,puVar2,*(long *)(lVar6 + 0x20) + uVar10)
              ;
              uVar1 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar1;
            } while (uVar3 != uVar1);
          }
          FUN_0053b5d0(lVar7);
          iVar5 = *(int *)(param_1 + 0x28);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
  }
  return lVar4;
}

