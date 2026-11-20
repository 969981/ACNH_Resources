
undefined8 FUN_03efa3f0(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  void *__s;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_04bb3490;
  puVar3 = PTR_DAT_04bb3488;
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_2 + 0x30);
  if (0 < (int)uVar6) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      plVar9 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + uVar11 * 8);
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar9 != (long *)0x0) && (uVar7 = (**(code **)*plVar9)(plVar9,puVar3), (uVar7 & 1) != 0)
         ) {
        uVar6 = (**(code **)(*plVar9 + 0x30))(plVar9);
        if ((int)uVar6 < 1) {
          return 0;
        }
        uVar11 = (ulong)uVar6;
        lVar10 = *(long *)PTR_DAT_04bb2698;
        if (lVar10 == 0) {
          __s = malloc(uVar11);
        }
        else {
          if (param_3 == (long *)0x0) {
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar2 = (undefined8 *)(lVar10 + 8);
            if (lVar8 != 0) {
              puVar2 = (undefined8 *)(lVar8 + 0xa8);
            }
            param_3 = (long *)*puVar2;
            if (param_3 == (long *)0x0) {
              return 0;
            }
          }
          __s = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar11,8);
        }
        if (__s == (void *)0x0) {
          return 0;
        }
        memset(__s,0,uVar11);
        *(uint *)(param_1 + 0x28) = uVar6;
        *(void **)(param_1 + 0x30) = __s;
        *(long *)(param_1 + 0x10) = param_2;
        return 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar6 != uVar11);
  }
  return 0;
}

