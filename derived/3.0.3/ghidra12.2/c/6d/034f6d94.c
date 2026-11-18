
void FUN_034f6d94(undefined8 param_1,undefined8 *param_2)

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
LAB_034f6df4:
    if (((DAT_05765268 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765268), iVar1 != 0)) {
      DAT_05765248 = PTR_DAT_04bb2020 + 0x10;
      DAT_05765250 = "ToSetting";
      DAT_05765260 = &DAT_0407ebb1;
      DAT_05765258 = DAT_05765248;
      __cxa_guard_release(&DAT_05765268);
    }
    if (((DAT_05765280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765280), iVar1 != 0)) {
      DAT_05765270 = 0x100000002;
      DAT_05765278 = &DAT_05765248;
      __cxa_guard_release(&DAT_05765280);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_05765270;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_034f6e4c;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'U')) ||
         ((pcVar5[4] != 's' || (pcVar5[5] != 'e')))) ||
        (((pcVar5[6] != 'r' || ((pcVar5[7] != 'S' || (pcVar5[8] != 't')))) || (pcVar5[9] != 'a'))))
       || (((pcVar5[10] != 't' || (pcVar5[0xb] != 'e')) || (pcVar5[0xc] != '_'))))
    goto LAB_034f6f80;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_034f6f80;
    if (((DAT_05765388 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765388), iVar1 != 0)) {
      DAT_05765288 = PTR_DAT_04bb2020 + 0x10;
      DAT_05765290 = &DAT_040fe5ab;
      DAT_057652a0 = &DAT_0407ebb1;
      DAT_057652c0 = &DAT_0407ebb1;
      DAT_057652e0 = &DAT_0407ebb1;
      DAT_057652b0 = "FollowIn";
      DAT_057652d0 = "FollowOut";
      DAT_057652f0 = "MyColor";
      DAT_05765310 = "MyColorDeco";
      DAT_05765330 = "MyColorSate";
      DAT_05765350 = "MyColorGuide";
      DAT_05765300 = &DAT_0407ebb1;
      DAT_05765320 = &DAT_0407ebb1;
      DAT_05765340 = &DAT_0407ebb1;
      DAT_05765360 = &DAT_0407ebb1;
      DAT_05765370 = "State";
      DAT_05765380 = &DAT_0407ebb1;
      DAT_05765298 = DAT_05765288;
      DAT_057652a8 = DAT_05765288;
      DAT_057652b8 = DAT_05765288;
      DAT_057652c8 = DAT_05765288;
      DAT_057652d8 = DAT_05765288;
      DAT_057652e8 = DAT_05765288;
      DAT_057652f8 = DAT_05765288;
      DAT_05765308 = DAT_05765288;
      DAT_05765318 = DAT_05765288;
      DAT_05765328 = DAT_05765288;
      DAT_05765338 = DAT_05765288;
      DAT_05765348 = DAT_05765288;
      DAT_05765358 = DAT_05765288;
      DAT_05765368 = DAT_05765288;
      DAT_05765378 = DAT_05765288;
      __cxa_guard_release(&DAT_05765388);
    }
    if (((DAT_057653a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057653a0), iVar1 != 0)) {
      DAT_05765390 = 0x800000002;
      DAT_05765398 = &DAT_05765288;
      __cxa_guard_release(&DAT_057653a0);
    }
    if (((DAT_057653e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057653e8), iVar1 != 0)) {
      DAT_057653a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057653b0 = "@T_Name_00";
      DAT_057653e0 = "@T_Icon_00";
      DAT_057653c0 = "@T_PlannerID_00";
      DAT_057653d0 = "@T_State_00";
      DAT_057653b8 = DAT_057653a8;
      DAT_057653c8 = DAT_057653a8;
      DAT_057653d8 = DAT_057653a8;
      __cxa_guard_release(&DAT_057653e8);
    }
    local_58 = *param_2;
    local_38 = 0;
    local_48 = &DAT_04b32d40;
    local_40 = &DAT_05765390;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
LAB_034f71a8:
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
    goto LAB_034f6e4c;
  }
  if (*pcVar5 == '\0') goto LAB_034f6df4;
