
void FUN_008ea8f0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong local_50;
  undefined8 *local_48;
  
  puVar2 = PTR_DAT_04bb3058;
  uVar3 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                    (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),*(undefined8 *)(param_1 + 0xc0));
  if (((uVar3 & 1) != 0) && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_48,&local_50);
  puVar1 = PTR_DAT_04bb2698;
  if ((param_2 < local_48) || ((undefined8 *)(local_50 + (long)local_48) <= param_2)) {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar7 = (long)DAT_05ae7550 << 3;
        puVar6 = DAT_05ae7558;
        do {
          uVar3 = (**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_2);
          if ((uVar3 & 1) != 0) goto LAB_008ea980;
          puVar6 = puVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar7 = (long)DAT_05ae7580 << 3;
        puVar6 = DAT_05ae7588;
        do {
          uVar3 = (**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_2);
          if ((uVar3 & 1) != 0) goto LAB_008ea980;
          puVar6 = puVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    goto LAB_008eaaa0;
  }
LAB_008ea980:
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar6 = malloc(0x98);
  }
  else {
    plVar4 = *(long **)(*(long *)puVar2 + 0x330);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_008eaa74;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x98,8);
  }
LAB_008eaa74:
  *(undefined4 *)(puVar6 + 2) = 0x200400;
  *puVar6 = &DAT_04926938;
  puVar6[1] = (long)puVar6 + 0x14;
  FUN_008ea6d8(puVar6,param_2);
  param_2 = puVar6;
LAB_008eaaa0:
  *(undefined8 **)(param_1 + 0xc0) = param_2;
  return;
}

