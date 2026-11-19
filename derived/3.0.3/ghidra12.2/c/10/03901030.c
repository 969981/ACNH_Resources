
void FUN_03901030(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong __size;
  ulong uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_2 + 1);
  uVar8 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    __size = uVar8 << 7 | 8;
    if (lVar9 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03901128;
      }
      puVar6 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      *puVar6 = uVar8;
      puVar1 = PTR_DAT_04bd0fb0 + 0x10;
      lVar9 = 0;
      do {
        lVar5 = lVar9 + 0x80;
        *(undefined4 *)((long)puVar6 + lVar9 + 0x40) = 0x10001;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x30) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x38) = 0;
        *(undefined1 *)((long)puVar6 + lVar9 + 0x44) = 0;
        *(undefined **)((long)puVar6 + lVar9 + 8) = puVar1;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x20) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x28) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x10) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x18) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x78) = 0;
        *(undefined8 *)((long)puVar6 + lVar9 + 0x80) = 0x4000000001;
        lVar9 = lVar5;
      } while (uVar8 * 0x80 != lVar5);
      *(uint *)(param_1 + 0x40) = uVar2;
      *(ulong **)(param_1 + 0x48) = puVar6 + 1;
    }
  }
LAB_03901128:
  lVar5 = param_2[2];
  lVar9 = *param_2;
  if (lVar9 == 0) {
    lVar7 = *(long *)puVar3;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar9 != 0) {
      plVar4 = (long *)(lVar9 + 0xa8);
    }
    lVar9 = *plVar4;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  if (lVar5 != 0) {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 8,lVar9,lVar5,0x20,0x200);
  }
  *(undefined2 *)(param_1 + 0x32) = 0x200;
  return;
}

