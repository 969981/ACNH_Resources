
void FUN_00153d40(long param_1)

{
  if (*(FILE **)(param_1 + 0x48) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_00143300(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

