
void FUN_021fe810(long *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  puVar3 = PTR_DAT_04bb2020;
  ppuVar6 = &local_40;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "";
  (**(code **)(*param_2 + 0x10))(param_2,&local_40);
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_021fe8b8:
    if (*pbVar7 < 8) goto LAB_021fe930;
LAB_021fe8c4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_021fe928:
      pbVar7 = &DAT_0548e168;
      goto LAB_021fe930;
    }
    lVar8 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_14[0] = *pbVar7;
    if (7 < local_14[0]) goto LAB_021fe928;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_021fe8b8;
      }
      goto LAB_021fe8c4;
    }
LAB_021fe930:
    local_14[0] = *pbVar7;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  local_40 = puVar3 + 0x10;
  pcStack_38 = "WHREAREN_IsFacilityEndDemoCeremony";
  iVar4 = FUN_02753180(local_14,&local_40);
  if (iVar4 != 0) {
    return;
  }
  if (DAT_055cb230 == (undefined4 *)0x0) {
switchD_021fe9a0_caseD_3:
    pcStack_38 = "sza";
    lVar8 = *param_1;
    param_2 = param_1;
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,*DAT_055cb230);
    switch(*DAT_055cb230) {
    case 1:
      local_40 = puVar3 + 0x10;
      pcStack_38 = "rcm";
      (**(code **)(*param_1 + 0x10))(param_1,&local_40);
      pcStack_38 = &DAT_040dedd9;
      break;
    case 2:
      local_40 = puVar3 + 0x10;
      pcStack_38 = "owl";
      (**(code **)(*param_1 + 0x10))(param_1,&local_40);
      uVar5 = FUN_0292307c();
      if ((uVar5 & 1) == 0) {
        return;
      }
      pcStack_38 = &DAT_0407154e;
      break;
    default:
      goto switchD_021fe9a0_caseD_3;
    case 4:
      local_40 = puVar3 + 0x10;
      pcStack_38 = "hgh";
      (**(code **)(*param_1 + 0x10))(param_1,&local_40);
      pcStack_38 = &DAT_04076980;
      break;
    case 9:
      if (*(char *)(DAT_055cb230 + 0x14c) == '\0') {
        local_40 = puVar3 + 0x10;
        pcStack_38 = "rco";
        lVar8 = *param_1;
      }
      else {
        ppuVar6 = (undefined **)(DAT_055cb230 + 0x144);
        lVar8 = *param_1;
      }
      (**(code **)(lVar8 + 0x10))(param_1,ppuVar6);
      pcStack_38 = "kpmB";
    }
    lVar8 = *param_2;
  }
  local_40 = puVar3 + 0x10;
  (**(code **)(lVar8 + 0x10))(param_2,&local_40);
  return;
}

