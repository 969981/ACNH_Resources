
void FUN_036e1444(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined2 uVar9;
  undefined *local_88;
  long local_80;
  int local_64;
  int local_60;
  byte local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = &DAT_0548e140;
  if (lVar8 == 0) {
LAB_036e14b0:
    if (*pbVar7 < 8) goto LAB_036e1528;
LAB_036e14bc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_036e1520:
      pbVar7 = &DAT_0548e168;
      goto LAB_036e1528;
    }
    lVar8 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_44[0] = *pbVar7;
    if (7 < local_44[0]) goto LAB_036e1520;
  }
  else {
    pbVar7 = &DAT_0548e140;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_036e14b0;
      }
      goto LAB_036e14bc;
    }
LAB_036e1528:
    local_44[0] = *pbVar7;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
    if (*(int *)(param_1 + 0x10) != 1) goto LAB_036e169c;
LAB_036e1560:
    FUN_025f1c50(&local_88,local_44,0);
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar8 = *(long *)(DAT_05ab7608 + 8), lVar8 == 0)) {
      uVar9 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
            (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar9 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar9 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    local_40._0_6_ = CONCAT24(uVar9,(undefined4)local_40);
    if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
      uVar9 = *(undefined2 *)(param_1 + 0x2c);
      if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
        uVar9 = 0xffff;
      }
    }
    else {
      lVar8 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar5 == (undefined8 *)0x0)) {
        uVar9 = *(undefined2 *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        uVar9 = *(undefined2 *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
    }
    local_40 = (undefined **)CONCAT26(uVar9,(undefined6)local_40);
    local_38 = (char *)(CONCAT44(local_38._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) &
                       0xffffffff0000000f);
    FUN_025f1ecc(&local_88,&local_40);
  }
  else {
    if (((*DAT_05ab8198 ^ 0xffff) & 3) == 0) goto LAB_036e1560;
LAB_036e169c:
    FUN_025f1c50(&local_88,local_44,1);
    uVar2 = *(ushort *)(param_1 + 0xdc);
    iVar4 = *(int *)(param_1 + 0xc);
    if (local_60 == 1) {
      FUN_02602950(&local_88,0x7a);
      local_40 = &PTR_LAB_048f9770;
      local_38 = "FacilityID";
      if (local_80 != 0) {
        FUN_02605660(local_80,&local_40,(long)iVar4);
        local_40 = &PTR_LAB_048f9770;
        local_38 = "OrderType";
        if (local_80 != 0) {
          FUN_02605660(local_80,&local_40,uVar2 & 0xf);
        }
      }
    }
  }
  local_88 = PTR_DAT_04bc34e8 + 0x10;
  iVar4 = FUN_025f20f8(&local_88);
  if (iVar4 != -1) {
    iVar4 = (**(code **)(local_88 + 0x20))(&local_88);
    local_40 = (undefined **)CONCAT44(local_40._4_4_,iVar4);
    if (iVar4 < 0xd) goto LAB_036e1778;
  }
  if (local_64 == 0) {
    local_64 = 1;
  }
LAB_036e1778:
  FUN_02601530(&local_88);
  return;
}

