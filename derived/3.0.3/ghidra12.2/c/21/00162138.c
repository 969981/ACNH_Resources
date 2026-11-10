
void FUN_00162138(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x30) == 0) {
    FUN_0014d5f8(*param_1,
                 "Error while processing content unencoding: Unknown failure within decompression software."
                );
    return;
  }
  FUN_0014d5f8(*param_1,"Error while processing content unencoding: %s");
  return;
}

