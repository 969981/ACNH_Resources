
void FUN_02608f28(long param_1,uint param_2,long param_3)

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
  undefined **local_a8;
  undefined *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined **local_88;
  undefined8 local_80;
  int local_64;
  undefined4 local_60;
  long *local_58;
  byte local_4c [4];
  uint local_48;
  undefined4 local_44;
  
  local_48 = param_2;
  FUN_02609230(param_1,param_2);
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_02608fb8:
    if (*pbVar8 < 8) goto LAB_02609030;
LAB_02608fc4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02609028:
      pbVar8 = &DAT_0548e168;
      goto LAB_02609030;
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
    local_4c[0] = *pbVar8;
    if (7 < local_4c[0]) goto LAB_02609028;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02608fb8;
      }
      goto LAB_02608fc4;
    }
LAB_02609030:
    local_4c[0] = *pbVar8;
    if (7 < local_4c[0]) {
      local_4c[0] = 0xff;
    }
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
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
      uVar11 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0x1dc);
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar11 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0x1dc);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2a840) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2a840) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  local_44 = 1;
  puStack_a0 = PTR_s_parse_wherearen_npc_room_04a86080;
  local_a8 = &PTR_LAB_048f9770;
  FUN_0260140c(&local_88,&local_a8);
  local_88 = &PTR_FUN_04a860a0;
  local_60 = local_44;
  local_58 = (long *)0x0;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    local_58 = (long *)FUN_0260d56c(DAT_05554928,local_80,500);
  }
  puStack_a0 = (undefined *)(param_1 + 8);
  puVar1 = (undefined4 *)(param_3 + 0x28);
  local_a8 = (undefined **)(ulong)param_2;
  puVar3 = puVar1 + (ulong)local_48 * 5;
  if (1 < local_48) {
    puVar3 = puVar1;
  }
  local_98 = *puVar3;
  puVar3 = puVar1 + (ulong)local_48 * 5;
  if (1 < local_48) {
    puVar3 = puVar1;
  }
  uStack_94 = puVar3[1];
  local_90 = uVar11;
  FUN_025c737c(&local_88,&local_a8);
  local_88 = &PTR_FUN_04a860a0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  iVar5 = (*(code *)local_88[4])(&local_88);
  if (iVar5 != -1) {
    iVar5 = (*(code *)local_88[4])(&local_88);
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,iVar5);
    if (iVar5 < 0xd) goto LAB_0260920c;
  }
  if (local_64 == 0) {
    local_64 = 1;
  }
LAB_0260920c:
  FUN_02601530(&local_88);
  return;
}

