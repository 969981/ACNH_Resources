
void FUN_01fb1f10(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **local_48;
  undefined4 *puStack_40;
  long local_38;
  undefined4 local_24;
  
  uVar1 = (**(code **)(*param_1 + 0x608))();
  if ((uVar1 & 1) == 0) {
    local_24 = *(undefined4 *)(param_1[1] + 0x230);
    local_38 = param_1[1] + 0x3e0;
    puStack_40 = &local_24;
    local_48 = &PTR_FUN_04a69d18;
    if (*(int *)(DAT_053e0208 + 0xb88) != 0) {
      lVar3 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
      puVar2 = *(undefined8 **)(DAT_053e0208 + 0xb90);
      do {
        (*(code *)*local_48)(&local_48,*puVar2);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}

