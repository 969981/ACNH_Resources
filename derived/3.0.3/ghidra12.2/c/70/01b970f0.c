
void FUN_01b970f0(undefined4 *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  
  iVar4 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8);
  if (iVar4 == 0 || iVar4 == 10) {
    uVar5 = 1;
  }
  else if (iVar4 - 1U < 2) {
    uVar5 = 2;
  }
  else if (iVar4 - 3U < 9) {
    uVar5 = *(undefined4 *)(&DAT_04177ba8 + (long)(int)(iVar4 - 3U) * 4);
  }
  else {
    uVar5 = 4;
  }
  *param_1 = uVar5;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] != "STR_Select_Talk") {
    uVar7 = 0;
    bVar3 = true;
    do {
      cVar1 = ((char *)param_2[1])[uVar7];
      if (cVar1 != "STR_Select_Talk"[uVar7]) break;
      if (cVar1 == '\0') {
        if (bVar3) goto LAB_01b97254;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (pcVar8 != "CmnSubWin") {
      if (*pcVar8 != 'C') goto LAB_01b9725c;
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar2 = lVar6 + 1, pcVar8[lVar2] != "CmnSubWin"[lVar6 + 1]))
        goto LAB_01b9725c;
        lVar6 = lVar6 + 1;
      } while (pcVar8[lVar2] != '\0');
    }
  }
LAB_01b97254:
  *param_1 = 6;
LAB_01b9725c:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] != "NookMilage_Keyword_Modifier") {
    uVar7 = 0;
    bVar3 = true;
    do {
      cVar1 = ((char *)param_2[1])[uVar7];
      if (cVar1 != "NookMilage_Keyword_Modifier"[uVar7]) break;
      if (cVar1 == '\0') {
        if (bVar3) goto LAB_01b97344;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (pcVar8 != "NookMilage_Keyword_Noun") {
      if (*pcVar8 != 'N') {
        return;
      }
      lVar6 = 0;
      do {
        if (lVar6 == 0x80000) {
          return;
        }
        lVar2 = lVar6 + 1;
        if (pcVar8[lVar2] != "NookMilage_Keyword_Noun"[lVar6 + 1]) {
          return;
        }
        lVar6 = lVar6 + 1;
      } while (pcVar8[lVar2] != '\0');
    }
  }
LAB_01b97344:
  *param_1 = 7;
  return;
}

