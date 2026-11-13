
void FUN_01435540(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *local_30;
  undefined *puStack_28;
  
  *(undefined2 *)(param_1 + 0x308) = 0;
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x48) + 0x60);
    if (plVar1 != (long *)0x0) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      puStack_28 = PTR_DAT_04bbcb98 + 0xb;
      if (plVar1[0x227] != 0) {
        FUN_038501b0(0,plVar1[0x227],0);
        lVar2 = plVar1[0x227];
        if (*(char *)(lVar2 + 0x2c0) != '\0') {
          *(undefined1 *)(lVar2 + 0x2c0) = 0;
          FUN_03855b20(lVar2 + 0xc0,0);
        }
        FUN_0384f8c0(lVar2,&local_30,0,0);
        (**(code **)(*plVar1 + 0x120))(plVar1,&local_30,0,0);
      }
    }
  }
  return;
}

