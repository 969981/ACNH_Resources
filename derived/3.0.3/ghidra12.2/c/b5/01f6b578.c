
void FUN_01f6b578(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *local_50;
  undefined8 *puStack_48;
  
  if (param_2 == 2) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    puStack_48 = &DAT_0407ebb1;
    FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),PTR_DAT_04bb2ce8,PTR_DAT_04bb65b0,&local_50,6);
  }
  else if (param_2 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x136d0);
    uVar1 = *(undefined8 *)(param_1 + 0x136c8);
    *(undefined4 *)(param_1 + 0x13648) = 5;
    FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
    *(undefined8 *)(param_1 + 0xa9f0) = uVar1;
    *(undefined4 *)(param_1 + 0xa9f8) = uVar2;
    *(undefined8 *)(param_1 + 0xa9fc) = 0x100000000;
    *(undefined8 *)(param_1 + 0xaa1c) = 0;
    *(undefined8 *)(param_1 + 0xaa04) = 0x3f000000;
    *(undefined1 *)(param_1 + 0xaa44) = 0;
    *(undefined8 *)(param_1 + 0xaa0c) = 0xbf8000003c23d70a;
    *(undefined8 *)(param_1 + 0xaa14) = 0xbf800000;
  }
  *(int *)(param_1 + 0x1370c) = param_2;
  return;
}

