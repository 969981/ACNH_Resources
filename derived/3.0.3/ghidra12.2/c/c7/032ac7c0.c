
void FUN_032ac7c0(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 < 0x80) {
    pcVar1 = "Cmn_FooterKey_A";
    switch(param_2) {
    case 1:
      break;
    case 2:
      pcVar1 = "Cmn_FooterKey_B";
      break;
    default:
      goto switchD_032ac81c_caseD_3;
    case 4:
      pcVar1 = "Cmn_FooterKey_ZL";
      break;
    case 8:
      pcVar1 = "Cmn_FooterKey_X";
      break;
    case 0x10:
      pcVar1 = "Cmn_FooterKey_Y";
      break;
    case 0x20:
      pcVar1 = "Cmn_FooterKey_ZR";
      break;
    case 0x40:
      pcVar1 = "Cmn_FooterKey_RS_Push";
    }
  }
  else {
    if (param_2 < 0x600) {
      if (param_2 < 0x200) {
        if (param_2 == 0x80) {
          pcVar1 = "Cmn_FooterKey_LS_Push";
          goto switchD_032ac81c_caseD_1;
        }
        if (param_2 == 0xc0) {
          pcVar1 = "Cmn_FooterKey_S_Push";
          goto switchD_032ac81c_caseD_1;
        }
      }
      else {
        if (param_2 == 0x200) {
          pcVar1 = "Cmn_FooterKey_Minus";
          goto switchD_032ac81c_caseD_1;
        }
        if (param_2 == 0x400) {
          pcVar1 = "Cmn_FooterKey_Plus";
          goto switchD_032ac81c_caseD_1;
        }
      }
    }
    else if (param_2 < 0x4000) {
      if (param_2 == 0x600) {
        pcVar1 = "Cmn_FooterKey_MinusPlus";
        goto switchD_032ac81c_caseD_1;
      }
      if (param_2 == 0x2000) goto LAB_032ac870;
    }
    else if ((param_2 == 0x4000) || (param_2 == 0x6000)) {
LAB_032ac870:
      if (param_2 == 0x6000) {
        pcVar2 = "Cmn_FooterKey_SLSR";
        pcVar1 = "Cmn_FooterKey_LR";
      }
      else if (param_2 == 0x4000) {
        pcVar2 = "Cmn_FooterKey_SR";
        pcVar1 = "Cmn_FooterKey_R";
      }
      else {
        if (param_2 != 0x2000) goto switchD_032ac81c_caseD_3;
        pcVar2 = "Cmn_FooterKey_SL";
        pcVar1 = "Cmn_FooterKey_L";
      }
      if (*(char *)(*(long *)PTR_DAT_04bc8ed0 + 0x111) != '\0') {
        pcVar1 = pcVar2;
      }
      goto switchD_032ac81c_caseD_1;
    }
switchD_032ac81c_caseD_3:
    pcVar1 = "";
  }
switchD_032ac81c_caseD_1:
  *param_1 = &DAT_04b177a8;
  param_1[1] = pcVar1;
  return;
}

