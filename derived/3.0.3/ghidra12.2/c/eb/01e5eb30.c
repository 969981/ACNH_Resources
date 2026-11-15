
undefined8 FUN_01e5eb30(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x360);
  if (iVar2 == 0x14) {
    if ((*(int *)(param_1 + 0x4b8) != 0) && (*(int *)(param_1 + 0x378) == 0x23)) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x338) + 0x140))
              (*(long **)(param_1 + 0x338),param_1 + 0x430,1);
    (**(code **)(**(long **)(param_1 + 0x338) + 0x160))(*(long **)(param_1 + 0x338),param_1 + 0x444)
    ;
    uVar1 = FUN_01e5e100(param_1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x360);
  }
  if (iVar2 == 0x18) {
    if ((*(int *)(param_1 + 0x4b8) != 0) && (*(int *)(param_1 + 0x378) == 0x23)) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x338) + 0x140))
              (*(long **)(param_1 + 0x338),param_1 + 0x430,1);
    (**(code **)(**(long **)(param_1 + 0x338) + 0x160))(*(long **)(param_1 + 0x338),param_1 + 0x444)
    ;
    uVar1 = FUN_01e5e760(param_1);
    if ((uVar1 & 1) != 0) {
      return 3;
    }
    iVar2 = *(int *)(param_1 + 0x360);
  }
  if (iVar2 == 0x19) {
    if ((*(int *)(param_1 + 0x4b8) == 0) || (*(int *)(param_1 + 0x378) != 0x23)) {
      uVar4 = 4;
      goto LAB_01e5ec50;
    }
  }
  else if ((iVar2 == 0x15) &&
          ((*(int *)(param_1 + 0x4b8) == 0 || (*(int *)(param_1 + 0x378) != 0x23)))) {
    uVar4 = 2;
LAB_01e5ec50:
    (**(code **)(**(long **)(param_1 + 0x338) + 0x140))
              (*(long **)(param_1 + 0x338),param_1 + 0x430,1);
    *(undefined1 *)(param_1 + 0x5a0) = 1;
    lVar3 = *(long *)(*(long *)(param_1 + 0x358) + 0x3b8);
    *(ulong *)(lVar3 + 0xad58) = *(ulong *)(lVar3 + 0xad58) & 0xffffffffffffefff;
    return uVar4;
  }
  return 0;
}

