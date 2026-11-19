
bool FUN_0383df58(long param_1,char *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_b8;
  undefined ***pppuStack_b0;
  long local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined *local_68;
  undefined **local_60;
  undefined1 *local_58;
  undefined8 local_50;
  byte *local_48;
  undefined8 uStack_40;
  long local_38;
  undefined **ppuStack_30;
  char *local_28;
  
  if ((*(byte *)(param_1 + 8) >> 5 & 1) == 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
    return true;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    pbVar4 = (byte *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 1;
    puVar2 = PTR_DAT_04bb28b0;
    pcVar6 = *(char **)(param_2 + 0x28);
    if (*pcVar6 != '\0') {
      uVar1 = (ulong)local_98 >> 0x10;
      local_98 = CONCAT62((uint6)uVar1 & 0xffffffffff00,1);
      local_a8 = param_1 + 0x48;
      local_50 = CONCAT71(local_50._1_7_,1);
      *(byte *)(param_1 + 0x38) = *pbVar4 & 0xfe;
      lVar5 = *(long *)puVar2;
      local_60 = &PTR_LAB_048f9770;
      local_58 = &DAT_0419b684;
      uStack_40 = 0;
      pppuStack_b0 = &local_a0;
      ppuStack_30 = &PTR_LAB_048f9770;
      local_80 = (undefined **)(lVar5 + 0x558);
      local_78 = 0;
      local_68 = (undefined *)(lVar5 + 0x578);
      local_70 = (undefined **)0x0;
      local_b8 = 0;
      local_a0 = &PTR_FUN_04b5d1d8;
      local_90 = *(undefined8 *)(lVar5 + 0x198);
      local_88 = 0;
      local_48 = pbVar4;
      local_38 = local_a8;
      local_28 = pcVar6;
      FUN_03f45184(lVar5 + 0x1a8,&local_b8);
      iVar3 = *(int *)(param_1 + 0x10);
      goto joined_r0x0383e088;
    }
    *pbVar4 = *pbVar4 | 1;
    pbVar4 = *(byte **)(param_1 + 0x40);
    if (pbVar4 != (byte *)0x0) goto LAB_0383dfa8;
LAB_0383e168:
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) goto LAB_0383dfc0;
LAB_0383e170:
    iVar3 = 1;
    goto LAB_0383e140;
  }
joined_r0x0383e088:
  if (iVar3 == 2) {
    lVar5 = *(long *)(param_2 + 8);
joined_r0x0383e090:
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 3;
      local_a0._2_6_ = (undefined6)((ulong)local_a0 >> 0x10);
      local_90 = *(undefined8 *)(param_2 + 0x18);
      local_98 = 0;
      local_78 = *(undefined8 *)(param_2 + 0x28);
      local_88 = 0;
      local_80 = &PTR_LAB_048f9770;
      local_a0 = (undefined **)((ulong)CONCAT61(local_a0._2_6_,param_2[1]) << 8);
      local_68 = PTR_DAT_04bb2120;
      local_60 = &PTR_LAB_048f9770;
      local_70 = &PTR_LAB_048f9770;
      local_58 = PTR_DAT_04bb2120;
      local_50 = 0;
      FUN_0383a520(DAT_05ae0b40,&local_a0,1);
      iVar3 = *(int *)(param_1 + 0x10);
      goto LAB_0383e0f0;
    }
    if (*param_2 == '\0') {
      iVar3 = 2;
      goto LAB_0383e140;
    }
LAB_0383e100:
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  }
  else {
    if (iVar3 == 1) {
      pbVar4 = *(byte **)(param_1 + 0x40);
      if (pbVar4 == (byte *)0x0) goto LAB_0383e168;
LAB_0383dfa8:
      if (((*pbVar4 >> 1 & 1) == 0) && ((*pbVar4 & 8) == 0 && (*(byte *)(param_1 + 0x38) & 1) == 0))
      goto LAB_0383e170;
LAB_0383dfc0:
      *(undefined4 *)(param_1 + 0x10) = 2;
      lVar5 = *(long *)(param_2 + 8);
      goto joined_r0x0383e090;
    }
LAB_0383e0f0:
    if (iVar3 != 4) {
      if (iVar3 != 3) goto LAB_0383e140;
      goto LAB_0383e100;
    }
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd8) >> 1 & 1) != 0)) {
    FUN_03bf2370(lVar5 + 0x80);
    *(byte *)(lVar5 + 0xd8) = *(byte *)(lVar5 + 0xd8) & 0xfd;
  }
  iVar3 = 5;
  *(undefined4 *)(param_1 + 0x10) = 5;
LAB_0383e140:
  return iVar3 == 5;
}

