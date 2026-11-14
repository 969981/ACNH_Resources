
void FUN_01c7c428(undefined8 *param_1)

{
  undefined1 uStack_1;
  
  *param_1 = &PTR_FUN_04a43430;
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (*(char *)(param_1 + 0xdf) != '\0') {
      if (*(char *)(param_1 + 0xdc) != '\0') {
        (**(code **)param_1[0xcd])(param_1 + 0xcd);
        *(undefined1 *)(param_1 + 0xdc) = 0;
      }
      *(undefined1 *)(param_1 + 0xdf) = 0;
    }
    if (*(char *)(param_1 + 0xa6) != '\0') {
      if (*(char *)(param_1 + 0xa3) != '\0') {
        (**(code **)param_1[0x94])(param_1 + 0x94);
        *(undefined1 *)(param_1 + 0xa3) = 0;
      }
      *(undefined1 *)(param_1 + 0xa6) = 0;
    }
    if (*(char *)(param_1 + 0x6d) != '\0') {
      if (*(char *)(param_1 + 0x6a) != '\0') {
        (**(code **)param_1[0x5b])(param_1 + 0x5b);
        *(undefined1 *)(param_1 + 0x6a) = 0;
      }
      *(undefined1 *)(param_1 + 0x6d) = 0;
    }
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)((long)param_1 + 0x1a4) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  }
  if (*(char *)((long)param_1 + 0x19c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x19c) = 0;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (*(char *)((long)param_1 + 0x5c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 10) != '\0') {
    if (*(uint *)(param_1 + 9) != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_1 + 9)])(&uStack_1,param_1 + 1);
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
  }
  return;
}

