
void FUN_038767b0(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 2) = 0x60;
  param_1[1] = pcVar1;
  uVar2 = s_127_0_0_1_04064fd5._0_8_;
  if (pcVar1 != "127.0.0.1") {
    *(undefined1 *)((long)param_1 + 0x1d) = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 0x31;
    *(undefined8 *)pcVar1 = uVar2;
  }
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x10;
  *param_1 = &DAT_04b60350;
  param_1[0x10] = (undefined1 *)((long)param_1 + 0x8c);
  param_1[0x15] = (char *)((long)param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x16) = 0x10;
  param_1[0xf] = &PTR_LAB_048f99f8;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  if ((char *)((long)param_1 + 0xb4) != "password") {
    *(undefined1 *)((long)param_1 + 0xbc) = 0;
    *(undefined8 *)((long)param_1 + 0xb4) = 0x64726f7773736170;
  }
  param_1[0x14] = &PTR_LAB_048f99f8;
  param_1[0x1a] = (undefined1 *)((long)param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x1b) = 0x10;
  *(undefined1 *)((long)param_1 + 0xeb) = 0;
  if ((undefined1 *)((long)param_1 + 0xdc) != &DAT_040c5116) {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0x74736554;
  }
  param_1[0x19] = &PTR_LAB_048f99f8;
  FUN_038d1270(param_1 + 0xf,"enl_%0x",0);
  return;
}

