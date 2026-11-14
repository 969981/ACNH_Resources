
void FUN_01d6915c(undefined1 *param_1,long param_2,short param_3)

{
  undefined1 uVar1;
  
  if (*(short *)(param_2 + 0x108) == param_3 && *(char *)(param_2 + 0x112) != '\0') {
    *param_1 = 0;
    return;
  }
  if ((*(short *)(param_2 + 0x114) == param_3) && (*(char *)(param_2 + 0x11e) != '\0')) {
    *param_1 = 1;
    return;
  }
  if ((*(short *)(param_2 + 0x120) == param_3) && (*(char *)(param_2 + 0x12a) != '\0')) {
    *param_1 = 2;
    return;
  }
  if ((*(short *)(param_2 + 300) == param_3) && (*(char *)(param_2 + 0x136) != '\0')) {
    *param_1 = 3;
    return;
  }
  if ((*(short *)(param_2 + 0x138) == param_3) && (*(char *)(param_2 + 0x142) != '\0')) {
    *param_1 = 4;
    return;
  }
  if ((*(short *)(param_2 + 0x144) == param_3) && (*(char *)(param_2 + 0x14e) != '\0')) {
    *param_1 = 5;
    return;
  }
  if ((*(short *)(param_2 + 0x150) == param_3) && (*(char *)(param_2 + 0x15a) != '\0')) {
    *param_1 = 6;
    return;
  }
  if ((*(short *)(param_2 + 0x15c) == param_3) && (*(char *)(param_2 + 0x166) != '\0')) {
    *param_1 = 7;
    return;
  }
  if ((*(short *)(param_2 + 0x168) == param_3) && (*(char *)(param_2 + 0x172) != '\0')) {
    *param_1 = 8;
    return;
  }
  if ((*(short *)(param_2 + 0x174) == param_3) && (*(char *)(param_2 + 0x17e) != '\0')) {
    *param_1 = 9;
    return;
  }
  if ((*(short *)(param_2 + 0x180) == param_3) && (*(char *)(param_2 + 0x18a) != '\0')) {
    *param_1 = 10;
    return;
  }
  uVar1 = *PTR_DAT_04bb5018;
  if (*(char *)(param_2 + 0x196) != '\0' && *(short *)(param_2 + 0x18c) == param_3) {
    uVar1 = 0xb;
  }
  *param_1 = uVar1;
  return;
}

