
bool FUN_036e752c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *local_50;
  undefined2 local_48 [4];
  
  if ((*(int *)(param_1 + 0x14) == 0) ||
     ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) {
    local_50 = PTR_DAT_04bb7648 + 0x10;
    local_48[0] = FUN_0376baa0(param_2);
    lVar5 = FUN_03775b80(&local_50);
    bVar3 = lVar5 != 0;
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      uVar2 = *(ushort *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 2);
      uVar1 = 0;
      if (uVar2 < 0x30) {
        uVar1 = uVar2;
      }
      *(ushort *)(param_1 + 2) = uVar1;
      uVar7 = (uint)*(char *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 4);
      if (3 < uVar7) {
        uVar7 = 1;
      }
      *(uint *)(param_1 + 4) = uVar7;
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      FUN_036e20a4(param_1,param_2);
      FUN_03747a3c(param_1 + 0x20,local_48);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

