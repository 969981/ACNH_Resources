
undefined8
FUN_003ddba8(long param_1,AudioRendererConfig *param_2,AudioRendererParameter *param_3,
            undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    return 0;
  }
  uVar2 = nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer
                    (param_3,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
  pvVar4 = (void *)(*(long *)(param_1 + 0x38) + 0x3fU & 0xffffffffffffffc0);
  pvVar5 = (void *)((long)pvVar4 + uVar2 + 0x3f & 0xffffffffffffffc0);
  *(ulong *)(param_1 + 0x48) = (long)pvVar5 + uVar2 + 0x3f & 0xffffffffffffffc0;
  lVar3 = FUN_03b38a74();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar3 + 200);
  iVar1 = (**(code **)*param_4)(param_4);
  if (iVar1 == 1) {
    iVar1 = nn::audio::AddAux(param_2,(AuxType *)(param_1 + 0x18),(FinalMixType *)(param_4 + 8),
                              pvVar4,pvVar5,uVar2);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    iVar1 = nn::audio::AddAux(param_2,(AuxType *)(param_1 + 0x18),(SubMixType *)(param_4 + 10),
                              pvVar4,pvVar5,uVar2);
  }
  if (iVar1 == 0) {
    nn::audio::SetAuxEnabled((AuxType *)(param_1 + 0x18),*(bool *)(param_1 + 0x31));
    *(undefined1 *)(param_1 + 0x30) = 1;
    return 1;
  }
  return 0;
}

