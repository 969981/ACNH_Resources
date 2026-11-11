
void FUN_003ddd7c(long param_1,AudioRendererConfig *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar1 = (**(code **)*param_3)(param_3);
    if (iVar1 == 1) {
      nn::audio::RemoveAux(param_2,(AuxType *)(param_1 + 0x18),(FinalMixType *)(param_3 + 8));
    }
    else {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
      nn::audio::RemoveAux(param_2,(AuxType *)(param_1 + 0x18),(SubMixType *)(param_3 + 10));
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

