
void FUN_02645730(byte *param_1,byte *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  *param_1 = local_24[0];
  lVar5 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar5 != 0) {
    lVar7 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(long *)(param_1 + 8) = lVar7 + 0x8538;
    if ((*(long **)(lVar7 + 0x8560) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x8560), puVar6 == (undefined8 *)0x0)) {
      iVar8 = 0;
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      iVar8 = *(int *)(param_1 + 0x10);
      uVar4 = uVar4 ^ 1;
    }
    lVar5 = 0;
    plVar1 = (long *)(*(long *)(lVar7 + 0x8548) + *(long *)(lVar7 + 0x8540));
    do {
      uVar3 = *(uint *)((long)plVar1 + lVar5 + 0xaf00);
      plVar2 = plVar1 + (ulong)uVar3 * 0xe;
      if (399 < uVar3) {
        plVar2 = plVar1;
      }
      if ((*plVar2 != 0) && (*(int *)((long)plVar2 + 0x2c) != 0 && (int)plVar2[2] != 0)) {
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 0x10) = iVar8;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x640);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x8560) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x8560) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

