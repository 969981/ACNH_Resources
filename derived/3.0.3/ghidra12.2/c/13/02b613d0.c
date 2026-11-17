
undefined4 FUN_02b613d0(uint param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined **local_78;
  undefined4 *local_70;
  undefined1 *puStack_68;
  uint local_58 [10];
  undefined4 local_18;
  undefined1 local_14 [4];
  
  if (param_1 == 0) {
    plVar3 = (long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar3 = (long *)(DAT_0519d040 + 0x30) + param_1;
    if (0x38 < param_1) {
      plVar3 = (long *)(DAT_0519d040 + 0x30);
    }
  }
  puVar1 = &DAT_05636dd8;
  if (*plVar3 != 0) {
    puVar1 = (undefined8 *)(*plVar3 + 0x148);
  }
  if (puVar1[1] == 0) {
    local_18 = 0;
  }
  else {
    local_70 = &local_18;
    puStack_68 = local_14;
    local_18 = 0;
    local_78 = &PTR_FUN_04aa4b78;
    if (puVar1[1] != 0) {
      local_58[0] = param_1;
      local_14[0] = param_2;
      plVar3 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar2 = (**(code **)(*plVar3 + 0x18))();
      if (0 < iVar2) {
        iVar4 = 0;
        do {
          FUN_01360490(local_58,puVar1[1],iVar4);
          (*(code *)*local_78)(&local_78,local_58);
          iVar4 = iVar4 + 1;
        } while (iVar2 != iVar4);
      }
    }
  }
  return local_18;
}

