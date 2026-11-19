
void FUN_03b3c120(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar3 = PTR_DAT_04bb2698;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar6 = malloc(0x18);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar6 = (uint *)0x0;
        goto LAB_03b3c1b0;
      }
    }
    puVar6 = (uint *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
  }
LAB_03b3c1b0:
  *puVar6 = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0x3f800000;
  uVar2 = *(uint *)(param_1 + 4);
  uVar11 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    puVar6[4] = 0xbf800000;
    goto LAB_03b3c2f4;
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    pvVar7 = malloc(uVar11 << 2);
    if (pvVar7 == (void *)0x0) goto LAB_03b3c250;
LAB_03b3c224:
    *puVar6 = uVar2;
    *(void **)(puVar6 + 2) = pvVar7;
    puVar6[4] = 0xbf800000;
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar10 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) goto LAB_03b3c250;
    }
    pvVar7 = (void *)(**(code **)(*param_2 + 0x30))(param_2,uVar11 << 2,4);
    if (pvVar7 != (void *)0x0) goto LAB_03b3c224;
LAB_03b3c250:
    puVar6[4] = 0xbf800000;
    if ((*(long *)(puVar6 + 2) == 0) || (uVar11 = (ulong)*puVar6, (int)*puVar6 < 1))
    goto LAB_03b3c2f4;
  }
  uVar8 = uVar11 & 3;
  if (uVar11 - 1 < 3) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      lVar10 = uVar9 * 4;
      uVar9 = uVar9 + 4;
      *(undefined4 *)(*(long *)(puVar6 + 2) + lVar10) = 0xbf800000;
      *(undefined4 *)(*(long *)(puVar6 + 2) + lVar10 + 4) = 0xbf800000;
      *(undefined4 *)(*(long *)(puVar6 + 2) + lVar10 + 8) = 0xbf800000;
      *(undefined4 *)(*(long *)(puVar6 + 2) + lVar10 + 0xc) = 0xbf800000;
    } while ((uVar11 & 0xfffffffc) != uVar9);
  }
  if (uVar8 != 0) {
    lVar10 = uVar9 << 2;
    do {
      uVar8 = uVar8 - 1;
      *(undefined4 *)(*(long *)(puVar6 + 2) + lVar10) = 0xbf800000;
      lVar10 = lVar10 + 4;
    } while (uVar8 != 0);
  }
LAB_03b3c2f4:
  *(uint **)(param_3 + 0x40) = puVar6;
  return;
}

