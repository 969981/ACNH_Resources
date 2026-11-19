
void FUN_03bc0d30(long param_1,uint *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  uVar2 = *param_2;
  uVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar7 = malloc((long)(int)uVar2 * 0x70);
    }
    else {
      plVar6 = param_3;
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03bc0e50;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)(int)uVar2 * 0x70,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x28) = pvVar7;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar6 = (long *)((long)pvVar7 + 0x70);
          do {
            uVar8 = uVar8 + 2;
            plVar6[-0xe] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0xe);
            plVar6 = plVar6 + 0x1c;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar7 + uVar8 * 0x70);
          *plVar6 = (long)(plVar6 + 0xe);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar3 * 0xe) * 8) = 0;
      *(void **)(param_1 + 0x30) = pvVar7;
      *(uint *)(param_1 + 0x38) = uVar2;
    }
  }
LAB_03bc0e50:
  uVar2 = param_2[1];
  uVar3 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      pvVar7 = malloc((long)(int)uVar2 * 0xa8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar9 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_03bc0f38;
      }
      pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)uVar2 * 0xa8,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x58) = pvVar7;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          plVar6 = (long *)((long)pvVar7 + 0xa8);
          do {
            uVar8 = uVar8 + 2;
            plVar6[-0x15] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0x15);
            plVar6 = plVar6 + 0x2a;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar8);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar7 + uVar8 * 0xa8);
          *plVar6 = (long)(plVar6 + 0x15);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar3 * 0x15) * 8) = 0;
      *(void **)(param_1 + 0x60) = pvVar7;
      *(uint *)(param_1 + 0x68) = uVar2;
    }
  }
LAB_03bc0f38:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

