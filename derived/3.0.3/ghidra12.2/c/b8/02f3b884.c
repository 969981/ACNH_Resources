
void FUN_02f3b884(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
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
  if (pcVar5 == "") {
LAB_02f3b8e4:
    if (((DAT_056c2808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2808), iVar1 != 0)) {
      DAT_056c27e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c27f0 = &DAT_040fe5ab;
      DAT_056c2800 = &DAT_0407ebb1;
      DAT_056c27f8 = DAT_056c27e8;
      __cxa_guard_release(&DAT_056c2808);
    }
    if (((DAT_056c2820 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2820), iVar1 != 0)) {
      DAT_056c2810 = 0x100000002;
      DAT_056c2818 = &DAT_056c27e8;
      __cxa_guard_release(&DAT_056c2820);
    }
    if (((DAT_056c2848 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2848), iVar1 != 0)) {
      DAT_056c2828 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c2830 = "@T_Name_00";
      DAT_056c2840 = "@T_Num_00";
      DAT_056c2838 = DAT_056c2828;
      __cxa_guard_release(&DAT_056c2848);
    }
    if (((DAT_056c2870 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2870), iVar1 != 0)) {
      DAT_056c2850 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c2858 = "P_DummyPic_00";
      DAT_056c2868 = "P_Pic_01";
      DAT_056c2860 = DAT_056c2850;
      __cxa_guard_release(&DAT_056c2870);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ae3600;
    local_40 = &DAT_056c2810;
    local_38 = 2;
    local_50 = &DAT_04ae3610;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_02f3b970;
  }
  if (*pcVar5 == '/') {
    if ((((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'D')) ||
           ((pcVar5[4] != 'e' || (pcVar5[5] != 't')))) ||
          ((pcVar5[6] != 'a' || ((pcVar5[7] != 'i' || (pcVar5[8] != 'l')))))) || (pcVar5[9] != '_'))
        || ((((pcVar5[10] != '0' || (pcVar5[0xb] != '0')) || (pcVar5[0xc] != '/')) ||
            (((pcVar5[0xd] != 'L' || (pcVar5[0xe] != '_')) ||
             ((pcVar5[0xf] != 'N' || ((pcVar5[0x10] != 'e' || (pcVar5[0x11] != 'w')))))))))) ||
       (pcVar5[0x12] != '_')) goto LAB_02f3bab8;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_02f3bab8;
    if (((DAT_056c2888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2888), iVar1 != 0)) {
      DAT_056c2878 = PTR_DAT_04bb2020 + 0x10;
      DAT_056c2880 = "@T_New_00";
      __cxa_guard_release(&DAT_056c2888);
    }
    local_48 = &DAT_04ae3620;
    local_58 = *param_2;
    local_40 = (undefined8 *)0x0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02f3b8e4;
