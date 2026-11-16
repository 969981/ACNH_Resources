
undefined8 FUN_0275dd40(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    return 0;
  }
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    *(long *)(param_1 + 0x48) = *param_2;
    *(int *)(param_1 + 0x50) = (int)param_2[2];
    plVar7 = (long *)*param_2;
    if ((plVar7 != (long *)0x0) &&
       (pvVar4 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x300,4), pvVar4 != (void *)0x0)) {
      memset(pvVar4,0,0x300);
      *(long **)(param_1 + 0x28) = plVar7;
      *(void **)(param_1 + 0x30) = pvVar4;
      *(undefined8 *)(param_1 + 0x38) = 0x300;
      *(undefined8 *)(param_1 + 0x40) = 4;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = *(uint *)(param_2 + 2);
      if (9 < uVar2) {
        uVar2 = 0;
      }
      iVar3 = FUN_027b78b0(param_2[1],(&DAT_05573f48)[(int)uVar2]);
      if (iVar3 != -1) {
        __n = FUN_027b79f8(param_2[1],iVar3);
        lVar5 = FUN_027b7ad4(param_2[1],iVar3);
        if ((__n != 0) && (param_2 = (long *)*param_2, param_2 != (long *)0x0)) {
          uVar6 = 8;
          if (lVar5 != 0) {
            uVar6 = (undefined4)lVar5;
          }
          pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__n,uVar6);
          if (pvVar4 != (void *)0x0) {
            memset(pvVar4,0,__n);
            lVar1 = 8;
            if (lVar5 != 0) {
              lVar1 = lVar5;
            }
            *(long **)(param_1 + 8) = param_2;
            *(void **)(param_1 + 0x10) = pvVar4;
            *(size_t *)(param_1 + 0x18) = __n;
            *(long *)(param_1 + 0x20) = lVar1;
          }
        }
        uVar6 = 1;
        if (*(long *)(param_1 + 0x10) == 0) {
          uVar6 = 2;
        }
        goto LAB_0275de8c;
      }
    }
  }
  uVar6 = 2;
LAB_0275de8c:
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  return 0;
}

