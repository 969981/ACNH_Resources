
void FUN_020b1ca0(long param_1)

{
  uint *puVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined **local_50;
  undefined *puStack_48;
  undefined8 local_40;
  
  plVar6 = *(long **)(param_1 + 0x2e60);
  if (plVar6 != (long *)(param_1 + 0x2e58)) {
    plVar3 = plVar6 + -4;
    do {
      (**(code **)plVar6[-4])(plVar3);
      plVar6 = (long *)plVar6[1];
      plVar3 = plVar6 + -4;
    } while (plVar3 != (long *)(param_1 + 0x2e38));
    plVar6 = *(long **)(param_1 + 0x2e60);
  }
  while (plVar6 != (long *)(param_1 + 0x2e58)) {
    plVar3 = (long *)plVar6[1];
    plVar4 = plVar3;
    if (*plVar6 != 0) {
      *(long **)(*plVar6 + 8) = plVar3;
      plVar4 = (long *)plVar6[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x2e68) = *(int *)(param_1 + 0x2e68) + -1;
    plVar6[-4] = *(long *)(param_1 + 0x2e70);
    *(long **)(param_1 + 0x2e70) = plVar6 + -4;
    plVar6 = plVar3;
  }
  if ((*(byte *)(param_1 + 0xd60) >> 1 & 1) != 0) {
    puStack_48 = PTR_DAT_04bb2020 + 0x10;
    local_40 = *(undefined8 *)(DAT_053e0208 + 0xd30);
    local_50 = &PTR_FUN_04a72dd8;
    if (*(int *)(DAT_053e0208 + 0xb88) != 0) {
      lVar7 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
      puVar5 = *(undefined8 **)(DAT_053e0208 + 0xb90);
      do {
        (*(code *)*local_50)(&local_50,*puVar5);
        lVar7 = lVar7 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
    }
  }
  if ((*(long *)(param_1 + 0x175a0) != 0) && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
    local_50 = (undefined **)CONCAT44(local_50._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) == 0) {
      local_50 = (undefined **)CONCAT44(local_50._4_4_,0x17);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_020b1e0c;
    }
    FUN_02116f78();
  }
LAB_020b1e0c:
  FUN_020b1e80(param_1);
  return;
}

