
void FUN_02df9724(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
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
      if (((((((pcVar5[3] != 'B') || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
            (pcVar5[6] != 'L')) &&
           (((pcVar5[3] != 'B' || (pcVar5[4] != 't')) || ((pcVar5[5] != 'n' || (pcVar5[6] != 'R'))))
           )) && (((pcVar5[3] != 'B' || (pcVar5[4] != 't')) ||
                  ((pcVar5[5] != 'n' || (pcVar5[6] != 'C')))))) &&
         ((((((pcVar5[3] != 'B' || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
            ((pcVar5[6] != 'C' || (pcVar5[7] != '2')))) &&
           (((pcVar5[3] != 'B' || ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) || (pcVar5[6] != 'C'))
           )) && ((((pcVar5[3] != 'B' || (pcVar5[4] != 't')) || (pcVar5[5] != 'n')) ||
                  (pcVar5[6] != 'R')))))) {
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
      if (((DAT_05690cb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690cb8), iVar1 != 0)) {
        DAT_05690ca8 = PTR_DAT_04bb2020 + 0x10;
        DAT_05690cb0 = "@T_Text_00";
        __cxa_guard_release(&DAT_05690cb8);
      }
      local_38 = &DAT_04acd630;
      puStack_30 = (undefined8 *)0x0;
      uStack_48 = *param_2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_02df97f0;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_05690c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690c40), iVar1 != 0)) {
    DAT_05690bc0 = PTR_DAT_04bb2020 + 0x10;
    DAT_05690bc8 = &DAT_040fe5ab;
    DAT_05690bd8 = &DAT_0407ebb1;
    DAT_05690bf8 = &DAT_0407ebb1;
    DAT_05690c18 = &DAT_0407ebb1;
    DAT_05690be8 = "*GuideOff";
    DAT_05690c08 = "*State";
    DAT_05690c28 = "*Error";
    DAT_05690c38 = &DAT_0407ebb1;
    DAT_05690bd0 = DAT_05690bc0;
    DAT_05690be0 = DAT_05690bc0;
    DAT_05690bf0 = DAT_05690bc0;
    DAT_05690c00 = DAT_05690bc0;
    DAT_05690c10 = DAT_05690bc0;
    DAT_05690c20 = DAT_05690bc0;
    DAT_05690c30 = DAT_05690bc0;
    __cxa_guard_release(&DAT_05690c40);
  }
  if (((DAT_05690c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690c58), iVar1 != 0)) {
    DAT_05690c48 = 0x400000002;
    DAT_05690c50 = &DAT_05690bc0;
    __cxa_guard_release(&DAT_05690c58);
  }
  if (((DAT_05690ca0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05690ca0), iVar1 != 0)) {
    DAT_05690c60 = PTR_DAT_04bb2020 + 0x10;
    DAT_05690c68 = "@T_Text_00";
    DAT_05690c98 = "@T_Text_01";
    DAT_05690c78 = "@T_Icon_00";
    DAT_05690c88 = "@T_Guide_00";
    DAT_05690c70 = DAT_05690c60;
    DAT_05690c80 = DAT_05690c60;
    DAT_05690c90 = DAT_05690c60;
    __cxa_guard_release(&DAT_05690ca0);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_38 = &DAT_04acd620;
  puStack_30 = &DAT_05690c48;
  uStack_48 = *param_2;
  lVar4 = *(long *)(param_2[1] + 0x10);
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar2 = lVar4 + 0x200;
LAB_02df97f0:
  local_28 = 0;
  local_40 = 0;
  FUN_0386e230(lVar2,lVar4,&local_50);
  return;
}

