
void FUN_02608938(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined **local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined **local_68;
  undefined8 local_60;
  int local_44;
  undefined4 local_40;
  long *local_38;
  byte local_18 [4];
  undefined4 local_14;
  
  FUN_02608bf0();
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_026089b4:
    if (*pbVar6 < 8) goto LAB_02608a2c;
LAB_026089c0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02608a24:
      pbVar6 = &DAT_0548e168;
      goto LAB_02608a2c;
    }
    lVar8 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar8 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar8 + 0x471);
      }
    }
    local_18[0] = *pbVar6;
    if (7 < local_18[0]) goto LAB_02608a24;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026089b4;
      }
      goto LAB_026089c0;
    }
LAB_02608a2c:
    local_18[0] = *pbVar6;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_18,1);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    lVar7 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar7 + 0x2a840) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x2a840), puVar4 == (undefined8 *)0x0)) {
      uVar9 = *(undefined4 *)(*(long *)(lVar7 + 0x2a828) + *(long *)(lVar7 + 0x2a820) + 0x1dc);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar9 = *(undefined4 *)(*(long *)(lVar7 + 0x2a828) + *(long *)(lVar7 + 0x2a820) + 0x1dc);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2a840) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2a840) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  local_14 = 0;
  local_80 = PTR_s_parse_wherearen_npc_garden_04a86078;
  local_88 = &PTR_LAB_048f9770;
  FUN_0260140c(&local_68,&local_88);
  local_68 = &PTR_FUN_04a860a0;
  local_40 = local_14;
  local_38 = (long *)0x0;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    local_38 = (long *)FUN_0260d56c(DAT_05554928,local_60,500);
  }
  local_80 = (undefined *)(param_1 + 8);
  local_88 = (undefined **)0x0;
  uStack_78 = 0xffffffffffffffff;
  local_70 = uVar9;
  FUN_025c737c(&local_68,&local_88);
  local_68 = &PTR_FUN_04a860a0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  iVar3 = (*(code *)local_68[4])(&local_68);
  if (iVar3 != -1) {
    iVar3 = (*(code *)local_68[4])(&local_68);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_02608bd4;
  }
  if (local_44 == 0) {
    local_44 = 1;
  }
LAB_02608bd4:
  FUN_02601530(&local_68);
  return;
}

