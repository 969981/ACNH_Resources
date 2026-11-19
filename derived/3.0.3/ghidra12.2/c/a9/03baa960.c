
void FUN_03baa960(long param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  size_t __size;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if (param_2 < 1) goto LAB_03baab04;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc((long)(param_2 * 0x1c8));
joined_r0x03baaa08:
    if (pvVar6 != (void *)0x0) {
      uVar2 = param_2 - 1;
      *(void **)(param_1 + 0x38) = pvVar6;
      if (param_2 == 0 || uVar2 == 0) {
        uVar7 = (ulong)(uVar2 * 0x39);
      }
      else {
        if (uVar2 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          plVar5 = (long *)((long)pvVar6 + 0x1c8);
          do {
            uVar7 = uVar7 + 2;
            plVar5[-0x39] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 0x39);
            plVar5 = plVar5 + 0x72;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
        }
        if ((uVar2 & 1) != 0) {
          plVar5 = (long *)((long)pvVar6 + uVar7 * 0x1c8);
          *plVar5 = (long)(plVar5 + 0x39);
        }
        uVar7 = (ulong)(int)(uVar2 * 0x39);
      }
      *(undefined8 *)((long)pvVar6 + uVar7 * 8) = 0;
      *(void **)(param_1 + 0x40) = pvVar6;
      *(int *)(param_1 + 0x48) = param_2;
    }
    lVar8 = *(long *)puVar3;
    __size = (size_t)(param_2 << 3);
    if (lVar8 == 0) goto LAB_03baab28;
    if (param_3 == (long *)0x0) {
LAB_03baaab4:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar8 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*puVar1;
      if (param_3 == (long *)0x0) goto LAB_03baab04;
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
  else {
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03baa9e4:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(param_2 * 0x1c8),8);
      goto joined_r0x03baaa08;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03baa9e4;
    lVar8 = *(long *)puVar3;
    __size = (size_t)(param_2 << 3);
    if (lVar8 != 0) goto LAB_03baaab4;
LAB_03baab28:
    pvVar6 = malloc(__size);
  }
  if (pvVar6 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar6;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x14) = param_2;
  }
LAB_03baab04:
  *(undefined4 *)(param_1 + 100) = 0x58;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

