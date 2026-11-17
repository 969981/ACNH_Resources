
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02f01c98(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  undefined4 *puVar10;
  byte bVar11;
  
  iVar4 = *(int *)(param_1 + 0x140);
  if (iVar4 != -1) {
    if ((DAT_056b7c30 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_056b7c30);
      if (iVar9 != 0) {
        DAT_056b7a90 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b7a98 = "System_SharePlay_Entry";
        DAT_056b7b18 = "Player_SmaphoMap";
        DAT_056b7ab8 = "Player_SmaphoNavigation";
        DAT_056b7ad8 = "Player_ConstructionLicenseApp";
        DAT_056b7af8 = "Obj_RcoMachine";
        DAT_056b7b78 = "Player_SmaphoMap";
        DAT_056b7b08 = "RcoMachineOnlineShopping";
        DAT_056b7b98 = "Player_MydesignShowcaseApp";
        DAT_056b7b28 = "OpenErrorOtherIsland";
        DAT_056b7bb8 = "Player_SmaphoWherearenResortPlanner";
        DAT_056b7aa8 = &DAT_04066c7f;
        DAT_056b7ac8 = &DAT_04066c7f;
        DAT_056b7ae8 = &DAT_04066c7f;
        DAT_056b7b38 = "Player_SmaphoChatLog";
        DAT_056b7b48 = &DAT_04066c7f;
        DAT_056b7b68 = "SmaphoCatalogOpenErrorOutsideArea";
        DAT_056b7ba8 = &DAT_04066c7f;
        DAT_056b7bc8 = &DAT_04066c7f;
        DAT_056b7bd8 = "Player_SmaphoResortStudy";
        DAT_056b7be8 = &DAT_04066c7f;
        DAT_056b7c08 = &DAT_04066c7f;
        DAT_056b7b58 = "Player_SmaphoCatalog";
        DAT_056b7b88 = "OpenErrorSwimming";
        DAT_056b7bf8 = "Player_SmaphoCommon";
        DAT_056b7c18 = "Player_SmaphoCatalog";
        DAT_056b7c28 = "SmaphoCatalogOpenErrorSaveDisable";
        DAT_056b7aa0 = DAT_056b7a90;
        DAT_056b7ab0 = DAT_056b7a90;
        DAT_056b7ac0 = DAT_056b7a90;
        DAT_056b7ad0 = DAT_056b7a90;
        DAT_056b7ae0 = DAT_056b7a90;
        DAT_056b7af0 = DAT_056b7a90;
        DAT_056b7b00 = DAT_056b7a90;
        DAT_056b7b10 = DAT_056b7a90;
        DAT_056b7b20 = DAT_056b7a90;
        DAT_056b7b30 = DAT_056b7a90;
        DAT_056b7b40 = DAT_056b7a90;
        DAT_056b7b50 = DAT_056b7a90;
        DAT_056b7b60 = DAT_056b7a90;
        DAT_056b7b70 = DAT_056b7a90;
        DAT_056b7b80 = DAT_056b7a90;
        DAT_056b7b90 = DAT_056b7a90;
        DAT_056b7ba0 = DAT_056b7a90;
        DAT_056b7bb0 = DAT_056b7a90;
        DAT_056b7bc0 = DAT_056b7a90;
        DAT_056b7bd0 = DAT_056b7a90;
        DAT_056b7be0 = DAT_056b7a90;
        DAT_056b7bf0 = DAT_056b7a90;
        DAT_056b7c00 = DAT_056b7a90;
        DAT_056b7c10 = DAT_056b7a90;
        DAT_056b7c20 = DAT_056b7a90;
        __cxa_guard_release(&DAT_056b7c30);
      }
    }
    if ((DAT_056b7c48 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_056b7c48);
      if (iVar9 != 0) {
        _DAT_056b7c38 = 0xd00000002;
        DAT_056b7c40 = &DAT_056b7a90;
        __cxa_guard_release(&DAT_056b7c48);
      }
    }
    puVar3 = DAT_056b7c40;
    uVar6 = DAT_056b7c38;
    uVar7 = DAT_056b7c3c;
    bVar8 = DAT_056b7c38 == 0;
    bVar1 = 0 < (int)DAT_056b7c38;
    puVar2 = DAT_056b7c40 + (long)(int)(DAT_056b7c38 * *(uint *)(param_1 + 0x140)) * 2;
    if (bVar8 || DAT_056b7c3c <= *(uint *)(param_1 + 0x140)) {
      puVar2 = (undefined8 *)0x0;
    }
    if (!bVar1 || puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    *(undefined8 *)(param_2 + 8) = puVar2[1];
    puVar3 = puVar3 + (long)(int)(*(uint *)(param_1 + 0x140) * uVar6) * 2;
    if (bVar8 || uVar7 <= *(uint *)(param_1 + 0x140)) {
      puVar3 = (undefined8 *)0x0;
    }
    bVar8 = puVar3 != (undefined8 *)0x0;
    if (!bVar1 || !bVar8) {
      puVar3 = (undefined8 *)0x0;
    }
    *(undefined8 *)(param_2 + 0x18) = puVar3[(ulong)(1 < uVar6 && (bVar1 && bVar8)) * 2 + 1];
    bVar5 = *(byte *)(param_1 + 0x54);
    bVar11 = bVar5;
    if (7 < bVar5) {
      bVar11 = 0xff;
    }
    *(byte *)(param_2 + 0x24) = bVar11;
    if ((bVar5 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      puVar10 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)bVar5 * 4 + 0xde8);
    }
    else {
      puVar10 = (undefined4 *)PTR_DAT_04bb3238;
    }
    *(undefined4 *)(param_2 + 0x20) = *puVar10;
  }
  return iVar4 != -1;
}

