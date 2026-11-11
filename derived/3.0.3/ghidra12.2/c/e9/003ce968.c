
void FUN_003ce968(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(int *)((long)param_1 + 0xfc) == 1) {
    *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
    if (param_1[2] != 0) {
      FUN_003cfe24();
    }
    if (param_1[3] != 0) {
      FUN_003cfe24();
    }
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    if (param_1[4] != 0) {
      FUN_003ce4c8(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      FUN_003cfee8(param_1[6],param_1);
    }
    plVar2 = (long *)param_1[10];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1[0xb],param_1);
      param_1[0xb] = 0;
    }
    if (*(char *)((long)param_1 + 0xed) != '\0') {
      uVar3 = FUN_003c5b84();
      lVar4 = FUN_003cbb70(uVar3,0x28,1);
      *(undefined4 *)(lVar4 + 8) = 8;
      uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      *(undefined1 *)(lVar4 + 0x20) = *(undefined1 *)((long)param_1 + 0xef);
      FUN_003cc15c(uVar3,lVar4);
      *(undefined1 *)((long)param_1 + 0xed) = 0;
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 0x20) = 2;
    uVar3 = FUN_003c5b84();
    lVar4 = FUN_003cbb70(uVar3,0x28,1);
    *(undefined4 *)(lVar4 + 8) = 6;
    uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    FUN_003cc15c(uVar3,lVar4);
    param_1[0x27] = 0;
    if ((code *)param_1[0x3b] != (code *)0x0) {
      (*(code *)param_1[0x3b])();
      param_1[0x3b] = 0;
    }
    *(undefined1 *)((long)param_1 + 0xef) = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 2;
  }
  return;
}

