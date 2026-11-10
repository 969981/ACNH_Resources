
undefined8 FUN_0016f4f4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_001726f0(param_1,*(undefined4 *)(param_2 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  if (((*(byte *)(lVar2 + 0xe4) >> 1 & 1) == 0) &&
     (*(int *)(lVar2 + 0xdc) != 3 && *(int *)(lVar2 + 0xdc) != 5)) {
    if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) &&
       (((*(byte *)(param_2 + 0xd) & 1) != 0 && (iVar1 = FUN_00173d6c(lVar2), iVar1 != 0)))) {
      uVar3 = FUN_0016cb78(param_1,*(undefined4 *)(lVar2 + 0xb8),1);
      if ((int)uVar3 < -900) {
        return uVar3;
      }
    }
    else if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
            (iVar1 = (**(code **)(param_1 + 0x7e8))
                               (param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
      return 0xfffffc7a;
    }
    if ((((*(byte *)(param_2 + 0xd) & 1) != 0) &&
        (FUN_001728a4(lVar2,1), ((*(byte *)(lVar2 + 0xe5) ^ 0xff) & 3) == 0)) &&
       (uVar3 = FUN_0016cc94(param_1,*(undefined4 *)(lVar2 + 0xb8),0), (int)uVar3 < -900)) {
      return uVar3;
    }
  }
  return 0;
}

