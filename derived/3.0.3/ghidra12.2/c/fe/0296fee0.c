
void FUN_0296fee0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined4 local_198;
  char local_194;
  undefined1 auStack_193 [6];
  char cStack_18d;
  char acStack_18c [7];
  undefined1 local_185;
  undefined1 local_115;
  undefined1 local_95;
  undefined4 local_8c;
  undefined **local_88;
  undefined4 *puStack_80;
  
  local_185 = 0;
  pcVar6 = *(char **)(param_1 + 0xa0);
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_198 = 0x80;
  local_194 = s_SeafoodMuseum00_0405ddf9[0];
  auStack_193 = s_SeafoodMuseum00_0405ddf9._1_6_;
  cStack_18d = s_SeafoodMuseum00_0405ddf9[7];
  acStack_18c = (char  [7])s_SeafoodMuseum00_0405ddf9._8_7_;
  local_115 = 0;
  local_1a8 = puVar1;
  pcStack_1a0 = &local_194;
  if (pcVar6 != &local_194) {
    lVar5 = 0;
    do {
      if (auStack_193[lVar5 + -1] == '\0') goto LAB_0296ff9c;
      if (auStack_193[lVar5] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0296ff9c;
      }
      if (auStack_193[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0296ff9c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0296ff9c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0xa8) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0xa8) + -1;
    }
    memcpy(pcVar6,&local_194,(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  local_8c = 0x6b;
  local_88 = &PTR_FUN_049ff448;
  puStack_80 = &local_8c;
  FUN_008a1ba0(param_1 + 0x130,&local_88);
  pcVar6 = *(char **)(param_1 + 0x940);
  local_198 = 0x80;
  local_185 = 0;
  local_115 = 0;
  local_194 = s_SeafoodMuseum01_040e5ba5[0];
  auStack_193 = s_SeafoodMuseum01_040e5ba5._1_6_;
  cStack_18d = s_SeafoodMuseum01_040e5ba5[7];
  acStack_18c[0] = s_SeafoodMuseum01_040e5ba5[8];
  acStack_18c[1] = s_SeafoodMuseum01_040e5ba5[9];
  acStack_18c[2] = s_SeafoodMuseum01_040e5ba5[10];
  acStack_18c[3] = s_SeafoodMuseum01_040e5ba5[0xb];
  acStack_18c[4] = s_SeafoodMuseum01_040e5ba5[0xc];
  acStack_18c[5] = s_SeafoodMuseum01_040e5ba5[0xd];
  acStack_18c[6] = s_SeafoodMuseum01_040e5ba5[0xe];
  local_1a8 = puVar1;
  pcStack_1a0 = &local_194;
  if (pcVar6 != &local_194) {
    lVar5 = 0;
    do {
      if (auStack_193[lVar5 + -1] == '\0') goto LAB_0297006c;
      if (auStack_193[lVar5] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0297006c;
      }
      if (auStack_193[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0297006c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0297006c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x948) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x948) + -1;
    }
    memcpy(pcVar6,&local_194,(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_8c = 0x6b;
  *(undefined4 *)(param_1 + 0x1140) = 1;
  local_88 = &PTR_FUN_049ff448;
  puStack_80 = &local_8c;
  FUN_008a1ba0(param_1 + 0x9d0,&local_88);
  local_185 = 0;
  pcVar6 = *(char **)(param_1 + 0x11e0);
  local_198 = 0x80;
  local_115 = 0;
  local_1a8 = PTR_DAT_04bb2d88 + 0x10;
  local_194 = s_SeafoodMuseum02_040b1c20[0];
  auStack_193 = s_SeafoodMuseum02_040b1c20._1_6_;
  cStack_18d = s_SeafoodMuseum02_040b1c20[7];
  acStack_18c[0] = s_SeafoodMuseum02_040b1c20[8];
  acStack_18c[1] = s_SeafoodMuseum02_040b1c20[9];
  acStack_18c[2] = s_SeafoodMuseum02_040b1c20[10];
  acStack_18c[3] = s_SeafoodMuseum02_040b1c20[0xb];
  acStack_18c[4] = s_SeafoodMuseum02_040b1c20[0xc];
  acStack_18c[5] = s_SeafoodMuseum02_040b1c20[0xd];
  acStack_18c[6] = s_SeafoodMuseum02_040b1c20[0xe];
  pcStack_1a0 = &local_194;
  if (pcVar6 != &local_194) {
    lVar5 = 0;
    do {
      if (auStack_193[lVar5 + -1] == '\0') goto LAB_0297013c;
      if (auStack_193[lVar5] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0297013c;
      }
      if (auStack_193[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0297013c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0297013c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x11e8) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x11e8) + -1;
    }
    memcpy(pcVar6,&local_194,(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_8c = 0x6b;
  *(undefined4 *)(param_1 + 0x19e0) = 2;
  puStack_80 = &local_8c;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(param_1 + 0x1270,&local_88);
  puVar3 = PTR_DAT_04bb21f8;
  local_95 = 0;
  plVar7 = (long *)(param_1 + 0x28);
  local_198 = 0x100;
  local_194 = '\0';
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  local_1a8 = puVar1;
  pcStack_1a0 = &local_194;
  uVar4 = (**(code **)(*plVar7 + 0xf0))(plVar7,&local_1a8,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(plVar7,&local_1a8,param_2);
  }
  local_95 = 0;
  local_198 = 0x100;
  local_194 = '\0';
  local_1a8 = puVar1;
  pcStack_1a0 = &local_194;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x8c8) + 0xf0))(param_1 + 0x8c8,&local_1a8,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x8c8,&local_1a8,param_2);
  }
  local_95 = 0;
  local_194 = '\0';
  local_198 = 0x100;
  local_1a8 = puVar3 + 0x10;
  pcStack_1a0 = &local_194;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x1168) + 0xf0))(param_1 + 0x1168,&local_1a8,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x1168,&local_1a8,param_2);
  }
  return;
}

