
void FUN_02661d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint local_9c;
  uint local_8c;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  
  if (DAT_05574040 != 0) {
    puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar8 == 0) {
        return;
      }
      lVar8 = lVar8 + 0x70;
    }
    else {
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar14[0x26] == (long *)0x0) {
        return;
      }
      lVar8 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      if (lVar8 == 0) {
        return;
      }
    }
    if ((*(long *)(lVar8 + 0xd0) == 0) ||
       (puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0xd0) + 0x10), puVar14 == (undefined8 *)0x0)) {
      local_9c = 0;
    }
    else {
      local_9c = (**(code **)*puVar14)();
    }
    puVar5 = PTR_DAT_04bb2020;
    uVar18 = 0;
    lVar17 = 0x27f8d8;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar9 = FUN_0265ca50(uVar18 & 0xffffffff,param_1 + 0x1c);
      if (lVar9 != 0) {
        lVar15 = *(long *)(lVar9 + 0x28);
        if (lVar15 == 0) {
          uVar10 = 0;
        }
        else {
          if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
            plVar11 = *(long **)(lVar15 + 0x20);
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
            uVar10 = uVar10 & 0xffffffff;
            if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02661f04;
            plVar11 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
          }
          if (plVar11 != (long *)0x0) {
            local_78 = *(undefined **)(lVar9 + 8);
            local_70 = *(char **)(lVar9 + 0x10);
            local_68 = 0x5f0;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
          }
        }
LAB_02661f04:
        lVar15 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x38;
        local_70 = "TodayReserveCoordinateHouseInterior";
        local_78 = puVar1;
        iVar6 = FUN_02746e10(lVar15,&local_78);
        if (iVar6 != 0) {
          if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
             (lVar12 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                   0x30))(), lVar12 != 0)) {
            lVar16 = *(long *)(lVar12 + lVar17);
            if (lVar16 == 0) {
              pvVar4 = (void *)(*(long *)(lVar12 + lVar17 + -0x18) +
                               *(long *)(lVar12 + lVar17 + -0x20));
              memset(pvVar4,0,0x1104);
              FUN_027ca620(pvVar4);
            }
            else {
              lVar3 = lVar12 + lVar17;
              if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
                local_8c = 0;
                plVar11 = *(long **)(lVar16 + 0x20);
joined_r0x0266210c:
                if (plVar11 != (long *)0x0) {
                  local_78 = *(undefined **)(lVar3 + -0x20);
                  local_70 = *(char **)(lVar3 + -0x18);
                  local_68 = 0x1104;
                  (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
                }
              }
              else {
                local_8c = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
                if (*(long *)(lVar12 + lVar17) != 0) {
                  plVar11 = *(long **)(*(long *)(lVar12 + lVar17) + 0x20);
                  goto joined_r0x0266210c;
                }
              }
              pvVar4 = (void *)(*(long *)(lVar3 + -0x18) + *(long *)(lVar3 + -0x20));
              memset(pvVar4,0,0x1104);
              FUN_027ca620(pvVar4);
              if ((((local_8c & 1) != 0) && (*(long *)(lVar12 + lVar17) != 0)) &&
                 (puVar14 = *(undefined8 **)(*(long *)(lVar12 + lVar17) + 0x18),
                 puVar14 != (undefined8 *)0x0)) {
                (**(code **)*puVar14)();
              }
            }
          }
          puVar2 = puVar5 + 0x10;
          local_70 = "AudioShuffleState";
          local_78 = puVar2;
          uVar7 = FUN_027490f0(uVar18 & 0xffffffff,&local_78);
          if ((uVar7 & 2) != uVar7) {
            local_70 = "AudioShuffleState";
            local_78 = puVar2;
            FUN_027494ac(uVar18 & 0xffffffff,&local_78);
          }
        }
        puVar2 = puVar5 + 0x10;
        local_70 = "TodayReserveCoordinateHouseExterior";
        local_78 = puVar2;
        iVar6 = FUN_02746e10(lVar15,&local_78);
        if (iVar6 != 0) {
          local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
          uVar13 = FUN_02b67a30(&local_78,uVar18 & 0xffffffff);
          if ((uVar13 & 1) != 0) {
            FUN_02b67050((ulong)local_78 & 0xffffffff);
          }
        }
        local_70 = "TodayReserveCoordinateHouseInterior";
        local_78 = puVar2;
        FUN_02747170(lVar15,&local_78,0);
        local_70 = "TodayReserveCoordinateHouseExterior";
        local_78 = puVar2;
        FUN_02747170(lVar15,&local_78,0);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar14 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar14)();
        }
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x888;
    } while (uVar18 != 10);
    if ((((local_9c & 1) != 0) && (*(long *)(lVar8 + 0xd0) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0xd0) + 0x18), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  return;
}

