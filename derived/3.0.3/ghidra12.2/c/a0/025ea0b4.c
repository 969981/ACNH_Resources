
void FUN_025ea0b4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04a86840;
  if (*(int *)((long)param_1 + 0x24) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_02601530();
    return;
  }
  FUN_02601530();
  return;
}

