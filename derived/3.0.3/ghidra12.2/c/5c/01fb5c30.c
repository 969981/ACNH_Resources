
void FUN_01fb5c30(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **local_40;
  long *plStack_38;
  
  uVar2 = (**(code **)(*param_1 + 0x608))();
  if ((uVar2 & 1) == 0) {
    local_40 = &PTR_FUN_04a69ca0;
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar1 != 0) {
      lVar4 = (long)iVar1 << 3;
      puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      plStack_38 = param_1;
      do {
        (*(code *)*local_40)(&local_40,*puVar3);
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}

