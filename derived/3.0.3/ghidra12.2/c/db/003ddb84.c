
long FUN_003ddb84(long param_1,AudioRendererParameter *param_2)

{
  long lVar1;
  
  lVar1 = nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer
                    (param_2,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
  return lVar1 * 3;
}

