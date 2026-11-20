
void FUN_040015d0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 200));
  uVar4 = *(ulong *)(param_1 + 0x238);
  if (uVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x230);
    uVar6 = uVar4;
    do {
      if (*plVar5 == param_2) goto LAB_040016e4;
      uVar6 = uVar6 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x240);
  if (uVar6 <= uVar4) {
    uVar1 = uVar6 + (uVar6 >> 1);
    if (uVar1 <= uVar4 + 1) {
      uVar1 = uVar4 + 1;
    }
    if (uVar1 < 5) {
      uVar1 = 4;
    }
    if (uVar6 < uVar1) {
      if ((uVar1 >> 0x3d != 0) ||
         (lVar2 = (**(code **)(**(long **)(param_1 + 0x220) + 0x10))
                            (*(long **)(param_1 + 0x220),uVar1 << 3,*(undefined8 *)(param_1 + 0x228)
                            ), lVar2 == 0)) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        goto LAB_040016e4;
      }
      lVar3 = *(long *)(param_1 + 0x230);
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0x238) != 0) {
          uVar4 = 0;
          do {
            lVar3 = uVar4 * 8;
            uVar4 = uVar4 + 1;
            *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(*(long *)(param_1 + 0x230) + lVar3);
          } while (uVar4 < *(ulong *)(param_1 + 0x238));
          lVar3 = *(long *)(param_1 + 0x230);
        }
        (**(code **)(**(long **)(param_1 + 0x220) + 0x18))(*(long **)(param_1 + 0x220),lVar3);
      }
      uVar4 = *(ulong *)(param_1 + 0x238);
      *(long *)(param_1 + 0x230) = lVar2;
      *(ulong *)(param_1 + 0x240) = uVar1;
    }
  }
  *(long *)(*(long *)(param_1 + 0x230) + uVar4 * 8) = param_2;
  *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0x238) + 1;
LAB_040016e4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 200));
  return;
}

