
void FUN_00a719c4(long param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  byte local_14 [4];
  
  FUN_00a715d0(param_1,0);
  puVar4 = PTR_DAT_04bb39b0;
  if ((*(byte *)(param_1 + 0x780) >> 1 & 1) != 0) {
    if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
      *(byte *)(param_1 + 0x780) = *(byte *)(param_1 + 0x780) & 0xf9 | 4;
    }
    DAT_04da4850 = 0;
  }
  if (DAT_054f5738 == 0) {
    local_14[0] = 0xff;
    goto LAB_00a71b00;
  }
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_00a71a74:
    if (7 < *pbVar7) {
LAB_00a71a80:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar8 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        local_14[0] = *pbVar7;
        if (local_14[0] < 8) goto LAB_00a71b00;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar7) {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a71a74;
      }
      goto LAB_00a71a80;
    }
  }
  local_14[0] = *pbVar7;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_00a71b00:
  FUN_00a71bb8(param_1,local_14,0xffffffffffffffff,7);
  iVar2 = *(int *)(param_1 + 0x770);
  if (iVar2 < 0x13) {
    uVar10 = *(undefined8 *)(param_1 + 0x768);
    iVar6 = iVar2;
    if ((iVar2 != 0x12) && (iVar2 != 0xb)) {
      iVar6 = 0x13;
    }
    uVar5 = FUN_00a76844(DAT_04da4ab8,iVar6);
    if (uVar5 != 0xffffffff) {
      bVar8 = *(byte *)(param_1 + 0x760);
      lVar9 = param_1 + (ulong)uVar5 * 0x20;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      iVar6 = *(int *)(param_1 + 0x414);
      *(byte *)(lVar9 + 0x10) = bVar8;
      *(undefined1 *)(lVar9 + 0x28) = 3;
      iVar3 = *(int *)(param_1 + 0x410);
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
      *(undefined4 *)(lVar9 + 0x2c) = 0;
      *(int *)(lVar9 + 0x20) = iVar2;
      *(undefined4 *)(lVar9 + 0x24) = 0;
      if (iVar3 < iVar6) {
        *(byte **)(*(long *)(param_1 + 0x418) + (long)iVar3 * 8) = (byte *)(lVar9 + 0x10);
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
      }
    }
  }
  return;
}

