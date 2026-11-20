
void FUN_03f45490(long param_1,uint param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  bVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  puVar3 = PTR_DAT_04bb3350;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | bVar4 & 1;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
  lVar8 = *(long *)(lVar5 + 0xa8);
  *(long **)(lVar5 + 0xa8) = param_3;
  if ((int)param_2 < 1) {
LAB_03f45540:
    param_2 = *(uint *)(param_1 + 0x128);
    if (param_2 == 0) goto LAB_03f455d4;
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      pvVar6 = malloc((ulong)param_2 << 3);
    }
    else {
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2 << 3,8);
    }
    if (pvVar6 == (void *)0x0) goto LAB_03f45540;
    *(uint *)(param_1 + 0x128) = param_2;
    *(void **)(param_1 + 0x130) = pvVar6;
  }
  lVar5 = *(long *)(param_1 + 0x130);
  uVar9 = 0;
  plVar2 = (long *)(param_1 + 0xf8) + (ulong)*(byte *)(param_1 + 9) * 3;
  if (1 < *(byte *)(param_1 + 9)) {
    plVar2 = (long *)(param_1 + 0xf8);
  }
  do {
    plVar1 = (long *)(lVar5 + ((long)((ulong)uVar9 << 0x20) >> 0x1d));
    (**(code **)*param_4)(param_4,plVar1);
    *(long *)(*plVar1 + 0xa0) = param_1;
    plVar1 = (long *)((long)*(int *)((long)plVar2 + 0x14) + *plVar1);
    lVar7 = *plVar2;
    *plVar2 = (long)plVar1;
    *plVar1 = lVar7;
    plVar1[1] = (long)plVar2;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar1;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
LAB_03f455d4:
  (**(code **)*param_4)(param_4,param_1 + 0x10);
  if (lVar8 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar8;
  }
  return;
}

