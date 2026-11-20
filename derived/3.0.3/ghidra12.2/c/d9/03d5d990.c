
/* WARNING: Removing unreachable block (ram,0x03d5dcb0) */
/* WARNING: Removing unreachable block (ram,0x03d5dbd0) */
/* WARNING: Removing unreachable block (ram,0x03d5dc40) */
/* WARNING: Removing unreachable block (ram,0x03d5db9c) */
/* WARNING: Removing unreachable block (ram,0x03d5dce8) */
/* WARNING: Removing unreachable block (ram,0x03d5dd5c) */
/* WARNING: Removing unreachable block (ram,0x03d5dc78) */
/* WARNING: Removing unreachable block (ram,0x03d5dc08) */
/* WARNING: Removing unreachable block (ram,0x03d5dd20) */

void FUN_03d5d990(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_70;
  undefined *puStack_68;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = &DAT_040a3242;
    uVar6 = FUN_03c688b0(param_2,&local_70);
    *(undefined8 *)(param_1 + 0x208) = uVar6;
  }
  puVar5 = PTR_DAT_04bb3350;
  uVar11 = *(uint *)(param_1 + 0x1fc);
  if ((int)uVar11 < 1) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar9 = malloc((ulong)uVar11 << 3);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_03d5da6c;
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar11 << 3,8);
  }
  if (pvVar9 != (void *)0x0) {
    *(uint *)(param_1 + 0x220) = uVar11;
    *(void **)(param_1 + 0x228) = pvVar9;
  }
LAB_03d5da6c:
  if (0 < *(int *)(param_1 + 0x1fc)) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bd4550 + 0x10;
    puVar2 = PTR_DAT_04bd4548 + 0x10;
    do {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        plVar8 = malloc(0x188);
      }
      else {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        puVar4 = (undefined8 *)(lVar10 + 8);
        if (lVar7 != 0) {
          puVar4 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x188,8);
      }
      lVar10 = *(long *)(param_1 + 0x208);
      plVar8[3] = 0;
      plVar8[4] = -0x200000000;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *(undefined2 *)(plVar8 + 7) = 0;
      *(undefined4 *)((long)plVar8 + 0x3a) = 0x1000001;
      *(undefined2 *)((long)plVar8 + 0x3e) = 1;
      *(undefined1 *)(plVar8 + 8) = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      memset(plVar8 + 10,0,0x118);
      plVar8[9] = (long)puVar1;
      plVar8[0xd] = (long)puVar1;
      plVar8[0x11] = (long)puVar1;
      plVar8[0x15] = (long)puVar1;
      plVar8[0x19] = (long)puVar1;
      plVar8[0x1d] = (long)puVar1;
      plVar8[0x21] = (long)puVar1;
      plVar8[0x25] = (long)puVar1;
      plVar8[0x29] = (long)puVar1;
      *plVar8 = (long)puVar2;
      plVar8[0x2f] = lVar10;
      *(undefined4 *)(plVar8 + 0x30) = 0;
      *(undefined1 *)((long)plVar8 + 0x184) = 0;
      plVar8[0x2d] = 0;
      plVar8[0x2e] = 0x400000000;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      *(long **)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8) = plVar8;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0x58) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x60) = 0;
      *(undefined ***)(lVar10 + 0x48) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x50) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0x78) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x80) = 0;
      *(undefined ***)(lVar10 + 0x68) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x70) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0x98) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0xa0) = 0;
      *(undefined ***)(lVar10 + 0x88) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x90) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0xb8) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0xc0) = 0;
      *(undefined ***)(lVar10 + 0xa8) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0xb0) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0xd8) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0xe0) = 0;
      *(undefined ***)(lVar10 + 200) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0xd0) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0xf8) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *(undefined ***)(lVar10 + 0xe8) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0xf0) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0x118) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x120) = 0;
      *(undefined ***)(lVar10 + 0x108) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x110) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      *(code **)(lVar10 + 0x138) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x140) = 0;
      *(undefined ***)(lVar10 + 0x128) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x130) = param_1;
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x220) <= uVar11) {
        uVar3 = 0;
      }
      uVar11 = uVar11 + 1;
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar3 * 8);
      local_70 = (undefined *)CONCAT44((int)((ulong)local_70 >> 0x20),8);
      *(code **)(lVar10 + 0x158) = FUN_03d5ddb0;
      *(undefined8 *)(lVar10 + 0x160) = 0;
      *(undefined ***)(lVar10 + 0x148) = &PTR_LAB_04b8fc88;
      *(long *)(lVar10 + 0x150) = param_1;
    } while ((int)uVar11 < *(int *)(param_1 + 0x1fc));
  }
  return;
}

