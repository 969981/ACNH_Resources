
/* WARNING: Removing unreachable block (ram,0x03765124) */
/* WARNING: Removing unreachable block (ram,0x03765240) */

void FUN_037650e0(long param_1)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 8);
  local_48 = CONCAT44(local_48._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (499 < uVar2) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  lVar3 = lVar3 + (ulong)uVar2 * 0x2d48;
  lVar8 = *(long *)(lVar3 + 0x4cc70);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar3 + 0x4cc70);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar8 == 0) goto LAB_037651d0;
    }
    plVar5 = *(long **)(lVar8 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar3 + 0x4cc50);
      local_40 = *(long *)(lVar3 + 0x4cc58);
      local_38 = 0x1188;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_037651d0:
  lVar8 = *(long *)(lVar3 + 0x4cc58) + *(long *)(lVar3 + 0x4cc50);
  if (*(short *)(lVar8 + 4) == -1) goto LAB_03765378;
  if ((*(long *)(lVar3 + 0x4cc70) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar3 + 0x4cc70) + 0x20), plVar5 != (long *)0x0)) {
    local_38 = 0x1188;
    local_48 = *(long *)(lVar3 + 0x4cc50);
    local_40 = *(long *)(lVar3 + 0x4cc58);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    lVar8 = *(long *)(lVar3 + 0x4cc58) + *(long *)(lVar3 + 0x4cc50);
  }
  if (DAT_05574040 != 0) {
    uVar2 = *(ushort *)(lVar8 + 4);
    local_48 = CONCAT44(local_48._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       uVar2 < 500 && lVar8 != 0)) {
      lVar8 = lVar8 + (ulong)uVar2 * 0x2d48;
      lVar9 = *(long *)(lVar8 + 0x4cc70);
      if (lVar9 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar8 + 0x4cc70);
          uVar6 = uVar6 & 0xffffffff;
          if (lVar9 == 0) goto LAB_037652ec;
        }
        plVar5 = *(long **)(lVar9 + 0x20);
        if (plVar5 != (long *)0x0) {
          local_48 = *(long *)(lVar8 + 0x4cc50);
          local_40 = *(long *)(lVar8 + 0x4cc58);
          local_38 = 0x1188;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
        }
      }
LAB_037652ec:
      puVar1 = (ushort *)(*(long *)(lVar8 + 0x4cc58) + *(long *)(lVar8 + 0x4cc50));
      puVar1[2] = 0xffff;
      *puVar1 = *puVar1 & 0xfffe;
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x4cc70) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x4cc70) + 0x18), puVar7 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar7)();
      }
    }
  }
  if ((*(long *)(lVar3 + 0x4cc70) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar3 + 0x4cc70) + 0x20), plVar5 != (long *)0x0)) {
    local_48 = *(long *)(lVar3 + 0x4cc50);
    local_40 = *(long *)(lVar3 + 0x4cc58);
    local_38 = 0x1188;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  }
  puVar1 = (ushort *)(*(long *)(lVar3 + 0x4cc58) + *(long *)(lVar3 + 0x4cc50));
  puVar1[2] = 0xffff;
  *puVar1 = *puVar1 & 0xfffe;
LAB_03765378:
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x4cc70) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x4cc70) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

