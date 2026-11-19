
void FUN_03bf0c34(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18) + 0x10)
                   )();
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((uVar2 & 1) != 0) {
    pcVar3 = (char *)(**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    lVar4 = *(long *)(param_1 + 8);
    if (*pcVar3 != '\0') {
      lVar4 = (**(code **)(**(long **)(lVar4 + 0x38) + 0x10))(*(long **)(lVar4 + 0x38),pcVar3);
      *param_3 = lVar4;
      *(undefined1 *)(param_3 + 1) = 1;
      if (lVar4 != 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 8);
    }
    lVar5 = *(long *)(lVar4 + 0x40);
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(lVar4 + 0x48);
    *param_3 = lVar5;
  }
  return;
}

