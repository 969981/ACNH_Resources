
void FUN_01c7a79c(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *__s;
  undefined8 *__s_00;
  
  __s = (undefined8 *)(param_1 + 0x1a8);
  if (*(char *)(param_1 + 0x700) == '\0') {
    memset(__s,0,0x558);
    *(undefined1 *)(param_1 + 0x700) = 1;
  }
  __s_00 = __s + (ulong)param_2 * 0x39;
  if (2 < param_2) {
    __s_00 = __s;
  }
  if (*(char *)(__s_00 + 0x38) != '\0') {
    if (*(char *)(__s_00 + 0x35) != '\0') {
      (**(code **)__s_00[0x26])(__s_00 + 0x26);
    }
    *(undefined1 *)(__s_00 + 0x38) = 0;
  }
  memset(__s_00,0,0x1c0);
  FUN_00186524(__s_00 + 0x25);
  *(undefined1 *)(__s_00 + 0x35) = 0;
  __s_00[0x33] = 0;
  __s_00[0x34] = 0;
  __s_00[0x26] = 0;
  __s_00[0x36] = 0;
  *(undefined1 *)(__s_00 + 0x37) = 0;
  *(undefined1 *)(__s_00 + 0x38) = 1;
  __s_00[0x31] = 0;
  __s_00[0x32] = 0;
  __s_00[0x2f] = 0;
  __s_00[0x30] = 0;
  __s_00[0x2d] = 0;
  __s_00[0x2e] = 0;
  __s_00[0x2b] = 0;
  __s_00[0x2c] = 0;
  __s_00[0x29] = 0;
  __s_00[0x2a] = 0;
  __s_00[0x27] = 0;
  __s_00[0x28] = 0;
  *__s_00 = *param_3;
  memcpy(__s_00 + 1,(void *)param_3[1],0x11c);
  FUN_001865b0(__s_00 + 0x25,param_3[2]);
  if (*(char *)(__s_00 + 0x35) == '\0') {
    FUN_01c6e580(__s_00 + 0x26,param_3[3]);
    *(undefined1 *)(__s_00 + 0x35) = 1;
    __s_00[0x26] = &PTR_FUN_04a42c70;
  }
  else {
    FUN_003fd8e4(__s_00 + 0x26);
  }
  __s_00[0x36] = param_3[4];
  return;
}

