
uint FUN_00361d50(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  
  uVar3 = FUN_00363df8(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    lVar5 = 0;
    cVar2 = *param_3;
    lVar1 = param_1;
    pcVar4 = param_3;
    while (cVar2 != '\0') {
      *(char *)(lVar1 + 0x40) = cVar2;
      if (((int)lVar5 == 0x3e) || (pcVar4[1] == '\0')) {
        puVar6 = (undefined1 *)(lVar1 + 0x41);
        pcVar4 = pcVar4 + 1;
        goto LAB_00361ddc;
      }
      *(char *)(lVar1 + 0x41) = pcVar4[1];
      lVar5 = lVar5 + 2;
      lVar1 = param_1 + lVar5;
      pcVar4 = param_3 + lVar5;
      cVar2 = param_3[lVar5];
    }
    puVar6 = (undefined1 *)(lVar1 + 0x40);
LAB_00361ddc:
    *puVar6 = 0;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_4;
    *(undefined8 *)(param_1 + 0xd8) = param_5;
    *(undefined8 *)(param_1 + 0xe0) = param_6;
  }
  return uVar3 & 1;
}

