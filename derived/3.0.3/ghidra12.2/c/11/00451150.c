
undefined4 FUN_00451150(long param_1,undefined4 param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int local_48 [2];
  
  uVar12 = *(ulong *)(param_1 + 0x20) & *param_3;
  uVar11 = (uint)uVar12;
  if (((((uVar11 >> 0xe & 1) != 0) &&
       (plVar4 = (long *)FUN_00426db0(param_3,0x4000), plVar4 != (long *)0x0)) &&
      (puVar8 = (ulong *)*plVar4, puVar8 != (ulong *)0x0)) && (0 < (int)*puVar8)) {
    uVar10 = *puVar8 & 0xffffffff;
    do {
      if ((((*(byte *)puVar8[1] >> 3 & 1) != 0) &&
          (plVar4 = (long *)FUN_00426db0((byte *)puVar8[1],8), plVar4 != (long *)0x0)) &&
         (lVar9 = *plVar4, lVar9 != 0)) {
        iVar2 = FUN_0043a2d0(lVar9);
        param_2 = FUN_00451c50(param_2,lVar9,(long)iVar2);
      }
      local_48[0] = (int)puVar8[2];
      param_2 = FUN_00451c50(param_2,local_48,4);
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 2;
    } while (uVar10 != 0);
  }
  if ((uVar12 & 1) != 0) {
    if (((*param_3 & 1) == 0) || (puVar8 = (ulong *)FUN_00426db0(param_3,1), puVar8 == (ulong *)0x0)
       ) {
      uVar12 = 0;
    }
    else {
      uVar12 = *puVar8;
    }
    local_48[0] = (int)uVar12;
    param_2 = FUN_00451c50(param_2,local_48,4);
    if ((uVar12 & 0x6f) == 0x28) {
      if ((((byte)*param_3 >> 1 & 1) == 0) ||
         (puVar5 = (undefined8 *)FUN_00426db0(param_3,2), puVar5 == (undefined8 *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar5;
      }
      local_48[0] = FUN_004514d0(param_1,uVar7);
      param_2 = FUN_00451c50(param_2,local_48,4);
    }
  }
  if (((((uVar11 >> 3 & 1) != 0) && (((byte)*param_3 >> 3 & 1) != 0)) &&
      (plVar4 = (long *)FUN_00426db0(param_3,8), plVar4 != (long *)0x0)) &&
     (lVar9 = *plVar4, lVar9 != 0)) {
    iVar2 = FUN_0043a2d0(lVar9);
    param_2 = FUN_00451c50(param_2,lVar9,(long)iVar2);
  }
  if ((uVar11 >> 0xf & 1) != 0) {
    param_2 = FUN_00451070(param_2,param_3);
  }
  if ((uVar11 >> 4 & 1) != 0) {
    if ((((byte)*param_3 >> 4 & 1) == 0) ||
       (piVar6 = (int *)FUN_00426db0(param_3,0x10), piVar6 == (int *)0x0)) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *piVar6;
    }
    param_2 = FUN_00451c50(param_2,local_48,4);
  }
  if ((uVar11 >> 0x14 & 1) == 0) {
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  else {
    if (((*(byte *)((long)param_3 + 2) >> 4 & 1) == 0) ||
       (piVar6 = (int *)FUN_00426db0(param_3,0x100000), piVar6 == (int *)0x0)) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *piVar6;
    }
    param_2 = FUN_00451c50(param_2,local_48,4);
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  if ((((bVar1 >> 5 & 1) == 0) ||
      (piVar6 = (int *)FUN_00426db0(param_3,0x200000), piVar6 == (int *)0x0)) || (*piVar6 == 0)) {
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  else {
    local_48[0] = *piVar6;
    param_2 = FUN_00451c50(param_2,local_48,4);
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  if ((((char)bVar1 < '\0') &&
      (puVar5 = (undefined8 *)FUN_00426db0(param_3,0x800000), puVar5 != (undefined8 *)0x0)) &&
     ((plVar4 = (long *)*puVar5, plVar4 != (long *)0x0 && ((long)(short)*plVar4 != 0)))) {
    lVar9 = (long)(short)*plVar4 << 3;
    do {
      plVar4 = plVar4 + 1;
      uVar7 = FUN_00427b40(plVar4);
      iVar2 = FUN_0043a2d0();
      uVar3 = FUN_00451c50(param_2,uVar7,(long)iVar2);
      local_48[0] = FUN_00429050(plVar4);
      uVar3 = FUN_00451c50(uVar3,local_48,4);
      local_48[0] = FUN_004514d0(param_1,*(undefined8 *)(*plVar4 + 8));
      param_2 = FUN_00451c50(uVar3,local_48,4);
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  if ((uVar11 >> 0x19 & 1) != 0) {
    if (((*(byte *)((long)param_3 + 3) >> 1 & 1) == 0) ||
       (puVar5 = (undefined8 *)FUN_00426db0(param_3,0x2000000), puVar5 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar5;
    }
    iVar2 = FUN_0043a2d0(uVar7);
    param_2 = FUN_00451c50(param_2,uVar7,(long)iVar2);
  }
  return param_2;
}

