
void FUN_031caaa4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if ((((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'R')) ||
             ((pcVar5[4] != 'i' || (pcVar5[5] != 'n')))) || (pcVar5[6] != 'g')) ||
           (((pcVar5[7] != 'C' || (pcVar5[8] != 'o')) ||
            ((pcVar5[9] != 'r' ||
             (((pcVar5[10] != 'd' || (pcVar5[0xb] != 'e')) || (pcVar5[0xc] != '_')))))))) ||
          ((pcVar5[0xd] != '0' || (pcVar5[0xe] != '0')))) ||
         ((pcVar5[0xf] != '/' ||
          (((pcVar5[0x10] != 'L' || (pcVar5[0x11] != '_')) ||
           ((pcVar5[0x12] != 'B' ||
            (((pcVar5[0x13] != 't' || (pcVar5[0x14] != 'n')) || (pcVar5[0x15] != '_')))))))))) {
LAB_031cacf8:
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
        if (pcVar5[3] != 'R') {
          return;
        }
        if (pcVar5[4] != 'i') {
          return;
        }
        if (pcVar5[5] != 'n') {
          return;
        }
        if (pcVar5[6] != 'g') {
          return;
        }
        if (pcVar5[7] != 'C') {
          return;
        }
        if (pcVar5[8] != 'o') {
          return;
        }
        if (pcVar5[9] != 'r') {
          return;
        }
        if (pcVar5[10] != 'd') {
          return;
        }
        if (pcVar5[0xb] != 'e') {
          return;
        }
        if (pcVar5[0xc] != '_') {
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
        uVar2 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
        if ((uVar2 & 1) == 0) {
          return;
        }
        local_50 = (undefined *)0x0;
        local_48 = 0;
        local_58 = *param_2;
        local_40 = (undefined8 *)0x0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_38 = 0;
        FUN_0386e230(puVar7[2] + 0x208,puVar7[2],&local_60);
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 == 0) {
          pvVar3 = malloc(0x48);
        }
        else {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar7 = (undefined8 *)(lVar8 + 8);
          if (lVar4 != 0) {
            puVar7 = (undefined8 *)(lVar4 + 0xa8);
          }
          pvVar3 = (void *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x48,8);
        }
        FUN_031c9330(pvVar3,*param_2);
        *(void **)(*(long *)(param_2[1] + 8) + 0x1b0) = pvVar3;
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar2 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar2 & 1) == 0))
      goto LAB_031cacf8;
      if (((DAT_057180c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057180c0), iVar1 != 0)) {
        DAT_05718060 = PTR_DAT_04bb2020 + 0x10;
        DAT_05718068 = "Empty";
        DAT_05718078 = &DAT_0407ebb1;
        DAT_05718098 = &DAT_0407ebb1;
        DAT_05718088 = "Confirm";
        DAT_057180a8 = "Pattern";
        DAT_057180b8 = &DAT_0407ebb1;
        DAT_05718070 = DAT_05718060;
        DAT_05718080 = DAT_05718060;
        DAT_05718090 = DAT_05718060;
        DAT_057180a0 = DAT_05718060;
        DAT_057180b0 = DAT_05718060;
        __cxa_guard_release(&DAT_057180c0);
      }
      if (((DAT_057180d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057180d8), iVar1 != 0)) {
        DAT_057180c8 = 0x300000002;
        DAT_057180d0 = &DAT_05718060;
        __cxa_guard_release(&DAT_057180d8);
      }
      if (((DAT_057180f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057180f0), iVar1 != 0)) {
        DAT_057180e0 = PTR_DAT_04bb2020 + 0x10;
        DAT_057180e8 = "P_Icon_00";
        __cxa_guard_release(&DAT_057180f0);
      }
      local_58 = *param_2;
      local_40 = &DAT_057180c8;
      local_38 = 1;
      local_50 = &DAT_04b0ae18;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar4 = puVar7[2];
      lVar8 = lVar4 + 0x2c8;
      goto LAB_031cab4c;
    }
    if (*pcVar5 != '\0') goto LAB_031cacf8;
  }
  if (((DAT_05718058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05718058), iVar1 != 0)) {
    DAT_05718038 = PTR_DAT_04bb2020 + 0x10;
    DAT_05718040 = "L_RingCorde_00";
    DAT_05718050 = "N_SubWin_00";
    DAT_05718048 = DAT_05718038;
    __cxa_guard_release(&DAT_05718058);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_58 = *param_2;
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_50 = &DAT_04b0ae08;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar8 = lVar4 + 0x200;
LAB_031cab4c:
  local_48 = 0;
  FUN_0386e230(lVar8,lVar4,&local_60);
  return;
}

