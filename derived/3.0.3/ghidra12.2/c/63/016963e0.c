
bool FUN_016963e0(long param_1,long param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 + -1 <= DAT_05233980 && DAT_05233970 <= iVar7 + -2) {
    iVar8 = *(int *)(param_2 + 0xc);
    if ((DAT_05233974 <= iVar8 + -2) && (iVar8 + -1 <= DAT_05233984)) {
      uVar6 = iVar7 + -2 >> 1;
      uVar2 = (iVar8 + -2) * 0x80 & 0xffffff00;
      if (uVar2 + uVar6 >> 0xf == 0) {
        param_1 = param_1 + 8;
        uVar9 = 1 << (ulong)(uVar6 & 0x1f);
        uVar4 = *(uint *)(param_1 + (ulong)(uVar2 + uVar6 >> 5) * 4) & uVar9;
        bVar12 = uVar4 != 0 & param_3;
        if ((uVar4 == 0) || (DAT_05233980 < iVar7 + 1)) {
LAB_0169654c:
          return (bool)(bVar12 & 1);
        }
        uVar4 = iVar7 >> 1;
        if (uVar2 + uVar4 >> 0xf == 0) {
          uVar10 = 1 << (ulong)(uVar4 & 0x1f);
          uVar5 = *(uint *)(param_1 + (ulong)(uVar2 + uVar4 >> 5) * 4) & uVar10;
          bVar12 = uVar5 != 0 & param_3;
          if ((uVar5 == 0) || (iVar1 = iVar7 + 3, DAT_05233980 < iVar1)) goto LAB_0169654c;
          uVar5 = iVar7 + 2 >> 1;
          if ((uVar2 + uVar5 >> 0xf == 0) &&
             (uVar11 = 1 << (ulong)(uVar5 & 0x1f),
             (*(uint *)(param_1 + (ulong)(uVar2 + uVar5 >> 5) * 4) & uVar11) != 0)) {
            if (DAT_05233984 < iVar8 + 1) goto LAB_01696408;
            uVar3 = iVar8 << 7 & 0xffffff00;
            uVar2 = uVar3 + uVar6;
            if (uVar2 >> 0xf == 0) {
              uVar2 = *(uint *)(param_1 + (ulong)(uVar2 >> 5) * 4) & uVar9;
              bVar12 = uVar2 != 0 & param_3;
              if ((uVar2 == 0) || (DAT_05233980 < iVar1)) goto LAB_0169654c;
              uVar3 = uVar3 + uVar5;
              if ((uVar3 >> 0xf == 0) &&
                 ((*(uint *)(param_1 + (ulong)(uVar3 >> 5) * 4) & uVar11) != 0)) {
                bVar12 = param_3;
                if (DAT_05233984 < iVar8 + 3) goto LAB_0169654c;
                iVar7 = (iVar8 << 7 & 0xffffff00U) + 0x100;
                if (((iVar7 + uVar6 >> 0xf == 0) &&
                    ((*(uint *)(param_1 + (ulong)(iVar7 + uVar6 >> 5) * 4) & uVar9) != 0)) &&
                   (iVar7 + uVar4 >> 0xf == 0)) {
                  uVar10 = *(uint *)(param_1 + (ulong)(iVar7 + uVar4 >> 5) * 4) & uVar10;
                  bVar12 = uVar10 != 0 & param_3;
                  if ((uVar10 == 0) || (DAT_05233980 < iVar1)) goto LAB_0169654c;
                  if (iVar7 + uVar5 >> 0xf == 0) {
                    return (*(uint *)(param_1 + (ulong)(iVar7 + uVar5 >> 5) * 4) & uVar11) != 0;
                  }
                }
              }
            }
          }
        }
      }
      return false;
    }
  }
LAB_01696408:
  return (bool)(param_3 & 1);
}

