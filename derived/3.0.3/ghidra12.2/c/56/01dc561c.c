
void FUN_01dc561c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  *(undefined1 *)(param_1 + 0xc9) = 0;
  lVar1 = DAT_0537f088;
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b2d8;
    break;
  case 1:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b300;
    break;
  case 2:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b328;
    break;
  case 3:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b350;
    break;
  case 4:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b378;
    break;
  case 5:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b3a0;
    break;
  case 6:
    if (*(int *)(DAT_0537f088 + 8) != 0) {
      return;
    }
    *(undefined1 *)(DAT_0537f088 + 0x48) = 0;
    if (*(int *)(DAT_05358908 + 0x78) == 0) {
      return;
    }
    if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
      return;
    }
    if (**(char **)(DAT_05358908 + 0x2070) == '\0') {
      return;
    }
    ppuVar2 = &PTR_LAB_04a5b3c8;
    break;
  default:
    goto switchD_01dc5654_default;
  }
  FUN_03ebb160(lVar1,2);
  *(undefined ***)(lVar1 + 0x68) = ppuVar2;
  *(long *)(lVar1 + 0x70) = param_1;
switchD_01dc5654_default:
  return;
}

