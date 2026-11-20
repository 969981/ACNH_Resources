
void FUN_03f107e0(long param_1,long *param_2,undefined8 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = param_4 - 1;
  DAT_05b05400 = param_1;
  if ((int)param_4 < 1) {
LAB_03f10908:
    *(undefined4 *)(param_1 + 0x264) = param_5;
    lVar8 = *(long *)puVar3;
    *(undefined4 *)(param_1 + 0x268) = param_6;
    *(undefined4 *)(param_1 + 0x26c) = param_7;
    if (lVar8 == 0) goto LAB_03f109b0;
    if (param_2 == (long *)0x0) {
LAB_03f10924:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar8 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) goto LAB_03f10974;
    }
    pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x200,8);
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar6 = malloc((long)(int)(param_4 * 0x48));
joined_r0x03f10898:
      if (pvVar6 != (void *)0x0) {
        *(uint *)(param_1 + 0x254) = param_4;
        *(void **)(param_1 + 0x240) = pvVar6;
        if (1 < param_4) {
          if (uVar2 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            plVar5 = (long *)((long)pvVar6 + 0x48);
            do {
              uVar7 = uVar7 + 2;
              plVar5[-9] = (long)plVar5;
              *plVar5 = (long)(plVar5 + 9);
              plVar5 = plVar5 + 0x12;
            } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
          }
          if ((uVar2 & 1) != 0) {
            plVar5 = (long *)((long)pvVar6 + uVar7 * 0x48);
            *plVar5 = (long)(plVar5 + 9);
          }
        }
        *(undefined8 *)((long)pvVar6 + (long)(int)(uVar2 * 9) * 8) = 0;
        *(void **)(param_1 + 0x248) = pvVar6;
      }
      goto LAB_03f10908;
    }
    plVar5 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03f10874:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(param_4 * 0x48),8);
      goto joined_r0x03f10898;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03f10874;
    *(undefined4 *)(param_1 + 0x264) = param_5;
    lVar8 = *(long *)puVar3;
    *(undefined4 *)(param_1 + 0x268) = param_6;
    *(undefined4 *)(param_1 + 0x26c) = param_7;
    if (lVar8 != 0) goto LAB_03f10924;
LAB_03f109b0:
    pvVar6 = malloc(0x200);
  }
  if (pvVar6 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x270) = 0x4000000000;
    *(void **)(param_1 + 0x278) = pvVar6;
  }
LAB_03f10974:
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}

