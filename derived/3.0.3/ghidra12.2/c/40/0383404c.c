
bool FUN_0383404c(long param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined1 local_78;
  char local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined1 *local_50;
  undefined **ppuStack_48;
  undefined8 local_40;
  undefined **ppuStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 >> 5 & 1) == 0) {
    *(byte *)(param_1 + 8) = bVar1 | 2;
    return true;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 2;
LAB_03834094:
    if (*(long *)(param_2 + 8) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 3;
      local_77 = param_2[1];
      uStack_68 = *(undefined8 *)(param_2 + 0x18);
      local_70 = 0;
      local_40 = *(undefined8 *)(param_2 + 0x28);
      local_60 = 0;
      ppuStack_58 = &PTR_LAB_048f9770;
      local_78 = 0;
      local_50 = &DAT_0419b684;
      ppuStack_48 = &PTR_LAB_048f9770;
      ppuStack_38 = &PTR_LAB_048f9770;
      local_30 = &DAT_0419b684;
      uStack_28 = 0;
      FUN_0383a710(DAT_05ae0670,&local_78,1);
      uVar2 = *(uint *)(param_1 + 0x10);
      goto LAB_038340f8;
    }
    if (*param_2 == '\0') {
      uVar2 = 2;
      goto LAB_03834154;
    }
LAB_03834118:
    *(undefined4 *)(param_1 + 0x10) = 4;
    *(byte *)(param_1 + 8) = bVar1 | 2;
  }
  else {
    if (uVar2 == 2) goto LAB_03834094;
LAB_038340f8:
    if (uVar2 != 4) {
      if (uVar2 != 3) goto LAB_03834154;
      bVar1 = *(byte *)(param_1 + 8);
      goto LAB_03834118;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd8) >> 1 & 1) != 0)) {
    FUN_03bf2370(lVar3 + 0x80);
    *(byte *)(lVar3 + 0xd8) = *(byte *)(lVar3 + 0xd8) & 0xfd;
  }
  uVar2 = 5;
  *(undefined4 *)(param_1 + 0x10) = 5;
LAB_03834154:
  return uVar2 == 5;
}

