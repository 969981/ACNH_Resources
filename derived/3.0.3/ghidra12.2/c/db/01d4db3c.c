
void FUN_01d4db3c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 local_38;
  undefined4 local_34;
  byte local_18 [4];
  byte local_14 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_01d4dbb4:
    if (7 < *pbVar5) {
LAB_01d4dbc0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_18[0] = *pbVar5;
        if (local_18[0] < 8) goto LAB_01d4dc40;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d4dbb4;
      }
      goto LAB_01d4dbc0;
    }
  }
  local_18[0] = *pbVar5;
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
LAB_01d4dc40:
  FUN_0267a4d0(&local_34,local_18);
  *(undefined4 *)(param_1 + 0xa98) = local_34;
  local_14[0] = local_18[0];
  if (7 < local_18[0]) {
    local_14[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0xa9c) = 0;
  }
  else {
    if ((*(long **)(lVar6 + 0xd0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0xd0), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    FUN_028073ac(&local_38,*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    *(undefined4 *)(param_1 + 0xa9c) = local_38;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

