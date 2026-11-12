
undefined8 FUN_00a77cb0(void)

{
  uint *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte local_48 [4];
  byte local_44 [4];
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_35;
  undefined1 local_31;
  
  if (DAT_0537d558 == (long *)0x0) {
    return 0;
  }
  lVar4 = *DAT_0537d558;
  if (1 < *(byte *)(lVar4 + 0x476) || DAT_04da4ab8 == 0) {
    return 0;
  }
  local_48[0] = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x00a77d70:
    if (7 < local_48[0]) {
LAB_00a77d74:
      bVar3 = *(byte *)(lVar4 + 0x473);
      pbVar5 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar4 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar5 = (byte *)(lVar4 + 0x471);
        }
      }
      local_48[0] = *pbVar5;
      if (local_48[0] < 8) goto LAB_00a77de0;
      local_48[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_48[0] = *pbVar5;
    if (7 < local_48[0]) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        local_48[0] = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x00a77d70;
      }
      goto LAB_00a77d74;
    }
  }
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
LAB_00a77de0:
  bVar3 = local_48[0];
  uVar2 = FUN_00a738a0(local_48,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  local_31 = 0;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_35 = 0;
  local_40 = 0x2f;
  local_38 = 0x101;
  local_36 = 1;
  local_44[0] = bVar3;
  uVar2 = FUN_02530cec(local_44);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  local_31 = 0;
  local_35 = 0;
  local_40 = 0x2f;
  local_38 = 0x101;
  local_36 = 1;
  local_44[0] = bVar3;
  uVar2 = FUN_02550b18(local_44,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00a71bb8(DAT_04da4ab8,local_48,0xffffffffffffffff,5);
  if ((uVar2 & 1) == 0) {
    FUN_02553030(local_48,0);
    return 0;
  }
  *(byte *)(DAT_04da4ab8 + 0x780) = *(byte *)(DAT_04da4ab8 + 0x780) | 1;
  return 1;
}

