
byte FUN_01fa5a00(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  uVar4 = FUN_01fa5be4();
  if ((uVar4 & 1) == 0) {
LAB_01fa5af0:
    bVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xaf8c);
    if (uVar5 < 0x13) {
      uVar2 = 1 << (ulong)(uVar5 & 0x1f);
      if ((uVar2 & 0x60038) != 0) goto LAB_01fa5af0;
      if ((uVar2 & 0x1044) == 0) {
        if ((1 << (ulong)(uVar5 & 0x1f) & 0x180U) != 0) {
          if (*(int *)(param_1 + 0xaf88) != 1) goto LAB_01fa5af0;
          if (*(int *)(param_1 + 0x77f4) != 0x14) {
            bVar3 = 1;
            if (((*(int *)(param_1 + 0x77f4) != 0x42) &&
                (iVar8 = *(int *)(param_1 + 0x77b0), iVar8 != 0x14)) && (iVar8 != 0x42)) {
              bVar3 = FUN_02194914(param_1 + 0xb0b8);
              bVar3 = bVar3 ^ 1;
            }
            goto LAB_01fa5af4;
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0xaf88) == 0) {
          if ((*(byte *)(param_1 + 0xafb1) >> 2 & 1) != 0) {
            bVar3 = *(char *)(param_1 + 0x7878) != '\0';
            goto LAB_01fa5af4;
          }
          goto LAB_01fa5af0;
        }
        if (*(int *)(param_1 + 0xaf88) == 1) {
          piVar7 = (int *)(param_1 + 0xcbe8);
          iVar8 = *piVar7;
          if (iVar8 < 1) {
            uVar5 = *(uint *)(param_1 + 0xe710);
            puVar6 = &DAT_053fd568;
            if (-1 < (int)uVar5) {
              piVar7 = (int *)(param_1 + 0xb0c8);
              iVar8 = *piVar7;
              goto LAB_01fa5b30;
            }
          }
          else {
            uVar5 = *(uint *)(param_1 + 0xe714);
            puVar6 = &DAT_053fd568;
            if (-1 < (int)uVar5) {
LAB_01fa5b30:
              puVar6 = &DAT_053fd568;
              if ((int)uVar5 < iVar8) {
                puVar6 = *(undefined4 **)(*(long *)(piVar7 + 2) + (ulong)uVar5 * 8);
              }
            }
          }
          if (((puVar6[0x19] != 2) && ((*(byte *)(param_1 + 0xe724) & 3) == 0)) &&
             (((*(byte *)(*(long *)(*(long *)(param_1 + 0xb0c0) + 0x3b8) + 0xad5a) >> 2 & 1) == 0 &&
              (iVar8 = *(int *)(param_1 + 0x77f4), iVar8 != 0x14)))) {
            bVar3 = 1;
            if (((iVar8 != 0x42) && (iVar1 = *(int *)(param_1 + 0x77b0), iVar1 != 0x14)) &&
               (iVar1 != 0x42)) {
              if ((iVar8 == 0x53) || (iVar1 == 0x53)) {
                bVar3 = *(int *)(param_1 + 0xaf84) != 2;
              }
              else {
                bVar3 = *(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 3;
              }
            }
            goto LAB_01fa5af4;
          }
        }
      }
    }
    bVar3 = 1;
  }
LAB_01fa5af4:
  return bVar3 & 1;
}

