
void FUN_003c61c8(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined1 *)((long)param_1 + 0x3b) = 1;
  FUN_003c62e8();
  if ((char)param_1[7] != '\0') {
    uVar1 = FUN_003c0010();
    FUN_003c00a0(uVar1,param_1 + 0x18);
    (**(code **)(*param_1 + 0x38))(param_1,0);
  }
  FUN_003c92bc(param_1 + 0x4d);
  FUN_003c8f88(param_1 + 0x3d);
  FUN_003c92bc(param_1 + 0x50);
  FUN_003c8f88(param_1 + 0x41);
  FUN_003c92bc(param_1 + 0x53);
  FUN_003c8f88(param_1 + 0x45);
  FUN_003c92bc(param_1 + 0x56);
  FUN_003c8f88(param_1 + 0x49);
  if (*(char *)((long)param_1 + 0x2c9) != '\0') {
    FUN_003c5db8(param_1);
    *(undefined1 *)((long)param_1 + 0x2c9) = 0;
  }
  lVar3 = param_1[0x5e];
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0x100);
    uVar1 = FUN_003c98bc();
    FUN_003c9a08(uVar1,lVar3 + 0x118,1);
    lVar3 = param_1[0x5e];
    if (lVar3 != 0) {
      lVar5 = param_1[0x5d];
      uVar2 = nn::os::TryWaitEvent((EventType *)(lVar3 + 0x18));
      if (((uVar2 & 1) == 0) ||
         (uVar2 = nn::os::TryWaitEvent((EventType *)(lVar3 + 0x130)), (uVar2 & 1) == 0)) {
        plVar6 = (long *)(lVar5 + 0x38);
        lVar5 = *plVar6;
      }
      else {
        plVar6 = (long *)(lVar5 + 0x28);
        lVar5 = *plVar6;
      }
      lVar4 = *(long *)(lVar3 + 0x4a0);
      *(long *)(lVar3 + 0x4a0) = lVar5;
      *(long **)(lVar4 + 8) = plVar6;
      *(long *)(*plVar6 + 8) = lVar3 + 0x4a0;
      *plVar6 = lVar4;
      param_1[0x5e] = 0;
    }
  }
  return;
}

