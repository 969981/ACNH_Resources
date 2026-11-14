
byte FUN_019dac10(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  ushort uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  uint local_60;
  undefined4 local_5c;
  undefined *local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_60 = param_2 & 0xffff;
  local_5c = 0;
  FUN_0277d4ac(&local_60);
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = local_60;
  uStack_4c = local_5c;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_019dad7c:
    uVar11 = 0xbc;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_019dad7c;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_60);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
       (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar12 == (uint *)0x0)) goto LAB_019dad7c;
    uVar5 = *puVar12;
    if (uVar5 == 0 || puVar12 == (uint *)(ulong)uVar5) {
LAB_019dad74:
      uVar11 = 0;
    }
    else {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
      if (((*puVar13 == 0) || (uVar5 = puVar13[1], uVar5 == 0)) || ((ulong)(ushort)puVar13[2] == 0))
      goto LAB_019dad74;
      lVar14 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar14 == 0) goto LAB_019dad74;
      uVar1 = 0;
      if ((ulong)uVar5 != 0) {
        uVar1 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar5);
      }
      if (*puVar13 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
         (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
         0xbc < uVar11)) goto LAB_019dad74;
    }
  }
  if (uVar11 == 0x69) {
    if (*(char *)(param_1 + 0x80c) == '\0') {
      uVar5 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x12;
      *(uint *)(param_1 + 0x808) = (uint)(uVar5 < 0xfffffff4);
      *(undefined1 *)(param_1 + 0x80c) = 1;
      if (uVar5 < 0xfffffff4) goto LAB_019dade8;
    }
    else if (*(int *)(param_1 + 0x808) == 1) {
LAB_019dade8:
      puVar2 = PTR_DAT_04bb27c0;
      lVar14 = *(long *)PTR_DAT_04bb27c0;
      if (lVar14 != 0) {
        uVar5 = *(uint *)PTR_DAT_04bbea10;
        if (((uVar5 == 0) ||
            (plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                 ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
           (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar5)))) {
          plVar15 = (long *)0x0;
        }
        if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar2;
          iVar6 = (**(code **)(*plVar7 + 0x60))();
          if (iVar6 < 0x11) {
            uVar5 = 1;
          }
          else {
            if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_019dae98;
            uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_019dae98:
          uVar5 = 0;
        }
        if (plVar15 != (long *)0x0) {
          lVar14 = plVar15[0x2a];
          if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbe9f0);
          }
          uVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bbe9e8);
          uVar1 = 0;
          if ((int)lVar14 == 1) {
            uVar1 = uVar5;
          }
          if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
            if (plVar15[0x4f] == 0) {
              bVar4 = FUN_019da620(DAT_052d1100,param_2);
            }
            else {
              bVar4 = FUN_018aca40(plVar15[0x4f],param_2);
            }
            goto LAB_019db050;
          }
        }
      }
      puVar3 = PTR_DAT_04bb2720;
      puVar2 = PTR_DAT_04bb2640;
      lVar14 = *(long *)PTR_DAT_04bb2720;
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
LAB_019daf9c:
        plVar15 = &DAT_055c04a0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        if ((iVar6 != 0x758f7eaf) || (lVar14 = *(long *)puVar3, lVar14 == 0)) goto LAB_019daf9c;
        plVar15 = &DAT_055c04a0;
        if (*(long *)(lVar14 + 0x330) != 0) {
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)puVar2 + 0x18))
                             (*(long **)puVar2,*(undefined4 *)(lVar14 + 0x338));
          iVar6 = FUN_006bd550(*puVar9,0);
          plVar15 = (long *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            plVar15 = &DAT_055c04a0;
          }
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15);
      iVar6 = FUN_00b08880(plVar15[1],0,0);
      if (iVar6 == -0x477aafe0) {
        param_1 = param_1 + 0x6e8;
      }
      else if (iVar6 == -0x83ceb3d) {
        param_1 = param_1 + 0x5c8;
      }
      else {
        param_1 = param_1 + 0x4a8;
      }
      if (0 < *(int *)(param_1 + 0x78)) {
        lVar14 = 0;
        do {
          puVar10 = (ushort *)
                    (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + lVar14 * 8) + 0x30)
                                + 0xf0))();
          bVar4 = *puVar10 == param_2;
          if ((bool)bVar4) break;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 0x78));
        goto LAB_019db050;
      }
    }
  }
  bVar4 = 0;
LAB_019db050:
  return bVar4 & 1;
}

