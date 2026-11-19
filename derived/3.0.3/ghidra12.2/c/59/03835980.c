
void FUN_03835980(long param_1,uint *param_2)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = param_2[2];
  if (0 < (int)uVar2) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      pvVar7 = malloc((long)(int)uVar2 << 3);
    }
    else {
      plVar5 = *(long **)(param_2 + 4);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar12 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03835a14;
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)uVar2 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar7;
      *(undefined4 *)(param_1 + 8) = 0;
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
LAB_03835a14:
  uVar2 = *param_2;
  if ((int)uVar2 < 1) goto LAB_03835bd0;
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) {
    pvVar7 = malloc((long)(int)uVar2 << 3);
joined_r0x03835b0c:
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x20) = pvVar7;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x1c) = uVar2;
    }
  }
  else {
    plVar5 = *(long **)(param_2 + 4);
    if (plVar5 != (long *)0x0) {
LAB_03835a64:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)uVar2 << 3,8);
      goto joined_r0x03835b0c;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03835a64;
  }
  uVar2 = *param_2;
  if (0 < (int)uVar2) {
    lVar12 = *(long *)puVar4;
    __size = (ulong)uVar2 * 0x58 + 8;
    if (lVar12 == 0) {
      puVar8 = malloc(__size);
    }
    else {
      plVar5 = *(long **)(param_2 + 4);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar12 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03835bd0;
      }
      puVar8 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (puVar8 != (ulong *)0x0) {
      puVar9 = puVar8 + 1;
      *puVar8 = (ulong)uVar2;
      uVar11 = (ulong)uVar2 * 0x58 - 0x58;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      puVar10 = puVar9;
      if ((SUB164(auVar3 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 4 & 1) == 0) {
        *(undefined1 *)((long)puVar8 + 0x1c) = 0;
        puVar8[2] = (ulong)((long)puVar8 + 0x1c);
        *(undefined4 *)(puVar8 + 3) = 0x40;
        *(undefined1 *)((long)puVar8 + 0x5b) = 0;
        puVar8[1] = (ulong)(PTR_DAT_04bb2bc0 + 0x10);
        puVar10 = puVar8 + 0xc;
      }
      if (0x57 < uVar11) {
        puVar1 = PTR_DAT_04bb2bc0 + 0x10;
        do {
          *(undefined4 *)(puVar10 + 2) = 0x40;
          *(undefined1 *)((long)puVar10 + 0x53) = 0;
          *(undefined1 *)((long)puVar10 + 0x14) = 0;
          *(undefined4 *)(puVar10 + 0xd) = 0x40;
          *(undefined1 *)((long)puVar10 + 0xab) = 0;
          *puVar10 = (ulong)puVar1;
          puVar10[1] = (ulong)((long)puVar10 + 0x14);
          *(undefined1 *)((long)puVar10 + 0x6c) = 0;
          puVar10[0xb] = (ulong)puVar1;
          puVar10[0xc] = (ulong)((long)puVar10 + 0x6c);
          puVar10 = puVar10 + 0x16;
        } while (puVar10 != puVar9 + (ulong)uVar2 * 0xb);
      }
      *(uint *)(param_1 + 0x38) = uVar2;
      *(ulong **)(param_1 + 0x40) = puVar9;
    }
  }
LAB_03835bd0:
  uVar2 = param_2[1];
  if (0 < (int)uVar2) {
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
      pvVar7 = malloc((long)(int)uVar2 << 3);
    }
    else {
      plVar5 = *(long **)(param_2 + 4);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar12 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)uVar2 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x30) = pvVar7;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(uint *)(param_1 + 0x2c) = uVar2;
    }
  }
  return;
}

