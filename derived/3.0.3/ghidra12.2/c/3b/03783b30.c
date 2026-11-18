
bool FUN_03783b30(byte *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_48;
  undefined2 local_40;
  uint local_34;
  
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = *DAT_05ab5ea8;
  local_34 = param_2;
  lVar4 = FUN_03775a30(&local_48);
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x380 + (ulong)local_34 * 0x658;
    if (1 < local_34) {
      lVar1 = lVar4 + 0x380;
    }
    if ((*(long **)(lVar1 + 0x610) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x610), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(*(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0));
    *param_1 = *(byte *)(*(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0) + 3) & 1;
    uVar3 = FUN_0252d29c();
    *(undefined4 *)(param_1 + 4) = uVar3;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x610) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x610) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return lVar4 != 0;
}

