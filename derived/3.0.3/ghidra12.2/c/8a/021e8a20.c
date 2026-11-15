
void FUN_021e8a20(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined *puVar5;
  
  iVar3 = FUN_00a8c014(DAT_04da7238);
  if (iVar3 == 1) {
    FUN_021e8ae0(param_1,param_2);
    return;
  }
  if ((param_2 == 0) || (uVar2 = *(uint *)(param_2 + 0x508), uVar2 == 0xffffffff)) {
    *param_1 = 0x1e4c;
  }
  else {
    puVar5 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
    if (9 < uVar2) {
      puVar5 = &DAT_053fe348;
    }
    iVar3 = *(int *)(puVar5 + 0x51c);
    *(undefined2 *)((long)param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
    uVar4 = 0x1ce5;
    if (iVar3 != 1) {
      uVar4 = 0x1ce6;
    }
    uVar1 = 0x1e4c;
    if (iVar3 != 0) {
      uVar1 = uVar4;
    }
    *(undefined2 *)param_1 = uVar1;
  }
  FUN_0277d4ac(param_1);
  return;
}

