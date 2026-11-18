
/* WARNING: Removing unreachable block (ram,0x03403b38) */

void FUN_03403970(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *local_10b0;
  long *local_10a8;
  undefined8 local_10a0;
  undefined8 *local_1098;
  long *local_1090;
  long *local_1088;
  long local_1080 [2];
  long local_1070 [3];
  undefined1 auStack_1058 [2000];
  undefined8 local_888;
  undefined8 local_880 [256];
  ulong local_80;
  long local_78;
  undefined8 local_70;
  
  local_1090 = local_1080;
  local_10a0 = 0;
  local_1098 = (undefined8 *)0x0;
  lVar10 = 0;
  do {
    lVar1 = lVar10 + 0x28;
    plVar6 = (long *)((long)local_1080 + lVar10 + 8);
    *plVar6 = (long)local_1070 + lVar10;
    *(long **)((long)local_1080 + lVar10) = plVar6;
    plVar6 = (long *)((long)local_1070 + lVar10 + 0x10);
    *plVar6 = (long)(auStack_1058 + lVar10);
    puVar7 = (undefined8 *)((long)local_1070 + lVar10 + 8);
    *puVar7 = plVar6;
    *(undefined8 **)((long)local_1070 + lVar10) = puVar7;
    lVar10 = lVar1;
  } while (lVar1 != 0x7f8);
  local_888 = 0;
  if (local_880 != (undefined8 *)0x0) {
    local_10a0 = 0x10000000000;
    local_1098 = local_880;
  }
  local_1088 = local_1090;
  FUN_03401f10(&local_10a0);
  lVar10 = *(long *)(param_1 + 0x60);
  if (lVar10 == 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40));
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    goto LAB_03403aec;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 1;
    plVar6 = *(long **)(lVar10 + 0x20);
    if (plVar6 != (long *)0x0) goto LAB_03403a34;
LAB_03403aa8:
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40));
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar5 = uVar5 ^ 1;
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x20), plVar6 == (long *)0x0))
    goto LAB_03403aa8;
LAB_03403a34:
    local_78 = *(long *)(param_1 + 0x48);
    local_80 = *(ulong *)(param_1 + 0x40);
    local_70 = 0x20;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_80);
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x40));
  }
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  if ((((uVar5 & 1) == 0) && (*(long *)(param_1 + 0x60) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_03403aec:
  puVar4 = PTR_DAT_04bc0500;
  puVar3 = PTR_DAT_04bb37e0;
  local_10a8 = (long *)(param_1 + 0x48);
  local_10b0 = (ulong *)(param_1 + 0x40);
  if ((int)local_10a0 != 0) {
    puVar2 = local_1098 + (int)local_10a0;
    puVar7 = local_1098;
    do {
      uVar11 = *puVar7;
      lVar10 = *(long *)puVar4;
      uVar5 = *(uint *)(lVar10 + 0xe44);
      if (uVar5 != 0) {
        uVar13 = 0;
        do {
          uVar12 = (uint)uVar13;
          if (((*(int *)(lVar10 + 0xe40) == 0) || ((int)uVar12 < 0)) ||
             (*(int *)(lVar10 + 0xe44) <= (int)uVar12)) {
            local_80 = *(ulong *)puVar3;
          }
          else {
            local_80 = (ulong)(ushort)**(undefined4 **)(*(long *)(lVar10 + 0xe48) + uVar13 * 8);
            FUN_0277d4ac(&local_80);
          }
          uVar8 = FUN_0277d7b4(&local_80,uVar11);
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x60);
            if (lVar10 == 0) {
              uVar8 = 0;
            }
            else {
              if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
                uVar8 = 0;
                plVar6 = *(long **)(lVar10 + 0x20);
              }
              else {
                uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                uVar8 = uVar8 & 0xffffffff;
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_03403c34;
                plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x20);
              }
              if (plVar6 != (long *)0x0) {
                local_80 = *local_10b0;
                local_78 = *local_10a8;
                local_70 = 0x20;
                (**(code **)(*plVar6 + 0x20))(plVar6,&local_80);
              }
            }
LAB_03403c34:
            if (uVar12 < 0x100) {
              lVar10 = (uVar13 >> 5 & 0x7ffffff) * 4;
              *(uint *)(*local_10a8 + *local_10b0 + lVar10) =
                   *(uint *)(*local_10a8 + *local_10b0 + lVar10) | 1 << (ulong)(uVar12 & 0x1f);
            }
            if ((((uVar8 & 1) != 0) && (*(long *)(param_1 + 0x60) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x18),
               puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)();
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar2);
  }
  return;
}

