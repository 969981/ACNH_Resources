
void FUN_039e84f0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  size_t __size;
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  void *pvVar8;
  long lVar9;
  ulong *puVar10;
  
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar2) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    __size = (ulong)uVar2 * 0x2e8 + 8;
    if (lVar9 == 0) {
      puVar7 = malloc(__size);
    }
    else {
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_039e85d0;
      }
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (puVar7 != (ulong *)0x0) {
      lVar9 = (ulong)uVar2 * 0x2e8;
      *puVar7 = (ulong)uVar2;
      puVar10 = puVar7 + 1;
      do {
        FUN_039e8e20(puVar10);
        puVar10 = puVar10 + 0x5d;
        lVar9 = lVar9 + -0x2e8;
      } while (lVar9 != 0);
      *(uint *)(param_1 + 0x1d8) = uVar2;
      *(ulong **)(param_1 + 0x1e0) = puVar7 + 1;
    }
  }
LAB_039e85d0:
  iVar3 = *(int *)(param_2 + 8);
  if (0 < iVar3) {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      pvVar8 = malloc((long)iVar3 << 3);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar9 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_4 = (long *)*puVar1;
        if (param_4 == (long *)0x0) {
          return;
        }
      }
      pvVar8 = (void *)(**(code **)(*param_4 + 0x30))(param_4,(long)iVar3 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0x1f0) = pvVar8;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      *(int *)(param_1 + 0x1ec) = iVar3;
    }
  }
  return;
}

