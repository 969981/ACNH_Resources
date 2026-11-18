
/* WARNING: Removing unreachable block (ram,0x037701ac) */
/* WARNING: Removing unreachable block (ram,0x037703d8) */

bool FUN_03770130(ushort param_1,ushort param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ushort local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  
  if (param_1 == 0xffff) {
    return false;
  }
  if (param_2 == 0xffff) {
    return false;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    lVar8 = *(long *)(DAT_05ab7608 + 8);
    if (lVar8 == 0) {
      return false;
    }
    if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 ^ 1;
    }
    puVar1 = (ushort *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40));
    uVar4 = puVar1[2];
    uVar3 = uVar4;
    uVar5 = puVar1[1];
    if (uVar4 != 0xffff && (*puVar1 & 1) == 0) {
      uVar3 = puVar1[1];
      uVar5 = uVar4;
    }
    if ((uVar5 == param_1) && (uVar3 == param_2)) {
      bVar6 = true;
    }
    else {
      bVar6 = uVar5 == param_2 && uVar3 == param_1;
    }
    if ((uVar7 & 1) != 0) {
      return bVar6;
    }
    lVar8 = *(long *)(lVar8 + 0x60);
    goto joined_r0x03770464;
  }
  if (DAT_05574040 == 0) {
    return false;
  }
  local_48 = 1;
  if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
     (lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar8 != 0)) {
    plVar11 = *(long **)(lVar8 + 0x36658);
    if (plVar11 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((undefined8 *)*plVar11 != (undefined8 *)0x0) {
        uVar9 = (*(code *)**(undefined8 **)*plVar11)();
        plVar11 = *(long **)(lVar8 + 0x36658);
      }
    }
    lVar2 = *(long *)(lVar8 + 0x36640) + *(long *)(lVar8 + 0x36638);
    puVar1 = (ushort *)(lVar2 + 0x48b2);
    if ((*(byte *)(lVar2 + 0x48b5) & 1) != 0) {
      puVar1 = (ushort *)(lVar2 + 0x48b0);
    }
    uVar3 = *puVar1;
    if ((uVar9 & 1) == 0) {
LAB_03770318:
      if (plVar11 == (long *)0x0) goto LAB_03770338;
LAB_0377031c:
      if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_03770338;
      uVar7 = (*(code *)**(undefined8 **)*plVar11)();
      uVar7 = uVar7 ^ 1;
    }
    else {
      if (plVar11 != (long *)0x0) {
        if ((undefined8 *)plVar11[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar11[1])();
          plVar11 = *(long **)(lVar8 + 0x36658);
          goto LAB_03770318;
        }
        goto LAB_0377031c;
      }
LAB_03770338:
      uVar7 = 1;
    }
    lVar2 = *(long *)(lVar8 + 0x36640) + *(long *)(lVar8 + 0x36638);
    puVar1 = (ushort *)(lVar2 + 0x48b0);
    if ((*(byte *)(lVar2 + 0x48b5) & 1) != 0) {
      puVar1 = (ushort *)(lVar2 + 0x48b2);
    }
    uVar4 = *puVar1;
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x36658) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x36658) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if (((uVar4 == param_2) || (uVar3 == param_2)) || ((uVar3 == param_1 || (uVar4 == param_1)))) {
      if ((*(long **)(lVar8 + 0x37c70) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar8 + 0x37c70), puVar10 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar10)();
        uVar7 = uVar7 ^ 1;
      }
      local_4c[0] = 0;
      FUN_0374a300(local_4c,*(undefined1 *)
                             (*(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 0x32));
      if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x37c70) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x37c70) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      if ((local_4c[0] & 0xf) - 1 < 2) {
        return false;
      }
      return uVar3 == param_2 && uVar4 == param_1 || uVar3 == param_1 && uVar4 == param_2;
    }
  }
  if ((DAT_05574040 == 0) || (local_44 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) {
    return false;
  }
  lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
  if (499 < param_1) {
    return false;
  }
  if (lVar8 == 0) {
    return false;
  }
  lVar8 = lVar8 + (ulong)param_1 * 0x2d48;
  if ((*(long **)(lVar8 + 0x4cc70) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar8 + 0x4cc70), puVar10 == (undefined8 *)0x0)) {
    return *(ushort *)(*(long *)(lVar8 + 0x4cc58) + *(long *)(lVar8 + 0x4cc50) + 4) == param_2;
  }
  uVar9 = (**(code **)*puVar10)();
  bVar6 = *(ushort *)(*(long *)(lVar8 + 0x4cc58) + *(long *)(lVar8 + 0x4cc50) + 4) == param_2;
  if ((uVar9 & 1) == 0) {
    return bVar6;
  }
  lVar8 = *(long *)(lVar8 + 0x4cc70);
joined_r0x03770464:
  if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar8 + 8))();
  }
  return bVar6;
}

