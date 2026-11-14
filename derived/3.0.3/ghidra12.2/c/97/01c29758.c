
undefined4 FUN_01c29758(undefined8 param_1,short *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_44;
  
  if ((*param_2 == -2) || (DAT_05574040 == 0)) {
    return DAT_04c9a0c8;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar7 == 0) {
      return DAT_04c9a0c8;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return DAT_04c9a0c8;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return DAT_04c9a0c8;
    }
    lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar7 == 0) {
      return DAT_04c9a0c8;
    }
  }
  if ((*(long **)(lVar7 + 0x1bf1b8) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar7 + 0x1bf1b8), puVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar9)();
    uVar4 = uVar4 ^ 1;
  }
  uVar8 = FUN_027bf130(*(long *)(lVar7 + 0x1bf1a0) + *(long *)(lVar7 + 0x1bf198),param_2);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) != 0) {
    local_50 = 0;
    local_60 = PTR_DAT_04bc0510 + 0x10;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)(param_2 + 2);
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_01c29978:
      local_44 = 0xbc;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01c29978;
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
         (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 == (uint *)0x0)) goto LAB_01c29978;
      uVar5 = *puVar10;
      local_44 = 0;
      if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        local_44 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_44 < 0xbd
                 )) goto LAB_01c2997c;
            }
          }
          local_44 = 0;
        }
      }
    }
LAB_01c2997c:
    if (local_44 == 0x69) {
      uVar12 = *(undefined8 *)PTR_DAT_04bb4800;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = FUN_019d9f5c(uVar12,uVar6);
      goto LAB_01c299d0;
    }
    if (local_44 == 0x6b) {
      uVar12 = *(undefined8 *)PTR_DAT_04bb47b0;
      uVar3 = FUN_0277d6c4(param_2);
      local_60 = (undefined *)(ulong)uVar3;
      FUN_0277d4ac(&local_60);
      uVar6 = FUN_029705c0(uVar12,&local_60,param_3);
      goto LAB_01c299d0;
    }
    if (local_44 == 0x6a) {
      uVar12 = *(undefined8 *)PTR_DAT_04bb4810;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = FUN_0142986c(uVar12,uVar6);
      goto LAB_01c299d0;
    }
  }
  uVar6 = DAT_04c9a0c8;
LAB_01c299d0:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x1bf1b8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1bf1b8) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return uVar6;
}

