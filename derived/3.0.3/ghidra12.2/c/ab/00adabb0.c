
undefined8 FUN_00adabb0(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 local_48;
  
  puVar2 = PTR_s_EmotEnd_04bb4608;
  lVar8 = *(long *)(param_2 + 0x3b0);
  lVar5 = *(long *)(param_2 + 0x3b8);
  if (((lVar8 == 0 || lVar5 == 0) || (*(char *)(lVar5 + 0x7d0a) != '\0')) ||
     (*(char *)(lVar5 + 0x7d09) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if ((int)uVar9 < 0x6d) {
        pcVar11 = "";
        if (uVar9 < 0x6d) {
          puVar4 = puVar2 + 0x528;
          uVar10 = uVar9;
LAB_00adac84:
          pcVar11 = *(char **)(puVar4 + (ulong)uVar10 * 8);
        }
      }
      else {
        pcVar11 = "";
        if (uVar9 < 0x79) {
          puVar4 = (undefined *)FUN_007c3ad0();
          uVar10 = uVar9 - 0x6d;
          goto LAB_00adac84;
        }
      }
      (**(code **)(*(long *)(param_1 + 0xe0) + 0x18))(param_1 + 0xe0);
      pcVar6 = *(char **)(param_1 + 0xe8);
      if (pcVar11 == pcVar6) goto LAB_00adad18;
      if (*pcVar11 == *pcVar6) {
        if (*pcVar11 == '\0') goto LAB_00adad18;
        lVar7 = 0x7fffe;
        while( true ) {
          if (pcVar11[1] != pcVar6[1]) break;
          if (pcVar11[1] == '\0') goto LAB_00adad18;
          if (pcVar11[2] != pcVar6[2]) break;
          if (pcVar11[2] == '\0') goto LAB_00adad18;
          if ((lVar7 == 0) || (cVar1 = pcVar11[3], cVar1 != pcVar6[3])) break;
          lVar7 = lVar7 + -3;
          pcVar11 = pcVar11 + 3;
          pcVar6 = pcVar6 + 3;
          if (cVar1 == '\0') goto LAB_00adad18;
        }
      }
      uVar10 = 0x79;
      if ((int)uVar9 < 0x79) {
        uVar10 = uVar9 + 1;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0x79);
    uVar9 = 0;
LAB_00adad18:
    local_48 = 0;
    FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,(long)&local_48 + 4,&local_48,
                 PTR_DAT_04bc1600,6);
    *(uint *)(lVar8 + 0x3ac) = uVar9;
    uVar3 = 1;
    *(undefined1 *)(lVar5 + 0x7d0e) = *(undefined1 *)(param_1 + 400);
  }
  return uVar3;
}

