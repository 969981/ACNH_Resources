
void FUN_01d4f2f4(long param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined **local_60 [4];
  int local_3c;
  uint local_38;
  byte local_18 [4];
  uint local_14;
  
  puVar3 = PTR_DAT_04bb27d0;
  if (*(char *)(param_1 + 0xab1) == '\0') {
    return;
  }
  lVar6 = **(long **)PTR_DAT_04bb27d0;
  local_18[0] = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x01d4f3ac:
    if (7 < local_18[0]) {
LAB_01d4f3b0:
      bVar2 = *(byte *)(lVar6 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar6 + 0x471);
        }
      }
      local_18[0] = *pbVar7;
      if (local_18[0] < 8) goto LAB_01d4f41c;
      local_18[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_18[0] = *pbVar7;
    if (7 < local_18[0]) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        local_18[0] = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x01d4f3ac;
      }
      goto LAB_01d4f3b0;
    }
  }
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
LAB_01d4f41c:
  local_14 = (uint)(*(int *)(lVar6 + 0x508) == 0 || *(char *)(lVar6 + 0x55d) == '\0');
  local_70 = (&PTR_s_net_multiplay_end_local_04a85d38)[(int)local_14];
  local_78 = &PTR_LAB_048f9770;
  FUN_025ffac8(local_60,&local_78,local_18);
  local_38 = local_14;
  local_60[0] = &PTR_FUN_04a85d58;
  local_70 = (undefined *)CONCAT71(local_70._1_7_,*(int *)(param_1 + 0x3e4) == 1);
  local_78._4_4_ = *(undefined4 *)(**(long **)puVar3 + 0x548);
  if (DAT_0556aa70 == 0) {
    uVar5 = 0;
    uStack_68 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(DAT_0556aa70 + 0x454);
    uStack_68 = *(undefined4 *)(DAT_0556aa70 + 0x45c);
  }
  local_70 = (undefined *)CONCAT44(uVar5,(undefined4)local_70);
  local_64 = *(int *)(param_1 + 0xaa0) == 3;
  local_78._0_4_ = param_2;
  FUN_025b7694(local_60,&local_78);
  *(undefined1 *)(param_1 + 0xab1) = 0;
  local_60[0] = &PTR_FUN_04a85d58;
  iVar4 = FUN_025b79a8(local_60);
  if (((iVar4 == -1) || (local_78._0_4_ = (*(code *)local_60[0][4])(local_60), 0xc < (int)local_78))
     && (local_3c == 0)) {
    local_3c = 1;
  }
  FUN_02601530(local_60);
  return;
}

