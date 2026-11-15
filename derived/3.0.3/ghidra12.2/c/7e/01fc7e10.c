
void FUN_01fc7e10(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_118 [8];
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  char local_94 [6];
  char acStack_8e [2];
  char acStack_8c [6];
  undefined1 local_86;
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01fc7ed4;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc7ed4;
    }
  }
  uVar10 = 0;
joined_r0x01fc7ed4:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      plVar5 = *(long **)(param_1 + 0x10);
      (**(code **)(plVar8[0x7c] + 0x18))(plVar8 + 0x7c);
      (**(code **)(plVar8[0x7c] + 0x18))(plVar8 + 0x7c);
      lVar7 = plVar8[0x7d];
      (**(code **)(*plVar5 + 0x18))(plVar5);
      if (lVar7 != plVar5[1]) {
        uVar6 = 0;
        bVar3 = true;
        do {
          if (*(char *)(plVar8[0x7d] + uVar6) != *(char *)(plVar5[1] + uVar6)) break;
          if (*(char *)(plVar8[0x7d] + uVar6) == '\0') {
            if (bVar3) {
              return;
            }
            break;
          }
          bVar3 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        puVar9 = (undefined8 *)plVar8[0x77];
        if (((*PTR_DAT_04bb6710 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6710);
        }
        if (((puVar9 != (undefined8 *)0x0) &&
            (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) &&
           (uVar6 = FUN_021fc000(*(undefined8 *)(param_1 + 0x18),*(long *)(puVar9[1] + 0x68) + 0x278
                                ), (uVar6 & 1) == 0)) {
          local_55 = 0;
          local_50 = 0;
          local_4a = 0;
          local_98 = 0x40;
          pcStack_a0 = local_94;
          local_4c = 0x101;
          local_110 = PTR_DAT_04bb2bc0 + 0x10;
          uStack_ac = *(undefined4 *)PTR_DAT_04bb3238;
          local_94[0] = s_NpcSeeNeighbor_040fa2af[0];
          local_94[1] = s_NpcSeeNeighbor_040fa2af[1];
          local_94[2] = s_NpcSeeNeighbor_040fa2af[2];
          local_94[3] = s_NpcSeeNeighbor_040fa2af[3];
          local_94[4] = s_NpcSeeNeighbor_040fa2af[4];
          local_94[5] = s_NpcSeeNeighbor_040fa2af[5];
          local_86 = 0;
          local_100 = 0x40;
          local_bd = 0;
          acStack_8e[0] = s_NpcSeeNeighbor_040fa2af[6];
          acStack_8e[1] = s_NpcSeeNeighbor_040fa2af[7];
          acStack_8c[0] = s_NpcSeeNeighbor_040fa2af[8];
          acStack_8c[1] = s_NpcSeeNeighbor_040fa2af[9];
          acStack_8c[2] = s_NpcSeeNeighbor_040fa2af[10];
          acStack_8c[3] = s_NpcSeeNeighbor_040fa2af[0xb];
          acStack_8c[4] = s_NpcSeeNeighbor_040fa2af[0xc];
          acStack_8c[5] = s_NpcSeeNeighbor_040fa2af[0xd];
          puStack_108 = local_fc;
          local_48 = 0xffffffff;
          local_fc[0] = 0;
          local_b8 = 0;
          local_b2 = 0;
          local_b0 = 0xffffffff;
          local_118[0] = 0;
          local_b4 = 1;
          local_a8 = local_110;
          uStack_44 = uStack_ac;
          FUN_01fa36d0(puVar9,*(undefined8 *)(param_1 + 8),&local_a8,local_118);
        }
      }
    }
  }
  return;
}

