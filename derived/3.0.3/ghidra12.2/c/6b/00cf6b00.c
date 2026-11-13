
void FUN_00cf6b00(long param_1,uint *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  puVar2 = PTR_s_cCircle_04bb7b00;
  if (param_2 != (uint *)0x0) {
    uVar6 = 0;
    do {
      pcVar7 = "";
      if (uVar6 < 0x21) {
        pcVar7 = *(char **)(puVar2 + (ulong)uVar6 * 8 + 0x280);
      }
      (**(code **)(*(long *)(param_1 + 0x138) + 0x18))(param_1 + 0x138);
      pcVar3 = *(char **)(param_1 + 0x140);
      if (pcVar7 == pcVar3) {
LAB_00cf6bf0:
        *param_2 = uVar6;
        break;
      }
      if (*pcVar7 == *pcVar3) {
        if (*pcVar7 == '\0') goto LAB_00cf6bf0;
        lVar4 = 0x7fffe;
        while( true ) {
          if (pcVar7[1] != pcVar3[1]) break;
          if (pcVar7[1] == '\0') goto LAB_00cf6bf0;
          if (pcVar7[2] != pcVar3[2]) break;
          if (pcVar7[2] == '\0') goto LAB_00cf6bf0;
          if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
          lVar4 = lVar4 + -3;
          pcVar3 = pcVar3 + 3;
          pcVar7 = pcVar7 + 3;
          if (cVar1 == '\0') goto LAB_00cf6bf0;
        }
      }
      uVar5 = 0x21;
      if ((int)uVar6 < 0x21) {
        uVar5 = uVar6 + 1;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0x21);
    uVar6 = 0;
    do {
      pcVar7 = "";
      if (uVar6 < 0x21) {
        pcVar7 = *(char **)(puVar2 + (ulong)uVar6 * 8 + 0x280);
      }
      (**(code **)(*(long *)(param_1 + 0x108) + 0x18))(param_1 + 0x108);
      pcVar3 = *(char **)(param_1 + 0x110);
      if (pcVar7 == pcVar3) {
LAB_00cf6cbc:
        param_2[1] = uVar6;
        break;
      }
      if (*pcVar7 == *pcVar3) {
        if (*pcVar7 == '\0') goto LAB_00cf6cbc;
        lVar4 = 0x7fffe;
        while( true ) {
          if (pcVar7[1] != pcVar3[1]) break;
          if (pcVar7[1] == '\0') goto LAB_00cf6cbc;
          if (pcVar7[2] != pcVar3[2]) break;
          if (pcVar7[2] == '\0') goto LAB_00cf6cbc;
          if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
          lVar4 = lVar4 + -3;
          pcVar7 = pcVar7 + 3;
          pcVar3 = pcVar3 + 3;
          if (cVar1 == '\0') goto LAB_00cf6cbc;
        }
      }
      uVar5 = 0x21;
      if ((int)uVar6 < 0x21) {
        uVar5 = uVar6 + 1;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0x21);
    FUN_00cb8f50(param_2 + 2,param_1 + 0x168);
    param_2[3] = *(uint *)(param_1 + 0x1c0);
    param_2[4] = *(uint *)(param_1 + 0x198);
  }
  return;
}

