
void FUN_01275400(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *__s;
  
  *param_1 = &PTR_FUN_0498a888;
  FUN_01295940();
  __s = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 3) < 1) {
      iVar1 = *(int *)(param_1 + 3) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  uVar2 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}

