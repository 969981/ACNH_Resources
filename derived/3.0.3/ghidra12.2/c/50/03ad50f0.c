
void FUN_03ad50f0(long *param_1,int param_2,uint param_3,byte param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  bool bVar8;
  long lVar9;
  
  uVar3 = 1 << (ulong)(param_3 & 0x1f);
  uVar4 = (ushort)uVar3;
  if (param_5 == -1) {
    iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
    if (iVar5 < 1) {
      return;
    }
    if ((param_4 & 1) == 0) {
      bVar8 = false;
      iVar5 = 0;
      do {
        lVar9 = param_1[8];
        iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
        puVar7 = (ushort *)(lVar9 + (long)(iVar5 + iVar6 * param_2) * 0xc + 2);
        uVar2 = *puVar7;
        if ((uVar2 & uVar3) != 0) {
          bVar8 = true;
          *puVar7 = uVar2 & ~uVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
      } while (iVar5 < iVar6);
    }
    else {
      bVar8 = false;
      iVar5 = 0;
      do {
        lVar9 = param_1[8];
        iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
        puVar7 = (ushort *)(lVar9 + (long)(iVar5 + iVar6 * param_2) * 0xc + 2);
        uVar2 = *puVar7;
        if ((uVar2 & uVar3) == 0) {
          bVar8 = true;
          *puVar7 = uVar2 | uVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
      } while (iVar5 < iVar6);
    }
    if (!bVar8) {
      return;
    }
  }
  else {
    lVar9 = param_1[8];
    iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
    puVar7 = (ushort *)(lVar9 + (long)(param_5 + iVar5 * param_2) * 0xc + 2);
    uVar2 = *puVar7;
    if (((uVar2 & uVar3) != 0) == (bool)(param_4 & 1)) {
      return;
    }
    uVar1 = uVar2 | uVar4;
    if ((param_4 & 1) == 0) {
      uVar1 = uVar2 & (uVar4 ^ 0xffff);
    }
    *puVar7 = uVar1;
  }
  *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
  lVar9 = param_1[10] + (long)param_2 * 0xc;
  *(ushort *)(lVar9 + 6) = *(ushort *)(lVar9 + 6) | 2;
  return;
}

