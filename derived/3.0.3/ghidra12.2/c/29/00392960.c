
void FUN_00392960(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_0038d1a0(param_2,param_4,*(undefined8 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x58));
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18);
      if (*(code **)(param_3 + 0x48) == (code *)0x0) {
        FUN_003488cc(0x3f800000,param_4,*(undefined8 *)(param_2 + 0x150),0,2,0);
        FUN_00365188(param_2,param_4);
      }
      else {
        (**(code **)(param_3 + 0x48))(param_2,param_4,*(undefined8 *)(param_3 + 0x50));
      }
      lVar1 = lVar1 + lVar2 + 0x10;
      FUN_003927b4(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1);
      FUN_00392608(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1,param_5);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}

