
void FUN_00754268(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  char *__dest;
  
  FUN_00739870(param_1,0,0,1);
  *(undefined1 *)(param_1 + 0x23f) = 0;
  puVar2 = PTR_DAT_04bbdbb0;
  param_1[0x24a] = 0xffffffff00000000;
  *param_1 = &PTR_LAB_049056e8;
  param_1[0x241] = 0;
  *(undefined4 *)(param_1 + 0x242) = 0;
  *(undefined8 *)((long)param_1 + 0x11fc) = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x23e] = puVar2 + 0x10;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x249] = param_1 + 0x248;
  param_1[0x248] = param_1 + 0x248;
  FUN_038e18e4(param_1 + 0x24b);
  puVar2 = PTR_DAT_04bd11b8;
  *(undefined4 *)((long)param_1 + 0x1254) = 8;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  *(undefined1 *)((long)param_1 + 0x12d4) = 0;
  param_1[0x261] = 0;
  param_1[0x253] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x25a) = 0x10001;
  puVar2 = PTR_DAT_04bd1810;
  param_1[0x262] = PTR_DAT_04bd1808 + 0x10;
  param_1[0x26b] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bd1820;
  param_1[0x26f] = 0;
  param_1[0x267] = puVar2 + 0x10;
  param_1[0x270] = 0xffffffff;
  puVar2 = PTR_LAB_04bbdba8;
  param_1[0x264] = param_1 + 0x23e;
  param_1[0x266] = 0;
  param_1[0x265] = puVar2;
  puVar2 = PTR_DAT_04bbdbb8;
  __dest = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x271) = param_2;
  param_1[0x263] = puVar2 + 0x10;
  if (__dest != "MultiArrayLook") {
    iVar1 = 0xe;
    if (*(int *)(param_1 + 0xd) < 0xf) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"MultiArrayLook",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

