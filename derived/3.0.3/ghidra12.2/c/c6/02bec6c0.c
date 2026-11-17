
/* WARNING: Removing unreachable block (ram,0x02bec758) */

void FUN_02bec6c0(long param_1,undefined8 param_2,ulong param_3)

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
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  bVar10 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar10);
  lVar4 = FUN_02583354(DAT_055021a0,&local_58,1);
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
  uVar11 = *(uint *)(DAT_0532a840 + 0xe44);
  if ((param_3 & 1) == 0) {
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        if (((*piVar2 == 0) || ((int)uVar12 < 0)) || (*(int *)(lVar9 + 0xe44) <= (int)uVar12)) {
          local_58 = *(ulong *)puVar3;
        }
        else {
          local_58 = (ulong)(ushort)**(undefined4 **)(*(long *)(lVar9 + 0xe48) + uVar12 * 8);
          FUN_0277d4ac(&local_58);
        }
        uVar5 = FUN_0277d7b4(&local_58,param_2);
        if ((uVar5 & 1) != 0) goto LAB_02bec888;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    uVar12 = 0;
LAB_02bec888:
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
        if (*(long *)(lVar8 + 0x2a418) == 0) goto LAB_02bec958;
        plVar6 = *(long **)(*(long *)(lVar8 + 0x2a418) + 0x20);
      }
      if (plVar6 != (long *)0x0) {
        local_58 = *puVar1;
        local_50 = *(undefined8 *)(lVar8 + 0x2a400);
        uStack_48 = 0x20;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
    }
LAB_02bec958:
    uVar11 = (uint)uVar12;
    if (0xff < uVar11) goto LAB_02bec984;
    lVar4 = (ulong)(uVar11 >> 5) * 4;
    lVar9 = *(long *)(lVar8 + 0x2a400) + *puVar1;
    uVar11 = *(uint *)(lVar9 + lVar4) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  else {
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        if (((*piVar2 == 0) || ((int)uVar12 < 0)) || (*(int *)(lVar9 + 0xe44) <= (int)uVar12)) {
          local_58 = *(ulong *)puVar3;
        }
        else {
          local_58 = (ulong)(ushort)**(undefined4 **)(*(long *)(lVar9 + 0xe48) + uVar12 * 8);
          FUN_0277d4ac(&local_58);
        }
        uVar5 = FUN_0277d7b4(&local_58,param_2);
        if ((uVar5 & 1) != 0) goto LAB_02bec7d8;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    uVar12 = 0;
LAB_02bec7d8:
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
        if (*(long *)(lVar8 + 0x2a418) == 0) goto LAB_02bec8fc;
        plVar6 = *(long **)(*(long *)(lVar8 + 0x2a418) + 0x20);
      }
      if (plVar6 != (long *)0x0) {
        local_58 = *puVar1;
        local_50 = *(undefined8 *)(lVar8 + 0x2a400);
        uStack_48 = 0x20;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
    }
LAB_02bec8fc:
    uVar11 = (uint)uVar12;
    if (0xff < uVar11) goto LAB_02bec984;
    lVar4 = (ulong)(uVar11 >> 5) * 4;
    lVar9 = *(long *)(lVar8 + 0x2a400) + *puVar1;
    uVar11 = *(uint *)(lVar9 + lVar4) | 1 << (ulong)(uVar11 & 0x1f);
  }
  *(uint *)(lVar9 + lVar4) = uVar11;
LAB_02bec984:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x2a418) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a418) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

