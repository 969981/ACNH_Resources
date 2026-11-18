
void FUN_034736b4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_03473714:
    if (((DAT_0575c998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575c998), iVar1 != 0)) {
      DAT_0575c8f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575c900 = "CategoryNum";
      DAT_0575c910 = &DAT_0407ebb1;
      DAT_0575c930 = &DAT_0407ebb1;
      DAT_0575c950 = &DAT_0407ebb1;
      DAT_0575c920 = "Share";
      DAT_0575c940 = &DAT_040fe5ab;
      DAT_0575c960 = "WherearenInspect";
      DAT_0575c970 = &DAT_0407ebb1;
      DAT_0575c980 = "HouseSelection";
      DAT_0575c990 = &DAT_0407ebb1;
      DAT_0575c908 = DAT_0575c8f8;
      DAT_0575c918 = DAT_0575c8f8;
      DAT_0575c928 = DAT_0575c8f8;
      DAT_0575c938 = DAT_0575c8f8;
      DAT_0575c948 = DAT_0575c8f8;
      DAT_0575c958 = DAT_0575c8f8;
      DAT_0575c968 = DAT_0575c8f8;
      DAT_0575c978 = DAT_0575c8f8;
      DAT_0575c988 = DAT_0575c8f8;
      __cxa_guard_release(&DAT_0575c998);
    }
    if (((DAT_0575c9b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575c9b0), iVar1 != 0)) {
      DAT_0575c9a0 = 0x500000002;
      DAT_0575c9a8 = &DAT_0575c8f8;
      __cxa_guard_release(&DAT_0575c9b0);
    }
    if (((DAT_0575ca08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575ca08), iVar1 != 0)) {
      DAT_0575c9b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575c9c0 = "@T_L_00";
      DAT_0575c9d0 = "@T_R_00";
      DAT_0575c9e0 = "@T_Icon_00";
      DAT_0575c9f0 = "@T_Text_00";
      DAT_0575ca00 = "@T_Text_02";
      DAT_0575c9c8 = DAT_0575c9b8;
      DAT_0575c9d8 = DAT_0575c9b8;
      DAT_0575c9e8 = DAT_0575c9b8;
      DAT_0575c9f8 = DAT_0575c9b8;
      __cxa_guard_release(&DAT_0575ca08);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04b2cdd0;
    puStack_40 = &DAT_0575c9a0;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_03473784;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
         ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) ||
        (((pcVar5[6] != 'L' || ((pcVar5[7] != 'i' || (pcVar5[8] != 's')))) || (pcVar5[9] != 't'))))
       || (((((pcVar5[10] != '_' || (pcVar5[0xb] != '0')) || (pcVar5[0xc] != '1')) ||
            (((pcVar5[0xd] != '/' || (pcVar5[0xe] != 'L')) ||
             ((pcVar5[0xf] != '_' || ((pcVar5[0x10] != 'B' || (pcVar5[0x11] != 't')))))))) ||
           ((pcVar5[0x12] != 'n' || (pcVar5[0x13] != '_')))))) goto LAB_0347391c;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_0347391c;
    if (((DAT_0575cbe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cbe0), iVar1 != 0)) {
      DAT_0575cb60 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575cb68 = &DAT_040fe5ab;
      DAT_0575cb78 = &DAT_0407ebb1;
      DAT_0575cb98 = &DAT_0407ebb1;
      DAT_0575cbb8 = &DAT_0407ebb1;
      DAT_0575cb88 = "Photo";
      DAT_0575cba8 = "Constructing";
      DAT_0575cbc8 = "Office";
      DAT_0575cbd8 = &DAT_0407ebb1;
      DAT_0575cb70 = DAT_0575cb60;
      DAT_0575cb80 = DAT_0575cb60;
      DAT_0575cb90 = DAT_0575cb60;
      DAT_0575cba0 = DAT_0575cb60;
      DAT_0575cbb0 = DAT_0575cb60;
      DAT_0575cbc0 = DAT_0575cb60;
      DAT_0575cbd0 = DAT_0575cb60;
      __cxa_guard_release(&DAT_0575cbe0);
    }
    puVar8 = &DAT_0575cbe8;
    if (((DAT_0575cbf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cbf8), iVar1 != 0)) {
      DAT_0575cbe8 = 0x400000002;
      DAT_0575cbf0 = &DAT_0575cb60;
      __cxa_guard_release(&DAT_0575cbf8);
    }
    if (((DAT_0575cc30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cc30), iVar1 != 0)) {
      DAT_0575cc00 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575cc08 = "@T_Title_00";
      DAT_0575cc28 = "@T_Constructing_00";
      DAT_0575cc18 = "@T_Title_03";
      DAT_0575cc10 = DAT_0575cc00;
      DAT_0575cc20 = DAT_0575cc00;
      __cxa_guard_release(&DAT_0575cc30);
    }
    if (((DAT_0575cc68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cc68), iVar1 != 0)) {
      DAT_0575cc38 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575cc40 = "P_NPCIcon_00";
      DAT_0575cc60 = "P_Image_00";
      DAT_0575cc50 = "P_NPCIcon_01";
      DAT_0575cc48 = DAT_0575cc38;
      DAT_0575cc58 = DAT_0575cc38;
      __cxa_guard_release(&DAT_0575cc68);
    }
    local_48 = &DAT_04b2ce00;
    local_50 = &DAT_04b2ce10;
    local_38 = 3;
LAB_03473ab4:
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
    puStack_40 = puVar8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_03473714;
