
void FUN_038387b8(byte *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined2 local_88 [4];
  byte *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  char *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  byte *pbStack_38;
  
  if ((*param_1 >> 1 & 1) == 0) {
    *param_1 = *param_1 | 2;
    uStack_78 = 0;
    local_88[0] = *param_2;
    local_70 = *(undefined8 *)(param_2 + 4);
    local_40 = *(undefined8 *)(param_2 + 0x24);
    local_58 = &PTR_LAB_048f9770;
    local_48 = &PTR_LAB_048f9770;
    ppuStack_68 = &PTR_LAB_048f9770;
    bVar3 = **(char **)(param_2 + 0xc) != '\0';
    puVar1 = param_2 + 0x18;
    if (bVar3) {
      puVar1 = param_2 + 8;
    }
    pbStack_38 = param_1 + 0x10;
    local_50 = *(undefined8 *)(puVar1 + 4);
    local_60 = *(char **)(param_2 + 0x14);
    if (bVar3) {
      local_60 = *(char **)(param_2 + 0xc);
    }
    local_80 = param_1;
    FUN_03839ca0(DAT_05ae09a0,local_88,0);
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x18) == 1)) {
    FUN_03f459a0(param_1 + 0x10);
  }
  bVar2 = *param_1;
  if ((((bVar2 & 1) == 0) && ((bVar2 & 3) == 2)) && (*(int *)(param_1 + 0x18) == 2)) {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0xc) == 4) {
        (**(code **)(**(long **)(lVar4 + 0x18) + 0x198))();
        *(undefined4 *)(lVar4 + 0xc) = 5;
      }
      if (*(int *)(lVar4 + 0x1498) == 4) {
        lVar5 = *(long *)(lVar4 + 0x14a8);
        if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd8) >> 1 & 1) != 0)) {
          FUN_03bf2370(lVar5 + 0x80);
          *(byte *)(lVar5 + 0xd8) = *(byte *)(lVar5 + 0xd8) & 0xfd;
        }
        *(undefined4 *)(lVar4 + 0x1498) = 5;
      }
      if (*(int *)(lVar4 + 0x1540) == 4) {
        lVar5 = *(long *)(lVar4 + 0x1550);
        if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd8) >> 1 & 1) != 0)) {
          FUN_03bf2370(lVar5 + 0x80);
          *(byte *)(lVar5 + 0xd8) = *(byte *)(lVar5 + 0xd8) & 0xfd;
        }
        *(undefined4 *)(lVar4 + 0x1540) = 5;
      }
      bVar2 = *param_1;
    }
    *param_1 = bVar2 | 1;
  }
  return;
}