LAB_034f6f80:
  pcVar5 = (char *)param_2[5];
  if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
     (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')))) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_034f7070;
    if (((DAT_05765490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765490), iVar1 != 0)) {
      DAT_057653f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057653f8 = "Photo";
      DAT_05765408 = &DAT_0407ebb1;
      DAT_05765428 = &DAT_0407ebb1;
      DAT_05765448 = &DAT_0407ebb1;
      DAT_05765418 = "Empty";
      DAT_05765438 = "Check";
      DAT_05765458 = "Shake";
      DAT_05765468 = &DAT_0407ebb1;
      DAT_05765478 = "Advertised";
      DAT_05765488 = &DAT_0407ebb1;
      DAT_05765400 = DAT_057653f0;
      DAT_05765410 = DAT_057653f0;
      DAT_05765420 = DAT_057653f0;
      DAT_05765430 = DAT_057653f0;
      DAT_05765440 = DAT_057653f0;
      DAT_05765450 = DAT_057653f0;
      DAT_05765460 = DAT_057653f0;
      DAT_05765470 = DAT_057653f0;
      DAT_05765480 = DAT_057653f0;
      __cxa_guard_release(&DAT_05765490);
    }
    puVar8 = &DAT_05765498;
    if (((DAT_057654a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057654a8), iVar1 != 0)) {
      DAT_05765498 = 0x500000002;
      DAT_057654a0 = &DAT_057653f0;
      __cxa_guard_release(&DAT_057654a8);
    }
    if (((DAT_057654c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057654c0), iVar1 != 0)) {
      DAT_057654b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057654b8 = "@T_Num_00";
      __cxa_guard_release(&DAT_057654c0);
    }
    if (((DAT_057654e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057654e8), iVar1 != 0)) {
      DAT_057654c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057654d0 = "P_Image_00";
      DAT_057654e0 = "N_Balloon_00";
      DAT_057654d8 = DAT_057654c8;
      __cxa_guard_release(&DAT_057654e8);
    }
    local_48 = &DAT_04b32d50;
    local_50 = &DAT_04b32d60;
  }
  else {
LAB_034f7070:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') &&
        (((((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
          ((pcVar5[4] == 'a' && (pcVar5[5] == 'l')))) && (pcVar5[6] == 'l')))) &&
       ((((pcVar5[7] == 'o' && (pcVar5[8] == 'o')) && (pcVar5[9] == 'n')) && (pcVar5[10] == '_'))))
    {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4fe0);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) != 0)) {
        if (((DAT_05765550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765550), iVar1 != 0)) {
          DAT_057654f0 = PTR_DAT_04bb2020 + 0x10;
          DAT_057654f8 = &DAT_040fe5ab;
          DAT_05765508 = &DAT_0407ebb1;
          DAT_05765528 = &DAT_0407ebb1;
          DAT_05765548 = &DAT_0407ebb1;
          DAT_05765518 = &DAT_04082ff4;
          DAT_05765538 = "Guide";
          DAT_05765500 = DAT_057654f0;
          DAT_05765510 = DAT_057654f0;
          DAT_05765520 = DAT_057654f0;
          DAT_05765530 = DAT_057654f0;
          DAT_05765540 = DAT_057654f0;
          __cxa_guard_release(&DAT_05765550);
        }
        if (((DAT_05765568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765568), iVar1 != 0)) {
          DAT_05765558 = 0x300000002;
          DAT_05765560 = &DAT_057654f0;
          __cxa_guard_release(&DAT_05765568);
        }
        if (((DAT_057655a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057655a0), iVar1 != 0)) {
          DAT_05765570 = PTR_DAT_04bb2020 + 0x10;
          DAT_05765578 = "@T_Title_00";
          DAT_05765598 = "@T_Text_00";
          DAT_05765588 = "@T_Icon_00";
          DAT_05765580 = DAT_05765570;
          DAT_05765590 = DAT_05765570;
          __cxa_guard_release(&DAT_057655a0);
        }
        if (((DAT_057655d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057655d8), iVar1 != 0)) {
          DAT_057655a8 = PTR_DAT_04bb2020 + 0x10;
          DAT_057655b0 = "N_Align_00";
          DAT_057655d0 = "P_NPCIcon_00";
          DAT_057655c0 = "P_NPCIcon_01";
          DAT_057655b8 = DAT_057655a8;
          DAT_057655c8 = DAT_057655a8;
          __cxa_guard_release(&DAT_057655d8);
        }
        local_58 = *param_2;
        local_38 = 2;
        local_48 = &DAT_04b32d70;
        local_40 = &DAT_05765558;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b32d80;
        goto LAB_034f71a8;
      }
    }
    pcVar5 = (char *)param_2[5];
    if ((((*pcVar5 == '/') && (pcVar5[1] == 'L')) && (pcVar5[2] == '_')) &&
       (((pcVar5[3] == 'B' && (pcVar5[4] == 't')) && ((pcVar5[5] == 'n' && (pcVar5[6] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_05765680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765680), iVar1 != 0)) {
          DAT_057655e0 = PTR_DAT_04bb2020 + 0x10;
          DAT_057655e8 = "Photo";
          DAT_057655f8 = &DAT_0407ebb1;
          DAT_05765618 = &DAT_0407ebb1;
          DAT_05765638 = &DAT_0407ebb1;
          DAT_05765608 = "Empty";
          DAT_05765628 = "Check";
          DAT_05765648 = "Shake";
          DAT_05765658 = &DAT_0407ebb1;
          DAT_05765668 = "Advertised";
          DAT_05765678 = &DAT_0407ebb1;
          DAT_057655f0 = DAT_057655e0;
          DAT_05765600 = DAT_057655e0;
          DAT_05765610 = DAT_057655e0;
          DAT_05765620 = DAT_057655e0;
          DAT_05765630 = DAT_057655e0;
          DAT_05765640 = DAT_057655e0;
          DAT_05765650 = DAT_057655e0;
          DAT_05765660 = DAT_057655e0;
          DAT_05765670 = DAT_057655e0;
          __cxa_guard_release(&DAT_05765680);
        }
        puVar8 = &DAT_05765688;
        if (((DAT_05765698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765698), iVar1 != 0)) {
          DAT_05765688 = 0x500000002;
          DAT_05765690 = &DAT_057655e0;
          __cxa_guard_release(&DAT_05765698);
        }
        if (((DAT_057656b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057656b0), iVar1 != 0)) {
          DAT_057656a0 = PTR_DAT_04bb2020 + 0x10;
          DAT_057656a8 = "@T_Num_00";
          __cxa_guard_release(&DAT_057656b0);
        }
        if (((DAT_057656d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057656d8), iVar1 != 0)) {
          DAT_057656b8 = PTR_DAT_04bb2020 + 0x10;
          DAT_057656c0 = "N_Balloon_00";
          DAT_057656d0 = "P_Image_00";
          DAT_057656c8 = DAT_057656b8;
          __cxa_guard_release(&DAT_057656d8);
        }
        local_48 = &DAT_04b32d90;
        local_50 = &DAT_04b32da0;
        goto LAB_034f7390;
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
    if (((DAT_05765780 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765780), iVar1 != 0)) {
      DAT_057656e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057656e8 = "Photo";
      DAT_057656f8 = &DAT_0407ebb1;
      DAT_05765718 = &DAT_0407ebb1;
      DAT_05765738 = &DAT_0407ebb1;
      DAT_05765708 = "Empty";
      DAT_05765728 = "Check";
      DAT_05765748 = "Shake";
      DAT_05765758 = &DAT_0407ebb1;
      DAT_05765768 = "Advertised";
      DAT_05765778 = &DAT_0407ebb1;
      DAT_057656f0 = DAT_057656e0;
      DAT_05765700 = DAT_057656e0;
      DAT_05765710 = DAT_057656e0;
      DAT_05765720 = DAT_057656e0;
      DAT_05765730 = DAT_057656e0;
      DAT_05765740 = DAT_057656e0;
      DAT_05765750 = DAT_057656e0;
      DAT_05765760 = DAT_057656e0;
      DAT_05765770 = DAT_057656e0;
      __cxa_guard_release(&DAT_05765780);
    }
    puVar8 = &DAT_05765788;
    if (((DAT_05765798 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05765798), iVar1 != 0)) {
      DAT_05765788 = 0x500000002;
      DAT_05765790 = &DAT_057656e0;
      __cxa_guard_release(&DAT_05765798);
    }
    if (((DAT_057657b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057657b0), iVar1 != 0)) {
      DAT_057657a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057657a8 = "@T_Num_00";
      __cxa_guard_release(&DAT_057657b0);
    }
    if (((DAT_057657d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057657d8), iVar1 != 0)) {
      DAT_057657b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057657c0 = "N_Balloon_00";
      DAT_057657d0 = "P_Image_00";
      DAT_057657c8 = DAT_057657b8;
      __cxa_guard_release(&DAT_057657d8);
    }
    local_48 = &DAT_04b32db0;
    local_50 = &DAT_04b32dc0;
  }
LAB_034f7390:
  local_58 = *param_2;
  local_38 = 1;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
  local_40 = puVar8;
LAB_034f6e4c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

