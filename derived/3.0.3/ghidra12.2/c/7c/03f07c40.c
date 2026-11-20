
undefined8 FUN_03f07c40(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  undefined *local_70;
  ulong local_68;
  
  uVar10 = 0;
  if ((-1 < (int)param_2) && ((*(uint *)(param_1 + 0xd8) & 1) != 0)) {
    uVar4 = **(uint **)(param_1 + 0xd0);
    if ((int)param_2 <= (int)uVar4) {
      if (uVar4 <= param_2) {
        param_2 = 0;
      }
      lVar7 = *(long *)(*(long *)(*(uint **)(param_1 + 0xd0) + 2) + (ulong)param_2 * 0x20);
      if (lVar7 != 0) {
        uVar10 = *(ulong *)(lVar7 + 0x18) & 0xfffffffffffffffe;
        goto LAB_03f07ca8;
      }
    }
    uVar10 = 0;
  }
LAB_03f07ca8:
  uVar4 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar3 = uVar11;
      if (*(uint *)(param_1 + 0x20) <= uVar11) {
        uVar3 = 0;
      }
      lVar7 = *(long *)(param_1 + 0x28) + (ulong)uVar3 * 0x1a0;
      plVar8 = (long *)(lVar7 + 0x48);
      local_70 = puVar1;
      local_68 = uVar10;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      puVar12 = (ulong *)(lVar7 + 0x50);
      uVar9 = *puVar12;
      (**(code **)(local_70 + 0x18))(&local_70);
      if (uVar9 == local_68) {
LAB_03f07db0:
        if (*(uint *)(param_1 + 0x20) <= uVar11) {
          uVar11 = 0;
        }
        lVar7 = *(long *)(param_1 + 0x28) + (ulong)uVar11 * 0x1a0;
        plVar8 = (long *)(lVar7 + 0xc0);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        return *(undefined8 *)(lVar7 + 200);
      }
      uVar9 = 0;
      bVar6 = true;
      lVar7 = *puVar12 + 2;
      do {
        lVar2 = lVar7 + uVar9;
        cVar5 = *(char *)(lVar2 + -2);
        if (cVar5 != *(char *)(local_68 + uVar9)) break;
        if (cVar5 == '\0') {
          if (bVar6) goto LAB_03f07db0;
          break;
        }
        cVar5 = *(char *)(lVar2 + -1);
        if (cVar5 != *(char *)(local_68 + uVar9 + 1)) break;
        if (cVar5 == '\0') goto LAB_03f07db0;
        cVar5 = *(char *)(lVar7 + uVar9);
        if (cVar5 != *(char *)(local_68 + uVar9 + 2)) break;
        if (cVar5 == '\0') goto LAB_03f07db0;
        bVar6 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return 0;
}

