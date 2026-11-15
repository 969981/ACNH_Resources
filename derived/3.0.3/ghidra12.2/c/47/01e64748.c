
void FUN_01e64748(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if (((uVar1 & 1) != 0) &&
     ((*(int *)(param_1 + 0x77f4) == 0x4f || (*(int *)(param_1 + 0x77b0) == 0x4f)))) {
    FUN_01e57c78(*(undefined8 *)(param_1 + 0x10),PTR_DAT_04bb37e0,0,1);
    *(undefined1 *)(param_1 + 0x7878) = 1;
    if ((*(ushort *)(param_1 + 0x12570) & 1) == 0) {
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      return;
    }
    *(undefined4 *)(param_1 + 0xb0b0) = 2;
  }
  return;
}

