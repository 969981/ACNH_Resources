
void FUN_034e8b44(undefined8 param_1,undefined8 *param_2)

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
      if (((DAT_057643d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057643d8), iVar1 != 0)) {
        DAT_057642f8 = PTR_DAT_04bb2020 + 0x10;
        DAT_05764300 = &DAT_040fe5ab;
        DAT_05764310 = &DAT_0407ebb1;
        DAT_05764330 = &DAT_0407ebb1;
        DAT_05764350 = &DAT_0407ebb1;
        DAT_05764320 = "Photo";
        DAT_05764340 = "Category";
        DAT_05764360 = "Follow";
        DAT_05764380 = "MyColor";
        DAT_057643a0 = "MyColorDeco";
        DAT_05764370 = &DAT_0407ebb1;
        DAT_05764390 = &DAT_0407ebb1;
        DAT_057643b0 = &DAT_0407ebb1;
        DAT_057643c0 = "Reported";
        DAT_057643d0 = &DAT_0407ebb1;
        DAT_05764308 = DAT_057642f8;
        DAT_05764318 = DAT_057642f8;
        DAT_05764328 = DAT_057642f8;
        DAT_05764338 = DAT_057642f8;
        DAT_05764348 = DAT_057642f8;
        DAT_05764358 = DAT_057642f8;
        DAT_05764368 = DAT_057642f8;
        DAT_05764378 = DAT_057642f8;
        DAT_05764388 = DAT_057642f8;
        DAT_05764398 = DAT_057642f8;
        DAT_057643a8 = DAT_057642f8;
        DAT_057643b8 = DAT_057642f8;
        DAT_057643c8 = DAT_057642f8;
        __cxa_guard_release(&DAT_057643d8);
      }
      if (((DAT_057643f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057643f0), iVar1 != 0)) {
        DAT_057643e0 = 0x700000002;
        DAT_057643e8 = &DAT_057642f8;
        __cxa_guard_release(&DAT_057643f0);
      }
      if (((DAT_05764438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05764438), iVar1 != 0)) {
        DAT_057643f8 = PTR_DAT_04bb2020 + 0x10;
        DAT_05764400 = "@T_Name_00";
        DAT_05764430 = "@T_Title_03";
        DAT_05764410 = "@T_Date_00";
        DAT_05764420 = "@T_Title_00";
        DAT_05764408 = DAT_057643f8;
        DAT_05764418 = DAT_057643f8;
        DAT_05764428 = DAT_057643f8;
        __cxa_guard_release(&DAT_05764438);
      }
      if (((DAT_05764470 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05764470), iVar1 != 0)) {
        DAT_05764440 = PTR_DAT_04bb2020 + 0x10;
        DAT_05764448 = "P_NPCIcon_00";
        DAT_05764468 = "P_Image_00";
        DAT_05764458 = "P_NPCIcon_01";
        DAT_05764450 = DAT_05764440;
        DAT_05764460 = DAT_05764440;
        __cxa_guard_release(&DAT_05764470);
      }
      local_58 = *param_2;
      local_38 = 3;
      local_48 = &DAT_04b325d8;
      puStack_40 = &DAT_057643e0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04b325e8;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_034e8c14;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05764260 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05764260), iVar1 != 0)) {
    DAT_05764180 = PTR_DAT_04bb2020 + 0x10;
    DAT_05764188 = "CategoryNum";
    DAT_05764198 = &DAT_0407ebb1;
    DAT_057641b8 = &DAT_0407ebb1;
    DAT_057641d8 = &DAT_0407ebb1;
    DAT_057641a8 = "Share";
    DAT_057641c8 = "Empty";
    DAT_057641e8 = "ListOut";
    DAT_05764208 = "ListIn";
    DAT_05764228 = "MyColorDeco";
    DAT_057641f8 = &DAT_0407ebb1;
    DAT_05764218 = &DAT_0407ebb1;
    DAT_05764238 = &DAT_0407ebb1;
    DAT_05764248 = "MyColor";
    DAT_05764258 = &DAT_0407ebb1;
    DAT_05764190 = DAT_05764180;
    DAT_057641a0 = DAT_05764180;
    DAT_057641b0 = DAT_05764180;
    DAT_057641c0 = DAT_05764180;
    DAT_057641d0 = DAT_05764180;
    DAT_057641e0 = DAT_05764180;
    DAT_057641f0 = DAT_05764180;
    DAT_05764200 = DAT_05764180;
    DAT_05764210 = DAT_05764180;
    DAT_05764220 = DAT_05764180;
    DAT_05764230 = DAT_05764180;
    DAT_05764240 = DAT_05764180;
    DAT_05764250 = DAT_05764180;
    __cxa_guard_release(&DAT_05764260);
  }
  if (((DAT_05764278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05764278), iVar1 != 0)) {
    DAT_05764268 = 0x700000002;
    DAT_05764270 = &DAT_05764180;
    __cxa_guard_release(&DAT_05764278);
  }
  if (((DAT_057642f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057642f0), iVar1 != 0)) {
    DAT_05764280 = PTR_DAT_04bb2020 + 0x10;
    DAT_05764288 = "@T_Icon_00";
    DAT_057642b8 = "@T_Icon_01";
    DAT_05764298 = "@T_Text_00";
    DAT_057642a8 = "@T_Text_01";
    DAT_057642c8 = "@T_L_00";
    DAT_057642d8 = "@T_R_00";
    DAT_057642e8 = "@T_Empty_00";
    DAT_05764290 = DAT_05764280;
    DAT_057642a0 = DAT_05764280;
    DAT_057642b0 = DAT_05764280;
    DAT_057642c0 = DAT_05764280;
    DAT_057642d0 = DAT_05764280;
    DAT_057642e0 = DAT_05764280;
    __cxa_guard_release(&DAT_057642f0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = 0;
  local_48 = &DAT_04b325c8;
  puStack_40 = &DAT_05764268;
  local_50 = (undefined *)0x0;
  local_58 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_034e8c14:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

