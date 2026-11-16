
void FUN_02609824(long param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **local_a0;
  undefined *puStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined8 local_78;
  int local_5c;
  undefined4 local_58;
  long *local_50;
  byte local_44 [4];
  
  FUN_02609b30(param_1,param_2);
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_026098b4:
    if (*pbVar8 < 8) goto LAB_0260992c;
LAB_026098c0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02609924:
      pbVar8 = &DAT_0548e168;
      goto LAB_0260992c;
    }
    lVar10 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) goto LAB_02609924;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026098b4;
      }
      goto LAB_026098c0;
    }
LAB_0260992c:
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    lVar9 = lVar10 + 0x194b0;
    if (*(long *)(lVar10 + 0x194b8) == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2a840) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar9 + 0x2a840), puVar6 == (undefined8 *)0x0)) {
      uVar11 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0x1e0);
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar11 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0x1e0);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2a840) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2a840) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  puStack_98 = PTR_s_parse_wherearen_facility_room_04a86088;
  local_a0 = &PTR_LAB_048f9770;
  FUN_0260140c(&local_80,&local_a0);
  local_80 = &PTR_FUN_04a860a0;
  local_58 = 2;
  local_50 = (long *)0x0;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    local_50 = (long *)FUN_0260d56c(DAT_05554928,local_78,500);
  }
  puStack_98 = (undefined *)(param_1 + 8);
  puVar1 = (undefined4 *)(param_3 + 100);
  local_a0 = (undefined **)((ulong)param_2 << 0x20);
  puVar3 = puVar1 + (ulong)param_2 * 5;
  if (2 < param_2) {
    puVar3 = puVar1;
  }
  local_90 = *puVar3;
  puVar3 = puVar1 + (ulong)param_2 * 5;
  if (2 < param_2) {
    puVar3 = puVar1;
  }
  uStack_8c = puVar3[1];
  local_88 = uVar11;
  FUN_025c737c(&local_80,&local_a0);
  local_80 = &PTR_FUN_04a860a0;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  iVar5 = (*(code *)local_80[4])(&local_80);
  if (iVar5 != -1) {
    iVar5 = (*(code *)local_80[4])(&local_80);
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,iVar5);
    if (iVar5 < 0xd) goto LAB_02609b08;
  }
  if (local_5c == 0) {
    local_5c = 1;
  }
LAB_02609b08:
  FUN_02601530(&local_80);
  return;
}

