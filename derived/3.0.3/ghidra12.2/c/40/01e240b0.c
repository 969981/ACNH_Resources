
void FUN_01e240b0(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  undefined *local_40;
  char *local_38;
  
  puVar3 = PTR_DAT_04bb3518;
  if (*(char *)(*param_1 + 8) != '\0') {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "Nfp";
    local_40 = puVar1;
    FUN_03c54ca0(*(undefined8 *)(*(long *)PTR_DAT_04bb3518 + 0x108),&local_40,*param_1,0);
    local_38 = "Nfp";
    lVar4 = *(long *)(*(long *)puVar3 + 0x108);
    lVar10 = *(long *)(lVar4 + 0x38);
    if (lVar10 != lVar4 + 0x30) {
      plVar7 = (long *)(lVar10 + -0x160);
      local_40 = puVar1;
      do {
        plVar8 = plVar7 + 4;
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar9 = (char *)plVar7[5];
        (**(code **)(local_40 + 0x18))(&local_40);
        if (pcVar9 == local_38) {
LAB_01e241fc:
          (**(code **)(*plVar7 + 0x18))(plVar7,1,0);
          return;
        }
        cVar2 = *(char *)plVar7[5];
        if (cVar2 == *local_38) {
          if (cVar2 == '\0') goto LAB_01e241fc;
          lVar6 = 0x7fffe;
          pcVar9 = local_38;
          pcVar5 = (char *)plVar7[5];
          while( true ) {
            if (pcVar5[1] != pcVar9[1]) break;
            if (pcVar5[1] == '\0') goto LAB_01e241fc;
            if (pcVar5[2] != pcVar9[2]) break;
            if (pcVar5[2] == '\0') goto LAB_01e241fc;
            if ((lVar6 == 0) || (cVar2 = pcVar5[3], cVar2 != pcVar9[3])) break;
            lVar6 = lVar6 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar5 = pcVar5 + 3;
            if (cVar2 == '\0') goto LAB_01e241fc;
          }
        }
        lVar10 = *(long *)(lVar10 + 8);
        plVar7 = (long *)(lVar10 + -0x160);
      } while (plVar7 != (long *)(lVar4 + -0x130));
    }
  }
  return;
}

