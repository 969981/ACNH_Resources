
bool FUN_01fc3370(long param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_60;
  undefined4 *puStack_58;
  undefined8 local_50;
  undefined4 local_24;
  
  piVar4 = (int *)PTR_DAT_04bb3238;
  local_24 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  if (DAT_053e0208 == 0) {
    bVar1 = false;
  }
  else {
    puStack_58 = &local_24;
    local_60 = &PTR_FUN_04a69c28;
    if (*(int *)(DAT_053e0208 + 0xb88) == 0) {
      piVar4 = &DAT_04c9a0c8;
    }
    else {
      puVar5 = *(undefined8 **)(DAT_053e0208 + 0xb90);
      lVar6 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
      local_50 = param_3;
      do {
        piVar3 = (int *)*puVar5;
        uVar2 = (*(code *)*local_60)(&local_60,piVar3);
        if ((uVar2 & 1) != 0) {
          piVar4 = piVar3;
          break;
        }
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    bVar1 = *piVar4 != 0;
    *param_2 = *piVar4;
  }
  return bVar1;
}

