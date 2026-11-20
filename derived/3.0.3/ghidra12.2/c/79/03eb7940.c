
void FUN_03eb7940(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  
  plVar7 = *(long **)PTR_DAT_04bb2640;
  iVar2 = (**(code **)(*plVar7 + 0x10))(plVar7);
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    do {
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,iVar2);
      pcVar8 = (char *)*puVar4;
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar5 = (char *)param_1[1];
      if (pcVar8 == pcVar5) goto LAB_03eb7a54;
      if (*pcVar8 == *pcVar5) {
        if (*pcVar8 == '\0') goto LAB_03eb7a54;
        lVar6 = 0x7fffe;
        while( true ) {
          if (pcVar8[1] != pcVar5[1]) break;
          if (pcVar8[1] == '\0') goto LAB_03eb7a54;
          if (pcVar8[2] != pcVar5[2]) break;
          if (pcVar8[2] == '\0') goto LAB_03eb7a54;
          if ((lVar6 == 0) || (cVar1 = pcVar8[3], cVar1 != pcVar5[3])) break;
          lVar6 = lVar6 + -3;
          pcVar5 = pcVar5 + 3;
          pcVar8 = pcVar8 + 3;
          if (cVar1 == '\0') goto LAB_03eb7a54;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    } while (iVar2 < iVar3);
    iVar2 = -1;
  }
LAB_03eb7a54:
  FUN_03c3faa0(*(undefined8 *)PTR_DAT_04bb2720,iVar2,param_2,1);
  return;
}

