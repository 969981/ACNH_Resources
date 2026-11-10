
void FUN_0018ea28(undefined8 *param_1,byte param_2)

{
  undefined8 *puVar1;
  ConditionVariableType *pCVar2;
  
  if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
    puVar1 = malloc(0x18);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)(0x18);
  }
  *puVar1 = *(undefined8 *)PTR_DAT_04bcba28;
  pCVar2 = (ConditionVariableType *)(puVar1 + 2);
  *(undefined8 *)pCVar2 = 0;
  *param_1 = pCVar2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(byte *)((long)param_1 + 0xc) = param_2 & 1;
  nn::os::InitializeConditionVariable(pCVar2);
  return;
}

