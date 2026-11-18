
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_035aefc0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "WideRoadSearch";
  uVar2 = FUN_038c6d48(&LAB_00500000,&local_30,param_2,8,1,0);
  param_1[0x1d] = uVar2;
  if (0 < DAT_05a607e8) {
    lVar3 = 0;
    puVar4 = DAT_05a607f8;
    do {
      DAT_05a607f8 = *(undefined8 **)(DAT_05a607f0 + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *DAT_05a607f8 = puVar4;
      puVar4 = DAT_05a607f8;
    } while (lVar3 < DAT_05a607e8);
  }
  DAT_05a607e8 = 0;
  DAT_05a60888 = 0;
  if (0 < DAT_05a60890) {
    lVar3 = 0;
    puVar4 = DAT_05a608a0;
    do {
      DAT_05a608a0 = *(undefined8 **)(DAT_05a60898 + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *DAT_05a608a0 = puVar4;
      puVar4 = DAT_05a608a0;
    } while (lVar3 < DAT_05a60890);
  }
  DAT_05a60890 = 0;
  DAT_05a608e0 = &DAT_3f8000003f800000;
  DAT_05a608e8 = &DAT_3f8000003f800000;
  DAT_05a608f0 = 0x40c0000047c34f80;
  DAT_05a608f8 = 0x4000000040400000;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x10;
    *(undefined8 *)((long)&DAT_05a60900 + lVar3) = 0x300000003;
    *(undefined8 *)((long)&DAT_05a60908 + lVar3) = 0x300000003;
    lVar3 = lVar1;
  } while (lVar1 != 0x48000);
  *param_1 = 0;
  _DAT_05aa8910 = 0;
  _DAT_05aa8920 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x12] = &PTR_LAB_04b3e828;
  return;
}

