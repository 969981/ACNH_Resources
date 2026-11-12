
void FUN_009b5440(undefined8 param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    puVar1 = (uint *)&DAT_04168030;
LAB_009b5590:
    nn::hid::SetSupportedNpadIdType(puVar1,2);
    return;
  }
  if (param_2 == 1) {
    if (DAT_054ee400 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(char *)(DAT_054ee400 + 0x13d4) != '\0' && *(char *)(DAT_054ee400 + 0x13d6) != '\0';
      if (*(char *)(DAT_054ee400 + 0x27c4) != '\0' && *(char *)(DAT_054ee400 + 0x27c6) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x3bb4) != '\0' && *(char *)(DAT_054ee400 + 0x3bb6) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x4fa4) != '\0' && *(char *)(DAT_054ee400 + 0x4fa6) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x6394) != '\0' && *(char *)(DAT_054ee400 + 0x6396) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x7784) != '\0' && *(char *)(DAT_054ee400 + 0x7786) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x8b74) != '\0' && *(char *)(DAT_054ee400 + 0x8b76) != '\0') {
        bVar2 = bVar2 + 1;
      }
      if (*(char *)(DAT_054ee400 + 0x9f64) != '\0' && *(char *)(DAT_054ee400 + 0x9f66) != '\0') {
        bVar2 = bVar2 + 1;
      }
    }
    if (3 < bVar2) {
      bVar2 = 4;
    }
    if (bVar2 < 2) {
      bVar2 = 1;
    }
    if (bVar2 == 4) {
      nn::hid::SetSupportedNpadIdType((uint *)&DAT_04168020,4);
      return;
    }
    if (bVar2 == 3) {
      nn::hid::SetSupportedNpadIdType((uint *)&DAT_04168014,3);
      return;
    }
    if (bVar2 == 2) {
      puVar1 = (uint *)&DAT_0416800c;
      goto LAB_009b5590;
    }
  }
  return;
}

