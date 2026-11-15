
void FUN_01efae40(long param_1)

{
  undefined *local_38;
  undefined8 *puStack_30;
  undefined1 auStack_24 [4];
  
  FUN_0212eca8(param_1 + 0xaa50,1,0);
  if (*(int *)(param_1 + 0x128a0) == 0) {
    FUN_02085e20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3c0),0,*(undefined4 *)(param_1 + 0x7800)
                 ,PTR_DAT_04bb6928,0);
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) - 1U < 2) {
      *(undefined4 *)(param_1 + 0xaf34) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0xaf34) = 1;
      FUN_016e48b0(auStack_24,*(long *)(param_1 + 8),(undefined4 *)(param_1 + 0x7800));
      local_38 = PTR_DAT_04bb2020 + 0x10;
      puStack_30 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),auStack_24,PTR_DAT_04bb65b0,&local_38,6);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xaf34) = 0;
  }
  return;
}

