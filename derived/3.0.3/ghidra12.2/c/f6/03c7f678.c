
void FUN_03c7f678(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_04bd3ef0;
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03c7f6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return;
  }
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar3 != 0))
  {
    FUN_03c7fd94(puVar2);
    puVar1 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar2 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar2 + 0x658) = puVar1;
    *(undefined **)(puVar2 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 8))(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 0x18) = puVar2;
  return;
}

