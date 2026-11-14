
undefined8 FUN_017d1c70(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb4a98;
  if (*(long *)(param_2 + 0xb0) == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_2 + 0xb0) + 8) != 0) {
    lVar4 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
    if (lVar4 == 0 || lVar4 != param_3) {
      lVar4 = (**(code **)(**(long **)puVar3 + 0x18))();
      if ((lVar4 == 0) && (lVar4 = param_3, param_3 == 0)) {
        lVar6 = *(long *)PTR_DAT_04bb2698;
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar2 = (long *)(lVar6 + 8);
        if (lVar4 != 0) {
          plVar2 = (long *)(lVar4 + 0xa8);
        }
        lVar4 = *plVar2;
      }
    }
    else {
      lVar4 = param_3;
    }
    DAT_05292f78 = 1;
    DAT_05292f7c = 0xffffffffffffffff;
    DAT_05292f84 = 0xffffffff;
    param_1[0x16] = *(long *)(param_2 + 0xb0);
    lVar6 = lVar4;
    if (lVar4 == 0) {
      lVar7 = *(long *)PTR_DAT_04bb2698;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar7 + 8);
      if (lVar6 != 0) {
        plVar2 = (long *)(lVar6 + 0xa8);
      }
      lVar6 = *plVar2;
    }
    param_1[0x15] = lVar6;
    param_1[0x17] = param_2;
    if (**(char **)(param_2 + 0x10) != '\0') {
      (**(code **)(*param_1 + 0x40))(param_1,param_2 + 8,lVar4);
      lVar6 = *(long *)puVar3;
      uVar5 = 0;
      lVar4 = lVar6 + 8;
      do {
        if (*(long **)(lVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) == param_1) {
          return 1;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      uVar5 = 0;
      do {
        if (*(long *)(lVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) == 0) {
          lVar7 = (long)(int)uVar5 * 8;
          *(long **)(lVar4 + lVar7) = param_1;
          *(int *)(lVar6 + 0x82c) = *(int *)(lVar6 + 0x82c) + 1;
          if (*(long *)(*(long *)(lVar4 + lVar7) + 0xb8) == 0) {
            *(int *)(lVar6 + 0x828) = *(int *)(lVar6 + 0x828) + 1;
            return 1;
          }
          return 1;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      return 1;
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return 0;
}

