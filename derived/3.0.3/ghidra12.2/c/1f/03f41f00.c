
undefined8 FUN_03f41f00(long param_1,byte *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  ulong *puVar6;
  ulong __size;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 == 0) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar5 = malloc((ulong)uVar1 << 3);
  }
  else {
    plVar3 = *(long **)(param_2 + 8);
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,(ulong)uVar1 << 3,8);
  }
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  *(void **)(param_1 + 0x70) = pvVar5;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x6c) = (uint)uVar1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | *param_2;
  uVar1 = *(ushort *)(param_2 + 2);
  uVar8 = (ulong)uVar1;
  if (uVar1 - 0x101 < 0xffffff00) {
    return 0;
  }
  lVar10 = *(long *)puVar2;
  __size = uVar8 << 6 | 8;
  if (lVar10 == 0) {
    puVar6 = malloc(__size);
    if (puVar6 == (ulong *)0x0) goto LAB_03f42098;
LAB_03f4201c:
    puVar7 = puVar6 + 1;
    *puVar6 = uVar8;
    puVar6 = puVar7;
    do {
      *(undefined1 *)puVar6 = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[1] = 0;
      puVar6[2] = (ulong)&PTR_FUN_04b651b0;
      nn::os::InitializeLightEvent(puVar6 + 6,0,0);
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar7 + uVar8 * 8);
    *(uint *)(param_1 + 0x28) = (uint)uVar1;
    *(ulong **)(param_1 + 0x30) = puVar7;
    if (uVar1 == 0) goto LAB_03f420d0;
  }
  else {
    plVar3 = *(long **)(param_2 + 8);
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_03f42098;
    }
    puVar6 = (ulong *)(**(code **)(*plVar3 + 0x30))(plVar3,__size,8);
    if (puVar6 != (ulong *)0x0) goto LAB_03f4201c;
LAB_03f42098:
    uVar8 = (ulong)*(uint *)(param_1 + 0x28);
    puVar7 = *(ulong **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x28) == 0) goto LAB_03f420d0;
  }
  uVar9 = 0;
  do {
    nn::os::SignalLightEvent
              ((LightEventType *)((long)puVar7 + ((long)((ulong)uVar9 << 0x20) >> 0x1a) + 0x30));
    uVar9 = uVar9 + 1;
  } while ((uint)uVar8 != uVar9);
LAB_03f420d0:
  nn::os::InitializeLightEvent((LightEventType *)(param_1 + 0x58),0,0);
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}

