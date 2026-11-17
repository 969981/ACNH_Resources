
uint FUN_02a0c5d4(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined *local_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_3 + 8);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  uVar2 = FUN_02a0c120(*(undefined8 *)(param_1 + 8),param_2,&local_50);
  if ((uVar2 & 1) != 0) {
    iVar3 = FUN_02a0c760(*(undefined1 *)(param_2 + 0x10));
    iVar1 = 0;
    if (iVar3 != -1) {
      iVar1 = iVar3;
    }
    iVar3 = FUN_02a0c760(1);
    if ((((iVar1 == iVar3) && (*(char *)(param_1 + 0x18) != '\0')) &&
        (pcVar4 = *(char **)(param_3 + 8), *pcVar4 == 'B')) &&
       (((((pcVar4[1] == 'G' && (pcVar4[2] == 'M')) &&
          ((pcVar4[3] == '_' && ((pcVar4[4] == 'D' && (pcVar4[5] == 'J')))))) && (pcVar4[6] == '_'))
        || (((((((pcVar4[1] == 'G' && (pcVar4[2] == 'M')) && (pcVar4[3] == '_')) &&
               ((pcVar4[4] == 'O' && (pcVar4[5] == 'n')))) &&
              ((pcVar4[6] == 'e' && ((pcVar4[7] == 'R' && (pcVar4[8] == 'o')))))) &&
             (pcVar4[9] == 'o')) && ((pcVar4[10] == 'm' && (pcVar4[0xb] == '_')))))))) {
      *(long *)(param_2 + 0x18) = param_1 + 0x10;
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 8;
    }
  }
  return uVar2 & 1;
}

