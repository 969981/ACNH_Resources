
/* WARNING: Removing unreachable block (ram,0x02fdd848) */

void FUN_02fdd7b0(undefined8 param_1,ulong param_2,byte *param_3)

{
  ulong *puVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte local_5c [4];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_5c[0] = *param_3;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_5c,1);
  lVar9 = DAT_0532a840;
  puVar3 = PTR_DAT_04bb37e0;
  if (lVar4 == 0) {
    return;
  }
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
  }
  puVar1 = (ulong *)(lVar8 + 0x2a3f8);
  local_58 = CONCAT44(local_58._4_4_,0x72);
  piVar2 = (int *)(DAT_0532a840 + 0xe40);
  uVar10 = *(uint *)(DAT_0532a840 + 0xe44);
  if ((param_2 & 1) == 0) {
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if (((*piVar2 == 0) || ((int)uVar11 < 0)) || (*(int *)(lVar9 + 0xe44) <= (int)uVar11)) {
          local_58 = *(ulong *)puVar3;
        }
        else {
          local_58 = (ulong)(ushort)**(undefined4 **)(*(long *)(lVar9 + 0xe48) + uVar11 * 8);
          FUN_0277d4ac(&local_58);
        }
        uVar5 = FUN_0277d7b4(&local_58,param_1);
        if ((uVar5 & 1) != 0) goto LAB_02fdd978;
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    uVar11 = 0;
LAB_02fdd978:
    lVar9 = *(long *)(lVar8 + 0x2a418);
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
        plVar6 = *(long **)(lVar9 + 0x20);
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        uVar5 = uVar5 & 0xffffffff;
        if (*(long *)(lVar8 + 0x2a418) == 0) goto LAB_02fdda48;
        plVar6 = *(long **)(*(long *)(lVar8 + 0x2a418) + 0x20);
      }
      if (plVar6 != (long *)0x0) {
        local_58 = *puVar1;
        local_50 = *(undefined8 *)(lVar8 + 0x2a400);
        uStack_48 = 0x20;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
    }
LAB_02fdda48:
    uVar10 = (uint)uVar11;
    if (0xff < uVar10) goto LAB_02fdda74;
    lVar4 = (ulong)(uVar10 >> 5) * 4;
    lVar9 = *(long *)(lVar8 + 0x2a400) + *puVar1;
    uVar10 = *(uint *)(lVar9 + lVar4) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
  }
  else {
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if (((*piVar2 == 0) || ((int)uVar11 < 0)) || (*(int *)(lVar9 + 0xe44) <= (int)uVar11)) {
          local_58 = *(ulong *)puVar3;
        }
        else {
          local_58 = (ulong)(ushort)**(undefined4 **)(*(long *)(lVar9 + 0xe48) + uVar11 * 8);
          FUN_0277d4ac(&local_58);
        }
        uVar5 = FUN_0277d7b4(&local_58,param_1);
        if ((uVar5 & 1) != 0) goto LAB_02fdd8c8;
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    uVar11 = 0;
LAB_02fdd8c8:
    lVar9 = *(long *)(lVar8 + 0x2a418);
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
        plVar6 = *(long **)(lVar9 + 0x20);
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        uVar5 = uVar5 & 0xffffffff;
        if (*(long *)(lVar8 + 0x2a418) == 0) goto LAB_02fdd9ec;
        plVar6 = *(long **)(*(long *)(lVar8 + 0x2a418) + 0x20);
      }
      if (plVar6 != (long *)0x0) {
        local_58 = *puVar1;
        local_50 = *(undefined8 *)(lVar8 + 0x2a400);
        uStack_48 = 0x20;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
    }
LAB_02fdd9ec:
    uVar10 = (uint)uVar11;
    if (0xff < uVar10) goto LAB_02fdda74;
    lVar4 = (ulong)(uVar10 >> 5) * 4;
    lVar9 = *(long *)(lVar8 + 0x2a400) + *puVar1;
    uVar10 = *(uint *)(lVar9 + lVar4) | 1 << (ulong)(uVar10 & 0x1f);
  }
  *(uint *)(lVar9 + lVar4) = uVar10;
LAB_02fdda74:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x2a418) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a418) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

