
void FUN_020b4420(long param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **local_40 [4];
  
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
     (uVar1 = **(ushort **)PTR_DAT_04bc3a48, (uVar1 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1) {
LAB_020b4460:
      local_40[0] = &PTR_FUN_04a730d0;
      if (*(int *)(param_1 + 0xb88) != 0) {
        lVar3 = (long)*(int *)(param_1 + 0xb88) << 3;
        puVar2 = *(undefined8 **)(param_1 + 0xb90);
        do {
          (*(code *)*local_40[0])(local_40,*puVar2);
          lVar3 = lVar3 + -8;
          puVar2 = puVar2 + 1;
        } while (lVar3 != 0);
      }
      return;
    }
  }
  else if (((uVar1 ^ 0xffff) & 3) == 0) goto LAB_020b4460;
  return;
}

