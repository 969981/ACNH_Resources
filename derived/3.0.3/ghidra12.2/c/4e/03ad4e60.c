
undefined8 FUN_03ad4e60(long *param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  
  uVar14 = 0;
  do {
    uVar7 = (**(code **)(*param_1 + 0x228))(param_1,param_2,uVar14);
    uVar13 = 1 << (ulong)(uVar14 & 0x1f);
    puVar11 = (uint *)(param_1[10] + (long)(int)param_2 * 0xc);
    if ((uVar7 & 1) == 0) {
      uVar13 = *puVar11 & (uVar13 ^ 0xffffffff);
    }
    else {
      uVar13 = *puVar11 | uVar13;
    }
    *puVar11 = uVar13;
    uVar14 = uVar14 + 1;
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
    lVar10 = param_1[10] + (long)(int)param_2 * 0xc;
    *(ushort *)(lVar10 + 6) = *(ushort *)(lVar10 + 6) | 2;
  } while (uVar14 != 0x18);
  iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      uVar14 = 0;
      do {
        bVar4 = (**(code **)(*param_1 + 0x230))(param_1,param_2,uVar14,iVar5);
        lVar10 = param_1[8];
        uVar13 = 1 << (ulong)(uVar14 & 0x1f);
        iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
        puVar12 = (ushort *)(lVar10 + (long)(int)(iVar5 + iVar6 * param_2) * 0xc + 2);
        uVar2 = *puVar12;
        if ((bool)(bVar4 & 1) != ((uVar2 & uVar13) != 0)) {
          uVar3 = (ushort)uVar13;
          uVar1 = uVar2 | uVar3;
          if ((bVar4 & 1) == 0) {
            uVar1 = uVar2 & (uVar3 ^ 0xffff);
          }
          *puVar12 = uVar1;
          *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
          lVar10 = param_1[10] + (long)(int)param_2 * 0xc;
          *(ushort *)(lVar10 + 6) = *(ushort *)(lVar10 + 6) | 2;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 9);
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
    } while (iVar5 < iVar6);
  }
  uVar7 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
  if ((uVar7 & 1) == 0) {
LAB_03ad5094:
    uVar9 = 0;
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x1e0))(param_1);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar8 = (long *)(**(code **)(*param_1 + 0x1e8))(param_1,iVar5);
        if ((*(ushort *)((long)plVar8 + 0x16) == param_2) &&
           (uVar7 = (**(code **)(*plVar8 + 0x58))(plVar8,param_3), (uVar7 & 1) == 0))
        goto LAB_03ad5094;
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*param_1 + 0x1e0))(param_1);
      } while (iVar5 < iVar6);
    }
    plVar8 = *(long **)(DAT_05ae9b00 + 0x48);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,param_1,param_2,param_3);
    }
    uVar9 = 1;
  }
  return uVar9;
}

