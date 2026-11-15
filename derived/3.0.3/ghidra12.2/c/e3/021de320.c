
int FUN_021de320(uint *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *local_98;
  long local_90;
  undefined1 local_88;
  byte local_87;
  undefined *local_80;
  long local_78;
  undefined1 local_70;
  byte local_6f;
  int local_64;
  undefined *local_60;
  char *pcStack_58;
  
  local_64 = param_2;
  lVar10 = FUN_0265c2a0(*param_1);
  if (lVar10 == 0) {
    return param_2;
  }
  plVar13 = *(long **)(lVar10 + 0x28);
  local_70 = 1;
  local_78 = lVar10;
  if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)**(undefined8 **)*plVar13)();
    plVar13 = *(long **)(lVar10 + 0x28);
  }
  local_6f = bVar7 & 1;
  lVar2 = *(long *)(lVar10 + 8);
  lVar3 = *(long *)(lVar10 + 0x10);
  local_88 = 1;
  puVar1 = PTR_DAT_04bb67a0 + 0x10;
  local_90 = lVar10;
  local_80 = puVar1;
  if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)**(undefined8 **)*plVar13)();
  }
  puVar6 = PTR_DAT_04bb32f0;
  puVar5 = PTR_DAT_04bb2020;
  local_87 = bVar8 & 1;
  uVar4 = *param_1;
  local_98 = puVar1;
  if (((uVar4 == 0xffffffff) || (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0)) ||
     ((lVar14 = *(long *)PTR_DAT_04bb27d0, lVar14 != 0 &&
      ((*(long *)(lVar14 + 0x28) != 0 && (*(int *)(lVar14 + 0x80) == 1)))))) goto LAB_021de450;
  iVar9 = (int)*(char *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1267a);
  local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar9);
  if (iVar9 != 0) goto LAB_021de450;
  if (((uVar4 < 10) && ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] != '\0')) &&
     ((&DAT_053fede8)[(ulong)uVar4 * 0x174] != 0)) {
    uVar4 = *(uint *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar4);
    if ((uVar4 < 0x1b) && ((1 << (ulong)(uVar4 & 0x1f) & 0x403c010U) != 0)) goto LAB_021de450;
  }
  uVar15 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Countdown";
  uVar12 = FUN_0087c154(uVar15,&local_60);
  if ((uVar12 & 1) == 0) {
LAB_021de5a8:
    lVar2 = lVar3 + lVar2 + 0x1267c;
    if (*(int *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x10764) == 0) {
      local_60 = puVar5 + 0x10;
      pcStack_58 = "EquipEasterWear";
      iVar9 = FUN_02749340(lVar2,&local_60);
      if ((iVar9 != 0) && (local_64 != 0x12)) {
        iVar9 = 0x13;
        goto LAB_021de6e8;
      }
    }
    pcStack_58 = "Halloween";
    local_60 = puVar5 + 0x10;
    uVar12 = FUN_0087c154(*(undefined8 *)puVar6,&local_60);
    if (((uVar12 & 1) == 0) || (*(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) < '\x11')) {
      pcStack_58 = "HarvestFestival";
      local_60 = puVar5 + 0x10;
      uVar12 = FUN_0087c154(uVar15,&local_60);
      if (((uVar12 & 1) == 0) || (*(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) < '\x05')) {
        pcStack_58 = "EquipChristmasWear";
        local_60 = puVar5 + 0x10;
        iVar9 = FUN_02749340(lVar2,&local_60);
        if (iVar9 == 0) {
          pcStack_58 = "Carnival";
          local_60 = puVar5 + 0x10;
          uVar12 = FUN_0087c154(uVar15,&local_60);
          if ((uVar12 & 1) == 0) {
LAB_021de450:
            if ((((bVar8 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            if ((((bVar7 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            return local_64;
          }
          iVar9 = 0x19;
        }
        else {
          iVar9 = 0;
        }
      }
      else {
        iVar9 = 0x16;
        if (*(int *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x10764) != 1) {
          iVar9 = 0x17;
        }
      }
    }
    else {
      iVar9 = 0x15;
    }
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb32e8;
    if (*(char *)(lVar14 + 0x4062) == '\x01') {
      if ((*(char *)(lVar14 + 0x4063) != '\x01') || ('\x04' < *(char *)(lVar14 + 0x4064)))
      goto LAB_021de5a8;
    }
    else if ((*(char *)(lVar14 + 0x4062) != '\f') ||
            ((*(char *)(lVar14 + 0x4063) != '\x1f' || (*(char *)(lVar14 + 0x4064) != '\x17'))))
    goto LAB_021de5a8;
    iVar9 = 0xd;
  }
LAB_021de6e8:
  FUN_02640184(&local_98);
  FUN_02640184(&local_80);
  return iVar9;
}

