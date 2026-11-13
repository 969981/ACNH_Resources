
void FUN_01473a3c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  puVar1 = PTR_DAT_04bbd460;
  plVar2 = param_1 + 1;
  *plVar2 = 0xfffe;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0277d4ac(plVar2);
  *(undefined4 *)plVar2 = (undefined4)local_38;
  plVar2 = *(long **)(param_2 + 0xa90);
  *(undefined4 *)((long)param_1 + 0xc) = local_38._4_4_;
  param_1[2] = (long)&DAT_048f9750;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x01473ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x110))(plVar2,param_1,param_3,param_4,param_5);
  return;
}

