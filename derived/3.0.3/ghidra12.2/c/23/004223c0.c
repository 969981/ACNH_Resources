
void FUN_004223c0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_10d0 [18];
  undefined1 local_1040 [4096];
  
  if (*param_5 == 0) {
    FUN_00422460(param_1,param_2,param_3,param_4);
  }
  local_1040[0] = 0;
  FUN_004225b0(local_10d0);
  lVar2 = FUN_00424c90(local_10d0);
  *(undefined1 **)lVar2 = local_1040;
  *(undefined8 *)(lVar2 + 8) = 0x8000100000000001;
  FUN_00424dc0(local_10d0,param_4,param_5);
  FUN_00422460(param_1,param_2,param_3,local_10d0[0]);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x422454);
  (*pcVar1)();
}

