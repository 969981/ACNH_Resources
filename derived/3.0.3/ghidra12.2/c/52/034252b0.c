
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_034252b0(byte *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int local_70;
  undefined8 local_6c;
  byte local_64 [4];
  
  if (param_3 == 0) {
    return 1;
  }
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar4 == 0) {
    return 1;
  }
  lVar13 = lVar4 + 0x194b0;
  plVar11 = (long *)(lVar4 + 0x194b8);
  lVar6 = *plVar11;
  if (lVar6 == 0) {
    plVar7 = *(long **)(*(long *)(DAT_05574040 + 0x20) + 0x108);
    lVar2 = *(long *)(DAT_05574040 + 0x20);
  }
  else {
    plVar7 = *(long **)(lVar4 + 0x195b8);
    lVar2 = lVar13;
  }
  if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(code *)**(undefined8 **)*plVar7)();
    lVar6 = *plVar11;
    uVar8 = uVar8 & 0xffffffff;
  }
  if (lVar6 == 0) {
    plVar7 = *(long **)(*(long *)(DAT_05574040 + 0x20) + 0xd0);
    lVar1 = *(long *)(DAT_05574040 + 0x20);
  }
  else {
    plVar7 = *(long **)(lVar4 + 0x19580);
    lVar1 = lVar13;
  }
  if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (*(code *)**(undefined8 **)*plVar7)();
    lVar6 = *plVar11;
    uVar10 = uVar10 & 0xffffffff;
  }
  if (lVar6 == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    plVar11 = *(long **)(lVar13 + 0x178);
  }
  else {
    plVar11 = *(long **)(lVar4 + 0x19628);
  }
  if ((plVar11 == (long *)0x0) || ((undefined8 *)*plVar11 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (*(code *)**(undefined8 **)*plVar11)();
    uVar12 = uVar12 & 0xffffffff;
  }
  local_6c = 0;
  local_70 = 0;
  iVar3 = FUN_034246e0(*(long *)(lVar2 + 0xf0) + *(long *)(lVar2 + 0xe8),
                       *(long *)(lVar1 + 0xb8) + *(long *)(lVar1 + 0xb0),
                       *(long *)(lVar13 + 0x160) + *(long *)(lVar13 + 0x158),param_2,param_4,
                       (long)&local_6c + 4,&local_6c,&local_70);
  if (param_3 <= iVar3) {
    iVar3 = (int)local_6c + local_6c._4_4_;
    if (0 < iVar3) {
      if (param_3 <= iVar3) {
        iVar3 = param_3;
      }
      if (0 < iVar3) {
        iVar9 = iVar3;
        do {
          FUN_026774c0(param_1,param_2);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      param_3 = param_3 - iVar3;
    }
    if ((0 < local_70) && (0 < param_3)) {
      do {
        FUN_0267dbb0(param_1,param_2);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar13 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar13 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar1 + 0xd0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xd0) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x108) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x108) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return 1;
}

