
void FUN_032340e4(undefined8 param_1,undefined8 *param_2)

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
  if (pcVar5 == "") {
LAB_03234144:
    if (((DAT_05723c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723c68), iVar1 != 0)) {
      DAT_05723b68 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723b70 = "WindowIn";
      DAT_05723b80 = &DAT_0407ebb1;
      DAT_05723ba0 = &DAT_0407ebb1;
      DAT_05723bc0 = &DAT_0407ebb1;
      DAT_05723b90 = "Clear";
      DAT_05723bb0 = "Btn00";
      DAT_05723bd0 = "Btn01";
      DAT_05723bf0 = "Btn02";
      DAT_05723c10 = "Btn03";
      DAT_05723c30 = "Btn04";
      DAT_05723be0 = &DAT_0407ebb1;
      DAT_05723c00 = &DAT_0407ebb1;
      DAT_05723c20 = &DAT_0407ebb1;
      DAT_05723c40 = &DAT_0407ebb1;
      DAT_05723c50 = "EventType";
      DAT_05723c60 = &DAT_0407ebb1;
      DAT_05723b78 = DAT_05723b68;
      DAT_05723b88 = DAT_05723b68;
      DAT_05723b98 = DAT_05723b68;
      DAT_05723ba8 = DAT_05723b68;
      DAT_05723bb8 = DAT_05723b68;
      DAT_05723bc8 = DAT_05723b68;
      DAT_05723bd8 = DAT_05723b68;
      DAT_05723be8 = DAT_05723b68;
      DAT_05723bf8 = DAT_05723b68;
      DAT_05723c08 = DAT_05723b68;
      DAT_05723c18 = DAT_05723b68;
      DAT_05723c28 = DAT_05723b68;
      DAT_05723c38 = DAT_05723b68;
      DAT_05723c48 = DAT_05723b68;
      DAT_05723c58 = DAT_05723b68;
      __cxa_guard_release(&DAT_05723c68);
    }
    if (((DAT_05723c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723c80), iVar1 != 0)) {
      DAT_05723c70 = 0x800000002;
      DAT_05723c78 = &DAT_05723b68;
      __cxa_guard_release(&DAT_05723c80);
    }
    if (((DAT_05723cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723cc8), iVar1 != 0)) {
      DAT_05723c88 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723c90 = "@T_Title_00";
      DAT_05723cc0 = "@T_Guide_00";
      DAT_05723ca0 = "@T_Clear_00";
      DAT_05723cb0 = "@T_Icon_00";
      DAT_05723c98 = DAT_05723c88;
      DAT_05723ca8 = DAT_05723c88;
      DAT_05723cb8 = DAT_05723c88;
      __cxa_guard_release(&DAT_05723cc8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04b12880;
    puStack_40 = &DAT_05723c70;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((pcVar5[1] == 'L') && (pcVar5[2] == '_')) &&
         ((((((pcVar5[3] == 'B' &&
              ((((((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')) &&
                 ((pcVar5[7] == '0' && (pcVar5[8] == '0')))) && (pcVar5[9] == '/')) &&
               ((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')))))) && (pcVar5[0xc] == 'G')) &&
            ((((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')) && (pcVar5[0xf] == 'g')) &&
             ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_')))))) ||
           (((pcVar5[3] == 'B' && ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
            (((pcVar5[6] == '_' &&
              (((pcVar5[7] == '0' && (pcVar5[8] == '1')) && (pcVar5[9] == '/')))) &&
             (((((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')) &&
                ((pcVar5[0xc] == 'G' && ((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')))))) &&
               (pcVar5[0xf] == 'g')) && ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_')))))))))) ||
          (((((pcVar5[3] == 'B' &&
              ((((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')) &&
               ((pcVar5[7] == '0' && (pcVar5[8] == '2')))))) &&
             ((pcVar5[9] == '/' &&
              (((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')) &&
               ((pcVar5[0xc] == 'G' &&
                (((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')) && (pcVar5[0xf] == 'g')))))))))) &&
            ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_')))) ||
           (((((pcVar5[3] == 'B' &&
               (((pcVar5[4] == 't' && (pcVar5[5] == 'n')) &&
                ((pcVar5[6] == '_' &&
                 (((pcVar5[7] == '0' && (pcVar5[8] == '3')) && (pcVar5[9] == '/')))))))) &&
              ((((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')) && (pcVar5[0xc] == 'G')) &&
               (((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')) &&
                ((pcVar5[0xf] == 'g' && ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_')))))))))) ||
             (((pcVar5[3] == 'B' &&
               ((((pcVar5[4] == 't' && (pcVar5[5] == 'n')) && (pcVar5[6] == '_')) &&
                ((pcVar5[7] == '0' && (pcVar5[8] == '4')))))) &&
              ((((pcVar5[9] == '/' && ((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')))) &&
                (pcVar5[0xc] == 'G')) &&
               ((((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')) && (pcVar5[0xf] == 'g')) &&
                ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_')))))))))) ||
            (((((pcVar5[3] == 'B' && ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
               (pcVar5[6] == '_')) &&
              (((((pcVar5[7] == '0' && (pcVar5[8] == '5')) && (pcVar5[9] == '/')) &&
                (((pcVar5[10] == 'L' && (pcVar5[0xb] == '_')) &&
                 ((pcVar5[0xc] == 'G' && ((pcVar5[0xd] == 'a' && (pcVar5[0xe] == 'u')))))))) &&
               (pcVar5[0xf] == 'g')))) && ((pcVar5[0x10] == 'e' && (pcVar5[0x11] == '_'))))))))))))
      {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc5550 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5550), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc5548 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc5550);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5548), (uVar3 & 1) != 0)) {
          if (((DAT_05723d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723d10), iVar1 != 0))
          {
            DAT_05723cd0 = PTR_DAT_04bb2020 + 0x10;
            DAT_05723cd8 = &DAT_040fe5ab;
            DAT_05723ce8 = &DAT_0407ebb1;
            DAT_05723d08 = &DAT_0407ebb1;
            DAT_05723cf8 = "EventType";
            DAT_05723ce0 = DAT_05723cd0;
            DAT_05723cf0 = DAT_05723cd0;
            DAT_05723d00 = DAT_05723cd0;
            __cxa_guard_release(&DAT_05723d10);
          }
          if (((DAT_05723d28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723d28), iVar1 != 0))
          {
            DAT_05723d18 = 0x200000002;
            DAT_05723d20 = &DAT_05723cd0;
            __cxa_guard_release(&DAT_05723d28);
          }
          if (((DAT_05723d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723d80), iVar1 != 0))
          {
            DAT_05723d30 = PTR_DAT_04bb2020 + 0x10;
            DAT_05723d38 = "@T_Num_01";
            DAT_05723d48 = "@T_Num_00";
            DAT_05723d58 = "@T_Slash_00";
            DAT_05723d68 = "@T_Num_02";
            DAT_05723d78 = "@T_Num_03";
            DAT_05723d40 = DAT_05723d30;
            DAT_05723d50 = DAT_05723d30;
            DAT_05723d60 = DAT_05723d30;
            DAT_05723d70 = DAT_05723d30;
            __cxa_guard_release(&DAT_05723d80);
          }
          if (((DAT_05723d98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723d98), iVar1 != 0))
          {
            DAT_05723d88 = PTR_DAT_04bb2020 + 0x10;
            DAT_05723d90 = "P_Icon_00";
            __cxa_guard_release(&DAT_05723d98);
          }
          local_58 = *param_2;
          local_38 = 1;
          local_48 = &DAT_04b12890;
          puStack_40 = &DAT_05723d18;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04b128a0;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x278;
          goto LAB_032341b4;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_03234144;
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
    if (((DAT_05723e00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723e00), iVar1 != 0)) {
      DAT_05723da0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723da8 = "BonusType";
      DAT_05723db8 = &DAT_0407ebb1;
      DAT_05723dd8 = &DAT_0407ebb1;
      DAT_05723df8 = &DAT_0407ebb1;
      DAT_05723dc8 = "Bonus";
      DAT_05723de8 = "EventType";
      DAT_05723db0 = DAT_05723da0;
      DAT_05723dc0 = DAT_05723da0;
      DAT_05723dd0 = DAT_05723da0;
      DAT_05723de0 = DAT_05723da0;
      DAT_05723df0 = DAT_05723da0;
      __cxa_guard_release(&DAT_05723e00);
    }
    if (((DAT_05723e18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723e18), iVar1 != 0)) {
      DAT_05723e08 = 0x300000002;
      DAT_05723e10 = &DAT_05723da0;
      __cxa_guard_release(&DAT_05723e18);
    }
    if (((DAT_05723e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05723e50), iVar1 != 0)) {
      DAT_05723e20 = PTR_DAT_04bb2020 + 0x10;
      DAT_05723e28 = "@T_PointNum_00";
      DAT_05723e48 = "@T_BonusNumUnit_00";
      DAT_05723e38 = "@T_BonusNum_00";
      DAT_05723e30 = DAT_05723e20;
      DAT_05723e40 = DAT_05723e20;
      __cxa_guard_release(&DAT_05723e50);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04b128b0;
    puStack_40 = &DAT_05723e08;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x2c8;
  }
LAB_032341b4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

