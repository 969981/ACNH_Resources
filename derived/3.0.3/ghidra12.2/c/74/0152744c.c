
void FUN_0152744c(undefined8 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char *__dest;
  
  FUN_00739870(param_1,param_3,param_4,param_5);
  puVar1 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x23e) = 0;
  param_1[0x240] = (undefined1 *)((long)param_1 + 0x120c);
  *(undefined1 *)((long)param_1 + 0x128b) = 0;
  *(undefined1 *)((long)param_1 + 0x120c) = 0;
  param_1[0x252] = 0;
  *(undefined4 *)(param_1 + 0x253) = 0;
  *(undefined4 *)(param_1 + 0x241) = 0x80;
  *param_1 = &PTR_LAB_049a7390;
  param_1[0x23f] = puVar1 + 0x10;
  *(undefined2 *)((long)param_1 + 0x129c) = *param_2;
  *(undefined1 *)((long)param_1 + 0x129e) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x129f) = *(undefined1 *)((long)param_2 + 3);
  uVar3 = *(undefined4 *)(param_2 + 2);
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 0;
  param_1[599] = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  param_1[0x259] = 0;
  *(undefined4 *)(param_1 + 0x25a) = 0;
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  FUN_016100c4(param_1 + 0x255,0);
  param_1[0x261] = 0;
  param_1[0x25e] = 0xffffffff00000000;
  param_1[0x262] = 0;
  param_1[0x25d] = param_1 + 0x25c;
  param_1[0x25c] = param_1 + 0x25c;
  param_1[0x260] = (long)param_1 + 0x130c;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  *(undefined4 *)(param_1 + 0x261) = 0x80;
  *(undefined1 *)((long)param_1 + 0x130c) = 0;
  param_1[0x25f] = puVar1 + 0x10;
  param_1[0x273] = (undefined1 *)((long)param_1 + 0x13a4);
  *(undefined4 *)(param_1 + 0x274) = 0x20;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)param_1 + 0x13a4) = 0;
  param_1[0x272] = puVar1;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  puVar1 = PTR_DAT_04bb3170;
  __dest = (char *)param_1[0xc];
  uVar4 = *(undefined2 *)PTR_DAT_04bb3170;
  param_1[0x279] = 0xffffffffffffffff;
  param_1[0x27f] = 0;
  *(undefined8 *)((long)param_1 + 0x1404) = 0xfffe0000fffe;
  *(undefined4 *)((long)param_1 + 0x140c) = 0xfffe;
  if (__dest != "FtrModelLook") {
    iVar2 = 0xc;
    if (*(int *)(param_1 + 0xd) < 0xd) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"FtrModelLook",(long)iVar2);
    __dest[iVar2] = '\0';
    uVar4 = *(undefined2 *)puVar1;
  }
  *(undefined2 *)(param_1 + 0x280) = uVar4;
  return;
}

