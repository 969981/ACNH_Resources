
void FUN_03d7ef1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((*PTR_DAT_04bd3308 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3308);
    puVar2 = PTR_DAT_04bd3300;
    if (iVar4 != 0) {
      FUN_03c7d4c4(PTR_DAT_04bd3300,0);
      FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bd3308);
    }
  }
  puVar2 = PTR_DAT_04bd3300;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_LAB_04b92318;
  param_1[1] = puVar2;
  puVar2 = PTR_DAT_04bd3320;
  if (((*PTR_DAT_04bd3328 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3328), puVar3 = PTR_DAT_04bd3340, iVar4 != 0)) {
    puVar1 = PTR_DAT_04bd3338 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd3330 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3348;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3328,param_1 + 5);
  }
  (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,param_1 + 5);
  return;
}

