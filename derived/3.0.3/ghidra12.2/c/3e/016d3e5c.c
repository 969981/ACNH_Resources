
void FUN_016d3e5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  puVar1 = PTR_DAT_04bb27d0;
  puVar2 = PTR_DAT_04bb2020;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
    if ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) &&
       (lVar6 = *(long *)PTR_DAT_04bb46b0, lVar6 != 0)) {
      puVar7 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
        lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar6 == 0) {
          return;
        }
        lVar6 = lVar6 + 0x70;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar7[0x26] == (long *)0x0) {
          return;
        }
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
        if (lVar6 == 0) {
          return;
        }
      }
      if ((*(long **)(lVar6 + 0x1bf260) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1bf260), puVar7 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar7)();
        uVar3 = uVar3 ^ 1;
      }
      uVar5 = FUN_028d54a0(*(long *)(lVar6 + 0x1bf248) + *(long *)(lVar6 + 0x1bf240));
      if ((uVar5 & 1) != 0) {
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "spn";
        FUN_016d3bec(&local_50,1);
      }
      puVar2 = PTR_DAT_04bb2020;
      lVar8 = *(long *)puVar1;
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) || (*(int *)(lVar8 + 0x80) != 1)) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "PynVisitToday";
        local_50 = puVar1;
        iVar4 = FUN_0273ea30(&local_50);
        if (iVar4 != 0) {
          pcStack_48 = "pyn";
          local_60 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          local_50 = puVar1;
          uVar5 = FUN_028d4a98(&local_60,&local_50);
          if ((uVar5 & 1) != 0) {
            local_50 = puVar2 + 0x10;
            pcStack_48 = "pyn";
            FUN_016d3bec(&local_50,1);
          }
        }
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x1bf260) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1bf260) + 8), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
    }
  }
  else if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "otg";
    local_50 = puVar1;
    FUN_016d3bec(&local_50,1);
    pcStack_48 = "mnc";
    local_50 = puVar1;
    FUN_016d3bec(&local_50,1);
    pcStack_48 = "man";
    local_50 = puVar1;
    FUN_016d3bec(&local_50,1);
    local_35 = 0;
    pcStack_48 = local_3c;
    local_40 = 8;
    local_3c[0] = 0;
    local_50 = PTR_DAT_04bb3768 + 0x10;
    uVar5 = FUN_02213be0(&DAT_0545a400,&local_50);
    if ((uVar5 & 1) != 0) {
      FUN_016d3bec(&local_50,1);
    }
    if ((*(uint *)PTR_DAT_04bba738 | 4) == 6) {
      local_60 = puVar2 + 0x10;
      puStack_58 = &DAT_0408be95;
      FUN_016d3bec(&local_60,1);
    }
  }
  return;
}

