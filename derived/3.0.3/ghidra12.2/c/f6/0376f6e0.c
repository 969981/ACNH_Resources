
void FUN_0376f6e0(int *param_1,undefined8 param_2,undefined2 param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte local_34 [4];
  
  lVar12 = *(long *)PTR_DAT_04bb3968;
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_0376f768:
    if (*pbVar10 < 8) goto LAB_0376f7ec;
LAB_0376f774:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0376f7e4:
      pbVar10 = &DAT_0548e168;
      goto LAB_0376f7ec;
    }
    lVar11 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_34[0] = *pbVar10;
    if (7 < local_34[0]) goto LAB_0376f7e4;
    bVar6 = true;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0376f768;
      }
      goto LAB_0376f774;
    }
LAB_0376f7ec:
    local_34[0] = *pbVar10;
    bVar6 = local_34[0] < 8;
    if (!bVar6) {
      local_34[0] = 0xff;
    }
  }
  if (lVar12 == 0) {
    return;
  }
  if (!bVar6) {
    return;
  }
  piVar1 = (int *)(lVar12 + 0x175a8);
  if ((DAT_056b6f18 != 0) && (*(int *)(DAT_056b6f18 + 0x588) != 0)) {
    if (*piVar1 == 0) {
      return;
    }
LAB_0376f8bc:
    puVar5 = PTR_DAT_04bb3238;
    *(undefined4 *)(lVar12 + 0x175ac) = 2;
    uVar9 = *(undefined4 *)puVar5;
    *(undefined2 *)(lVar12 + 0x175b4) = 0;
    *(undefined4 *)(lVar12 + 0x175b0) = uVar9;
    *(undefined4 *)(lVar12 + 0x17608) = 999;
    return;
  }
  iVar7 = FUN_00a74b78(local_34);
  if (iVar7 != 0x13) {
    if (*piVar1 != *param_1) {
      return;
    }
    goto LAB_0376f8bc;
  }
  uVar8 = FUN_022196c8(piVar1,param_1);
  iVar7 = *param_1;
  iVar3 = *piVar1;
  if (((uVar8 & 1) == 0) || (iVar3 == iVar7)) {
    if ((uVar8 & 1) != 0 || (iVar3 != iVar7 || iVar3 == 0)) {
      return;
    }
    if (*(int *)(lVar12 + 0x175ac) != 0) {
      return;
    }
    goto LAB_0376f8bc;
  }
  if (iVar3 != 0) {
    if (iVar7 == 0) {
      return;
    }
    uVar8 = FUN_02219360(uVar8,param_1,piVar1);
    if ((uVar8 & 1) != 0) {
      if ((*(int *)(lVar12 + 0x175ac) != 0) &&
         (uVar8 = FUN_02219360(uVar8,param_1,lVar12 + 0x175b0), (uVar8 & 1) == 0)) {
        return;
      }
      uVar9 = 3;
      goto LAB_0376f93c;
    }
    if (*piVar1 != 0) {
      return;
    }
  }
  if ((*(int *)(lVar12 + 0x175ac) != 0) &&
     (uVar8 = FUN_02219360(uVar8,param_1,lVar12 + 0x175b0), (uVar8 & 1) == 0)) {
    return;
  }
  uVar9 = 1;
LAB_0376f93c:
  *(undefined4 *)(lVar12 + 0x175ac) = uVar9;
  iVar7 = *param_1;
  *(undefined2 *)(lVar12 + 0x175b4) = param_3;
  *(int *)(lVar12 + 0x175b0) = iVar7;
  return;
}

