
void FUN_015f84c4(long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  size_t __size;
  int *piVar9;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x88);
  uVar3 = *(int *)(&LAB_007a12a0 + lVar8) * *(int *)(&LAB_007a129c + lVar8) *
          *(int *)(&LAB_007a12a4 + lVar8);
  *(uint *)(param_1 + 0x3b0) = uVar3;
  puVar2 = PTR_DAT_04bb2698;
  __size = -(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5;
  if ((int)uVar3 < 0) {
    __size = 0xffffffffffffffff;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar7 = malloc(__size);
    *(void **)(param_1 + 0x290) = pvVar7;
LAB_015f8598:
    pvVar7 = malloc(0x2000);
    *(void **)(param_1 + 0x2a0) = pvVar7;
LAB_015f85a4:
    pvVar7 = malloc(0x2000);
    *(void **)(param_1 + 0x298) = pvVar7;
LAB_015f85b0:
    pvVar7 = malloc(0x2000);
    *(void **)(param_1 + 0x2a8) = pvVar7;
LAB_015f85bc:
    pvVar7 = malloc(0x2000);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_015f8560;
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x290) = 0;
      if (lVar8 == 0) goto LAB_015f8598;
LAB_015f8c4c:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_015f8c78;
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      if (lVar8 == 0) goto LAB_015f85a4;
LAB_015f8cb0:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_015f8cdc;
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x298) = 0;
      if (lVar8 == 0) goto LAB_015f85b0;
LAB_015f8d14:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_015f8d40;
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      if (lVar8 == 0) goto LAB_015f85bc;
LAB_015f8d78:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar7 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_015f85c4;
    }
    else {
LAB_015f8560:
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x290) = uVar6;
      if (lVar8 == 0) goto LAB_015f8598;
      plVar5 = param_3;
      if (param_3 == (long *)0x0) goto LAB_015f8c4c;
LAB_015f8c78:
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,0x2000,8);
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x2a0) = uVar6;
      if (lVar8 == 0) goto LAB_015f85a4;
      plVar5 = param_3;
      if (param_3 == (long *)0x0) goto LAB_015f8cb0;
LAB_015f8cdc:
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,0x2000,8);
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x298) = uVar6;
      if (lVar8 == 0) goto LAB_015f85b0;
      plVar5 = param_3;
      if (param_3 == (long *)0x0) goto LAB_015f8d14;
LAB_015f8d40:
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,0x2000,8);
      lVar8 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x2a8) = uVar6;
      if (lVar8 == 0) goto LAB_015f85bc;
      plVar5 = param_3;
      if (param_3 == (long *)0x0) goto LAB_015f8d78;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2000,8);
  }
LAB_015f85c4:
  lVar8 = param_1 + 0x2b8;
  *(void **)(param_1 + 0x2b0) = pvVar7;
  FUN_0390d714(lVar8,5,param_3);
  piVar9 = (int *)(**(long **)(param_1 + 0x2c0) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x2c0) + 10) * 0xc);
  *piVar9 = *(int *)(param_1 + 0x3b0);
  *(undefined1 *)(piVar9 + 2) = 0x12;
  *(undefined2 *)((long)piVar9 + 6) = 8;
  uVar3 = *(int *)(param_1 + 0x2e8) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x2e8) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x2e8) =
       *(int *)(param_1 + 0x2e8) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x2c0) + 10) = *(short *)(*(long *)(param_1 + 0x2c0) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x2c0);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x2e8)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x2e8) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x2e8) =
       *(int *)(param_1 + 0x2e8) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x2c0) + 10) = *(short *)(*(long *)(param_1 + 0x2c0) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x2c0);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x2e8)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x2e8) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x2e8) =
       *(int *)(param_1 + 0x2e8) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x2c0) + 10) = *(short *)(*(long *)(param_1 + 0x2c0) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x2c0);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x2e8)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x2e8) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x2e8) =
       *(int *)(param_1 + 0x2e8) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x2c0) + 10) = *(short *)(*(long *)(param_1 + 0x2c0) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x2c0);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x2b8) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x2e8)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x2e8) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x2e8) =
       *(int *)(param_1 + 0x2e8) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x2c0) + 10) = *(short *)(*(long *)(param_1 + 0x2c0) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x2c0) + 10) == *(short *)(*(long *)(param_1 + 0x2c0) + 8)) {
    *(uint *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(lVar8,param_3,2,1);
  lVar8 = param_1 + 0x330;
  FUN_0390d714(lVar8,5,param_3);
  piVar9 = (int *)(**(long **)(param_1 + 0x338) +
                  (ulong)*(ushort *)((long)*(long **)(param_1 + 0x338) + 10) * 0xc);
  *piVar9 = *(int *)(param_1 + 0x3b0);
  *(undefined1 *)(piVar9 + 2) = 0x12;
  *(undefined2 *)((long)piVar9 + 6) = 8;
  uVar3 = *(int *)(param_1 + 0x360) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x360) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x360) =
       *(int *)(param_1 + 0x360) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x338) + 10) = *(short *)(*(long *)(param_1 + 0x338) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x338);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x330) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x360)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x360) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x360) =
       *(int *)(param_1 + 0x360) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x338) + 10) = *(short *)(*(long *)(param_1 + 0x338) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x338);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x330) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x360)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x360) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x360) =
       *(int *)(param_1 + 0x360) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x338) + 10) = *(short *)(*(long *)(param_1 + 0x338) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x338);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x330) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x360)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x360) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x360) =
       *(int *)(param_1 + 0x360) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x338) + 10) = *(short *)(*(long *)(param_1 + 0x338) + 10) + 1;
  plVar5 = *(long **)(param_1 + 0x338);
  uVar1 = *(ushort *)((long)plVar5 + 10);
  if (uVar1 == *(ushort *)(plVar5 + 1)) {
    *(uint *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 0x1fU & 0xffffffe0;
    uVar1 = *(ushort *)((long)plVar5 + 10);
  }
  piVar9 = (int *)(*plVar5 + (ulong)uVar1 * 0xc);
  *(undefined1 *)(piVar9 + 2) = 6;
  *piVar9 = 0x200;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x330) + 0x18))(lVar8,6);
  *(ushort *)((long)piVar9 + 6) = (ushort)uVar3 & 0xff;
  uVar3 = ((uVar3 & 0xff) * 4 + *(int *)(param_1 + 0x360)) - 1 & (uVar3 & 0xff) * -4;
  *(uint *)(param_1 + 0x360) = uVar3;
  *(short *)(piVar9 + 1) = (short)uVar3;
  *(uint *)(param_1 + 0x360) =
       *(int *)(param_1 + 0x360) + (uint)*(ushort *)((long)piVar9 + 6) * *piVar9 * 4;
  *(short *)(*(long *)(param_1 + 0x338) + 10) = *(short *)(*(long *)(param_1 + 0x338) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x338) + 10) == *(short *)(*(long *)(param_1 + 0x338) + 8)) {
    *(uint *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(lVar8,param_3,2,1);
  return;
}

