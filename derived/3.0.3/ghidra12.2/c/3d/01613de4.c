
void FUN_01613de4(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_14;
  
  local_14 = *(uint *)(param_3 + 0x230);
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x38;
  lVar2 = lVar4 + (ulong)local_14 * 0x348;
  if (1 < local_14) {
    lVar2 = lVar4;
  }
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar2 + 0x340);
  if (local_14 == 0) {
    *(long *)(param_3 + 0x10) = param_2[0x2f];
    uVar5 = FUN_01613f60(param_1,&local_14,param_3);
    FUN_03eb3a80(uVar5,param_2 + 0x23,0,0);
  }
  if (local_14 == 1) {
    *(char **)(param_3 + 0x10) = "UIScene";
    lVar4 = FUN_01613f60(param_1,&local_14,param_3);
    *(undefined4 *)(*(long *)(lVar4 + 0x3420) + 0x20) = 0x2b;
    FUN_03eb3a80(lVar4,param_2 + 0x23,0,0);
  }
  plVar1 = (long *)(param_1 + 0xe88);
  plVar3 = plVar1 + local_14;
  if (1 < local_14) {
    plVar3 = plVar1;
  }
  if (*plVar3 != 0) {
    uVar6 = (ulong)local_14;
    if (1 < local_14) {
      uVar6 = 0;
    }
    lVar4 = plVar1[uVar6];
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x4e9e) = 4;
      *(undefined1 *)(lVar4 + 0x4e9c) = 4;
      if (*(long *)(&DAT_00004ac8 + lVar4) != 0) {
        *(undefined4 *)(*(long *)(&DAT_00004ac8 + lVar4) + 0x74c) = 1;
      }
      if (*(long *)(lVar4 + 0x2e98) != 0) {
        *(undefined1 *)(*(long *)(lVar4 + 0x2e98) + 0x5b0) = 1;
      }
      *(undefined4 *)(*(long *)(lVar4 + 0x3420) + 0x2c) = 0x2b;
    }
  }
  return;
}

