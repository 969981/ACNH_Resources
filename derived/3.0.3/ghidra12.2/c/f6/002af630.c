
void FUN_002af630(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  int iVar10;
  short sVar11;
  
  uVar4 = *(ushort *)(param_1 + 0x18);
  *(int *)(param_1 + 0x20) = param_2;
  param_2 = param_2 - (uint)uVar4;
  if (0 < param_2) {
    lVar9 = *(long *)(param_1 + 8);
    sVar11 = *(short *)(param_1 + 0x1a);
    sVar8 = *(short *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x14);
    if (lVar9 == 0) {
      iVar10 = 0;
      do {
        sVar6 = sVar11;
        do {
          uVar5 = uVar2 + 1 + uVar5;
          do {
            uVar5 = uVar5 - uVar2;
          } while (uVar2 <= uVar5);
          if (sVar11 == 0) {
            sVar11 = 0;
          }
          else {
            sVar6 = sVar11 + -1;
            *(short *)(param_1 + 0x1a) = sVar6;
            sVar11 = sVar6;
          }
          if (sVar8 == 0) {
            uVar4 = uVar4 + 1;
            *(uint *)(param_1 + 0x14) = uVar5;
            *(undefined2 *)(param_1 + 0x1c) = 0;
            *(ushort *)(param_1 + 0x18) = uVar4;
            goto joined_r0x002af7d0;
          }
          *(short *)(param_1 + 0x1c) = sVar8 + -1;
          bVar3 = sVar8 != 1;
          sVar8 = sVar8 + -1;
        } while (bVar3);
        *(uint *)(param_1 + 0x14) = uVar5;
joined_r0x002af7d0:
        iVar10 = iVar10 + 1;
        sVar8 = 0;
        sVar11 = sVar6;
      } while (iVar10 != param_2);
    }
    else {
      iVar10 = 0;
LAB_002af690:
      do {
        sVar6 = sVar11;
        sVar7 = sVar8;
        if (sVar11 != 0) {
          uVar1 = 0;
          if (uVar2 <= uVar5) {
            uVar1 = uVar2;
          }
          if (*(char *)(lVar9 + (ulong)(uVar5 - uVar1) * 0x5b0) != '\0') {
            return;
          }
        }
        do {
          uVar5 = uVar2 + 1 + uVar5;
          do {
            uVar5 = uVar5 - uVar2;
          } while (uVar2 <= uVar5);
          if (sVar6 == 0) {
            sVar6 = 0;
          }
          else {
            sVar11 = sVar6 + -1;
            *(short *)(param_1 + 0x1a) = sVar11;
            sVar6 = sVar11;
          }
          if (sVar7 == 0) {
            uVar4 = uVar4 + 1;
            sVar8 = 0;
            *(uint *)(param_1 + 0x14) = uVar5;
            *(undefined2 *)(param_1 + 0x1c) = 0;
            *(ushort *)(param_1 + 0x18) = uVar4;
            iVar10 = iVar10 + 1;
            if (iVar10 == param_2) {
              return;
            }
            goto LAB_002af690;
          }
          sVar8 = sVar7 + -1;
          *(short *)(param_1 + 0x1c) = sVar8;
        } while ((sVar7 != 1) &&
                ((sVar7 = sVar8, sVar6 == 0 || (*(char *)(lVar9 + (ulong)uVar5 * 0x5b0) == '\0'))));
        *(uint *)(param_1 + 0x14) = uVar5;
        iVar10 = iVar10 + 1;
      } while (iVar10 != param_2);
    }
  }
  return;
}

