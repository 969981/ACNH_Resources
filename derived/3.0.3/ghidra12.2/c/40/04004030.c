
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nn::hid::GetTouchScreenStates<16ul>(TouchScreenState *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_GetTouchScreenStates<16ul>_04be07d0)((int)param_1,param_2);
  return iVar1;
}

