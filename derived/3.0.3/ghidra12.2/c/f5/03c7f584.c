
void FUN_03c7f584(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04b84058;
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bd3ef0;
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar3 != 0))
  {
    FUN_03c7fd94(puVar2);
    puVar1 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar2 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar2 + 0x658) = puVar1;
    *(undefined **)(puVar2 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (param_1[3] != 0) {
    (**(code **)(param_1[3] + 8))(param_1[1]);
  }
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = &PTR_LAB_04b840d8;
  param_1[1] = 0;
  param_1[6] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2120;
  param_1[5] = 0;
  param_1[3] = puVar2;
  param_1[4] = 0;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  param_1[7] = puVar1;
  FUN_03c5a110(param_1 + 6,param_3,0xffffffff,0);
  return;
}

