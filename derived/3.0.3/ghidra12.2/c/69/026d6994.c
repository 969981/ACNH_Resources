
/* WARNING: Removing unreachable block (ram,0x026d6a74) */
/* WARNING: Removing unreachable block (ram,0x026d6a10) */
/* WARNING: Removing unreachable block (ram,0x026d6ac0) */

void FUN_026d6994(uint *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined *local_50;
  char *local_48;
  undefined4 local_24;
  
  uVar4 = *param_1;
  if (3 < uVar4) {
    uVar4 = 0;
  }
  if (0 < *param_2) {
    if (uVar4 == 2) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      local_48 = "CountCampSiteAfterBuild";
      FUN_0273fd90(&local_50);
      lVar9 = *(long *)PTR_DAT_04bb46b0;
      if (lVar9 == 0) {
LAB_026d6bcc:
        lVar9 = 0;
      }
      else {
        puVar10 = *(undefined8 **)(lVar9 + 0x10);
        if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar10 + 0x38))();
          lVar9 = 0;
          if (lVar8 != 0) {
            lVar9 = lVar8 + 0x70;
          }
        }
        else {
          if (puVar10 == (undefined8 *)0x0) goto LAB_026d6bcc;
          lVar9 = 0;
          if ((long *)puVar10[0x26] != (long *)0x0) {
            lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
          }
        }
      }
      if ((*(long **)(lVar9 + 0x1c2980) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c2980), puVar10 == (undefined8 *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)*puVar10)();
        uVar5 = uVar5 & 0xffffffff;
      }
      lVar8 = *(long *)(lVar9 + 0x1c2960);
      lVar2 = *(long *)(lVar9 + 0x1c2968);
      uVar7 = FUN_027c5f10();
      if ((uVar7 & 1) == 0) {
        local_50 = (undefined *)CONCAT53(local_50._3_5_,0x80023);
        uVar3 = *(ushort *)(lVar2 + lVar8);
        if ((byte)(uVar3 >> 8) < 0x23) {
          FUN_020fd218(&local_50,uVar3 >> 8,uVar3 & 0xff);
        }
      }
      else {
        local_50 = (undefined *)CONCAT53(local_50._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
      }
      if (((ushort)local_50 & 0xff) < 0x23) {
        uVar11 = (uint)(byte)((ulong)local_50 >> 8);
        if ((byte)PTR_DAT_04bc27f0[(ulong)local_50 & 0xff] < uVar11) goto LAB_026d6c8c;
        uVar11 = *(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_50 & 0xff) * 4) >>
                 (ulong)(uVar11 & 0x1f) & 1;
      }
      else {
LAB_026d6c8c:
        uVar11 = 0;
      }
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x1c2980) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c2980) + 8), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
      if (uVar11 != 0) {
        *param_1 = 3;
        FUN_026d6ea0();
        lVar9 = *(long *)PTR_DAT_04bb4848;
        *(undefined8 *)(lVar9 + 0x24) = 0x900000000;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(undefined4 *)(lVar9 + 0x2c) = 0;
        *(undefined8 *)(lVar9 + 0xe8) = 0;
        *(undefined4 *)(lVar9 + 0xf0) = 0;
        *(undefined4 *)(lVar9 + 0x104) = 0;
        *(undefined8 *)(lVar9 + 0xfc) = 0x900000001;
      }
    }
    else if (uVar4 == 1) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
      puVar10 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        puVar10 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      if (puVar10[1] != 0) {
        local_50 = PTR_DAT_04bc43f8 + 0x10;
        local_24 = 6;
        local_48 = (char *)CONCAT44(local_48._4_4_,DAT_05636e70);
        if ((DAT_05636e70 != 0) && (uVar5 = FUN_02a59140(puVar10,&local_50), (uVar5 & 1) != 0)) {
          *param_1 = 2;
          puVar1 = PTR_DAT_04bb2020;
          lVar9 = *param_2;
          if (lVar9 == 1) {
            local_50 = PTR_DAT_04bb2020 + 0x10;
            local_48 = "CampSiteBuiltToday";
            FUN_0273f3c4(&local_50);
            lVar9 = *param_2;
          }
          puVar1 = puVar1 + 0x10;
          local_48 = "CountCampSiteAfterBuild";
          local_50 = puVar1;
          FUN_0273f3c4(&local_50,lVar9);
          local_48 = "CampSiteBuilt";
          local_50 = puVar1;
          FUN_0273f3c4(&local_50,1);
          local_48 = "CeremonyBuildCampSite";
          local_50 = puVar1;
          FUN_0273f3c4(&local_50,1);
          lVar9 = *(long *)PTR_DAT_04bb49a0;
          local_48 = "LE_FacilityBuilt_Campsite";
          local_50 = puVar1;
          local_24 = FUN_006bd550("LE_FacilityBuilt_Campsite",0);
          uVar6 = FUN_01b5b650(lVar9 + 0x238,&local_24);
          FUN_01b5cf20(&local_50,uVar6,0,0,0);
        }
      }
    }
  }
  if (uVar4 != 3) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_026d6d78:
    lVar9 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = lVar8 + 0x70;
      }
    }
    else {
      if (puVar10 == (undefined8 *)0x0) goto LAB_026d6d78;
      lVar9 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar9 + 0x1c2980) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c2980), puVar10 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar10)();
    uVar4 = uVar4 ^ 1;
  }
  lVar8 = *(long *)(lVar9 + 0x1c2960);
  lVar2 = *(long *)(lVar9 + 0x1c2968);
  uVar5 = FUN_027c5f10();
  if ((uVar5 & 1) == 0) {
    local_50 = (undefined *)CONCAT53(local_50._3_5_,0x80023);
    uVar3 = *(ushort *)(lVar2 + lVar8);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_50,uVar3 >> 8,uVar3 & 0xff);
    }
  }
  else {
    local_50 = (undefined *)CONCAT53(local_50._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
  }
  if (((ushort)local_50 & 0xff) < 0x23) {
    uVar11 = (uint)(byte)((ulong)local_50 >> 8);
    if (uVar11 <= (byte)PTR_DAT_04bc27f0[(ulong)local_50 & 0xff]) {
      uVar11 = *(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_50 & 0xff) * 4) >> (ulong)(uVar11 & 0x1f)
               & 1;
      goto joined_r0x026d6e3c;
    }
  }
  uVar11 = 0;
joined_r0x026d6e3c:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0x1c2980) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c2980) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (uVar11 == 0) {
    *param_1 = 2;
    FUN_026d6ea0();
  }
  return;
}

