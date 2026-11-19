
void FUN_03bc6ee0(long param_1,int *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  
  puVar3 = PTR_DAT_04bb2698;
  if (((*(char *)(param_1 + 8) != '\0') || (DAT_05aebb78 == 0)) ||
     (*(long *)(DAT_05aebb78 + 0x10) == 0)) {
    return;
  }
  lVar11 = *(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8);
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x10);
    if (lVar12 == 0) {
      uVar15 = 0;
      uVar14 = 0;
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    else {
      uVar14 = 0;
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar14 = *(uint *)(lVar12 + 8) & ((int)*(uint *)(lVar12 + 8) >> 0x1f ^ 0xffffffffU);
      }
      uVar15 = (ulong)uVar14;
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    if (lVar11 != 0) {
      uVar1 = 0;
      if (*(long *)(lVar11 + 0x10) != 0) {
        uVar1 = *(uint *)(lVar11 + 8);
      }
      if ((int)uVar14 <= (int)uVar1) {
        uVar14 = uVar1;
      }
      uVar15 = (ulong)uVar14;
    }
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar6 = malloc(uVar15 << 2);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar12 != 0) {
          plVar5 = (long *)(lVar12 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        pvVar6 = (void *)0x0;
        if (plVar5 == (long *)0x0) goto LAB_03bc6ff4;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar15 << 2,8);
    }
LAB_03bc6ff4:
    *(void **)(param_1 + 0x48) = pvVar6;
    *(int *)(param_1 + 0x50) = (int)uVar15;
    if ((int)uVar15 != 0) {
      lVar11 = 0;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar11 * 4) = 0x3f800000;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x50));
    }
  }
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    puVar7 = malloc(0x20);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar12 != 0) {
        plVar5 = (long *)(lVar12 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar7 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  *(undefined4 **)(param_1 + 0x38) = puVar7;
  FUN_03bc7c10(puVar7,param_3);
  FUN_03bc7350(param_1);
  if (*(long *)(param_2 + 2) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 2);
  }
  iVar16 = *param_2;
  if (0 < iVar16) {
    lVar11 = *(long *)puVar3;
    if (lVar11 == 0) {
      pvVar6 = malloc((long)iVar16 << 3);
    }
    else {
      plVar5 = param_3;
      if (param_3 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar12 != 0) {
          plVar5 = (long *)(lVar12 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03bc7118;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar16 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x18) = pvVar6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0x14) = iVar16;
    }
  }
LAB_03bc7118:
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar16 = 0;
    do {
      lVar11 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),param_3)
      ;
      if (*(char *)(lVar11 + 0x78) == '\0') {
        FUN_03bc4820(lVar11,param_3);
        (**(code **)(*(long *)(lVar11 + 8) + 0x10))((long *)(lVar11 + 8),&PTR_PTR_04c4be38);
        *(undefined1 *)(lVar11 + 0x78) = 1;
      }
      iVar10 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x10) < iVar10) {
        *(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = lVar11;
        iVar10 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar10);
  }
  puVar9 = (undefined8 *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while (puVar2 != puVar9) {
    puVar13 = (undefined8 *)puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar13;
  }
  *(undefined8 **)(param_1 + 0x20) = puVar9;
  *(undefined8 **)(param_1 + 0x28) = puVar9;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  if (param_4 == (long *)0x0) goto LAB_03bc7320;
  if (*(long *)puVar3 == 0) {
    plVar5 = malloc(0x18);
  }
  else {
    plVar5 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x18,8);
  }
  puVar4 = PTR_DAT_04bd20e0;
  *(undefined1 *)(plVar5 + 2) = 0;
  *(undefined4 *)((long)plVar5 + 0x14) = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[1] = 0;
  if (*(long *)puVar3 == 0) {
    plVar8 = malloc(0x18);
LAB_03bc72a4:
    puVar9 = malloc(0x100);
  }
  else {
    plVar8 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x18,8);
    if (*(long *)puVar3 == 0) goto LAB_03bc72a4;
    puVar9 = (undefined8 *)(**(code **)(*param_4 + 0x30))(param_4,0x100,8);
  }
  *(undefined8 *)((long)puVar9 + 0xf7) = 0;
  *puVar9 = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  plVar8[1] = (long)puVar9;
  *(undefined4 *)(plVar8 + 2) = 0x100;
  *(undefined1 *)((long)puVar9 + 0xff) = 0;
  *plVar8 = (long)(PTR_DAT_04bc9388 + 0x10);
  *(undefined1 *)plVar8[1] = 0;
  plVar5[1] = (long)plVar8;
  *(long **)(param_1 + 0xc0) = plVar5;
LAB_03bc7320:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

