
void FUN_03898f40(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)(param_2 - 1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2) {
    __size = (ulong)param_2 << 4;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (pvVar5 != (void *)0x0) {
      param_1[2] = pvVar5;
      if (param_2 < 2) {
        uVar7 = 0;
      }
      else {
        uVar6 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          lVar3 = 0;
        }
        else {
          lVar8 = 0;
          lVar3 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar5 + lVar8);
            lVar8 = lVar8 + 0x20;
            lVar3 = lVar3 + 4;
            puVar1[3] = puVar1 + 4;
            puVar1[2] = puVar1 + 3;
            puVar1[1] = puVar1 + 2;
            *puVar1 = puVar1 + 1;
          } while ((uVar7 & 0xfffffffc) * 8 != lVar8);
        }
        if ((param_2 - 1 & 3) != 0) {
          puVar1 = (void *)((long)pvVar5 + lVar3 * 8);
          do {
            *puVar1 = puVar1 + 1;
            uVar6 = uVar6 - 1;
            puVar1 = puVar1 + 1;
          } while (uVar6 != 0);
        }
      }
      pvVar2 = (void *)((long)pvVar5 + (ulong)param_2 * 8);
      *(undefined8 *)((long)pvVar5 + uVar7 * 8) = 0;
      param_1[3] = pvVar5;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        *(undefined4 *)param_1 = 0;
        *(uint *)((long)param_1 + 4) = param_2;
      }
    }
  }
  return;
}

