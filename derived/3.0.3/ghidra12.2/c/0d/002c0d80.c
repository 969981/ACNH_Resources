
void FUN_002c0d80(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_b0;
  ErrorResultVariant aEStack_ac [124];
  undefined4 local_30 [4];
  
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)(param_1 + 0x188) = 1;
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_0022be38();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_0022be38();
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x98) + 4)) {
    local_b0 = 0;
    local_30[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)local_30);
    FUN_002269b8(local_30,*(undefined8 *)(param_1 + 0x98));
    FUN_00229780(&local_b0,local_30);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
  }
  lVar2 = *(long *)(param_1 + 0x180);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x14) == 1) {
      FUN_00197980();
      lVar2 = *(long *)(param_1 + 0x180);
    }
    FUN_001984a0(lVar2);
  }
  plVar4 = *(long **)(param_1 + 0x168);
  if ((plVar4 != (long *)0x0) && (uVar3 = FUN_002212e4(plVar4), (uVar3 & 1) != 0)) {
    uVar3 = FUN_0022131c(plVar4);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(plVar4 + 9) = 1;
      do {
        FUN_00227860(plVar4,5);
        uVar3 = FUN_002212e4(plVar4);
        if ((uVar3 & 1) == 0) break;
        uVar3 = FUN_0022131c(plVar4);
      } while ((uVar3 & 1) != 0);
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4,0);
  }
  lVar2 = param_1 + 0x108;
  if (*(int *)(param_1 + 0x108) == 1) {
    FUN_00221064(lVar2);
    FUN_00220f24(lVar2);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  else {
    FUN_00220f24(lVar2);
    iVar1 = *(int *)(param_1 + 0x138);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0x138);
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  else {
    FUN_00220f24(param_1 + 0x138);
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  if (iVar1 == 1) {
    FUN_00221064(param_1 + 0xd8);
    FUN_00220f24(param_1 + 0xd8);
  }
  else {
    FUN_00220f24(param_1 + 0xd8);
  }
  if ((DAT_04c61168 == 0) || (lVar2 = FUN_002ba788(), lVar2 == 0)) {
    return;
  }
  FUN_002b3fa8(&local_b0);
  plVar4 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_b0);
  FUN_002b4104(&local_b0);
  return;
}

