
void FUN_02674040(long param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  short *psVar15;
  undefined **local_78;
  undefined8 local_70;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  uVar14 = (ulong)param_2;
  if (param_1 == 0) {
    psVar11 = &DAT_05586008;
    goto LAB_026742d4;
  }
  lVar10 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar9 + 0x98);
    if (plVar8 != (long *)0x0) goto LAB_026740c8;
LAB_026740e4:
    uVar13 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x19548);
    lVar9 = lVar10;
    if (plVar8 == (long *)0x0) goto LAB_026740e4;
LAB_026740c8:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_026740e4;
    uVar13 = (*(code *)**(undefined8 **)*plVar8)();
    uVar13 = uVar13 & 0xffffffff;
  }
  lVar12 = *(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78);
  uVar6 = *(uint *)(lVar12 + 0x158);
  if (0x13 < uVar6) {
    uVar6 = 0x14;
  }
  uVar4 = param_2 - uVar6;
  if (param_2 < uVar6) {
    psVar15 = (short *)(lVar12 + uVar14 * 8 + 0xb8);
    sVar3 = *psVar15;
LAB_0267413c:
    psVar11 = psVar15;
    if (sVar3 != -2) {
      lVar12 = *(long *)puVar5;
      uVar6 = FUN_0277d6c4(psVar15);
      if (*(long *)puVar5 == 0) {
        psVar11 = &DAT_05586008;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        psVar11 = (short *)PTR_DAT_04bb37e0;
        if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          psVar11 = psVar15;
        }
      }
    }
  }
  else {
    psVar11 = (short *)PTR_DAT_04bb37e0;
    if (-1 < (int)uVar4) {
      uVar6 = *(uint *)(lVar12 + 0xa0);
      if (0x13 < uVar6) {
        uVar6 = 0x14;
      }
      if (uVar4 < uVar6) {
        psVar15 = (short *)(lVar12 + (ulong)uVar4 * 8);
        sVar3 = *psVar15;
        goto LAB_0267413c;
      }
    }
  }
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar9 + 0x98) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    lVar9 = *(long *)(lVar10 + 0x98);
    if (lVar9 == 0) goto LAB_02674234;
LAB_026741f0:
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar13 = 0;
      plVar8 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar13 = uVar13 & 0xffffffff;
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_02674268;
      plVar8 = *(long **)(*(long *)(lVar10 + 0x98) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_78 = *(undefined ***)(lVar10 + 0x78);
      local_70 = *(undefined8 *)(lVar10 + 0x80);
      local_68 = 0x17c;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x19548);
    if (lVar9 != 0) goto LAB_026741f0;
LAB_02674234:
    uVar13 = 0;
  }
LAB_02674268:
  if (param_2 < 0x28) {
    lVar9 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78);
    uVar6 = *(uint *)(lVar9 + 0x158);
    if (0x13 < uVar6) {
      uVar6 = 0x14;
    }
    puVar1 = (undefined1 *)(lVar9 + 0xa4) + (param_2 - uVar6);
    if (0x13 < param_2 - uVar6) {
      puVar1 = (undefined1 *)(lVar9 + 0xa4);
    }
    puVar2 = (undefined1 *)(lVar9 + uVar14 + 0x15c);
    if (uVar6 <= param_2) {
      puVar2 = puVar1;
    }
    *puVar2 = 0xff;
  }
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_026742d4:
  lVar9 = *(long *)puVar5;
  uVar6 = FUN_0277d6c4(psVar11);
  lVar10 = *(long *)puVar5;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_78 = &PTR_FUN_04a36b50;
      local_70 = *(undefined8 *)psVar11;
      local_68 = 0;
      uVar6 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar5 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(psVar11);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
            local_68 = lVar10;
          }
        }
      }
      uVar13 = FUN_01adbe40(&local_78,1,0,0,0);
      if ((uVar13 & 1) != 0) {
        FUN_02674f70(param_1,uVar14,param_3);
      }
    }
  }
  return;
}

