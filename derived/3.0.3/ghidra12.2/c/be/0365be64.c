
void FUN_0365be64(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2068) == '\0') {
    if (*(int *)(param_1 + 0x2058) == 0) {
      *(undefined4 *)(param_1 + 0x2058) = *(undefined4 *)(param_1 + 0x205c);
      if (*(int *)(param_1 + 0x2060) == 0) {
        if (*(char *)(param_1 + 0x2069) == '\0') goto LAB_0365bec8;
        iVar1 = 0xf;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x2060) + -1;
      }
      *(int *)(param_1 + 0x2060) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x2058) = *(int *)(param_1 + 0x2058) + -1;
    }
  }
  else {
    *(char *)(param_1 + 0x2068) = '\0';
    *(undefined4 *)(param_1 + 0x2060) = 0xf;
    *(undefined4 *)(param_1 + 0x2058) = *(undefined4 *)(param_1 + 0x205c);
  }
LAB_0365bec8:
  if (*(char *)(param_1 + 0x20b4) == '\0') {
    if (*(int *)(param_1 + 0x20a4) == 0) {
      *(undefined4 *)(param_1 + 0x20a4) = *(undefined4 *)(param_1 + 0x20a8);
      if (*(int *)(param_1 + 0x20ac) == 0) {
        if (*(char *)(param_1 + 0x20b5) == '\0') goto LAB_0365bf24;
        iVar1 = 0xf;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20ac) + -1;
      }
      *(int *)(param_1 + 0x20ac) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x20a4) = *(int *)(param_1 + 0x20a4) + -1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20b4) = 0;
    *(undefined4 *)(param_1 + 0x20ac) = 0xf;
    *(undefined4 *)(param_1 + 0x20a4) = *(undefined4 *)(param_1 + 0x20a8);
  }
LAB_0365bf24:
  if (*(char *)(param_1 + 0x2130) != '\0') {
    *(undefined1 *)(param_1 + 0x2130) = 0;
    *(undefined4 *)(param_1 + 0x2128) = 0xf;
    *(undefined4 *)(param_1 + 0x2120) = *(undefined4 *)(param_1 + 0x2124);
    return;
  }
  if (*(int *)(param_1 + 0x2120) != 0) {
    *(int *)(param_1 + 0x2120) = *(int *)(param_1 + 0x2120) + -1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2120) = *(undefined4 *)(param_1 + 0x2124);
  if (*(int *)(param_1 + 0x2128) == 0) {
    if (*(char *)(param_1 + 0x2131) == '\0') {
      return;
    }
    iVar1 = 0xf;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2128) + -1;
  }
  *(int *)(param_1 + 0x2128) = iVar1;
  return;
}

