
void FUN_03b25aa0(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  *(long *)(param_1 + 0x20) = param_5;
  uVar7 = 0;
  if (*(long *)(param_5 + 0x88) != 0) {
    uVar7 = (*(byte *)(*(long *)(param_5 + 0x88) + 0xe5) & 1) << 6;
  }
  *(long *)(param_1 + 0x58) = param_3;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffd7bf | uVar7;
  puVar2 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar5 = malloc(0x20);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_03b25b5c;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
LAB_03b25b5c:
  puVar3 = PTR_DAT_04bd1dc8;
  plVar12 = plVar5 + 2;
  *plVar12 = 0;
  *(undefined4 *)(plVar5 + 1) = 0;
  plVar5[3] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  *(long **)(param_1 + 0x48) = plVar5;
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    pvVar6 = malloc(0x20);
    if (pvVar6 != (void *)0x0) goto LAB_03b25bd4;
LAB_03b25bf0:
    uVar10 = (ulong)*(uint *)(plVar5 + 1);
    if ((int)*(uint *)(plVar5 + 1) < 1) goto LAB_03b25c78;
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar11 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) goto LAB_03b25bf0;
    }
    pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x20,8);
    if (pvVar6 == (void *)0x0) goto LAB_03b25bf0;
LAB_03b25bd4:
    uVar10 = 4;
    plVar5[2] = (long)pvVar6;
    *(undefined4 *)(plVar5 + 1) = 4;
  }
  uVar8 = uVar10 & 3;
  if (uVar10 - 1 < 3) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      lVar11 = uVar9 * 8;
      uVar9 = uVar9 + 4;
      *(undefined8 *)(*plVar12 + lVar11) = 0;
      *(undefined8 *)(*plVar12 + lVar11 + 8) = 0;
      *(undefined8 *)(*plVar12 + lVar11 + 0x10) = 0;
      *(undefined8 *)(*plVar12 + lVar11 + 0x18) = 0;
    } while ((uVar10 & 0xfffffffc) != uVar9);
  }
  if (uVar8 != 0) {
    lVar11 = uVar9 << 3;
    do {
      uVar8 = uVar8 - 1;
      *(undefined8 *)(*plVar12 + lVar11) = 0;
      lVar11 = lVar11 + 8;
    } while (uVar8 != 0);
  }
LAB_03b25c78:
  *(byte *)(param_4 + 0x57) = *(byte *)(param_4 + 0x57) & 0xdf | 0x10;
  lVar11 = *(long *)(param_1 + 0x48);
  **(long **)(lVar11 + 0x10) = param_4;
  if (*(long *)(lVar11 + 0x18) == 0) {
    *(long *)(lVar11 + 0x18) = param_4;
  }
  *(long *)(param_1 + 0x18) = param_3 + 0xb0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100;
  return;
}