LAB_02f3bab8:
    pcVar5 = (char *)param_2[5];
    if (((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'D'))))
         && (((pcVar5[4] == 'e' && (pcVar5[5] == 't')) && (pcVar5[6] == 'a')))) &&
        (((pcVar5[7] == 'i' && (pcVar5[8] == 'l')) &&
         (((pcVar5[9] == '_' &&
           (((((pcVar5[10] == '0' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '/')) &&
             ((pcVar5[0xd] == 'L' && (pcVar5[0xe] == '_')))) && (pcVar5[0xf] == 'S')))) &&
          ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == 'a')))))))) &&
       ((pcVar5[0x12] == 's' &&
        (((pcVar5[0x13] == 'o' && (pcVar5[0x14] == 'n')) && (pcVar5[0x15] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0))
      goto LAB_02f3bc40;
      if (((DAT_056c28d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c28d0), iVar1 != 0)) {
        DAT_056c2890 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c2898 = &DAT_040fe5ab;
        DAT_056c28a8 = &DAT_0407ebb1;
        DAT_056c28c8 = &DAT_0407ebb1;
        DAT_056c28b8 = &DAT_040fb20f;
        DAT_056c28a0 = DAT_056c2890;
        DAT_056c28b0 = DAT_056c2890;
        DAT_056c28c0 = DAT_056c2890;
        __cxa_guard_release(&DAT_056c28d0);
      }
      puVar8 = &DAT_056c28d8;
      if (((DAT_056c28e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c28e8), iVar1 != 0)) {
        DAT_056c28d8 = 0x200000002;
        DAT_056c28e0 = &DAT_056c2890;
        __cxa_guard_release(&DAT_056c28e8);
      }
      if (((DAT_056c2900 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2900), iVar1 != 0)) {
        DAT_056c28f0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c28f8 = "@T_Text_00";
        __cxa_guard_release(&DAT_056c2900);
      }
      local_48 = &DAT_04ae3630;
    }
    else {
LAB_02f3bc40:
      pcVar5 = (char *)param_2[5];
      if (*pcVar5 != '/') {
        return;
      }
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'D') {
        return;
      }
      if (pcVar5[4] != 'e') {
        return;
      }
      if (pcVar5[5] != 't') {
        return;
      }
      if (pcVar5[6] != 'a') {
        return;
      }
      if (pcVar5[7] != 'i') {
        return;
      }
      if (pcVar5[8] != 'l') {
        return;
      }
      if (pcVar5[9] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056c2c48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2c48), iVar1 != 0)) {
        DAT_056c2b80 = "$G_FishBar_02";
        DAT_056c2bc0 = &DAT_0407ebb1;
        DAT_056c2be0 = &DAT_0407ebb1;
        DAT_056c2908 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c2c00 = &DAT_0407ebb1;
        DAT_056c2c20 = &DAT_0407ebb1;
        DAT_056c2910 = "CreatureType";
        DAT_056c2930 = "TimeOnOff";
        DAT_056c2950 = "TimeOnOff";
        DAT_056c2970 = "TimeOnOff";
        DAT_056c2990 = "TimeOnOff";
        DAT_056c2b20 = "$G_InsectBar_05";
        DAT_056c2b40 = "$G_FishBar_00";
        DAT_056c2b60 = "$G_FishBar_01";
        DAT_056c2ba0 = "$G_FishBar_03";
        DAT_056c2c40 = &DAT_0407ebb1;
        DAT_056c29b0 = "TimeOnOff";
        DAT_056c29d0 = "TimeOnOff";
        DAT_056c29f0 = "TimeOnOff";
        DAT_056c2a10 = "TimeOnOff";
        DAT_056c2a30 = "TimeOnOff";
        DAT_056c2a50 = "TimeOnOff";
        DAT_056c2b10 = "BarType";
        DAT_056c2b30 = "BarType";
        DAT_056c2b50 = "BarType";
        DAT_056c2b70 = "BarType";
        DAT_056c2b90 = "BarType";
        DAT_056c2a70 = "BarType";
        DAT_056c2a90 = "BarType";
        DAT_056c2ab0 = "BarType";
        DAT_056c2ad0 = "BarType";
        DAT_056c2af0 = "BarType";
        DAT_056c2bb0 = "MarkOff";
        DAT_056c2bd0 = "PlaceType";
        DAT_056c2bf0 = &DAT_040734ad;
        DAT_056c2c10 = "TimeType";
        DAT_056c2c30 = "NowLine";
        DAT_056c2a40 = "$G_FishBar_02";
        DAT_056c2920 = &DAT_0407ebb1;
        DAT_056c2940 = "$G_InsectBar_00";
        DAT_056c2960 = "$G_InsectBar_01";
        DAT_056c2980 = "$G_InsectBar_02";
        DAT_056c29a0 = "$G_InsectBar_03";
        DAT_056c29c0 = "$G_InsectBar_04";
        DAT_056c29e0 = "$G_InsectBar_05";
        DAT_056c2a00 = "$G_FishBar_00";
        DAT_056c2a20 = "$G_FishBar_01";
        DAT_056c2a60 = "$G_FishBar_03";
        DAT_056c2a80 = "$G_InsectBar_00";
        DAT_056c2aa0 = "$G_InsectBar_01";
        DAT_056c2ac0 = "$G_InsectBar_02";
        DAT_056c2ae0 = "$G_InsectBar_03";
        DAT_056c2b00 = "$G_InsectBar_04";
        DAT_056c2918 = DAT_056c2908;
        DAT_056c2928 = DAT_056c2908;
        DAT_056c2938 = DAT_056c2908;
        DAT_056c2948 = DAT_056c2908;
        DAT_056c2958 = DAT_056c2908;
        DAT_056c2968 = DAT_056c2908;
        DAT_056c2978 = DAT_056c2908;
        DAT_056c2988 = DAT_056c2908;
        DAT_056c2998 = DAT_056c2908;
        DAT_056c29a8 = DAT_056c2908;
        DAT_056c29b8 = DAT_056c2908;
        DAT_056c29c8 = DAT_056c2908;
        DAT_056c29d8 = DAT_056c2908;
        DAT_056c29e8 = DAT_056c2908;
        DAT_056c29f8 = DAT_056c2908;
        DAT_056c2a08 = DAT_056c2908;
        DAT_056c2a18 = DAT_056c2908;
        DAT_056c2a28 = DAT_056c2908;
        DAT_056c2a38 = DAT_056c2908;
        DAT_056c2a48 = DAT_056c2908;
        DAT_056c2a58 = DAT_056c2908;
        DAT_056c2a68 = DAT_056c2908;
        DAT_056c2a78 = DAT_056c2908;
        DAT_056c2a88 = DAT_056c2908;
        DAT_056c2a98 = DAT_056c2908;
        DAT_056c2aa8 = DAT_056c2908;
        DAT_056c2ab8 = DAT_056c2908;
        DAT_056c2ac8 = DAT_056c2908;
        DAT_056c2ad8 = DAT_056c2908;
        DAT_056c2ae8 = DAT_056c2908;
        DAT_056c2af8 = DAT_056c2908;
        DAT_056c2b08 = DAT_056c2908;
        DAT_056c2b18 = DAT_056c2908;
        DAT_056c2b28 = DAT_056c2908;
        DAT_056c2b38 = DAT_056c2908;
        DAT_056c2b48 = DAT_056c2908;
        DAT_056c2b58 = DAT_056c2908;
        DAT_056c2b68 = DAT_056c2908;
        DAT_056c2b78 = DAT_056c2908;
        DAT_056c2b88 = DAT_056c2908;
        DAT_056c2b98 = DAT_056c2908;
        DAT_056c2ba8 = DAT_056c2908;
        DAT_056c2bb8 = DAT_056c2908;
        DAT_056c2bc8 = DAT_056c2908;
        DAT_056c2bd8 = DAT_056c2908;
        DAT_056c2be8 = DAT_056c2908;
        DAT_056c2bf8 = DAT_056c2908;
        DAT_056c2c08 = DAT_056c2908;
        DAT_056c2c18 = DAT_056c2908;
        DAT_056c2c28 = DAT_056c2908;
        DAT_056c2c38 = DAT_056c2908;
        __cxa_guard_release(&DAT_056c2c48);
      }
      puVar8 = &DAT_056c2c50;
      if (((DAT_056c2c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2c60), iVar1 != 0)) {
        DAT_056c2c50 = 0x1a00000002;
        DAT_056c2c58 = &DAT_056c2908;
        __cxa_guard_release(&DAT_056c2c60);
      }
      if (((DAT_056c2d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c2d18), iVar1 != 0)) {
        DAT_056c2c68 = PTR_DAT_04bb2020 + 0x10;
        DAT_056c2c70 = "@T_Title_00";
        DAT_056c2c80 = "@T_Title_01";
        DAT_056c2c90 = "@T_Title_02";
        DAT_056c2ca0 = "@T_Museum_00";
        DAT_056c2cc0 = "@T_Time_00";
        DAT_056c2cb0 = "@T_Get_00";
        DAT_056c2cd0 = "@T_Time_01";
        DAT_056c2ce0 = "@T_Time_02";
        DAT_056c2cf0 = "@T_Time_03";
        DAT_056c2d00 = "@T_TimeAM_00";
        DAT_056c2d10 = "@T_TimePM_00";
        DAT_056c2c78 = DAT_056c2c68;
        DAT_056c2c88 = DAT_056c2c68;
        DAT_056c2c98 = DAT_056c2c68;
        DAT_056c2ca8 = DAT_056c2c68;
        DAT_056c2cb8 = DAT_056c2c68;
        DAT_056c2cc8 = DAT_056c2c68;
        DAT_056c2cd8 = DAT_056c2c68;
        DAT_056c2ce8 = DAT_056c2c68;
        DAT_056c2cf8 = DAT_056c2c68;
        DAT_056c2d08 = DAT_056c2c68;
        __cxa_guard_release(&DAT_056c2d18);
      }
      local_48 = &DAT_04ae3640;
    }
    local_58 = *param_2;
    local_40 = puVar8;
  }
  local_38 = 0;
  local_50 = (undefined *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_02f3b970:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

