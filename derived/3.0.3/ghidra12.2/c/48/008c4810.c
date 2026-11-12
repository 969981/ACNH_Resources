
void FUN_008c4810(long param_1,undefined4 param_2,long *param_3,long *param_4)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar5 = 0;
  do {
    pcVar7 = "";
    if (uVar5 < 99) {
      pcVar7 = (&PTR_s_cNormal_04922de8)[uVar5];
    }
    (**(code **)(*param_3 + 0x18))(param_3);
    pcVar3 = (char *)param_3[1];
    if (pcVar7 == pcVar3) goto LAB_008c4924;
    if (*pcVar7 == *pcVar3) {
      if (*pcVar7 == '\0') goto LAB_008c4924;
      lVar4 = 0x7fffe;
      while( true ) {
        if (pcVar7[1] != pcVar3[1]) break;
        if (pcVar7[1] == '\0') goto LAB_008c4924;
        if (pcVar7[2] != pcVar3[2]) break;
        if (pcVar7[2] == '\0') goto LAB_008c4924;
        if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
        lVar4 = lVar4 + -3;
        pcVar3 = pcVar3 + 3;
        pcVar7 = pcVar7 + 3;
        if (cVar1 == '\0') goto LAB_008c4924;
      }
    }
    uVar6 = 99;
    if ((int)uVar5 < 99) {
      uVar6 = uVar5 + 1;
    }
    uVar5 = uVar6;
  } while (uVar6 != 99);
  uVar5 = 0x62;
LAB_008c4924:
  *(uint *)(param_1 + 0x307e8) = uVar5;
  puVar2 = PTR_s_cDefault_04bb5888;
  uVar5 = 0;
  do {
    pcVar7 = "";
    if (uVar5 < 0x2b) {
      pcVar7 = *(char **)(puVar2 + (ulong)uVar5 * 8 + 0x278);
    }
    (**(code **)(*param_4 + 0x18))(param_4);
    pcVar3 = (char *)param_4[1];
    if (pcVar7 == pcVar3) goto LAB_008c4a04;
    if (*pcVar7 == *pcVar3) {
      if (*pcVar7 == '\0') goto LAB_008c4a04;
      lVar4 = 0x7fffe;
      while( true ) {
        if (pcVar7[1] != pcVar3[1]) break;
        if (pcVar7[1] == '\0') goto LAB_008c4a04;
        if (pcVar7[2] != pcVar3[2]) break;
        if (pcVar7[2] == '\0') goto LAB_008c4a04;
        if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
        lVar4 = lVar4 + -3;
        pcVar7 = pcVar7 + 3;
        pcVar3 = pcVar3 + 3;
        if (cVar1 == '\0') goto LAB_008c4a04;
      }
    }
    uVar6 = 0x2b;
    if ((int)uVar5 < 0x2b) {
      uVar6 = uVar5 + 1;
    }
    uVar5 = uVar6;
  } while (uVar6 != 0x2b);
  uVar5 = 0x2a;
LAB_008c4a04:
  *(uint *)(param_1 + 0x307f0) = uVar5;
  FUN_03ebb160(param_1 + 0x408,param_2);
  if (*(char *)param_4[1] == '\0') {
    *(undefined4 *)(param_1 + 0x30950) = *(undefined4 *)(param_1 + 0x30954);
    *(undefined4 *)(param_1 + 0x3089c) = *(undefined4 *)(param_1 + 0x3091c);
    *(undefined4 *)(param_1 + 0x308a0) = *(undefined4 *)(param_1 + 0x30920);
    *(undefined8 *)(param_1 + 0x30890) = *(undefined8 *)(param_1 + 0x30910);
    *(undefined4 *)(param_1 + 0x308b4) = *(undefined4 *)(param_1 + 0x30934);
    *(undefined4 *)(param_1 + 0x308b8) = *(undefined4 *)(param_1 + 0x30938);
    *(undefined4 *)(param_1 + 0x30898) = *(undefined4 *)(param_1 + 0x30918);
    *(undefined4 *)(param_1 + 0x308bc) = *(undefined4 *)(param_1 + 0x3093c);
    *(undefined4 *)(param_1 + 0x308c0) = *(undefined4 *)(param_1 + 0x30940);
    *(undefined8 *)(param_1 + 0x308a4) = *(undefined8 *)(param_1 + 0x30924);
    *(undefined8 *)(param_1 + 0x308ac) = *(undefined8 *)(param_1 + 0x3092c);
    *(undefined4 *)(param_1 + 0x308cc) = *(undefined4 *)(param_1 + 0x3094c);
    *(undefined8 *)(param_1 + 0x308c4) = *(undefined8 *)(param_1 + 0x30944);
  }
  return;
}

