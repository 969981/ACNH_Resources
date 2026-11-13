
undefined8 FUN_01287690(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb4a98;
  if (*(long *)(param_2 + 0xb0) == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_2 + 0xb0) + 8) != 0) {
    lVar5 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
    if (lVar5 == 0 || lVar5 != param_3) {
      lVar5 = (**(code **)(**(long **)puVar3 + 0x18))();
      if ((lVar5 == 0) && (lVar5 = param_3, param_3 == 0)) {
        lVar7 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar2 = (long *)(lVar7 + 8);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 0xa8);
        }
        lVar5 = *plVar2;
      }
    }
    else {
      lVar5 = param_3;
    }
    puVar4 = PTR_DAT_04bbbeb8;
    *PTR_DAT_04bbbeb0 = 1;
    lVar7 = *(long *)(param_2 + 0xb0);
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    param_1[0x16] = lVar7;
    lVar7 = lVar5;
    if (lVar5 == 0) {
      lVar8 = *(long *)PTR_DAT_04bb2698;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar8 + 8);
      if (lVar7 != 0) {
        plVar2 = (long *)(lVar7 + 0xa8);
      }
      lVar7 = *plVar2;
    }
    param_1[0x15] = lVar7;
    param_1[0x17] = param_2;
    if (**(char **)(param_2 + 0x10) != '\0') {
      (**(code **)(*param_1 + 0x40))(param_1,param_2 + 8,lVar5);
      lVar7 = *(long *)puVar3;
      uVar6 = 0;
      lVar5 = lVar7 + 8;
      do {
        if (*(long **)(lVar5 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) == param_1) {
          return 1;
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      uVar6 = 0;
      do {
        if (*(long *)(lVar5 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) == 0) {
          lVar8 = (long)(int)uVar6 * 8;
          *(long **)(lVar5 + lVar8) = param_1;
          *(int *)(lVar7 + 0x82c) = *(int *)(lVar7 + 0x82c) + 1;
          if (*(long *)(*(long *)(lVar5 + lVar8) + 0xb8) == 0) {
            *(int *)(lVar7 + 0x828) = *(int *)(lVar7 + 0x828) + 1;
            return 1;
          }
          return 1;
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != 0x100);
      return 1;
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return 0;
}

