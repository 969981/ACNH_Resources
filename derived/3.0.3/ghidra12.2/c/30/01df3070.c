
undefined8 FUN_01df3070(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  UserHandle aUStack_40 [24];
  undefined8 local_28;
  byte local_8 [4];
  bool local_4 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  local_8[0] = DAT_0548e140;
  if (lVar6 == 0) {
joined_r0x01df30f4:
    if (local_8[0] < 8) goto LAB_01df3164;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    local_8[0] = *pbVar5;
    if (local_8[0] < 8) goto LAB_01df3164;
    if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      local_8[0] = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x01df30f4;
    }
  }
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
    local_8[0] = *pbVar5;
    if (local_8[0] < 8) goto LAB_01df3164;
  }
  local_8[0] = DAT_0548e168;
  if (7 < DAT_0548e168) {
    return 0;
  }
LAB_01df3164:
  uVar4 = FUN_007b39a4(aUStack_40,local_8);
  if ((uVar4 & 1) != 0) {
    *param_1 = 0;
    local_4[0] = false;
    iVar3 = nn::account::IsNetworkServiceAccountAvailable(local_4,aUStack_40);
    if (iVar3 != 0) {
      return 0;
    }
    if (local_4[0] == false) {
      return 0;
    }
    iVar3 = nn::account::GetNetworkServiceAccountId((NetworkServiceAccountId *)&local_28,aUStack_40)
    ;
    if (iVar3 == 0) {
      *param_1 = local_28;
      return 1;
    }
  }
  return 0;
}

