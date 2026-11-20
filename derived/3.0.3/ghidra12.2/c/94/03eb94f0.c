
int FUN_03eb94f0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *local_168;
  char *local_160;
  undefined4 local_158;
  char local_154 [255];
  undefined1 local_55;
  
  local_55 = 0;
  local_158 = 0x100;
  local_160 = local_154;
  local_154[0] = '\0';
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  iVar4 = FUN_03eb90c0();
  if (0 < iVar4) {
    do {
      iVar2 = iVar4 + -1;
      FUN_03eb92e0(param_1,&local_168,iVar2);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar6 = (char *)param_2[1];
      (**(code **)(local_168 + 0x18))(&local_168);
      if (pcVar6 == local_160) {
        return iVar2;
      }
      pcVar6 = (char *)param_2[1];
      if (*pcVar6 == *local_160) {
        if (*pcVar6 == '\0') {
          return iVar2;
        }
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          if (pcVar6[uVar5 + 1] != local_160[uVar5 + 1]) goto LAB_03eb9564;
          if (pcVar6[uVar5 + 1] == '\0') goto LAB_03eb955c;
          if (pcVar6[uVar5 + 2] != local_160[uVar5 + 2]) goto LAB_03eb9564;
          if (pcVar6[uVar5 + 2] == '\0') {
            uVar5 = uVar5 + 1;
            goto LAB_03eb955c;
          }
          if ((uVar5 == 0x7fffe) || (pcVar6[uVar5 + 3] != local_160[uVar5 + 3])) goto LAB_03eb9564;
          uVar3 = uVar5 + 3;
        } while (pcVar6[uVar5 + 3] != '\0');
        uVar5 = uVar5 + 2;
LAB_03eb955c:
        if (uVar5 < 0x80000) {
          return iVar2;
        }
      }
LAB_03eb9564:
      bVar1 = 1 < iVar4;
      iVar4 = iVar2;
    } while (bVar1);
  }
  return -1;
}

