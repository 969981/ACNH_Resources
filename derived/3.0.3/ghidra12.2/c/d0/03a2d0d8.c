
void FUN_03a2d0d8(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_448;
  char *pcStack_440;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_03a2b620(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *param_1 = &PTR_LAB_04b6d650;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  local_448 = PTR_DAT_04bb2020 + 0x10;
  pcStack_440 = "aglblm";
  FUN_03955370(param_1 + 0xbe,&local_448,1);
  uVar1 = crc32b(0xffffffff,100,0x4c11db7);
  uVar1 = crc32b(uVar1,0x65,0x4c11db7);
  uVar1 = crc32b(uVar1,0x66,0x4c11db7);
  uVar1 = crc32b(uVar1,0x61,0x4c11db7);
  uVar1 = crc32b(uVar1,0x75,0x4c11db7);
  uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
  *param_1 = &PTR_LAB_04b6d590;
  puVar3 = PTR_DAT_04bd1088;
  param_1[0xbe] = &PTR_LAB_04b6d5d8;
  param_1[0xfa] = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  param_1[0xf8] = puVar3 + 0x10;
  uVar2 = crc32b(uVar1,0x74,0x4c11db7);
  *(uint *)(param_1 + 0xf9) = ~uVar2;
  *(undefined2 *)(param_1 + 0xfc) = 0x40;
  FUN_03941294(param_1 + 0xfd);
  lVar4 = *(long *)PTR_DAT_04bd1158;
  if ((lVar4 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar4 + 8) + 0x18))((long *)(lVar4 + 8));
    FUN_006e9454(&local_448,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar4 + 0x10));
  }
  *(ushort *)(param_1 + 0xfc) = *(ushort *)(param_1 + 0xfc) | 0x80;
  return;
}

