
void FUN_0047bb80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04865338;
  if (((*(char *)(param_1 + 1) != '\0') && (*(int *)(param_1[2] + 0xb0) == 0)) &&
     (*(int *)(param_1[2] + 0xa0) != 0)) {
    FUN_00477f20();
  }
  nn::os::UnlockMutex((MutexType *)param_1[3]);
  return;
}

