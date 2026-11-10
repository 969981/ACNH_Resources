
void FUN_001a155c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_04839948;
  if (*(char *)(param_1 + 3) != '\0') {
    plVar3 = (long *)param_1[1];
    iVar1 = *(int *)((long)plVar3 + 0x3c) + -1;
    *(int *)((long)plVar3 + 0x3c) = iVar1;
    if (iVar1 == 0) {
      if ((int)plVar3[7] == 8) {
        uVar4 = 4;
        uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,4);
      }
      else {
        uVar4 = 0x10;
        uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,0x10);
      }
      if ((uVar2 & 1) != 0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,uVar4);
        *(undefined4 *)(plVar3 + 7) = uVar4;
      }
    }
  }
  return;
}

