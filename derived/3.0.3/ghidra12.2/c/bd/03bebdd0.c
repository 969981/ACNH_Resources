
void FUN_03bebdd0(long param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  sVar10 = (param_2 & 0xffffffff) << 3;
  uVar9 = (uint)param_2;
  if (lVar11 == 0) {
    pvVar6 = malloc(sVar10);
    *(void **)(param_1 + 0x40) = pvVar6;
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar11 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      uVar5 = 0;
      if (plVar4 != (long *)0x0) goto LAB_03bebe40;
    }
    else {
LAB_03bebe40:
      uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,sVar10,8);
    }
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  if (uVar9 != 0) {
    uVar7 = param_2 & 3;
    if (uVar9 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar11 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar11) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar11 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar11 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar11 + 0x18) = 0;
      } while ((param_2 & 0xfffffffc) != uVar8);
    }
    if (uVar7 != 0) {
      lVar11 = uVar8 << 3;
      do {
        uVar7 = uVar7 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar11) = 0;
        lVar11 = lVar11 + 8;
      } while (uVar7 != 0);
    }
  }
  sVar10 = (param_2 & 0xffffffff) << 2;
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    pvVar6 = malloc(sVar10);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar11 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03bebf50;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar10,8);
  }
LAB_03bebf50:
  *(void **)(param_1 + 0x48) = pvVar6;
  *(uint *)(param_1 + 0x3c) = uVar9;
  return;
}

