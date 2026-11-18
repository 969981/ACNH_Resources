
void FUN_034a2da4(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_034a2e04:
    if (((DAT_057606e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057606e0), iVar1 != 0)) {
      DAT_057606c0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057606c8 = "ToSetting";
      DAT_057606d8 = &DAT_0407ebb1;
      DAT_057606d0 = DAT_057606c0;
      __cxa_guard_release(&DAT_057606e0);
    }
    if (((DAT_057606f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057606f8), iVar1 != 0)) {
      DAT_057606e8 = 0x100000002;
      DAT_057606f0 = &DAT_057606c0;
      __cxa_guard_release(&DAT_057606f8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_38 = 0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_057606e8;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_034a2e5c;
  }
  if (*pcVar5 == '/') {
    if ((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'U')) ||
         ((pcVar5[4] != 's' || (pcVar5[5] != 'e')))) || (pcVar5[6] != 'r')) ||
       (((pcVar5[7] != 'S' || (pcVar5[8] != 't')) ||
        ((pcVar5[9] != 'a' ||
         (((pcVar5[10] != 't' || (pcVar5[0xb] != 'e')) || (pcVar5[0xc] != '_'))))))))
    goto LAB_034a2f90;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_034a2f90;
    if (((DAT_05760800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760800), iVar1 != 0)) {
      DAT_05760700 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760708 = &DAT_040fe5ab;
      DAT_05760718 = &DAT_0407ebb1;
      DAT_05760738 = &DAT_0407ebb1;
      DAT_05760758 = &DAT_0407ebb1;
      DAT_05760728 = "FollowIn";
      DAT_05760748 = "FollowOut";
      DAT_05760768 = "MyColor";
      DAT_05760788 = "MyColorDeco";
      DAT_057607a8 = "MyColorSate";
      DAT_057607c8 = "MyColorGuide";
      DAT_05760778 = &DAT_0407ebb1;
      DAT_05760798 = &DAT_0407ebb1;
      DAT_057607b8 = &DAT_0407ebb1;
      DAT_057607d8 = &DAT_0407ebb1;
      DAT_057607e8 = "State";
      DAT_057607f8 = &DAT_0407ebb1;
      DAT_05760710 = DAT_05760700;
      DAT_05760720 = DAT_05760700;
      DAT_05760730 = DAT_05760700;
      DAT_05760740 = DAT_05760700;
      DAT_05760750 = DAT_05760700;
      DAT_05760760 = DAT_05760700;
      DAT_05760770 = DAT_05760700;
      DAT_05760780 = DAT_05760700;
      DAT_05760790 = DAT_05760700;
      DAT_057607a0 = DAT_05760700;
      DAT_057607b0 = DAT_05760700;
      DAT_057607c0 = DAT_05760700;
      DAT_057607d0 = DAT_05760700;
      DAT_057607e0 = DAT_05760700;
      DAT_057607f0 = DAT_05760700;
      __cxa_guard_release(&DAT_05760800);
    }
    if (((DAT_05760818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760818), iVar1 != 0)) {
      DAT_05760808 = 0x800000002;
      DAT_05760810 = &DAT_05760700;
      __cxa_guard_release(&DAT_05760818);
    }
    if (((DAT_05760860 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760860), iVar1 != 0)) {
      DAT_05760820 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760828 = "@T_Name_00";
      DAT_05760858 = "@T_Icon_00";
      DAT_05760838 = "@T_PlannerID_00";
      DAT_05760848 = "@T_State_00";
      DAT_05760830 = DAT_05760820;
      DAT_05760840 = DAT_05760820;
      DAT_05760850 = DAT_05760820;
      __cxa_guard_release(&DAT_05760860);
    }
    local_58 = *param_2;
    local_38 = 0;
    local_48 = &DAT_04b2ec98;
    local_40 = &DAT_05760808;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_034a2e04;
