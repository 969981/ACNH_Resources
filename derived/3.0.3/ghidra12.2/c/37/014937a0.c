
/* WARNING: Removing unreachable block (ram,0x01493870) */
/* WARNING: Removing unreachable block (ram,0x01493880) */
/* WARNING: Removing unreachable block (ram,0x0149388c) */

void FUN_014937a0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  uint local_9c;
  undefined8 local_98;
  long local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar11 + 0x338));
      iVar5 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar12 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = &PTR_LAB_048fe480;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((*(long *)(DAT_0519d040 + 0x1f8) != 0) && (uVar7 = FUN_01500404(&local_78), (uVar7 & 1) != 0))
  {
    lVar11 = FUN_01a4fa00(&local_78);
    puVar4 = PTR_DAT_04bb5920;
    puVar3 = PTR_DAT_04bb27c0;
    local_98 = lVar11 + 8;
    local_90 = lVar11 + 0x18;
    iVar2 = *(int *)(lVar11 + 0x10);
    local_7c = *(int *)(lVar11 + 0x14);
    local_88 = PTR_DAT_04bb2010 + 0x10;
    iVar5 = *(int *)(lVar11 + 0x24) + 1;
    if (iVar5 != local_7c) {
      uVar10 = 8;
      local_80 = iVar2;
      if ((param_2 & 1) == 0) {
        uVar10 = 0;
      }
      do {
        puVar8 = (uint *)FUN_014fbd50(&local_78,7,&local_88);
        local_9c = *puVar8;
        if (((local_9c != 0) && (uVar7 = FUN_015039ac(&local_9c), (uVar7 & 1) != 0)) &&
           (lVar11 = *(long *)puVar3, lVar11 != 0)) {
          if (((local_9c == 0) ||
              (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                   ((ulong)(local_9c >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0))
             || (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 ||
                 (*(uint *)(plVar13 + 0x46) != local_9c)))) {
            plVar13 = (long *)0x0;
          }
          if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            lVar11 = *(long *)puVar3;
            iVar6 = (**(code **)(*plVar9 + 0x60))();
            if (iVar6 < 0x11) {
              uVar14 = 1;
            }
            else {
              uVar14 = *(uint *)(lVar11 + 0x5e8);
              if (4 < uVar14) goto LAB_01493a24;
              uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
            }
          }
          else {
LAB_01493a24:
            uVar14 = 0;
          }
          if (plVar13 != (long *)0x0) {
            lVar11 = plVar13[0x2a];
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04ced978), iVar6 != 0)) {
              *(undefined ***)puVar4 = &PTR_LAB_048ff180;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,puVar4);
            uVar1 = 0;
            if ((int)lVar11 == 1) {
              uVar1 = uVar14;
            }
            if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
              *(uint *)((long)plVar13 + 0xa74) =
                   *(uint *)((long)plVar13 + 0xa74) & 0xfffffff7 | uVar10;
            }
          }
        }
        if (local_80 < *(int *)(local_90 + 8)) {
          local_80 = local_80 + 1;
        }
        else {
          local_7c = local_7c + 1;
          local_80 = *(int *)(local_98 + 8);
        }
      } while (iVar2 != local_80 || iVar5 != local_7c);
    }
  }
  return;
}

