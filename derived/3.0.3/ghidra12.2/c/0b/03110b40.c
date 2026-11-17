
void FUN_03110b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  bool bVar8;
  undefined *local_68;
  char *pcStack_60;
  long local_58;
  
  puVar2 = PTR_DAT_04bb2020;
  local_58 = 0;
  plVar3 = *(long **)(param_1 + 0x58);
  if ((plVar3 == (long *)0x0) || ((**(code **)(*plVar3 + 0x28))(plVar3,&local_58), local_58 == 0)) {
    plVar3 = (long *)0x0;
LAB_03110bfc:
    bVar8 = true;
  }
  else {
    plVar3 = (long *)(local_58 + 0xb8);
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      plVar3 = (long *)0x0;
LAB_03110cc8:
      pcStack_60 = "T_Guide_00";
      local_68 = puVar2 + 0x10;
      lVar5 = FUN_03c9c9b0(local_58,&local_68);
      if (lVar5 != 0) {
        local_68 = puVar2 + 0x10;
        pcStack_60 = "T_Guide_00";
        uVar4 = FUN_03462900(param_1,param_2,&local_68,&local_58);
        *(undefined8 *)(param_1 + 0x288) = uVar4;
      }
      local_68 = puVar2 + 0x10;
      pcStack_60 = "T_Icon_00";
      if ((local_58 != 0) && (lVar5 = FUN_03c9c9b0(local_58,&local_68), lVar5 != 0)) {
        local_68 = puVar2 + 0x10;
        pcStack_60 = "T_Icon_00";
        uVar4 = FUN_03462900(param_1,param_2,&local_68,&local_58);
        *(undefined8 *)(param_1 + 0x290) = uVar4;
      }
      if (lVar7 == 0) goto LAB_03110bfc;
    }
    else {
      pcStack_60 = (char *)FUN_00364d70(plVar3,&DAT_040a1c2c);
      if ((pcStack_60 != (char *)0x0) && (*pcStack_60 != '\0')) {
        local_68 = puVar2 + 0x10;
        uVar4 = FUN_03462900(param_1,param_2,&local_68,&local_58);
        *(undefined8 *)(param_1 + 0x270) = uVar4;
      }
      local_68 = puVar2 + 0x10;
      pcStack_60 = "T_Guide_00";
      if (local_58 != 0) goto LAB_03110cc8;
    }
    pcVar6 = (char *)FUN_00364e30(plVar3,"BeakPos");
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      local_68 = puVar2 + 0x10;
      pcStack_60 = pcVar6;
      uVar4 = FUN_03c68d44(param_2,&local_68,PTR_PTR_04bb2238);
      *(undefined8 *)(param_1 + 600) = uVar4;
    }
    pcStack_60 = (char *)FUN_00364e30(plVar3,"Invalid");
    if ((pcStack_60 == (char *)0x0) || (*pcStack_60 == '\0')) {
      bVar8 = false;
    }
    else {
      local_68 = puVar2 + 0x10;
      uVar4 = FUN_03c68d44(param_2,&local_68,PTR_PTR_04bb2238);
      bVar8 = false;
      *(undefined8 *)(param_1 + 0x250) = uVar4;
    }
  }
  puVar1 = puVar2 + 0x10;
  pcStack_60 = "Guide";
  local_68 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_68,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x260) = uVar4;
  pcStack_60 = "NumRotate";
  local_68 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_68,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x268) = uVar4;
  if (!bVar8) {
    pcVar6 = (char *)FUN_00364d70(plVar3,"WindowPane");
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      local_68 = puVar2 + 0x10;
      pcStack_60 = pcVar6;
      if (*pcVar6 == '\0') {
LAB_03110dec:
        FUN_0386fd70(&local_68);
        uVar4 = FUN_03c688b0(param_2,&local_68);
      }
      else {
        if (*pcVar6 != '@') {
          lVar7 = 0;
          do {
            if ((lVar7 == 0x80000) || (lVar5 = lVar7 + 1, pcVar6[lVar5] == '\0')) goto LAB_03110dec;
            lVar7 = lVar7 + 1;
          } while (pcVar6[lVar5] != '@');
        }
        uVar4 = FUN_03c68b00(param_2,&local_68);
      }
      *(undefined8 *)(param_1 + 0x278) = uVar4;
    }
    pcStack_60 = (char *)FUN_00364d70(plVar3,"BeakPane");
    if ((pcStack_60 != (char *)0x0) && (*pcStack_60 != '\0')) {
      local_68 = puVar2 + 0x10;
      if (*pcStack_60 == '\0') {
LAB_03110e6c:
        FUN_0386fd70(&local_68);
        uVar4 = FUN_03c688b0(param_2,&local_68);
      }
      else {
        if (*pcStack_60 != '@') {
          lVar7 = 0;
          do {
            if ((lVar7 == 0x80000) || (lVar5 = lVar7 + 1, pcStack_60[lVar5] == '\0'))
            goto LAB_03110e6c;
            lVar7 = lVar7 + 1;
          } while (pcStack_60[lVar5] != '@');
        }
        uVar4 = FUN_03c68b00(param_2,&local_68);
      }
      *(undefined8 *)(param_1 + 0x280) = uVar4;
    }
  }
  lVar7 = 0;
  pcStack_60 = "P_TextSize_00";
  do {
    if ((lVar7 == 0x80000) || (lVar5 = lVar7 + 1, "P_TextSize_00"[lVar5] == '\0')) {
      local_68 = puVar1;
      FUN_0386fd70(&local_68);
      uVar4 = FUN_03c688b0(param_2,&local_68);
      goto LAB_03110ed8;
    }
    lVar7 = lVar7 + 1;
  } while ("P_TextSize_00"[lVar5] != '@');
  local_68 = puVar1;
  uVar4 = FUN_03c68b00(param_2,&local_68);
LAB_03110ed8:
  lVar7 = 0;
  local_68 = puVar2 + 0x10;
  *(undefined8 *)(param_1 + 0x298) = uVar4;
  pcStack_60 = "T_Name_00";
  while ((lVar7 != 0x80000 && (lVar5 = lVar7 + 1, "T_Name_00"[lVar5] != '\0'))) {
    lVar7 = lVar7 + 1;
    if ("T_Name_00"[lVar5] == '@') {
      uVar4 = FUN_03c68b00(param_2,&local_68);
LAB_03110f34:
      *(undefined8 *)(param_1 + 0x2a0) = uVar4;
      FUN_030bc030(param_1,param_2,param_3);
      return;
    }
  }
  FUN_0386fd70(&local_68);
  uVar4 = FUN_03c688b0(param_2,&local_68);
  goto LAB_03110f34;
}

