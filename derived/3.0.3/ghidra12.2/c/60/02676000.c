
void FUN_02676000(byte *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_6c[0] = *param_1;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_6c,1);
  if (lVar3 == 0) {
    return;
  }
  lVar10 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    lVar3 = *(long *)(lVar10 + 0x98);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x19548);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_026760dc;
      plVar5 = *(long **)(*(long *)(lVar10 + 0x98) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar10 + 0x78);
      uStack_60 = *(undefined8 *)(lVar10 + 0x80);
      local_58 = 0x17c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
    }
  }
LAB_026760dc:
  puVar2 = PTR_DAT_04bb37e0;
  uVar9 = 0;
  lVar3 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78);
  uVar7 = 0;
  if (*(byte *)(lVar3 + 0x178) < 3) {
    uVar7 = (uint)*(byte *)(lVar3 + 0x178);
  }
  uVar8 = (ulong)uVar7;
  local_68._0_4_ = uVar7;
  do {
    FUN_027fa2dc(uVar8,lVar3,uVar9,puVar2,0);
    uVar9 = uVar9 + 1;
    local_68._0_4_ = 0;
    if (*(byte *)(lVar3 + 0x178) < 3) {
      local_68._0_4_ = (uint)*(byte *)(lVar3 + 0x178);
    }
    uVar1 = 0x1e;
    if ((uint)local_68 != 1) {
      uVar1 = 0x14;
    }
    uVar8 = 0x28;
    if ((uint)local_68 != 2) {
      uVar8 = uVar1;
    }
  } while (uVar9 < uVar8);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

