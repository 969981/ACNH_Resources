
bool FUN_03322dc0(long *param_1,ushort param_2)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  ushort local_4c [2];
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar4 = DAT_05355a60;
  if (DAT_05355a60 == 0) {
    return false;
  }
  lVar6 = *(long *)(DAT_05355a60 + 0x20);
  if (*(int *)(lVar6 + 0x6e8) == *(int *)(*(long *)(lVar6 + 0x708) + 8) + -1 &&
      *(int *)(lVar6 + 0x6e8) == *(int *)(lVar6 + 0x6f0)) {
    return false;
  }
  uVar5 = (**(code **)(*param_1 + 0x130))();
  if ((uVar5 & 1) == 0) {
    return false;
  }
  lVar6 = *(long *)(lVar4 + 0x20);
  if ((*(uint *)(lVar6 + 0x106c) >> 8 & 1) != 0) {
    lVar9 = 0;
    bVar2 = false;
    do {
      puVar1 = (ushort *)((long)&DAT_0418d22a + lVar9);
      puVar7 = (ushort *)((long)&DAT_0418d22c + lVar9);
      lVar9 = lVar9 + 4;
      if (*puVar1 == param_2 || *puVar7 == param_2) {
        bVar2 = true;
      }
    } while (lVar9 != 0x52c);
    if (!bVar2) {
      return false;
    }
  }
  if ((*(uint *)(lVar6 + 0x106c) >> 7 & 1) != 0) {
    if (0x29 < param_2 - 0x30) {
      return false;
    }
    if ((1L << ((ulong)(param_2 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0) {
      return false;
    }
  }
  (**(code **)(*(long *)(lVar6 + 0x1570) + 0x18))(lVar6 + 0x1570);
  puVar7 = *(ushort **)(lVar6 + 0x1578);
  if (*puVar7 != 0) {
    if (*puVar7 == param_2) {
      return false;
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if ((uVar8 == 0x80000) || (puVar7[uVar8 + 1] == 0)) goto LAB_03322f0c;
      if (puVar7[uVar8 + 1] == param_2) goto LAB_03322f04;
      if (puVar7[uVar8 + 2] == 0) goto LAB_03322f0c;
      uVar5 = uVar8 + 2;
    } while (puVar7[uVar8 + 2] != param_2);
    uVar8 = uVar8 + 1;
LAB_03322f04:
    if (uVar8 < 0x80000) {
      return false;
    }
  }
LAB_03322f0c:
  if (*(char *)(*(long *)(lVar4 + 0x20) + 0x16431) != '\0') {
    return false;
  }
  lVar6 = param_1[0x62];
  if ((lVar6 != 0) &&
     (((*(char *)(lVar6 + 0x177c) != '\0' || (*(long *)(lVar6 + 0xdf8) != 0)) &&
      (uVar5 = FUN_03360dd0(lVar6), (uVar5 & 1) != 0)))) {
    FUN_03360fd0(lVar6);
  }
  if (((int)param_1[0x61] - 0xdU < 4) || ((int)param_1[0x61] == 0x19)) {
    local_48 = (**(code **)(*param_1 + 0x170))(param_1);
  }
  else {
    local_48 = 3;
  }
  iVar3 = *(int *)(lVar4 + 0x474);
  uStack_44 = (**(code **)(*param_1 + 0x168))(param_1);
  local_4c[0] = param_2;
  FUN_032e4b30(param_1[1],0,local_4c);
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  FUN_033227f8(param_1);
  return iVar3 != *(int *)(lVar4 + 0x474);
}

