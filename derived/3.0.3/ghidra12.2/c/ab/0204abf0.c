
void FUN_0204abf0(undefined8 param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34 [4];
  undefined *local_30;
  char *local_28;
  
  puVar3 = PTR_DAT_04bb2020;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "alp";
  iVar4 = FUN_02926a20(&local_30);
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  if (iVar4 != 0) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_0204ac90:
    if (7 < *pbVar6) {
LAB_0204ac9c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_34[0] = *pbVar6;
        if (local_34[0] < 8) goto LAB_0204ad1c;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0204ac90;
      }
      goto LAB_0204ac9c;
    }
  }
  local_34[0] = *pbVar6;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_0204ad1c:
  local_30 = puVar3 + 0x10;
  local_28 = "ReserveCommuneExpansion";
  iVar4 = FUN_0274bce0(local_34,&local_30);
  if ((iVar4 != 1) && (uVar5 = FUN_010d294c(5), (uVar5 & 1) == 0)) {
    local_30 = (undefined *)0x442a0000;
    local_28 = (char *)CONCAT44(local_28._4_4_,0x43fc8000);
    local_40 = 0x41a0000041a00000;
    local_38 = 0x41200000;
    FUN_02049774(param_1,&local_30,&local_40);
  }
  return;
}

