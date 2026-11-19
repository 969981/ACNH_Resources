
void FUN_03b29470(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 8) = 0x2201f;
  *param_1 = &PTR_LAB_04b74998;
  param_1[1] = param_1 + 1;
  uVar3 = *(undefined1 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  FUN_03b227e0();
  lVar7 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
  lVar7 = FUN_03b185ec(param_3,lVar7 + (ulong)*(uint *)(lVar7 + 0xc),1);
  param_1[0xe] = lVar7;
  *(byte *)(lVar7 + 0x57) = *(byte *)(lVar7 + 0x57) | 0x10;
  *(byte *)(param_1[0xe] + 0x57) = *(byte *)(param_1[0xe] + 0x57) & 0xdf;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_LAB_04b746c8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar7 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x20);
  }
  else {
    plVar5 = param_4;
    if (param_4 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_03b295a8;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
LAB_03b295a8:
  FUN_03b1b070(pvVar6,*(undefined8 *)(param_2 + 0x80),param_3,param_4);
  param_1[0x10] = pvVar6;
  iVar2 = *(int *)((long)pvVar6 + 8);
  if (iVar2 != 0) {
    lVar7 = *(long *)((long)pvVar6 + 0x10);
    uVar8 = 0;
    do {
      lVar4 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x57) = *(byte *)(lVar4 + 0x57) | 0x10;
      }
      uVar1 = uVar8 + 1;
      uVar8 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
    pvVar6 = (void *)param_1[0x10];
    iVar2 = *(int *)((long)pvVar6 + 8);
    if (iVar2 != 0) {
      lVar7 = *(long *)((long)pvVar6 + 0x10);
      uVar8 = 0;
      do {
        lVar4 = *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x57) = *(byte *)(lVar4 + 0x57) & 0xdf;
        }
        uVar1 = uVar8 + 1;
        uVar8 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      pvVar6 = (void *)param_1[0x10];
    }
  }
  lVar7 = *(long *)((long)pvVar6 + 0x18);
  FUN_0035d98c(lVar7,0);
  *(undefined4 *)(lVar7 + 0x50) = 0;
  param_1[0xf] = param_1[9];
  return;
}