LAB_034a2f90:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')))) &&
       (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_05760908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760908), iVar1 != 0)) {
          DAT_05760868 = PTR_DAT_04bb2020 + 0x10;
          DAT_05760870 = "Photo";
          DAT_05760880 = &DAT_0407ebb1;
          DAT_057608a0 = &DAT_0407ebb1;
          DAT_057608c0 = &DAT_0407ebb1;
          DAT_05760890 = "Empty";
          DAT_057608b0 = "Check";
          DAT_057608d0 = "Shake";
          DAT_057608e0 = &DAT_0407ebb1;
          DAT_057608f0 = "Advertised";
          DAT_05760900 = &DAT_0407ebb1;
          DAT_05760878 = DAT_05760868;
          DAT_05760888 = DAT_05760868;
          DAT_05760898 = DAT_05760868;
          DAT_057608a8 = DAT_05760868;
          DAT_057608b8 = DAT_05760868;
          DAT_057608c8 = DAT_05760868;
          DAT_057608d8 = DAT_05760868;
          DAT_057608e8 = DAT_05760868;
          DAT_057608f8 = DAT_05760868;
          __cxa_guard_release(&DAT_05760908);
        }
        if (((DAT_05760920 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760920), iVar1 != 0)) {
          DAT_05760910 = 0x500000002;
          DAT_05760918 = &DAT_05760868;
          __cxa_guard_release(&DAT_05760920);
        }
        if (((DAT_05760938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760938), iVar1 != 0)) {
          DAT_05760928 = PTR_DAT_04bb2020 + 0x10;
          DAT_05760930 = "@T_Num_00";
          __cxa_guard_release(&DAT_05760938);
        }
        if (((DAT_05760960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760960), iVar1 != 0)) {
          DAT_05760940 = PTR_DAT_04bb2020 + 0x10;
          DAT_05760948 = "N_Balloon_00";
          DAT_05760958 = "P_Image_00";
          DAT_05760950 = DAT_05760940;
          __cxa_guard_release(&DAT_05760960);
        }
        local_58 = *param_2;
        local_38 = 1;
        local_48 = &DAT_04b2eca8;
        local_40 = &DAT_05760910;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b2ecb8;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x2c8;
        goto LAB_034a2e5c;
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
    if (pcVar5[4] != 'a') {
      return;
    }
    if (pcVar5[5] != 'l') {
      return;
    }
    if (pcVar5[6] != 'l') {
      return;
    }
    if (pcVar5[7] != 'o') {
      return;
    }
    if (pcVar5[8] != 'o') {
      return;
    }
    if (pcVar5[9] != 'n') {
      return;
    }
    if (pcVar5[10] != '_') {
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
    if (((DAT_057609c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057609c8), iVar1 != 0)) {
      DAT_05760968 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760970 = &DAT_040fe5ab;
      DAT_05760980 = &DAT_0407ebb1;
      DAT_057609a0 = &DAT_0407ebb1;
      DAT_057609c0 = &DAT_0407ebb1;
      DAT_05760990 = &DAT_04082ff4;
      DAT_057609b0 = "ChangeGuide";
      DAT_05760978 = DAT_05760968;
      DAT_05760988 = DAT_05760968;
      DAT_05760998 = DAT_05760968;
      DAT_057609a8 = DAT_05760968;
      DAT_057609b8 = DAT_05760968;
      __cxa_guard_release(&DAT_057609c8);
    }
    if (((DAT_057609e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057609e0), iVar1 != 0)) {
      DAT_057609d0 = 0x300000002;
      DAT_057609d8 = &DAT_05760968;
      __cxa_guard_release(&DAT_057609e0);
    }
    if (((DAT_05760a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760a18), iVar1 != 0)) {
      DAT_057609e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057609f0 = "@T_Title_00";
      DAT_05760a10 = "@T_Text_00";
      DAT_05760a00 = "@T_Icon_00";
      DAT_057609f8 = DAT_057609e8;
      DAT_05760a08 = DAT_057609e8;
      __cxa_guard_release(&DAT_05760a18);
    }
    if (((DAT_05760a60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05760a60), iVar1 != 0)) {
      DAT_05760a20 = PTR_DAT_04bb2020 + 0x10;
      DAT_05760a28 = "N_Align_00";
      DAT_05760a58 = "W_Base_01";
      DAT_05760a38 = "P_NPCIcon_00";
      DAT_05760a48 = "P_NPCIcon_01";
      DAT_05760a30 = DAT_05760a20;
      DAT_05760a40 = DAT_05760a20;
      DAT_05760a50 = DAT_05760a20;
      __cxa_guard_release(&DAT_05760a60);
    }
    local_58 = *param_2;
    local_38 = 2;
    local_48 = &DAT_04b2ecc8;
    local_40 = &DAT_057609d0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04b2ecd8;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_034a2e5c:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

