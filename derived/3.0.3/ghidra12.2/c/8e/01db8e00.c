
undefined8 FUN_01db8e00(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 uStack_61;
  
  iVar14 = *(int *)(param_1 + 0x8418);
  iVar6 = *(int *)(param_1 + 0x8414);
  iVar12 = iVar6;
  if ((iVar14 != -1) && (iVar12 = iVar14, iVar6 != iVar14)) {
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x8418) = 0xffffffff;
    iVar12 = iVar6;
  }
  FUN_02669620(&uStack_61,iVar12);
  if (-1 < (int)param_2) {
    iVar14 = *(int *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x50);
    if ((iVar14 < iVar6) && (param_2 < *(uint *)(param_1 + 0x74a0))) {
      plVar5 = (long *)(param_1 + 0x71d0) + (ulong)param_2 * 3;
      if (0x1d < param_2) {
        plVar5 = (long *)(param_1 + 0x71d0);
      }
      if (iVar14 != 0) {
        iVar12 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x54) + iVar12;
          iVar4 = 0;
          if (iVar6 <= iVar1) {
            iVar4 = iVar6;
          }
          if (*(long *)(*(long *)(param_1 + 0x48) + 0x378 + (long)(iVar1 - iVar4) * 0x3c8) ==
              *plVar5) {
            if (-1 < iVar12) goto LAB_01db8fc8;
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar14 != iVar12);
      }
      lVar13 = plVar5[1];
      if ((lVar13 != 0) && (uVar7 = *(uint *)(DAT_05379880 + 0x28), uVar7 != 0xffffffff)) {
        if (*(uint *)(DAT_05379880 + 8) <= uVar7) {
          uVar7 = 0;
        }
        lVar2 = *(long *)(DAT_05379880 + 0x10) + (long)(int)uVar7 * 0x40;
        if ((*(char *)(lVar2 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar2 + 0x20))) {
          uVar11 = 0;
          uVar9 = (ulong)*(uint *)(lVar2 + 0x20);
          do {
            if (*(uint *)(lVar2 + 0x10) <= (uint)uVar11 || *(long *)(lVar2 + 0x18) == 0) break;
            lVar8 = nn::friends::Friend::GetAccountId();
            if (lVar8 == lVar13) {
              uVar9 = FUN_01d9e530(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 8),&uStack_61,plVar5,
                                   param_1 + 8,param_3 & 1);
              if ((uVar9 & 1) != 0) {
                uVar10 = 1;
                goto LAB_01db8fd0;
              }
              break;
            }
            uVar3 = (uVar9 & 0xffffffff00000000) + 0x100000000;
            uVar11 = uVar3 >> 0x20;
            iVar14 = (int)uVar9;
            uVar9 = uVar3 | uVar9 & 0xffffffff;
          } while ((int)(uVar3 >> 0x20) < iVar14);
        }
      }
    }
  }
LAB_01db8fc8:
  uVar10 = 0;
  param_2 = 0xffffffff;
LAB_01db8fd0:
  *(uint *)(param_1 + 0x8420) = param_2;
  return uVar10;
}

