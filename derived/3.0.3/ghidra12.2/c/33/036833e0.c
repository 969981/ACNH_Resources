
void FUN_036833e0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  if (*(char *)((long)param_1 + 0x89) != '\0') {
    piVar7 = (int *)*param_1;
    uVar1 = piVar7[2];
    uVar2 = piVar7[3];
    if (0 < (int)uVar1 && 0 < (int)uVar2) {
      iVar3 = *piVar7;
      uVar6 = 0;
      do {
        iVar8 = 0;
        uVar9 = 0;
        do {
          if (((*(int *)(param_2 + 0x10) <= (int)(uVar6 * iVar3 + iVar3 + -1) &&
                (int)(uVar6 * iVar3) <= *(int *)(param_2 + 0x20)) &&
              (*(int *)(param_2 + 0x14) <= iVar3 + -1 + iVar8)) &&
             (iVar8 <= *(int *)(param_2 + 0x24))) {
            lVar4 = *param_1;
            *(undefined1 *)((long)param_1 + 0x8a) = 1;
            lVar5 = (long)(int)(uVar6 + *(uint *)(lVar4 + 8) * uVar9);
            if (*(uint *)(lVar4 + 0xc) <= uVar9 || *(uint *)(lVar4 + 8) <= uVar6) {
              lVar5 = 0;
            }
            lVar5 = *(long *)(lVar4 + 0x10) + lVar5 * 0x23c;
            *(ushort *)(lVar5 + 0x238) = *(ushort *)(lVar5 + 0x238) | 2;
          }
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + iVar3;
        } while (uVar2 != uVar9);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
  }
  return;
}

