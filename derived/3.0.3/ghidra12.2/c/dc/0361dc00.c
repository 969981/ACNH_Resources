
void FUN_0361dc00(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x40d0);
  if (*(byte *)(param_1 + 0xd2) < 3) {
    *(undefined2 *)(param_1 + 0xd0) = 0;
    do {
      FUN_0361bf5c(param_1);
      *(undefined1 *)(param_1 + 0x40d1) = *puVar1;
      if (*(int *)(param_1 + 0xf68) == 7) {
        *(undefined1 *)(param_1 + 0xf79) = *(undefined1 *)(param_1 + 0xf78);
      }
      if (*(char *)(param_1 + 0x4110) != '\0') {
        iVar2 = *(int *)(param_1 + 0x4114);
        if (iVar2 == 1) {
          iVar2 = 0;
          *(undefined1 *)(param_1 + 0x4112) = 1;
          *(undefined4 *)(param_1 + 0x4114) = 0;
          *(undefined1 *)(param_1 + 0x4111) = *(undefined1 *)(param_1 + 0x4113);
        }
        lVar3 = *(long *)(param_1 + 0x4108);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x14) == 1)) {
          *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(lVar3 + 0x13);
          *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 1;
          *(undefined4 *)(*(long *)(param_1 + 0x4108) + 0x14) = 0;
          iVar2 = *(int *)(param_1 + 0x4114);
        }
        if (iVar2 == 2) {
          if (*(long *)(param_1 + 0x4108) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 0;
          }
          *(undefined4 *)(param_1 + 0x4114) = 0;
        }
      }
    } while (*(char *)(param_1 + 0xd0) == '\0');
  }
  else if (*(char *)(param_1 + 0x200) < '\0') {
    *(undefined2 *)(param_1 + 0xd0) = 0;
    do {
      FUN_0361d4d4(param_1);
      *(undefined1 *)(param_1 + 0x40d1) = *puVar1;
      if (*(int *)(param_1 + 0xf68) == 7) {
        *(undefined1 *)(param_1 + 0xf79) = *(undefined1 *)(param_1 + 0xf78);
      }
      if (*(char *)(param_1 + 0x4110) != '\0') {
        iVar2 = *(int *)(param_1 + 0x4114);
        if (iVar2 == 1) {
          iVar2 = 0;
          *(undefined1 *)(param_1 + 0x4112) = 1;
          *(undefined4 *)(param_1 + 0x4114) = 0;
          *(undefined1 *)(param_1 + 0x4111) = *(undefined1 *)(param_1 + 0x4113);
        }
        lVar3 = *(long *)(param_1 + 0x4108);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x14) == 1)) {
          *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(lVar3 + 0x13);
          *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 1;
          *(undefined4 *)(*(long *)(param_1 + 0x4108) + 0x14) = 0;
          iVar2 = *(int *)(param_1 + 0x4114);
        }
        if (iVar2 == 2) {
          if (*(long *)(param_1 + 0x4108) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 0;
          }
          *(undefined4 *)(param_1 + 0x4114) = 0;
        }
      }
    } while (*(char *)(param_1 + 0xd0) == '\0');
  }
  else {
    *(undefined2 *)(param_1 + 0xd0) = 0;
    if ((*(byte *)(param_1 + 0xec3) >> 2 & 1) == 0) {
      do {
        FUN_0361cd78(param_1);
        *(undefined1 *)(param_1 + 0x40d1) = *puVar1;
        if (*(int *)(param_1 + 0xf68) == 7) {
          *(undefined1 *)(param_1 + 0xf79) = *(undefined1 *)(param_1 + 0xf78);
        }
        if (*(char *)(param_1 + 0x4110) != '\0') {
          iVar2 = *(int *)(param_1 + 0x4114);
          if (iVar2 == 1) {
            iVar2 = 0;
            *(undefined1 *)(param_1 + 0x4112) = 1;
            *(undefined4 *)(param_1 + 0x4114) = 0;
            *(undefined1 *)(param_1 + 0x4111) = *(undefined1 *)(param_1 + 0x4113);
          }
          lVar3 = *(long *)(param_1 + 0x4108);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0x14) == 1)) {
            *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(lVar3 + 0x13);
            *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 1;
            *(undefined4 *)(*(long *)(param_1 + 0x4108) + 0x14) = 0;
            iVar2 = *(int *)(param_1 + 0x4114);
          }
          if (iVar2 == 2) {
            if (*(long *)(param_1 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)(param_1 + 0x4114) = 0;
          }
        }
      } while (*(char *)(param_1 + 0xd0) == '\0');
    }
    else {
      do {
        FUN_0361c670(param_1);
        *(undefined1 *)(param_1 + 0x40d1) = *puVar1;
        if (*(int *)(param_1 + 0xf68) == 7) {
          *(undefined1 *)(param_1 + 0xf79) = *(undefined1 *)(param_1 + 0xf78);
        }
        if (*(char *)(param_1 + 0x4110) != '\0') {
          iVar2 = *(int *)(param_1 + 0x4114);
          if (iVar2 == 1) {
            iVar2 = 0;
            *(undefined1 *)(param_1 + 0x4112) = 1;
            *(undefined4 *)(param_1 + 0x4114) = 0;
            *(undefined1 *)(param_1 + 0x4111) = *(undefined1 *)(param_1 + 0x4113);
          }
          lVar3 = *(long *)(param_1 + 0x4108);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0x14) == 1)) {
            *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(lVar3 + 0x13);
            *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 1;
            *(undefined4 *)(*(long *)(param_1 + 0x4108) + 0x14) = 0;
            iVar2 = *(int *)(param_1 + 0x4114);
          }
          if (iVar2 == 2) {
            if (*(long *)(param_1 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(param_1 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)(param_1 + 0x4114) = 0;
          }
        }
      } while (*(char *)(param_1 + 0xd0) == '\0');
    }
  }
  return;
}

