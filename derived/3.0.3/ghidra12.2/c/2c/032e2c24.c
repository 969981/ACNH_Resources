
/* WARNING: Removing unreachable block (ram,0x032e2d50) */
/* WARNING: Removing unreachable block (ram,0x032e2cfc) */
/* WARNING: Removing unreachable block (ram,0x032e2c68) */
/* WARNING: Removing unreachable block (ram,0x032e2d1c) */
/* WARNING: Removing unreachable block (ram,0x032e2dac) */

void FUN_032e2c24(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)*param_2;
  *(undefined4 *)((long)param_1 + 0x144) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 6);
  uVar1 = *(uint *)(param_2 + 5);
  if (0 < (int)uVar1) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar4 = malloc((ulong)uVar1 << 3);
    }
    else {
      plVar2 = (long *)*plVar7;
      if (plVar2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar2 = (long *)(lVar8 + 8);
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0xa8);
        }
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_032e2ce0;
      }
      pvVar4 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,(ulong)uVar1 << 3,8);
    }
    if (pvVar4 != (void *)0x0) {
      param_1[0x10] = (long)pvVar4;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      *(uint *)(param_1 + 0x11) = uVar1;
    }
  }
LAB_032e2ce0:
  nn::os::InitializeLightEvent(param_1 + 6,0,1);
  if (*plVar7 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,0x110,8);
  }
  puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar7 + 0x30))((long *)*plVar7,0x20,8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[2] = FUN_032e2e20;
    puVar6[3] = 0;
    *puVar6 = &PTR_LAB_04b1c328;
    puVar6[1] = param_1;
  }
  FUN_038e1f88(puVar5,param_2 + 1,*plVar7,*(undefined4 *)(param_2 + 3),1,0x7fffffff,
               *(undefined4 *)(param_2 + 4),0x20);
  puVar5[0x21] = puVar6;
  *puVar5 = &PTR_LAB_04b65360;
  plVar7 = (long *)*param_1;
  *param_1 = (long)puVar5;
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032e2df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 8))();
  return;
}

