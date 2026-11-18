
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_035aee20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x47) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_04bbc208 + 0x10;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = puVar1;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  param_1[0x17] = &PTR_LAB_04b3e7b8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = &PTR_LAB_04b3e7d8;
  param_1[0x1a] = 0;
  iVar3 = DAT_05a607e8;
  param_1[0xe] = 0;
  param_1[0xf] = puVar1;
  param_1[0x12] = &PTR_LAB_04b3e828;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (0 < iVar3) {
    lVar4 = 0;
    puVar5 = DAT_05a607f8;
    do {
      DAT_05a607f8 = *(undefined8 **)(DAT_05a607f0 + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *DAT_05a607f8 = puVar5;
      puVar5 = DAT_05a607f8;
    } while (lVar4 < DAT_05a607e8);
  }
  DAT_05a607e8 = 0;
  DAT_05a60888 = 0;
  if (0 < DAT_05a60890) {
    lVar4 = 0;
    puVar5 = DAT_05a608a0;
    do {
      DAT_05a608a0 = *(undefined8 **)(DAT_05a60898 + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *DAT_05a608a0 = puVar5;
      puVar5 = DAT_05a608a0;
    } while (lVar4 < DAT_05a60890);
  }
  DAT_05a60890 = 0;
  DAT_05a608e0 = &DAT_3f8000003f800000;
  DAT_05a608e8 = &DAT_3f8000003f800000;
  DAT_05a608f0 = 0x40c0000047c34f80;
  DAT_05a608f8 = 0x4000000040400000;
  lVar4 = 0;
  do {
    lVar2 = lVar4 + 0x10;
    *(undefined8 *)((long)&DAT_05a60900 + lVar4) = 0x300000003;
    *(undefined8 *)((long)&DAT_05a60908 + lVar4) = 0x300000003;
    lVar4 = lVar2;
  } while (lVar2 != 0x48000);
  param_1[0x12] = &PTR_LAB_04b3e828;
  *param_1 = 0;
  _DAT_05aa8910 = 0;
  _DAT_05aa8920 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  return;
}

