
void FUN_003cb01c(long param_1)

{
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  FUN_003cb1c0();
  if (2 < *(uint *)(param_1 + 0x1d4)) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  nn::fs::SetPriorityOnCurrentThread();
  (**(code **)(**(long **)(param_1 + 0x1e0) + 0x10))
            (*(long **)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1d8));
  FUN_003cb1cc(param_1);
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  return;
}

