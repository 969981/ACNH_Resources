
/* WARNING: Removing unreachable block (ram,0x03765680) */

undefined8 FUN_03765640(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_44;
  undefined *local_40;
  char *pcStack_38;
  
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 == 0) {
    return 0;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
  if (((*(byte *)(lVar7 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar7 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x10) + 0x188) + 0x38))();
    if (lVar7 == 0) {
      return 0;
    }
    if (*(long **)(lVar7 + 0x36620) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar7 + 0x36620);
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar5)();
      }
    }
    iVar4 = (int)*(char *)(*(long *)(lVar7 + 0x36608) + *(long *)(lVar7 + 0x36600));
    local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar4);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x36620) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x36620) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (iVar4 == 1) {
      if ((*(long **)(lVar7 + 0x36658) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x36658), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
        plVar8 = *(long **)(lVar7 + 0x37c70);
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
        plVar8 = *(long **)(lVar7 + 0x37c70);
      }
      if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (*(code *)**(undefined8 **)*plVar8)();
        uVar3 = uVar3 ^ 1;
      }
      local_40 = (undefined *)((ulong)local_40 & 0xffffffffffff0000);
      FUN_0374a300(&local_40,
                   *(undefined1 *)(*(long *)(lVar7 + 0x37c58) + *(long *)(lVar7 + 0x37c50) + 0x32));
      *(undefined2 *)(param_1 + 0x2a) = local_40._0_2_;
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x37c70) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x37c70) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      *(undefined4 *)(param_1 + 0x34) =
           *(undefined4 *)(*(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638) + 0x48b8);
      *(undefined4 *)(param_1 + 0x38) =
           *(undefined4 *)(*(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638) + 0x4908);
      *(undefined2 *)(param_1 + 8) =
           *(undefined2 *)(*(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638) + 0x48b0);
      *(undefined2 *)(param_1 + 0x18) =
           *(undefined2 *)(*(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638) + 0x48b2);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x36658) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x36658) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((*(long **)(lVar7 + 0x37c70) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x37c70), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      *(undefined2 *)(param_1 + 0x28) =
           *(undefined2 *)(*(long *)(lVar7 + 0x37c58) + *(long *)(lVar7 + 0x37c50) + 2);
      *(byte *)(param_1 + 0x2c) =
           *(byte *)(*(long *)(lVar7 + 0x37c58) + *(long *)(lVar7 + 0x37c50)) & 1;
      *(byte *)(param_1 + 0x31) =
           *(byte *)(*(long *)(lVar7 + 0x37c58) + *(long *)(lVar7 + 0x37c50)) >> 2 & 1;
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x37c70) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x37c70) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((*(long **)(lVar7 + 0x36690) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x36690), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      *(undefined2 *)(param_1 + 0x20) =
           *(undefined2 *)(*(long *)(lVar7 + 0x36678) + *(long *)(lVar7 + 0x36670) + 2);
      *(int *)(param_1 + 0x24) =
           (int)*(char *)(*(long *)(lVar7 + 0x36678) + *(long *)(lVar7 + 0x36670) + 4);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x36690) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x36690) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "NewBuildCount";
      local_40 = puVar1;
      iVar4 = FUN_02758850(&local_40);
      if (iVar4 == 1) {
        local_44 = 0xffffffff;
        FUN_00830084(&local_44,0);
        FUN_03781e80(&local_44,0);
        pcStack_38 = "Unlock_HousePhoto";
        local_40 = puVar1;
        FUN_02758bb8(&local_40,0);
      }
      return 1;
    }
  }
  return 0;
}

