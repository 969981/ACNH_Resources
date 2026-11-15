
void FUN_021c6130(long param_1,byte *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint local_94;
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*param_2 < 8) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "PcMaingameStart";
    iVar4 = FUN_0274bce0(param_2,&local_70);
    if (iVar4 != 0) {
      local_74[0] = *param_2;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
      lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
      if (lVar6 != 0) {
        puVar1 = (uint *)(param_1 + 0x55d38);
        if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
          local_94 = 0;
        }
        else {
          local_94 = (**(code **)*puVar7)();
        }
        uVar15 = 0;
        lVar14 = 0x1b0;
        do {
          lVar8 = FUN_0265c2a0(uVar15 & 0xffffffff);
          if (lVar8 != 0) {
            if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
               (puVar7 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar7 == (undefined8 *)0x0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)*puVar7)();
              uVar9 = uVar9 & 0xffffffff;
            }
            uVar5 = FUN_026b318c(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8),
                                 *(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90) + 0x1c);
            if ((uVar5 < 8) && (lVar11 = *(long *)PTR_DAT_04bb46b0, lVar11 != 0)) {
              puVar7 = *(undefined8 **)(lVar11 + 0x10);
              if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
                lVar11 = (**(code **)(*(long *)*puVar7 + 0x38))();
                if (lVar11 != 0) {
                  lVar11 = lVar11 + 0x70;
LAB_021c62e4:
                  lVar13 = lVar11 + (ulong)uVar5 * 0x700;
                  plVar12 = *(long **)(lVar13 + lVar14);
                  if ((plVar12 == (long *)0x0) ||
                     (puVar7 = (undefined8 *)*plVar12, puVar7 == (undefined8 *)0x0)) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (**(code **)*puVar7)();
                    uVar10 = uVar10 & 0xffffffff;
                  }
                  lVar11 = lVar11 + (ulong)uVar5 * 0x700 + lVar14;
                  pcStack_68 = "TalkCountToday";
                  local_70 = puVar2 + 0x10;
                  iVar4 = FUN_02746e10(*(long *)(lVar11 + -0x18) + *(long *)(lVar11 + -0x20) + 0x38,
                                       &local_70);
                  if (0 < iVar4) {
                    *puVar1 = *puVar1 | 1 << (ulong)((uint)uVar15 & 0x1f);
                  }
                  if ((((uVar10 & 1) != 0) && (lVar11 = *(long *)(lVar13 + lVar14), lVar11 != 0)) &&
                     (puVar7 = *(undefined8 **)(lVar11 + 8), puVar7 != (undefined8 *)0x0)) {
                    (**(code **)*puVar7)();
                  }
                }
              }
              else if (((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) &&
                      (lVar11 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar11 != 0))
              goto LAB_021c62e4;
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar7 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar7)();
            }
          }
          puVar3 = PTR_DAT_04bb2020;
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x10798;
        } while (uVar15 != 10);
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "HasTalkedAllVillagerToday";
        iVar4 = FUN_0274bce0(param_2,&local_70);
        if (((iVar4 == 0) && (0 < (int)*(uint *)(param_1 + 0x7440))) &&
           (uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555),
           uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
           uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f, uVar5 = uVar5 + (uVar5 >> 8),
           *(uint *)(param_1 + 0x7440) <= (uVar5 + (uVar5 >> 0x10) & 0x3f))) {
          pcStack_68 = "GreetAllVillager";
          local_70 = puVar3 + 0x10;
          FUN_0279a9f0(param_2,&local_70,1);
          pcStack_68 = "HasTalkedAllVillagerToday";
          local_70 = puVar3 + 0x10;
          FUN_0274bfe8(param_2,&local_70,1);
        }
        if ((((local_94 & 1) != 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
    }
  }
  return;
}

