
void FUN_02f93934(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'B') {
        return;
      }
      if (pcVar5[4] != 't') {
        return;
      }
      if (pcVar5[5] != 'n') {
        return;
      }
      if (pcVar5[6] != 'L') {
        return;
      }
      if (pcVar5[7] != 'i') {
        return;
      }
      if (pcVar5[8] != 's') {
        return;
      }
      if (pcVar5[9] != 't') {
        return;
      }
      if (pcVar5[10] != '_') {
        return;
      }
      if (pcVar5[0xb] != '0') {
        return;
      }
      if (pcVar5[0xc] != '0') {
        return;
      }
      if (pcVar5[0xd] != '/') {
        return;
      }
      if (pcVar5[0xe] != 'L') {
        return;
      }
      if (pcVar5[0xf] != '_') {
        return;
      }
      if (pcVar5[0x10] != 'B') {
        return;
      }
      if (pcVar5[0x11] != 't') {
        return;
      }
      if (pcVar5[0x12] != 'n') {
        return;
      }
      if (pcVar5[0x13] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056cab88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cab88), iVar1 != 0)) {
        DAT_056caa88 = PTR_DAT_04bb2020 + 0x10;
        DAT_056caa90 = "Check";
        DAT_056caaa0 = &DAT_0407ebb1;
        DAT_056caac0 = &DAT_0407ebb1;
        DAT_056caae0 = &DAT_0407ebb1;
        DAT_056caab0 = &DAT_040734ad;
        DAT_056caad0 = "BtnListRandom";
        DAT_056caaf0 = "State";
        DAT_056cab10 = "Remake";
        DAT_056cab30 = "BoardColor";
        DAT_056cab50 = "PocketNum";
        DAT_056cab00 = &DAT_0407ebb1;
        DAT_056cab20 = &DAT_0407ebb1;
        DAT_056cab40 = &DAT_0407ebb1;
        DAT_056cab60 = &DAT_0407ebb1;
        DAT_056cab70 = "StorageNum";
        DAT_056cab80 = &DAT_0407ebb1;
        DAT_056caa98 = DAT_056caa88;
        DAT_056caaa8 = DAT_056caa88;
        DAT_056caab8 = DAT_056caa88;
        DAT_056caac8 = DAT_056caa88;
        DAT_056caad8 = DAT_056caa88;
        DAT_056caae8 = DAT_056caa88;
        DAT_056caaf8 = DAT_056caa88;
        DAT_056cab08 = DAT_056caa88;
        DAT_056cab18 = DAT_056caa88;
        DAT_056cab28 = DAT_056caa88;
        DAT_056cab38 = DAT_056caa88;
        DAT_056cab48 = DAT_056caa88;
        DAT_056cab58 = DAT_056caa88;
        DAT_056cab68 = DAT_056caa88;
        DAT_056cab78 = DAT_056caa88;
        __cxa_guard_release(&DAT_056cab88);
      }
      if (((DAT_056caba0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056caba0), iVar1 != 0)) {
        DAT_056cab90 = 0x800000002;
        DAT_056cab98 = &DAT_056caa88;
        __cxa_guard_release(&DAT_056caba0);
      }
      if (((DAT_056cabb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cabb8), iVar1 != 0)) {
        DAT_056caba8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cabb0 = "@T_New_00";
        __cxa_guard_release(&DAT_056cabb8);
      }
      if (((DAT_056cabf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056cabf0), iVar1 != 0)) {
        DAT_056cabc0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056cabc8 = "N_Align_01";
        DAT_056cabe8 = "P_Icon_01";
        DAT_056cabd8 = "P_Icon_00";
        DAT_056cabd0 = DAT_056cabc0;
        DAT_056cabe0 = DAT_056cabc0;
        __cxa_guard_release(&DAT_056cabf0);
      }
      local_58 = *param_2;
      local_38 = 2;
      local_48 = &DAT_04ae8148;
      puStack_40 = &DAT_056cab90;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04ae8158;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02f93a04;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056ca960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca960), iVar1 != 0)) {
    DAT_056ca7c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ca7c8 = "MaterialNum";
    DAT_056ca7d8 = &DAT_0407ebb1;
    DAT_056ca7f8 = &DAT_0407ebb1;
    DAT_056ca818 = &DAT_0407ebb1;
    DAT_056ca7e8 = "Empty";
    DAT_056ca808 = "PocketNum";
    DAT_056ca828 = "StorageNum";
    DAT_056ca848 = "Share";
    DAT_056ca868 = "Category";
    DAT_056ca888 = "SizeType";
    DAT_056ca8a8 = "SizeW";
    DAT_056ca8c8 = "SizeH";
    DAT_056ca8e8 = "SizePattern";
    DAT_056ca908 = "StorageOff";
    DAT_056ca928 = "CategoryNum";
    DAT_056ca838 = &DAT_0407ebb1;
    DAT_056ca858 = &DAT_0407ebb1;
    DAT_056ca878 = &DAT_0407ebb1;
    DAT_056ca898 = &DAT_0407ebb1;
    DAT_056ca8b8 = &DAT_0407ebb1;
    DAT_056ca8d8 = &DAT_0407ebb1;
    DAT_056ca8f8 = &DAT_0407ebb1;
    DAT_056ca918 = &DAT_0407ebb1;
    DAT_056ca938 = &DAT_0407ebb1;
    DAT_056ca948 = "TradeBox";
    DAT_056ca958 = &DAT_0407ebb1;
    DAT_056ca7d0 = DAT_056ca7c0;
    DAT_056ca7e0 = DAT_056ca7c0;
    DAT_056ca7f0 = DAT_056ca7c0;
    DAT_056ca800 = DAT_056ca7c0;
    DAT_056ca810 = DAT_056ca7c0;
    DAT_056ca820 = DAT_056ca7c0;
    DAT_056ca830 = DAT_056ca7c0;
    DAT_056ca840 = DAT_056ca7c0;
    DAT_056ca850 = DAT_056ca7c0;
    DAT_056ca860 = DAT_056ca7c0;
    DAT_056ca870 = DAT_056ca7c0;
    DAT_056ca880 = DAT_056ca7c0;
    DAT_056ca890 = DAT_056ca7c0;
    DAT_056ca8a0 = DAT_056ca7c0;
    DAT_056ca8b0 = DAT_056ca7c0;
    DAT_056ca8c0 = DAT_056ca7c0;
    DAT_056ca8d0 = DAT_056ca7c0;
    DAT_056ca8e0 = DAT_056ca7c0;
    DAT_056ca8f0 = DAT_056ca7c0;
    DAT_056ca900 = DAT_056ca7c0;
    DAT_056ca910 = DAT_056ca7c0;
    DAT_056ca920 = DAT_056ca7c0;
    DAT_056ca930 = DAT_056ca7c0;
    DAT_056ca940 = DAT_056ca7c0;
    DAT_056ca950 = DAT_056ca7c0;
    __cxa_guard_release(&DAT_056ca960);
  }
  if (((DAT_056ca978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056ca978), iVar1 != 0)) {
    DAT_056ca968 = 0xd00000002;
    DAT_056ca970 = &DAT_056ca7c0;
    __cxa_guard_release(&DAT_056ca978);
  }
  if (((DAT_056caa80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056caa80), iVar1 != 0)) {
    DAT_056ca980 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ca988 = "@T_Name_00";
    DAT_056ca9b8 = "@T_R_00";
    DAT_056ca998 = "@T_Empty_00";
    DAT_056ca9a8 = "@T_L_00";
    DAT_056ca9c8 = "@T_PocketNum_00";
    DAT_056ca9d8 = "@T_PocketColon_00";
    DAT_056ca9f8 = "@T_StorageNum_00";
    DAT_056caa08 = "@T_StorageColon_00";
    DAT_056ca9e8 = "@T_Pocket_00";
    DAT_056caa28 = "@T_SizeNumR_00";
    DAT_056caa18 = "@T_Storage_00";
    DAT_056caa38 = "@T_SizeKakeru_00";
    DAT_056caa48 = "@T_SizeNumL_00";
    DAT_056caa58 = "@T_TtadeBoxText_00";
    DAT_056caa68 = "@T_TradeBoxNum_00";
    DAT_056caa78 = "@T_TradeBoxColon_00";
    DAT_056ca990 = DAT_056ca980;
    DAT_056ca9a0 = DAT_056ca980;
    DAT_056ca9b0 = DAT_056ca980;
    DAT_056ca9c0 = DAT_056ca980;
    DAT_056ca9d0 = DAT_056ca980;
    DAT_056ca9e0 = DAT_056ca980;
    DAT_056ca9f0 = DAT_056ca980;
    DAT_056caa00 = DAT_056ca980;
    DAT_056caa10 = DAT_056ca980;
    DAT_056caa20 = DAT_056ca980;
    DAT_056caa30 = DAT_056ca980;
    DAT_056caa40 = DAT_056ca980;
    DAT_056caa50 = DAT_056ca980;
    DAT_056caa60 = DAT_056ca980;
    DAT_056caa70 = DAT_056ca980;
    __cxa_guard_release(&DAT_056caa80);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04ae8138;
  puStack_40 = &DAT_056ca968;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02f93a04:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

