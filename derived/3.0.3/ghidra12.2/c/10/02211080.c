
void FUN_02211080(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *local_48;
  char *pcStack_40;
  undefined1 uStack_31;
  
  *param_1 = 0x23080023080023;
  param_1[1] = 0x2308002308002308;
  param_1[4] = 0x2308002308002308;
  param_1[2] = 0x800230800230800;
  param_1[3] = 0x23080023080023;
  *(undefined4 *)(param_1 + 5) = 0x230800;
  *(undefined1 *)((long)param_1 + 0x2c) = 8;
  uVar1 = FUN_0221119c();
  if ((uVar1 & 1) == 0) {
    FUN_0252d11c(&uStack_31);
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ChocolateVillagerIndex";
    FUN_0274bfe8(&uStack_31,&local_48,0);
    if (0 < *(int *)(param_1 + 6)) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[7] + lVar3 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + 1;
        *puVar2 = param_1[8];
        param_1[8] = puVar2;
      } while (lVar3 < *(int *)(param_1 + 6));
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_0221aa44(&DAT_0545b240);
  *(byte *)((long)param_1 + 0x1e4) = *(byte *)((long)param_1 + 0x1e4) & 0xfd;
  if ((param_2 & 1) != 0) {
    FUN_03777ac0();
  }
  return;
}

