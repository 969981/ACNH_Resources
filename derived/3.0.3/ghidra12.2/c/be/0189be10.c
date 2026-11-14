
void FUN_0189be10(uint *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar2 = malloc(0x90);
    if (pvVar2 == (void *)0x0) goto LAB_0189be9c;
LAB_0189be80:
    uVar3 = 0x12;
    *(void **)(param_1 + 2) = pvVar2;
    *param_1 = 0x12;
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar7 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_0189be9c;
    }
    pvVar2 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x90,8);
    if (pvVar2 != (void *)0x0) goto LAB_0189be80;
LAB_0189be9c:
    uVar3 = *param_1;
    if ((int)uVar3 < 1) goto LAB_0189bf2c;
  }
  uVar6 = (ulong)uVar3;
  uVar4 = uVar6 & 3;
  if (uVar6 - 1 < 3) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      lVar7 = uVar5 * 8;
      uVar5 = uVar5 + 4;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar7) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar7 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar7 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar7 + 0x18) = 0;
    } while ((uVar6 & 0xfffffffc) != uVar5);
  }
  if ((uVar3 & 3) != 0) {
    lVar7 = uVar5 << 3;
    do {
      uVar4 = uVar4 - 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar7) = 0;
      lVar7 = lVar7 + 8;
    } while (uVar4 != 0);
  }
  uVar3 = *param_1;
LAB_0189bf2c:
  *(code **)(*(long *)(param_1 + 2) + (ulong)(1 < uVar3) * 8) = FUN_0189c140;
  *(code **)(*(long *)(param_1 + 2) + (ulong)(2 < *param_1) * 0x10) = FUN_0189c1d0;
  lVar7 = 0x18;
  if (*param_1 < 4) {
    lVar7 = 0;
  }
  *(code **)(*(long *)(param_1 + 2) + lVar7) = FUN_0189c260;
  *(undefined1 **)(*(long *)(param_1 + 2) + (ulong)(4 < *param_1) * 0x20) = &LAB_0189c2f0;
  lVar7 = 0x28;
  if (*param_1 < 6) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c2f0;
  lVar7 = 0x30;
  if (*param_1 < 7) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c2f0;
  lVar7 = 0x38;
  if (*param_1 < 8) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c380;
  *(undefined1 **)(*(long *)(param_1 + 2) + (ulong)(8 < *param_1) * 0x40) = &LAB_0189c380;
  lVar7 = 0x48;
  if (*param_1 < 10) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c380;
  lVar7 = 0x50;
  if (*param_1 < 0xb) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c410;
  lVar7 = 0x58;
  if (*param_1 < 0xc) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c5a0;
  **(undefined8 **)(param_1 + 2) = &LAB_0189c730;
  lVar7 = 0x60;
  if (*param_1 < 0xd) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c7c0;
  lVar7 = 0x68;
  if (*param_1 < 0xe) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c850;
  lVar7 = 0x78;
  if (*param_1 < 0x10) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189c8e0;
  lVar7 = 0x88;
  if (*param_1 < 0x12) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189ca60;
  *(undefined1 **)(*(long *)(param_1 + 2) + (ulong)(0x10 < *param_1) * 0x80) = &LAB_0189caf0;
  lVar7 = 0x70;
  if (*param_1 < 0xf) {
    lVar7 = 0;
  }
  *(undefined1 **)(*(long *)(param_1 + 2) + lVar7) = &LAB_0189cb80;
  return;
}

