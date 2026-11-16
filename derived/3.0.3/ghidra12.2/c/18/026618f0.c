
void FUN_026618f0(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint local_7c;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) goto LAB_02661d54;
  puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar10 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar10 != 0) {
      lVar10 = lVar10 + 0x70;
LAB_02661970:
      lVar10 = lVar10 + (ulong)param_1 * 0x10798;
      if (*(long **)(lVar10 + 0x140) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar10 + 0x140);
        uVar11 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar13)();
        }
      }
      pbVar3 = (byte *)(*(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120));
      uVar14 = (ulong)*pbVar3;
      if ((uVar14 < 0x23) && (bVar6 = pbVar3[1], bVar6 <= (byte)PTR_DAT_04bc27f0[uVar14])) {
        uVar9 = (uint)(&DAT_053e6eb8)[uVar14] >> (ulong)(bVar6 & 0x1f) & 1;
      }
      else {
        uVar9 = 0;
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x140) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x140) + 8), puVar13 != (undefined8 *)0x0))
      {
        (**(code **)*puVar13)();
      }
      if (uVar9 != 0) {
        if ((*(long *)(lVar10 + 0x140) == 0) ||
           (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x140) + 0x10),
           puVar13 == (undefined8 *)0x0)) {
          local_7c = 0;
        }
        else {
          local_7c = (**(code **)*puVar13)();
        }
        puVar7 = PTR_DAT_04bb2020;
        lVar15 = 0;
        uVar11 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          if ((*(long *)(lVar10 + 0x140) != 0) &&
             (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
            local_78 = *(undefined **)(lVar10 + 0x120);
            local_70 = *(char **)(lVar10 + 0x128);
            uStack_68 = 0x13230;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
          }
          lVar4 = *(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120) + lVar15;
          if (*(int *)(lVar4 + 0x20) != 0 && *(int *)(lVar4 + 4) != 0) {
            lVar4 = lVar4 + 0x3c;
            local_70 = "TodayReserveCoordinateHouseInterior";
            local_78 = puVar1;
            iVar8 = FUN_02746e10(lVar4,&local_78);
            if (iVar8 != 0) {
              puVar2 = puVar7 + 0x10;
              local_70 = "TodayReserveCoordinateHouseInterior";
              local_78 = puVar2;
              FUN_02747170(lVar4,&local_78,0);
              local_70 = "TodayReserveCoordinateHouseInterior";
              local_78 = puVar2;
              FUN_020ec370(param_1,uVar11 & 0xffffffff,&local_78,0);
              if ((*(long *)(lVar10 + 0x140) != 0) &&
                 (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0)) {
                local_78 = *(undefined **)(lVar10 + 0x120);
                local_70 = *(char **)(lVar10 + 0x128);
                uStack_68 = 0x13230;
                (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
              }
              local_70 = "AudioShuffleState";
              local_78 = puVar2;
              uVar9 = FUN_02749340(*(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120) + 0x1267c,
                                   &local_78);
              if ((uVar9 & 2) != uVar9) {
                if ((*(long *)(lVar10 + 0x140) != 0) &&
                   (plVar12 = *(long **)(*(long *)(lVar10 + 0x140) + 0x20), plVar12 != (long *)0x0))
                {
                  local_78 = *(undefined **)(lVar10 + 0x120);
                  local_70 = *(char **)(lVar10 + 0x128);
                  uStack_68 = 0x13230;
                  (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
                }
                local_78 = puVar7 + 0x10;
                local_70 = "AudioShuffleState";
                FUN_02749650(*(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120) + 0x1267c,param_1
                             ,&local_78,uVar9 & 2,1);
              }
            }
            puVar2 = puVar7 + 0x10;
            local_70 = "TodayReserveCoordinateHouseExterior";
            local_78 = puVar2;
            iVar8 = FUN_02746e10(lVar4,&local_78);
            if (iVar8 != 0) {
              local_70 = "TodayReserveCoordinateHouseExterior";
              local_78 = puVar2;
              FUN_02747170(lVar4,&local_78,0);
              local_70 = "TodayReserveCoordinateHouseExterior";
              local_78 = puVar2;
              FUN_020ec370(param_1,uVar11 & 0xffffffff,&local_78,0);
            }
          }
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 0x5f0;
        } while (uVar11 != 8);
        if ((((local_7c & 1) != 0) && (*(long *)(lVar10 + 0x140) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x140) + 0x18),
           puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
      }
    }
  }
  else if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
          (lVar10 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar10 != 0)) goto LAB_02661970;
  if ((DAT_05574040 == 0) ||
     (lVar10 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar10 == 0)
     ) goto LAB_02661d54;
  lVar10 = lVar10 + (ulong)param_1 * 0x888;
  lVar15 = *(long *)(lVar10 + 0x27f8d8);
  if (lVar15 == 0) {
    pvVar5 = (void *)(*(long *)(lVar10 + 0x27f8c0) + *(long *)(lVar10 + 0x27f8b8));
    memset(pvVar5,0,0x1104);
    FUN_027ca620(pvVar5);
    goto LAB_02661d54;
  }
  if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
    uVar11 = 0;
LAB_02661ce8:
    plVar12 = *(long **)(lVar15 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = *(undefined **)(lVar10 + 0x27f8b8);
      local_70 = *(char **)(lVar10 + 0x27f8c0);
      uStack_68 = 0x1104;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
  else {
    uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
    lVar15 = *(long *)(lVar10 + 0x27f8d8);
    uVar11 = uVar11 & 0xffffffff;
    if (lVar15 != 0) goto LAB_02661ce8;
  }
  pvVar5 = (void *)(*(long *)(lVar10 + 0x27f8c0) + *(long *)(lVar10 + 0x27f8b8));
  memset(pvVar5,0,0x1104);
  FUN_027ca620(pvVar5);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x27f8d8) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x27f8d8) + 0x18), puVar13 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar13)();
  }
LAB_02661d54:
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  uVar11 = FUN_02b67a30(&local_78,param_1);
  if ((uVar11 & 1) != 0) {
    FUN_02b67050((ulong)local_78 & 0xffffffff);
  }
  return;
}

