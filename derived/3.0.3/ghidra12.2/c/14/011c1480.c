
void FUN_011c1480(byte *param_1,short *param_2,byte param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined *local_80;
  short *psStack_78;
  undefined1 local_70;
  byte local_6f;
  undefined *local_68;
  char *pcStack_60;
  int local_44;
  undefined1 auStack_28 [8];
  
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar7 + 0x476) < 2) {
LAB_011c14e8:
    if (7 < *param_1) {
      return;
    }
  }
  else {
    bVar3 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_011c14e8;
    pbVar2 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar2 = (byte *)(lVar7 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) == 0) goto LAB_011c14e8;
    if (*(byte *)(lVar7 + 0x472) != bVar3 || 7 < *param_1) {
      return;
    }
  }
  uVar5 = FUN_02582d8c(param_1,1);
  if (7 < uVar5) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  FUN_0252d8f0(auStack_28,param_1);
  puVar4 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  psStack_78 = (short *)0x40f591a;
  FUN_025ffac8(&local_68,&local_80,param_1);
  local_70 = *param_2 != -2;
  puVar1 = PTR_DAT_04bc3220 + 0x10;
  local_80 = auStack_28;
  psStack_78 = param_2;
  local_6f = param_3 & 1;
  local_68 = puVar1;
  FUN_02589a64(&local_68,&local_80);
  local_68 = puVar1;
  iVar6 = FUN_02589ca4(&local_68);
  if (iVar6 != -1) {
    iVar6 = (**(code **)(local_68 + 0x20))(&local_68);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar6);
    if (iVar6 < 0xd) goto LAB_011c15f4;
  }
  if (local_44 == 0) {
    local_44 = 1;
  }
LAB_011c15f4:
  FUN_02601530(&local_68);
  if (*param_2 != -2) {
    local_68 = puVar4 + 0x10;
    pcStack_60 = "StrikeRock";
    FUN_0279b044(param_1,&local_68,1);
  }
  return;
}

