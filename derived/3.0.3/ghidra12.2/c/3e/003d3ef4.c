
void FUN_003d3ef4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_18;
  int local_14;
  
  FUN_003d0404(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x48));
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == -1) {
      lVar2 = 0;
    }
    else {
      uVar3 = FUN_003d0c2c(*(long *)(param_1 + 0x90) + 0x18,iVar1,*(undefined8 *)(param_1 + 0x88),2,
                           0);
      if ((uVar3 & 1) == 0) {
        local_14 = iVar1;
        FUN_003cd8f8(0x3e9,&local_14);
        *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x28) = 2;
        *(undefined1 *)(param_1 + 0x98) = 0;
        return;
      }
      lVar2 = FUN_003d21f4(*(long *)(param_1 + 0x90) + 0x18,iVar1);
      *(long *)(param_1 + 0x68) = lVar2;
    }
  }
  lVar2 = FUN_003b8108(lVar2,*(undefined4 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x48),
                       *(long *)(param_1 + 0x50) + 0x18);
  if (lVar2 == 0) {
    uVar3 = FUN_003d2430(*(long *)(param_1 + 0x90) + 0x18,*(undefined8 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x88));
    if ((uVar3 & 1) == 0) {
      local_18 = *(undefined4 *)(param_1 + 0x60);
      FUN_003cd8f8(0x3ea,&local_18);
      *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x28) = 2;
      *(undefined1 *)(param_1 + 0x98) = 0;
      return;
    }
    lVar2 = FUN_003b8108(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),
                         *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x90) + 0x18);
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x80) = lVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x28) = 2;
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}

