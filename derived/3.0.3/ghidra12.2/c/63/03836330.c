
uint FUN_03836330(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  uVar3 = (**(code **)(*param_1 + 0x20))();
  lVar8 = DAT_05ae7600;
  puVar2 = PTR_DAT_04bb3350;
  plVar9 = *(long **)(param_2 + 8);
  uVar4 = uVar3 - 1;
  if ((int)uVar3 < 1) goto LAB_03836460;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc((long)(int)(uVar3 * 0x38));
joined_r0x038363ec:
    if (pvVar6 != (void *)0x0) {
      *(uint *)((long)param_1 + 0x2c) = uVar3;
      param_1[3] = (long)pvVar6;
      if (1 < uVar3) {
        if (uVar4 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          plVar9 = (long *)((long)pvVar6 + 0x38);
          do {
            uVar7 = uVar7 + 2;
            plVar9[-7] = (long)plVar9;
            *plVar9 = (long)(plVar9 + 7);
            plVar9 = plVar9 + 0xe;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar7);
        }
        if ((uVar4 & 1) != 0) {
          plVar9 = (long *)((long)pvVar6 + uVar7 * 0x38);
          *plVar9 = (long)(plVar9 + 7);
        }
      }
      *(undefined8 *)((long)pvVar6 + (long)(int)(uVar4 * 7) * 8) = 0;
      param_1[4] = (long)pvVar6;
    }
  }
  else {
    if (plVar9 != (long *)0x0) {
LAB_038363c4:
      pvVar6 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(long)(int)(uVar3 * 0x38),8);
      goto joined_r0x038363ec;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar9 = (long *)*puVar1;
    if (plVar9 != (long *)0x0) goto LAB_038363c4;
  }
  plVar9 = *(long **)(param_2 + 8);
LAB_03836460:
  if (plVar9 == (long *)0x0) {
    lVar8 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar8 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar9;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  if (lVar8 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar8;
  }
  return uVar4 & 1;
}

