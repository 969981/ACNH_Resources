
void FUN_01f0bb90(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(param_1[1] + 0x60);
  if (plVar7 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      plVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar7 = &DAT_05240280;
    }
  }
  if (*(int *)(param_1[2] + 0x360) == 0xd) {
    iVar3 = (int)param_1[0x15ea];
    if (iVar3 == 0) {
      if (plVar7[0x227] != 0) {
        lVar4 = *(long *)(plVar7[0x227] + 0x88);
        plVar8 = (long *)(lVar4 + 0x60);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar6 = *(char **)(lVar4 + 0x68);
        if (pcVar6 == "CommonCharaEditLand") {
LAB_01f0be40:
          if ((*(int *)(param_1[2] + 0x4b8) == 0) || (*(int *)(param_1[2] + 0x378) != 0x23)) {
            return;
          }
          goto LAB_01f0be70;
        }
        if (*pcVar6 == 'C') {
          uVar2 = 0;
          do {
            uVar5 = uVar2;
            if ((uVar5 == 0x80000) || (pcVar6[uVar5 + 1] != "CommonCharaEditLand"[uVar5 + 1]))
            goto LAB_01f0be5c;
            uVar2 = uVar5 + 1;
          } while (pcVar6[uVar5 + 1] != '\0');
          if (uVar5 >> 0x13 == 0) goto LAB_01f0be40;
        }
      }
    }
    else if (iVar3 == 3) {
      if (plVar7[0x227] != 0) {
        lVar4 = *(long *)(plVar7[0x227] + 0x88);
        plVar8 = (long *)(lVar4 + 0x60);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar6 = *(char **)(lVar4 + 0x68);
        if (pcVar6 == "CommonCharaEditLandBed") goto LAB_01f0be40;
        if (*pcVar6 == 'C') {
          lVar4 = 0;
          do {
            if ((lVar4 == 0x80000) ||
               (lVar1 = lVar4 + 1, pcVar6[lVar1] != "CommonCharaEditLandBed"[lVar4 + 1]))
            goto LAB_01f0be5c;
            lVar4 = lVar4 + 1;
          } while (pcVar6[lVar1] != '\0');
          goto LAB_01f0be34;
        }
      }
    }
    else if ((iVar3 == 1) && (plVar7[0x227] != 0)) {
      lVar4 = *(long *)(plVar7[0x227] + 0x88);
      plVar8 = (long *)(lVar4 + 0x60);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcVar6 = *(char **)(lVar4 + 0x68);
      if (pcVar6 == "CommonCharaEditLandChair") goto LAB_01f0be40;
      if (*pcVar6 == 'C') {
        lVar4 = 0;
        do {
          if ((lVar4 == 0x80000) ||
             (lVar1 = lVar4 + 1, pcVar6[lVar1] != "CommonCharaEditLandChair"[lVar4 + 1]))
          goto LAB_01f0be5c;
          lVar4 = lVar4 + 1;
        } while (pcVar6[lVar1] != '\0');
LAB_01f0be34:
        if (lVar4 - 1U < 0x80000) goto LAB_01f0be40;
      }
    }
  }
  else if (*(int *)(param_1[2] + 0x378) == 0xd) {
    return;
  }
LAB_01f0be5c:
  (**(code **)(*plVar7 + 0x4e8))(plVar7,1);
LAB_01f0be70:
                    /* WARNING: Could not recover jumptable at 0x01f0be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x598))(param_1);
  return;
}

