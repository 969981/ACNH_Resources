
void FUN_038c625c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b64340;
  FUN_038ca860();
  nn::mem::StandardAllocator::Finalize();
  if (*(char *)(param_1 + 0x1b) != '\0') {
    nn::mem::StandardAllocator::Finalize();
  }
  FUN_038ca644(param_1);
  return;
}

