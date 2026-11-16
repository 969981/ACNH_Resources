
void FUN_02674d30(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  byte local_80 [4];
  byte local_7c [4];
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb4f78;
  if ((param_2 & 1) != 0) {
    local_7c[0] = *param_1;
    if (7 < local_7c[0]) {
      local_7c[0] = 0xff;
    }
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_7c,1);
    if (lVar6 == 0) {
      uVar11 = 0;
    }
    else {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "UpgradePocket40";
      local_78 = puVar1;
      iVar5 = FUN_0274b8d0(lVar6,&local_78);
      if (iVar5 == 0) {
        pcStack_70 = "UpgradePocket30";
        local_78 = puVar1;
        iVar5 = FUN_0274b8d0(lVar6,&local_78);
        uVar11 = (uint)(iVar5 != 0);
      }
      else {
        uVar11 = 2;
      }
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
    if (uVar11 != 0) {
      return;
    }
  }
  local_80[0] = *param_1;
  if (7 < local_80[0]) {
    local_80[0] = 0xff;
  }
  lVar6 = FUN_02583354(*(undefined8 *)puVar4,local_80,1);
  if ((lVar6 != 0) && (iVar5 = FUN_027f9664(param_1), puVar4 = PTR_DAT_04bb46b0, 0x14 < iVar5)) {
    uVar12 = 0x14;
    do {
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar13 = *(long *)(*(long *)puVar4 + 0x20);
        lVar10 = *(long *)(lVar13 + 0x98);
        if (lVar10 != 0) goto LAB_02674e7c;
LAB_02674ec0:
        uVar7 = 0;
      }
      else {
        lVar10 = *(long *)(lVar6 + 0x19548);
        lVar13 = lVar6 + 0x194b0;
        if (lVar10 == 0) goto LAB_02674ec0;
LAB_02674e7c:
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar8 = *(long **)(lVar10 + 0x20);
joined_r0x02674ed8:
          if (plVar8 != (long *)0x0) {
            local_78 = *(undefined **)(lVar13 + 0x78);
            pcStack_70 = *(char **)(lVar13 + 0x80);
            local_68 = 0x17c;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
          }
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(lVar13 + 0x98) != 0) {
            plVar8 = *(long **)(*(long *)(lVar13 + 0x98) + 0x20);
            goto joined_r0x02674ed8;
          }
        }
      }
      if (uVar12 < 0x28) {
        lVar10 = *(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78);
        uVar11 = *(uint *)(lVar10 + 0x158);
        puVar2 = (undefined1 *)(lVar10 + 0xa4);
        if (0x13 < uVar11) {
          uVar11 = 0x14;
        }
        uVar11 = (int)uVar12 - uVar11;
        puVar3 = puVar2 + uVar11;
        if (0x13 < uVar11) {
          puVar3 = puVar2;
        }
        *puVar3 = 0xff;
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 0x18), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
      uVar12 = uVar12 + 1;
      iVar5 = FUN_027f9664(param_1);
    } while ((long)uVar12 < (long)iVar5);
  }
  return;
}

