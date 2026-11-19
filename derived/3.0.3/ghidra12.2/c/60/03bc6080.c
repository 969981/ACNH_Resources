
void FUN_03bc6080(uint *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  uVar8 = 0x40;
  if (*PTR_DAT_04bd22e0 != '\0') {
    uVar8 = 0x80;
  }
  if (lVar10 == 0) {
    pvVar6 = malloc((ulong)(uVar8 << 3));
joined_r0x03bc6130:
    if (pvVar6 != (void *)0x0) {
      *param_1 = uVar8;
      *(void **)(param_1 + 2) = pvVar6;
      goto LAB_03bc6140;
    }
  }
  else {
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03bc6104:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)(uVar8 << 3),8);
      goto joined_r0x03bc6130;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03bc6104;
  }
  if ((int)*param_1 < 1) {
    return;
  }
LAB_03bc6140:
  uVar8 = 0;
  do {
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
      puVar7 = malloc(0x18);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar10 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,0x20);
    }
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = 0;
    *(undefined8 *)((long)puVar7 + 0xc) = 0x7f7fffff7f7fffff;
    *(undefined1 *)((long)puVar7 + 0x14) = 0;
    uVar9 = uVar8;
    if (*param_1 <= uVar8) {
      uVar9 = 0;
    }
    uVar8 = uVar8 + 1;
    *(undefined8 **)(*(long *)(param_1 + 2) + (ulong)uVar9 * 8) = puVar7;
    uVar9 = *param_1;
  } while ((int)uVar8 < (int)uVar9);
  if (0 < (int)uVar9) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar9 <= uVar8) {
        uVar1 = 0;
      }
      uVar8 = uVar8 + 1;
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
      *puVar7 = 0;
      puVar7[1] = 0x7f7fffff00000000;
      *(undefined4 *)(puVar7 + 2) = 0x7f7fffff;
      *(undefined1 *)((long)puVar7 + 0x14) = 0;
      uVar9 = *param_1;
    } while ((int)uVar8 < (int)uVar9);
  }
  return;
}

