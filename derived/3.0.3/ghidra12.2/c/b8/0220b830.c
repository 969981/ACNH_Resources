
undefined8 FUN_0220b830(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 local_40;
  char *local_38;
  undefined1 uStack_11;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar11 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_1 + 0x18))();
  uVar6 = FUN_006bd550(param_1[1],0);
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar6);
  lVar9 = FUN_0079e4d0(uVar11,&local_40);
  puVar4 = PTR_DAT_04bb2020;
  if (lVar9 == 0) {
    return 0;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "poo";
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar12 = (char *)param_1[1];
  (**(code **)(local_40 + 0x18))(&local_40);
  if (pcVar12 == local_38) {
    pcVar12 = (char *)param_1[1];
LAB_0220ba24:
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar9 = 0;
    do {
      if (*(char *)(param_1[1] + lVar9) == '\0') goto LAB_0220bb54;
      lVar2 = param_1[1] + lVar9;
      if (*(char *)(lVar2 + 1) == '\0') goto LAB_0220bb48;
      if (*(char *)(lVar2 + 2) == '\0') goto LAB_0220bb50;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  else {
    pcVar12 = (char *)param_1[1];
    if (*pcVar12 == *local_38) {
      if (*pcVar12 != '\0') {
        lVar9 = 0;
        do {
          if ((lVar9 == 0x80000) || (pcVar12[lVar9 + 1] != local_38[lVar9 + 1])) goto LAB_0220b940;
          if (pcVar12[lVar9 + 1] == '\0') break;
          lVar2 = lVar9 + 2;
          if (pcVar12[lVar2] != local_38[lVar9 + 2]) goto LAB_0220b940;
          lVar9 = lVar9 + 2;
        } while (pcVar12[lVar2] != '\0');
      }
      goto LAB_0220ba24;
    }
LAB_0220b940:
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar5 = PTR_DAT_04bb2720;
    pcVar12 = (char *)param_1[1];
    if (pcVar12 != "cml") {
      if (*pcVar12 != 'c') {
        return 0;
      }
      lVar9 = 0;
      do {
        if (lVar9 == 0x80000) {
          return 0;
        }
        lVar2 = lVar9 + 1;
        if (pcVar12[lVar2] != (&DAT_04086a25)[lVar9]) {
          return 0;
        }
        lVar9 = lVar9 + 1;
      } while (pcVar12[lVar2] != '\0');
    }
    lVar9 = *(long *)PTR_DAT_04bb2720;
    iVar8 = 0;
    if (lVar9 != 0) {
      if (*(long *)(lVar9 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar7 = FUN_006bd550(*puVar10,0);
        iVar8 = 0;
        if (iVar7 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar5 != 0) {
            lVar9 = *(long *)(*(long *)puVar5 + 0x330);
            iVar8 = 0;
            if (lVar9 != 0) {
              iVar8 = *(int *)(lVar9 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar8) {
      return 0;
    }
    lVar9 = *(long *)PTR_DAT_04bb4938;
    if (*(int *)(lVar9 + 0x98) != 0) {
      if (*(int *)(lVar9 + 0x98) != 0) {
        FUN_0252d11c(&uStack_11);
        local_40 = puVar4 + 0x10;
        local_38 = "IsHotelEditTutorial";
        iVar8 = FUN_02753180(&uStack_11,&local_40);
        if (iVar8 != 0) goto LAB_0220baf4;
      }
      if ((*(byte *)(lVar9 + 0x54) & 1) != 0) {
        return 0;
      }
      local_40 = (undefined *)CONCAT44((int)((ulong)local_40 >> 0x20),4);
    }
LAB_0220baf4:
    pcVar12 = (char *)param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar9 = 0;
    do {
      if (*(char *)(param_1[1] + lVar9) == '\0') goto LAB_0220bb54;
      lVar2 = param_1[1] + lVar9;
      if (*(char *)(lVar2 + 1) == '\0') goto LAB_0220bb48;
      if (*(char *)(lVar2 + 2) == '\0') goto LAB_0220bb50;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  lVar9 = 0;
LAB_0220bb54:
  uVar3 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
  uVar1 = (int)param_1[2] + ~uVar3;
  if (1 < (int)((int)param_1[2] - uVar3)) {
    uVar1 = 1;
  }
  if (0 < (int)uVar1) {
    memcpy(pcVar12 + uVar3,&DAT_040c3cf0,(ulong)uVar1);
    pcVar12[uVar1 + uVar3] = '\0';
  }
  return 1;
LAB_0220bb48:
  lVar9 = lVar9 + 1;
  goto LAB_0220bb54;
LAB_0220bb50:
  lVar9 = lVar9 + 2;
  goto LAB_0220bb54;
}

