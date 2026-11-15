
void FUN_01ec80e0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *__dest;
  undefined8 local_68;
  char *local_60;
  undefined4 local_54;
  
  plVar9 = *(long **)(param_1[1] + 0x60);
  if (plVar9 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      plVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  if (*(int *)((long)param_1 + 0x77b4) == 1) {
    plVar10 = plVar9 + 0xb9e;
    (**(code **)(*plVar9 + 0x4e8))(plVar9,1);
    puVar1 = PTR_DAT_04bb2020;
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = &DAT_040b1007;
    if ((char)*plVar10 == '\0') {
      lVar6 = 0;
    }
    else {
      plVar10 = plVar9 + 0xbae;
      if ((char)*plVar10 == '\0') {
        lVar6 = 1;
      }
      else if ((char)plVar9[0xbbe] == '\0') {
        plVar10 = plVar9 + 0xbbe;
        lVar6 = 2;
      }
      else {
        if ((char)plVar9[0xbce] != '\0') goto LAB_01ec8398;
        plVar10 = plVar9 + 0xbce;
        lVar6 = 3;
      }
    }
    *(char *)plVar10 = '\x01';
    __dest = (undefined1 *)plVar9[lVar6 * 0x10 + 0xb90];
    *(int *)((long)plVar9 + lVar6 * 0x80 + 0x5cf4) =
         (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar1 + 0x28))(&local_68);
    pcVar8 = local_60;
    if (__dest != local_60) {
      (**(code **)(local_68 + 0x18))(&local_68);
      lVar7 = 0;
      do {
        if (local_60[lVar7] == '\0') goto LAB_01ec836c;
        if (local_60[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_01ec836c;
        }
        if (local_60[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_01ec836c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01ec836c:
      iVar4 = (int)lVar7;
      if ((int)plVar9[lVar6 * 0x10 + 0xb91] <= (int)lVar7) {
        iVar4 = (int)plVar9[lVar6 * 0x10 + 0xb91] + -1;
      }
      memcpy(__dest,pcVar8,(long)iVar4);
      __dest[iVar4] = 0;
    }
    *(undefined4 *)(plVar9 + lVar6 * 0x10 + 0xb9d) = 0;
LAB_01ec8398:
    if ((int)param_1[0x15ea] == 0) {
      local_68 = puVar1 + 0x10;
      local_60 = "CommonCharaEditSummon";
      FUN_017081d0(plVar9,&local_68,6,0,0);
    }
    else {
      local_68 = puVar1 + 0x10;
      local_60 = "CommonCharaEditLandChair";
      FUN_017081d0(plVar9,&local_68,6,0,0);
      FUN_01524f30(*(undefined8 *)PTR_DAT_04bb4c80,*(long *)(param_1[1] + 0x68) + 0x278);
    }
    return;
  }
  if (*(int *)((long)param_1 + 0x77b4) < 1) {
    local_54 = 0;
    local_68 = *(undefined **)(*(long *)(param_1[1] + 0x68) + 0x278);
    local_60 = (char *)CONCAT44(local_60._4_4_,*(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x280)
                               );
    uVar3 = FUN_021f2ed0(&local_68,&local_54);
    *(uint *)(param_1 + 0x15ea) = uVar3 & 1;
    return;
  }
  uVar5 = (**(code **)(*plVar9 + 0x100))(plVar9);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((int)param_1[0x15ea] == 0) {
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    if (plVar9[0x227] != 0) {
      lVar6 = *(long *)(plVar9[0x227] + 0x88);
      plVar10 = (long *)(lVar6 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcVar8 = *(char **)(lVar6 + 0x68);
      if (pcVar8 == "CommonCharaEditSummon") goto LAB_01ec84e0;
      if (*pcVar8 == 'C') {
        lVar6 = 0;
        do {
          if ((lVar6 == 0x80000) ||
             (lVar7 = lVar6 + 1, pcVar8[lVar7] != "CommonCharaEditSummon"[lVar6 + 1]))
          goto LAB_01ec8528;
          lVar6 = lVar6 + 1;
        } while (pcVar8[lVar7] != '\0');
        goto LAB_01ec84d4;
      }
    }
  }
  else {
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    if (plVar9[0x227] != 0) {
      lVar6 = *(long *)(plVar9[0x227] + 0x88);
      plVar10 = (long *)(lVar6 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcVar8 = *(char **)(lVar6 + 0x68);
      if (pcVar8 == "CommonCharaEditLandChair") {
LAB_01ec84e0:
        local_54 = 0;
        local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
        if ((((plVar9[0x227] != 0) &&
             (uVar5 = FUN_03850368(plVar9[0x227],0), uVar2 = local_54, (uVar5 & 1) == 0)) &&
            (plVar9[0x227] != 0)) &&
           ((uVar5 = FUN_03850368(plVar9[0x227],local_54), (uVar5 & 1) == 0 &&
            (uVar5 = FUN_0384fca4(plVar9[0x227],uVar2), (uVar5 & 1) == 0)))) {
          return;
        }
        goto LAB_01ec853c;
      }
      if (*pcVar8 == 'C') {
        lVar6 = 0;
        do {
          if ((lVar6 == 0x80000) ||
             (lVar7 = lVar6 + 1, pcVar8[lVar7] != "CommonCharaEditLandChair"[lVar6 + 1]))
          goto LAB_01ec8528;
          lVar6 = lVar6 + 1;
        } while (pcVar8[lVar7] != '\0');
LAB_01ec84d4:
        if (lVar6 - 1U < 0x80000) goto LAB_01ec84e0;
      }
    }
  }
LAB_01ec8528:
  (**(code **)(*plVar9 + 0x4e8))(plVar9,1);
LAB_01ec853c:
                    /* WARNING: Could not recover jumptable at 0x01ec856c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,1,0,0);
  return;
}

