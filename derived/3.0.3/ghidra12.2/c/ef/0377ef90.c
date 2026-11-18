
/* WARNING: Removing unreachable block (ram,0x0377f120) */
/* WARNING: Removing unreachable block (ram,0x0377eff8) */
/* WARNING: Removing unreachable block (ram,0x0377f384) */

void FUN_0377ef90(undefined8 *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 local_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [7];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  local_78 = 0x7fffffff7fffffff;
  local_88 = 0x7fffffff7fffffff;
  uStack_80 = 0x7fffffff7fffffff;
  local_70 = 0x7fffffff;
  local_6c = 5;
  lVar6 = 0;
  if (DAT_05574040 != 0) {
    local_f0 = 1;
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar3 = 0;
    }
    lVar6 = 0;
    if (lVar3 != 0) {
      lVar6 = lVar3 + 0xa8;
    }
  }
  if (*(long **)(lVar6 + 0x36540) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar6 + 0x36540);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  lVar3 = 0;
  do {
    uVar2 = *(ushort *)(*(long *)(lVar6 + 0x36528) + *(long *)(lVar6 + 0x36520) + lVar3 * 2);
    if (uVar2 == 0) {
      local_f0 = 5;
    }
    else {
      local_f0 = (uVar2 >> 10) - 1;
      if (6 < local_f0) {
        local_f0 = 5;
      }
    }
    if ((local_f0 != 5) && (local_f0 != 6)) {
      uVar9 = (ulong)local_f0;
      if (6 < local_f0) {
        uVar9 = 0;
      }
      *(int *)((long)&local_88 + uVar9 * 4) = (int)lVar3;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x1fb);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x36540) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x36540) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (((DAT_05574040 == 0) || (local_f0 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0))
     || (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
        lVar6 == 0)) goto LAB_0377f27c;
  if (*(long **)(lVar6 + 0x36620) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar6 + 0x36620);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  uVar7 = (uint)*(char *)(*(long *)(lVar6 + 0x36608) + *(long *)(lVar6 + 0x36600));
  local_f0 = uVar7;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x36620) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x36620) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (uVar7 != 2) goto LAB_0377f27c;
  if ((*(long **)(lVar6 + 0x37ca8) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x37ca8), puVar4 == (undefined8 *)0x0)) {
    uVar5 = 0;
    plVar8 = *(long **)(lVar6 + 0x39058);
    if (plVar8 == (long *)0x0) goto LAB_0377f1d4;
LAB_0377f1e8:
    uVar9 = 0;
    if ((undefined8 *)*plVar8 != (undefined8 *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)*plVar8)();
    }
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    uVar5 = uVar5 & 0xffffffff;
    plVar8 = *(long **)(lVar6 + 0x39058);
    if (plVar8 != (long *)0x0) goto LAB_0377f1e8;
LAB_0377f1d4:
    uVar9 = 0;
  }
  local_f0 = *(ushort *)(*(long *)(lVar6 + 0x39040) + *(long *)(lVar6 + 0x39038) + 100) & 0xf;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x39058) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x39058) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  local_6c = (uint)*(ushort *)(*(long *)(lVar6 + 0x37c90) + *(long *)(lVar6 + 0x37c88) + 0x408c);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x37ca8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x37ca8) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
LAB_0377f27c:
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  uVar7 = 0;
  do {
    if ((uVar7 != 5) && (uVar7 != 6)) {
      local_ec = 0;
      local_e4 = CONCAT17((char)((ulong)local_e4 >> 0x38),0x1010000);
      local_c0 = 8;
      local_b5 = 0;
      local_bc[0] = 0;
      local_a0 = 8;
      local_95 = 0;
      local_9c[0] = 0;
      local_d0 = puVar1;
      puStack_c8 = local_bc;
      local_b0 = puVar1;
      puStack_a8 = local_9c;
      local_8c = uVar7;
      if (uVar7 == local_6c) {
        FUN_0377f4e0(&local_f0);
      }
      else {
        uVar5 = FUN_0377fb80();
        if ((uVar5 & 1) == 0) goto LAB_0377f2d0;
        local_68 = local_8c;
        if ((((local_8c != 5) && (DAT_05574040 != 0)) &&
            (local_64 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
           (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
           lVar6 != 0)) {
          switch(local_68) {
          case 0:
            uVar10 = 0x90a0;
            break;
          case 1:
            uVar10 = 0xa488;
            break;
          case 2:
            uVar10 = 0xb870;
            break;
          case 3:
            uVar10 = 0xcc58;
            break;
          case 4:
            uVar10 = 0xe040;
            break;
          default:
            goto switchD_0377f3cc_default;
          }
          lVar6 = lVar6 + (ulong)(uVar10 | 0x30000);
          if (*(long **)(lVar6 + 0x13a0) == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            puVar4 = (undefined8 *)**(long **)(lVar6 + 0x13a0);
            uVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar4)();
            }
          }
          lVar3 = *(long *)(lVar6 + 5000) + *(long *)(lVar6 + 0x1380);
          local_64 = *(ushort *)(lVar3 + 100) & 0xf;
          local_e4 = *(undefined8 *)(lVar3 + 0x5c);
          local_f0._0_2_ = CONCAT11(local_64 == 1,(undefined1)local_f0);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x13a0) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x13a0) + 8), puVar4 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar4)();
          }
        }
switchD_0377f3cc_default:
        local_f0 = local_f0 & 0xffffff00;
        uVar5 = (ulong)local_8c;
        if (6 < local_8c) {
          uVar5 = 0;
        }
        uStack_e8 = *(undefined4 *)((long)&local_88 + uVar5 * 4);
        local_ec = local_8c;
        local_dc = FUN_0377fc30((ulong)local_8c,0);
        FUN_0377e950(local_8c,&local_f0);
      }
      (**(code **)*param_1)(param_1,&local_f0);
    }
LAB_0377f2d0:
    uVar10 = 7;
    if ((int)uVar7 < 7) {
      uVar10 = uVar7 + 1;
    }
    uVar7 = uVar10;
    if (uVar10 == 7) {
      return;
    }
  } while( true );
}

