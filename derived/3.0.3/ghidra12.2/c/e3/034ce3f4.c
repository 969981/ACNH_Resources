
void FUN_034ce3f4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *local_40;
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
      if (pcVar5[6] != '_') {
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
      if (((DAT_05762b48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762b48), iVar1 != 0)) {
        DAT_05762b20 = &DAT_0407ebb1;
        DAT_05762b40 = &DAT_0407ebb1;
        DAT_05762908 = PTR_DAT_04bb2020 + 0x10;
        DAT_05762910 = "Check";
        DAT_05762920 = &DAT_0407ebb1;
        DAT_05762930 = "IconOff";
        DAT_05762950 = &DAT_040a0741;
        DAT_05762970 = "DragCursor";
        DAT_05762990 = "PresentRedOpen";
        DAT_057629b0 = "PresentGreenOpen";
        DAT_057629d0 = "WrappingOpen";
        DAT_057629f0 = "BoxOpen";
        DAT_05762a10 = "PresentOut";
        DAT_05762a30 = "FavoriteIn";
        DAT_05762a50 = "FavoriteOut";
        DAT_05762a70 = "Remake";
        DAT_05762a90 = "WrappingType";
        DAT_05762ab0 = "EditType";
        DAT_05762ad0 = "WrappingTypeReset";
        DAT_05762af0 = "OrnamentWrappingOpen";
        DAT_05762b10 = "OtoshidamaChWrappingOpen";
        DAT_05762b30 = "OtoshidamaKrWrappingOpen";
        DAT_05762940 = &DAT_0407ebb1;
        DAT_05762960 = &DAT_0407ebb1;
        DAT_05762980 = &DAT_0407ebb1;
        DAT_057629a0 = &DAT_0407ebb1;
        DAT_057629c0 = &DAT_0407ebb1;
        DAT_057629e0 = &DAT_0407ebb1;
        DAT_05762a00 = &DAT_0407ebb1;
        DAT_05762a20 = &DAT_0407ebb1;
        DAT_05762a40 = &DAT_0407ebb1;
        DAT_05762a60 = &DAT_0407ebb1;
        DAT_05762a80 = &DAT_0407ebb1;
        DAT_05762aa0 = &DAT_0407ebb1;
        DAT_05762ac0 = &DAT_0407ebb1;
        DAT_05762ae0 = &DAT_0407ebb1;
        DAT_05762b00 = &DAT_0407ebb1;
        DAT_05762918 = DAT_05762908;
        DAT_05762928 = DAT_05762908;
        DAT_05762938 = DAT_05762908;
        DAT_05762948 = DAT_05762908;
        DAT_05762958 = DAT_05762908;
        DAT_05762968 = DAT_05762908;
        DAT_05762978 = DAT_05762908;
        DAT_05762988 = DAT_05762908;
        DAT_05762998 = DAT_05762908;
        DAT_057629a8 = DAT_05762908;
        DAT_057629b8 = DAT_05762908;
        DAT_057629c8 = DAT_05762908;
        DAT_057629d8 = DAT_05762908;
        DAT_057629e8 = DAT_05762908;
        DAT_057629f8 = DAT_05762908;
        DAT_05762a08 = DAT_05762908;
        DAT_05762a18 = DAT_05762908;
        DAT_05762a28 = DAT_05762908;
        DAT_05762a38 = DAT_05762908;
        DAT_05762a48 = DAT_05762908;
        DAT_05762a58 = DAT_05762908;
        DAT_05762a68 = DAT_05762908;
        DAT_05762a78 = DAT_05762908;
        DAT_05762a88 = DAT_05762908;
        DAT_05762a98 = DAT_05762908;
        DAT_05762aa8 = DAT_05762908;
        DAT_05762ab8 = DAT_05762908;
        DAT_05762ac8 = DAT_05762908;
        DAT_05762ad8 = DAT_05762908;
        DAT_05762ae8 = DAT_05762908;
        DAT_05762af8 = DAT_05762908;
        DAT_05762b08 = DAT_05762908;
        DAT_05762b18 = DAT_05762908;
        DAT_05762b28 = DAT_05762908;
        DAT_05762b38 = DAT_05762908;
        __cxa_guard_release(&DAT_05762b48);
      }
      if (((DAT_05762b60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762b60), iVar1 != 0)) {
        DAT_05762b50 = 0x1200000002;
        DAT_05762b58 = &DAT_05762908;
        __cxa_guard_release(&DAT_05762b60);
      }
      if (((DAT_05762b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762b78), iVar1 != 0)) {
        DAT_05762b68 = PTR_DAT_04bb2020 + 0x10;
        DAT_05762b70 = "@T_Num_00";
        __cxa_guard_release(&DAT_05762b78);
      }
      if (((DAT_05762ba0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05762ba0), iVar1 != 0)) {
        DAT_05762b80 = PTR_DAT_04bb2020 + 0x10;
        DAT_05762b88 = "B_Drag_00";
        DAT_05762b98 = "P_Icon_00";
        DAT_05762b90 = DAT_05762b80;
        __cxa_guard_release(&DAT_05762ba0);
      }
      local_58 = *param_2;
      local_38 = 1;
      local_48 = &DAT_04b310a0;
      local_40 = &DAT_05762b50;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04b310b0;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_034ce484;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_38 = 0;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_034ce484:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

