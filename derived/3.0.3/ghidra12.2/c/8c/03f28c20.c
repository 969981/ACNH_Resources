
undefined8 FUN_03f28c20(long param_1,ulong param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t __size;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar7 = (uint)param_2;
  uVar2 = param_3 * uVar7;
  if (0 < (int)uVar2) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar6 = malloc((ulong)uVar2);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar10 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar2,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0x28) = uVar2;
      *(void **)(param_1 + 0x30) = pvVar6;
      nn::prepo::Array::SetBuffer((void *)(param_1 + 8),(ulong)pvVar6);
      if (0 < (int)uVar7) {
        lVar10 = *(long *)puVar3;
        __size = (param_2 & 0xffffffff) << 3;
        if (lVar10 == 0) {
          pvVar6 = malloc(__size);
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
        }
        else {
          if (param_4 == (long *)0x0) {
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            puVar1 = (undefined8 *)(lVar10 + 8);
            if (lVar4 != 0) {
              puVar1 = (undefined8 *)(lVar4 + 0xa8);
            }
            param_4 = (long *)*puVar1;
            if (param_4 == (long *)0x0) {
              return 0;
            }
          }
          pvVar6 = (void *)(**(code **)(*param_4 + 0x30))(param_4,__size,8);
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
        }
        *(uint *)(param_1 + 0x38) = uVar7;
        uVar8 = param_2 & 3;
        *(void **)(param_1 + 0x40) = pvVar6;
        if (uVar7 < 4) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          do {
            lVar10 = uVar9 * 8;
            uVar9 = uVar9 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10 + 0x18) = 0;
          } while ((param_2 & 0xfffffffc) != uVar9);
        }
        if (uVar8 != 0) {
          lVar10 = uVar9 << 3;
          do {
            uVar8 = uVar8 - 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10) = 0;
            lVar10 = lVar10 + 8;
          } while (uVar8 != 0);
        }
        return 1;
      }
    }
  }
  return 0;
}

