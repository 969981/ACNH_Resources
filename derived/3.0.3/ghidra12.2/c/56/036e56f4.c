
/* WARNING: Removing unreachable block (ram,0x036e57b0) */

void FUN_036e56f4(void)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined1 uStack_51;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HospitalDonationHigh";
  local_50 = puVar1;
  iVar6 = FUN_02758850(&local_50);
  pcStack_48 = "HospitalDonation";
  local_50 = puVar1;
  uVar7 = FUN_02758850(&local_50);
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar8 = 0;
    cVar3 = cRam0000000000000d50;
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    cVar3 = *(char *)(lVar8 + 0xd50);
  }
  if (cVar3 == '\0') {
    bVar5 = 1;
  }
  else {
    bVar5 = (**(code **)(*(long *)(lVar8 + 0xd48) + 0x18))(lVar8 + 0xd48);
    *(undefined1 *)(lVar8 + 0xd50) = 0;
  }
  *(byte *)(lVar8 + 0xd51) = bVar5 & 1;
  local_50 = (undefined *)CONCAT44(local_50._4_4_,5);
  iVar2 = *(int *)(lVar8 + 0xd68);
  FUN_0252d11c(&uStack_51);
  FUN_02680cb0(&uStack_51,iVar2);
  uVar7 = (uVar7 & 0xffff | iVar6 << 0x10) + iVar2;
  pcStack_48 = "HospitalDonationHigh";
  local_50 = puVar4 + 0x10;
  FUN_02758bb8(&local_50,uVar7 >> 0x10);
  pcStack_48 = "HospitalDonation";
  local_50 = puVar4 + 0x10;
  FUN_02758bb8(&local_50,uVar7 & 0xffff);
  return;
}

