
void FUN_02d0fa14(undefined8 param_1,undefined8 *param_2)

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
LAB_02d0fa74:
    if (((DAT_05673f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05673f20), iVar1 != 0)) {
      DAT_05673e80 = PTR_DAT_04bb2020 + 0x10;
      DAT_05673e88 = "3DposeWait";
      DAT_05673e98 = &DAT_0407ebb1;
      DAT_05673eb8 = &DAT_0407ebb1;
      DAT_05673ed8 = &DAT_0407ebb1;
      DAT_05673ea8 = "3DoffDecide";
      DAT_05673ec8 = &DAT_040a0741;
      DAT_05673ee8 = "Share";
      DAT_05673ef8 = &DAT_0407ebb1;
      DAT_05673f08 = "CategoryNum";
      DAT_05673f18 = &DAT_0407ebb1;
      DAT_05673e90 = DAT_05673e80;
      DAT_05673ea0 = DAT_05673e80;
      DAT_05673eb0 = DAT_05673e80;
      DAT_05673ec0 = DAT_05673e80;
      DAT_05673ed0 = DAT_05673e80;
      DAT_05673ee0 = DAT_05673e80;
      DAT_05673ef0 = DAT_05673e80;
      DAT_05673f00 = DAT_05673e80;
      DAT_05673f10 = DAT_05673e80;
      __cxa_guard_release(&DAT_05673f20);
    }
    if (((DAT_05673f38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05673f38), iVar1 != 0)) {
      DAT_05673f28 = 0x500000002;
      DAT_05673f30 = &DAT_05673e80;
      __cxa_guard_release(&DAT_05673f38);
    }
    if (((DAT_05673f60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05673f60), iVar1 != 0)) {
      DAT_05673f40 = PTR_DAT_04bb2020 + 0x10;
      DAT_05673f48 = "@T_L_00";
      DAT_05673f58 = "@T_R_00";
      DAT_05673f50 = DAT_05673f40;
      __cxa_guard_release(&DAT_05673f60);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04abc248;
    puStack_40 = &DAT_05673f28;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_05673fc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05673fc8), iVar1 != 0))
          {
            DAT_05673f68 = PTR_DAT_04bb2020 + 0x10;
            DAT_05673f70 = "Pattern";
            DAT_05673f80 = &DAT_0407ebb1;
            DAT_05673fa0 = &DAT_0407ebb1;
            DAT_05673fc0 = &DAT_0407ebb1;
            DAT_05673f90 = "BtnListRandom";
            DAT_05673fb0 = "State";
            DAT_05673f78 = DAT_05673f68;
            DAT_05673f88 = DAT_05673f68;
            DAT_05673f98 = DAT_05673f68;
            DAT_05673fa8 = DAT_05673f68;
            DAT_05673fb8 = DAT_05673f68;
            __cxa_guard_release(&DAT_05673fc8);
          }
          if (((DAT_05673fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05673fe0), iVar1 != 0))
          {
            DAT_05673fd0 = 0x300000002;
            DAT_05673fd8 = &DAT_05673f68;
            __cxa_guard_release(&DAT_05673fe0);
          }
          if (((DAT_05674008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05674008), iVar1 != 0))
          {
            DAT_05673fe8 = PTR_DAT_04bb2020 + 0x10;
            DAT_05673ff0 = "P_Icon_00";
            DAT_05674000 = "P_Icon_01";
            DAT_05673ff8 = DAT_05673fe8;
            __cxa_guard_release(&DAT_05674008);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_05673fd0;
          local_38 = 2;
          local_50 = &DAT_04abc258;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02d0fae4;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02d0fa74;
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
    if (pcVar5[3] != 'C') {
      return;
    }
    if (pcVar5[4] != 'l') {
      return;
    }
    if (pcVar5[5] != 'o') {
      return;
    }
    if (pcVar5[6] != 't') {
      return;
    }
    if (pcVar5[7] != 'h') {
      return;
    }
    if (pcVar5[8] != 'e') {
      return;
    }
    if (pcVar5[9] != 's') {
      return;
    }
    if (pcVar5[10] != '_') {
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
    if (((DAT_05674030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05674030), iVar1 != 0)) {
      DAT_05674010 = PTR_DAT_04bb2020 + 0x10;
      DAT_05674018 = "Pattern";
      DAT_05674028 = &DAT_0407ebb1;
      DAT_05674020 = DAT_05674010;
      __cxa_guard_release(&DAT_05674030);
    }
    if (((DAT_05674048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05674048), iVar1 != 0)) {
      DAT_05674038 = 0x100000002;
      DAT_05674040 = &DAT_05674010;
      __cxa_guard_release(&DAT_05674048);
    }
    if (((DAT_05674070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05674070), iVar1 != 0)) {
      DAT_05674050 = PTR_DAT_04bb2020 + 0x10;
      DAT_05674058 = "P_Icon_01";
      DAT_05674068 = "P_Icon_00";
      DAT_05674060 = DAT_05674050;
      __cxa_guard_release(&DAT_05674070);
    }
    local_58 = *param_2;
    local_48 = (undefined *)0x0;
    puStack_40 = &DAT_05674038;
    local_38 = 2;
    local_50 = &DAT_04abc268;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_02d0fae4:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

