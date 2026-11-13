
/* WARNING: Removing unreachable block (ram,0x01318b38) */
/* WARNING: Removing unreachable block (ram,0x01318b28) */
/* WARNING: Removing unreachable block (ram,0x01318bec) */

undefined8 FUN_01318aa0(undefined8 param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  uint *puVar12;
  uint local_34;
  ushort local_2e;
  byte local_2a;
  uint local_24;
  
  puVar5 = PTR_DAT_04bb27a8;
  if (param_2 == 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar2 = plVar1 + param_2;
    if (0x38 < param_2) {
      plVar2 = plVar1;
    }
    lVar9 = *plVar2;
  }
  if (lVar9 == 0) {
    return 0;
  }
  if (*(long *)(lVar9 + 0xa8) == 0) {
    return 0;
  }
  local_34 = param_2;
  FUN_01309ec4(&local_34,*(long *)(lVar9 + 0xa8),param_1);
  lVar9 = *(long *)puVar5;
  uVar4 = (uint)local_2e - (uint)*(ushort *)(lVar9 + 0x408);
  if ((*(uint *)(lVar9 + 1000) <= uVar4) ||
     (puVar7 = *(uint **)(*(long *)(lVar9 + 0x3f0) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0))
  {
    return 0;
  }
  uVar4 = *puVar7;
  if (uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4) {
    puVar12 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
    uVar11 = 0;
    if (*puVar12 == 0) goto LAB_01318b74;
    uVar4 = puVar12[1];
    if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
      lVar9 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar9 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
        }
        if (*puVar12 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05160328) &&
           (uVar11 = *(ushort *)(DAT_05160330 + (long)(int)uVar3 * 2), uVar11 < 5))
        goto LAB_01318b74;
      }
    }
  }
  uVar11 = 0;
LAB_01318b74:
  if (uVar11 != 2) {
    return 0;
  }
  local_24 = (uint)local_2a;
  if ((3 < local_24) ||
     (uVar10 = (ulong)*(uint *)((&PTR_DAT_0498deb0)[(int)local_24] + 0x14),
     0xf < *(uint *)((&PTR_DAT_0498deb0)[(int)local_24] + 0x14))) {
    uVar10 = 0;
  }
  uVar6 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
  uVar8 = FUN_0130dec0(uVar6);
  return uVar8;
}

