
void FUN_025a0dc8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04a85958;
  if (*(int *)((long)param_1 + 0x24) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_02601530();
    return;
  }
  FUN_02601530();
  return;
}

