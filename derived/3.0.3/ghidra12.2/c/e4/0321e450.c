
void FUN_0321e450(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  param_1[6] = 0;
  *param_1 = &PTR_FUN_04b10848;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xffffffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0x15] = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (lVar10 == 0) {
    pvVar5 = malloc(0x4000);
joined_r0x0321e538:
    if (pvVar5 != (void *)0x0) {
      lVar10 = 0x3ff;
      param_1[3] = pvVar5;
      plVar4 = (long *)((long)pvVar5 + 0x10);
      do {
        lVar10 = lVar10 + -3;
        plVar4[-2] = (long)(plVar4 + -1);
        plVar4[-1] = (long)plVar4;
        *plVar4 = (long)(plVar4 + 1);
        plVar4 = plVar4 + 3;
      } while (lVar10 != 0);
      *(undefined8 *)((long)pvVar5 + 0x1ff8) = 0;
      param_1[4] = pvVar5;
      if ((long)pvVar5 + 0x2000 != 0) {
        param_1[1] = 0x40000000000;
        param_1[2] = (long)pvVar5 + 0x2000;
      }
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x4000,8);
      goto joined_r0x0321e538;
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar5 = malloc(0x800);
joined_r0x0321e5dc:
    if (pvVar5 != (void *)0x0) {
      uVar6 = 0x400;
      param_1[6] = pvVar5;
      *(undefined4 *)(param_1 + 5) = 0x400;
      goto LAB_0321e5ec;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x800,8);
      goto joined_r0x0321e5dc;
    }
  }
  uVar6 = *(uint *)(param_1 + 5);
  if ((int)uVar6 < 1) {
    return;
  }
LAB_0321e5ec:
  uVar9 = (ulong)uVar6;
  uVar7 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      lVar10 = uVar8 * 2;
      uVar8 = uVar8 + 4;
      *(undefined2 *)(param_1[6] + lVar10) = 0xffff;
      *(undefined2 *)(param_1[6] + lVar10 + 2) = 0xffff;
      *(undefined2 *)(param_1[6] + lVar10 + 4) = 0xffff;
      *(undefined2 *)(param_1[6] + lVar10 + 6) = 0xffff;
    } while ((uVar9 & 0xfffffffc) != uVar8);
  }
  if ((uVar6 & 3) != 0) {
    lVar10 = uVar8 << 1;
    do {
      uVar7 = uVar7 - 1;
      *(undefined2 *)(param_1[6] + lVar10) = 0xffff;
      lVar10 = lVar10 + 2;
    } while (uVar7 != 0);
  }
  return;
}

