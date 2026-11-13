
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01227620(long param_1)

{
  long lVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  memset(&DAT_0514e4e8,0,0x1000);
  *(undefined4 *)(param_1 + 0x7c58) = 0;
  *(undefined1 *)(param_1 + 0x87e2) = 0;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    memset((void *)(param_1 + 0x2a58),0,0x4800);
    *(undefined4 *)(param_1 + 0x9150) = 0;
  }
  iVar4 = 0;
  *(undefined2 *)(param_1 + 0x87e0) = 0x96;
  DAT_0514f7e8 = 0;
  do {
    lVar13 = param_1 + 600 + (long)iVar4 * 0x60;
    local_68 = 0xfffe;
    *(undefined8 *)(lVar13 + 0x51) = 0;
    *(undefined8 *)(lVar13 + 0x4c) = 0;
    *(undefined8 *)(lVar13 + 0x44) = 0;
    FUN_0277d4ac(&local_68);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(lVar13 + 0x30) = (undefined4)local_68;
    *(undefined4 *)(lVar13 + 0x34) = local_68._4_4_;
  } while (iVar4 != 0x50);
  *(undefined8 *)(param_1 + 0x7c68) = 0;
  *(undefined8 *)(param_1 + 0x7c80) = 0;
  *(undefined1 *)(param_1 + 0x7c70) = 0;
  *(undefined1 *)(param_1 + 0x7c88) = 0;
  *(undefined1 *)(param_1 + 0x7ca0) = 0;
  *(undefined1 *)(param_1 + 0x7cb8) = 0;
  *(undefined1 *)(param_1 + 0x7cd0) = 0;
  *(undefined1 *)(param_1 + 0x7ce8) = 0;
  *(undefined1 *)(param_1 + 32000) = 0;
  *(undefined1 *)(param_1 + 0x7d18) = 0;
  *(undefined8 *)(param_1 + 0x7c98) = 0;
  *(undefined8 *)(param_1 + 0x7cb0) = 0;
  *(undefined8 *)(param_1 + 0x7cc8) = 0;
  *(undefined8 *)(param_1 + 0x7ce0) = 0;
  *(undefined8 *)(param_1 + 0x7cf8) = 0;
  *(undefined8 *)(param_1 + 0x7d10) = 0;
  DAT_0514ccf8 = 0;
  DAT_0514cd00 = 0;
  DAT_0514cedc = 0;
  DAT_0514cee4 = 0;
  DAT_0514d0c0 = 0;
  DAT_0514d0c8 = 0;
  DAT_0514d2a4 = 0;
  DAT_0514d2ac = 0;
  DAT_0514d488 = 0;
  DAT_0514d490 = 0;
  DAT_0514d66c = 0;
  DAT_0514d674 = 0;
  DAT_0514d850 = 0;
  DAT_0514d858 = 0;
  DAT_0514da34 = 0;
  DAT_0514da3c = 0;
  memset(&DAT_0514da88,0,0x900);
  uVar14 = FUN_012247a0();
  *(undefined4 *)(param_1 + 0x87ec) = uVar14;
  FUN_01224a98(param_1);
  iVar4 = FUN_0252d29c();
  if (iVar4 == -1) {
    DAT_0514f5e0 = 0xffffffffffffffff;
    DAT_0514f5f0 = 0xffffffffffffffff;
    DAT_0514f600 = 0xffffffffffffffff;
    DAT_0514f610 = 0xffffffffffffffff;
    DAT_0514f620 = 0xffffffffffffffff;
    DAT_0514f630 = 0xffffffffffffffff;
    DAT_0514f640 = 0xffffffffffffffff;
    DAT_0514f650 = 0xffffffffffffffff;
    DAT_0514f660 = 0xffffffffffffffff;
    DAT_0514f670 = 0xffffffffffffffff;
    DAT_0514f680 = 0xffffffffffffffff;
    DAT_0514f690 = 0xffffffffffffffff;
    DAT_0514f6a0 = 0xffffffffffffffff;
    DAT_0514f6b0 = 0xffffffffffffffff;
    DAT_0514f6c0 = 0xffffffffffffffff;
    return;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar13 = 0;
    lVar5 = _DAT_00000098;
  }
  else {
    lVar5 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar13 = 0;
    if (lVar5 != 0) {
      lVar13 = lVar5 + 0x276cb0;
    }
    lVar5 = *(long *)(lVar13 + 0x98);
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar13 + 0x98) == 0) goto LAB_01227860;
      plVar7 = *(long **)(*(long *)(lVar13 + 0x98) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar13 + 0x78);
      uStack_60 = *(undefined8 *)(lVar13 + 0x80);
      local_58 = 0x53c;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
  }
LAB_01227860:
  uVar9 = 0;
  uVar10 = iVar4 * 0x1e;
  lVar5 = *(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78) + 0x23c;
  do {
    uVar11 = (ulong)uVar10;
    uVar12 = (ulong)(uVar10 + 1);
    if (0xef < uVar10) {
      uVar11 = 0;
    }
    lVar1 = (long)((ulong)uVar9 << 0x20) >> 0x1c;
    if (0xef < uVar10 + 1) {
      uVar12 = 0;
    }
    sVar2 = *(short *)(lVar5 + uVar11 * 2);
    sVar3 = *(short *)(lVar5 + uVar12 * 2);
    *(int *)((long)&DAT_0514f4f0 + lVar1) = (int)sVar2;
    *(int *)((long)&DAT_0514f4f0 + lVar1 + 4) = (int)sVar3;
    if (sVar2 == 0 && sVar3 == 0) {
      *(undefined8 *)((long)&DAT_0514f4f0 + lVar1) = 0xffffffffffffffff;
      *(undefined2 *)(lVar5 + uVar11 * 2) = 0xffff;
      *(undefined2 *)(lVar5 + uVar12 * 2) = 0xffff;
    }
    uVar9 = uVar9 + 1;
    uVar10 = uVar10 + 2;
  } while (uVar9 != 0xf);
  if ((*(long *)(lVar13 + 0x98) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar13 + 0x98) + 0x20), plVar7 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar13 + 0x78);
    uStack_60 = *(undefined8 *)(lVar13 + 0x80);
    local_58 = 0x53c;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
  }
  FUN_0275cb4c(*(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78),iVar4,&DAT_0514f6c8);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  DAT_0514f5e0 = 0xffffffffffffffff;
  DAT_0514f5f0 = 0xffffffffffffffff;
  DAT_0514f600 = 0xffffffffffffffff;
  DAT_0514f610 = 0xffffffffffffffff;
  DAT_0514f620 = 0xffffffffffffffff;
  DAT_0514f630 = 0xffffffffffffffff;
  DAT_0514f640 = 0xffffffffffffffff;
  DAT_0514f650 = 0xffffffffffffffff;
  DAT_0514f660 = 0xffffffffffffffff;
  DAT_0514f670 = 0xffffffffffffffff;
  DAT_0514f680 = 0xffffffffffffffff;
  DAT_0514f690 = 0xffffffffffffffff;
  DAT_0514f6a0 = 0xffffffffffffffff;
  DAT_0514f6b0 = 0xffffffffffffffff;
  DAT_0514f6c0 = 0xffffffffffffffff;
  return;
}

