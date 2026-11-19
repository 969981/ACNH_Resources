
void FUN_03b0e240(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    if (*(char *)(param_1 + 0x3e) != '\0') {
      FUN_00355e80(*(undefined8 *)(param_1 + 0x10));
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 != 0) {
        lVar4 = *(long *)(param_1 + 0x20);
        iVar5 = 0;
        do {
          FUN_00352450(lVar4 + (long)iVar5 * 0x48 + 0x10);
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      *(undefined1 *)(param_1 + 0x3e) = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      for (lVar4 = *(long *)(param_1 + 0x30); lVar4 != 0; lVar4 = FUN_03b0eb20(lVar4,param_1)) {
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(char *)(param_1 + 0x3c) != '\0') {
      plVar3 = *(long **)(param_1 + 0x28);
      *(undefined1 *)(plVar3 + 0x22) = 1;
      uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,1,1);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(plVar3 + 0x22) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x3c) = 0x100;
      }
    }
  }
  else if (*(char *)(*(long *)(param_1 + 0x28) + 0x110) == '\0') {
    FUN_00355d50(*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x3d) = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

