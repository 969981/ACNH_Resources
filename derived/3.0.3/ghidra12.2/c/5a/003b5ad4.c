
void FUN_003b5ad4(long param_1)

{
  int local_14;
  
  local_14 = nn::audio::ExecuteAudioRendererRendering
                       (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl((Result *)&local_14);
  }
  return;
}