LAB_0347391c:
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
        (((((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'L')) &&
          ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) &&
         ((pcVar5[9] == 't' &&
          ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '2')) &&
           ((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')))))))))) &&
       (((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't')))) &&
        ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_0575cad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cad0), iVar1 != 0)) {
          DAT_0575ca10 = PTR_DAT_04bb2020 + 0x10;
          DAT_0575ca18 = "Photo";
          DAT_0575ca28 = &DAT_0407ebb1;
          DAT_0575ca48 = &DAT_0407ebb1;
          DAT_0575ca68 = &DAT_0407ebb1;
          DAT_0575ca38 = "PhotoOutward";
          DAT_0575ca58 = "Constructing";
          DAT_0575ca78 = &DAT_040ad3c6;
          DAT_0575ca98 = "MemoType";
          DAT_0575ca88 = &DAT_0407ebb1;
          DAT_0575caa8 = &DAT_0407ebb1;
          DAT_0575cab8 = "Office";
          DAT_0575cac8 = &DAT_0407ebb1;
          DAT_0575ca20 = DAT_0575ca10;
          DAT_0575ca30 = DAT_0575ca10;
          DAT_0575ca40 = DAT_0575ca10;
          DAT_0575ca50 = DAT_0575ca10;
          DAT_0575ca60 = DAT_0575ca10;
          DAT_0575ca70 = DAT_0575ca10;
          DAT_0575ca80 = DAT_0575ca10;
          DAT_0575ca90 = DAT_0575ca10;
          DAT_0575caa0 = DAT_0575ca10;
          DAT_0575cab0 = DAT_0575ca10;
          DAT_0575cac0 = DAT_0575ca10;
          __cxa_guard_release(&DAT_0575cad0);
        }
        puVar8 = &DAT_0575cad8;
        if (((DAT_0575cae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cae8), iVar1 != 0)) {
          DAT_0575cad8 = 0x600000002;
          DAT_0575cae0 = &DAT_0575ca10;
          __cxa_guard_release(&DAT_0575cae8);
        }
        if (((DAT_0575cb30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cb30), iVar1 != 0)) {
          DAT_0575caf0 = PTR_DAT_04bb2020 + 0x10;
          DAT_0575caf8 = "@T_Title_01";
          DAT_0575cb28 = "@T_Date_00";
          DAT_0575cb08 = "@T_Constructing_00";
          DAT_0575cb18 = "@T_Text_00";
          DAT_0575cb00 = DAT_0575caf0;
          DAT_0575cb10 = DAT_0575caf0;
          DAT_0575cb20 = DAT_0575caf0;
          __cxa_guard_release(&DAT_0575cb30);
        }
        if (((DAT_0575cb58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cb58), iVar1 != 0)) {
          DAT_0575cb38 = PTR_DAT_04bb2020 + 0x10;
          DAT_0575cb40 = "P_Image_00";
          DAT_0575cb50 = "P_Image_01";
          DAT_0575cb48 = DAT_0575cb38;
          __cxa_guard_release(&DAT_0575cb58);
        }
        local_48 = &DAT_04b2cde0;
        local_50 = &DAT_04b2cdf0;
        local_38 = 2;
        goto LAB_03473ab4;
      }
    }
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
    if (pcVar5[3] != 'I') {
      return;
    }
    if (pcVar5[4] != 't') {
      return;
    }
    if (pcVar5[5] != 'e') {
      return;
    }
    if (pcVar5[6] != 'm') {
      return;
    }
    if (pcVar5[7] != 'B') {
      return;
    }
    if (pcVar5[8] != 'a') {
      return;
    }
    if (pcVar5[9] != 'l') {
      return;
    }
    if (pcVar5[10] != 'l') {
      return;
    }
    if (pcVar5[0xb] != 'o') {
      return;
    }
    if (pcVar5[0xc] != 'o') {
      return;
    }
    if (pcVar5[0xd] != 'n') {
      return;
    }
    if (pcVar5[0xe] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_0575ccd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575ccd0), iVar1 != 0)) {
      DAT_0575cc70 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575cc78 = "Guide";
      DAT_0575cc88 = &DAT_0407ebb1;
      DAT_0575cca8 = &DAT_0407ebb1;
      DAT_0575ccc8 = &DAT_0407ebb1;
      DAT_0575cc98 = "NumRotate";
      DAT_0575ccb8 = &DAT_04082ff4;
      DAT_0575cc80 = DAT_0575cc70;
      DAT_0575cc90 = DAT_0575cc70;
      DAT_0575cca0 = DAT_0575cc70;
      DAT_0575ccb0 = DAT_0575cc70;
      DAT_0575ccc0 = DAT_0575cc70;
      __cxa_guard_release(&DAT_0575ccd0);
    }
    if (((DAT_0575cce8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cce8), iVar1 != 0)) {
      DAT_0575ccd8 = 0x300000002;
      DAT_0575cce0 = &DAT_0575cc70;
      __cxa_guard_release(&DAT_0575cce8);
    }
    if (((DAT_0575cd10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cd10), iVar1 != 0)) {
      DAT_0575ccf0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575ccf8 = "@T_Guide_00";
      DAT_0575cd08 = "@T_Icon_00";
      DAT_0575cd00 = DAT_0575ccf0;
      __cxa_guard_release(&DAT_0575cd10);
    }
    if (((DAT_0575cd28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575cd28), iVar1 != 0)) {
      DAT_0575cd18 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575cd20 = "P_TextSize_00";
      __cxa_guard_release(&DAT_0575cd28);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04b2ce20;
    puStack_40 = &DAT_0575ccd8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04b2ce30;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_03473784:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

