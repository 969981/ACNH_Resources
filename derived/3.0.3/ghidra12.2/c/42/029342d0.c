
byte FUN_029342d0(void)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  bVar3 = FUN_0273f0a0(&DAT_055ce6a0);
  bVar4 = FUN_0273f0a0(&DAT_055ce690);
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_02934364:
    if (7 < *pbVar8) {
LAB_02934370:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_14[0] = *pbVar8;
        if (local_14[0] < 8) goto LAB_029343e0;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02934364;
      }
      goto LAB_02934370;
    }
  }
  local_14[0] = *pbVar8;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_029343e0:
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  if (lVar9 == 0) {
    bVar3 = 0;
  }
  else {
    if ((*(long **)(lVar9 + 0x18320) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x18320), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "TownNewsReserve";
    iVar6 = FUN_0274bbb0(*(long *)(lVar9 + 0x18308) + *(long *)(lVar9 + 0x18300),&local_40);
    bVar3 = (bVar3 | bVar4 ^ 1) & iVar6 != 0;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x18320) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x18320) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return bVar3;
}

