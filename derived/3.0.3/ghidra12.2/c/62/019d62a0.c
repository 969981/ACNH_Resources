
ulong FUN_019d62a0(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb4800;
  lVar2 = FUN_019db0b8(*(undefined8 *)PTR_DAT_04bb4800);
  local_44 = 0;
  if (0 < *(int *)(lVar2 + 0x78)) {
    lVar5 = 0;
    do {
      puVar3 = (ushort *)
               (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x60) + lVar5 * 8) + 0x30) + 0xf0)
               )();
      if ((*puVar3 == param_2) &&
         (uVar4 = FUN_019d63e0(param_1,0,&local_44), (uint)uVar4 != DAT_04c9a0c8)) {
        return uVar4;
      }
      lVar5 = lVar5 + 1;
      local_44 = (undefined4)lVar5;
    } while (lVar5 < *(int *)(lVar2 + 0x78));
  }
  lVar2 = FUN_019db1e0(*(undefined8 *)puVar1);
  local_48 = 0;
  if (0 < *(int *)(lVar2 + 0x78)) {
    lVar5 = 0;
    do {
      puVar3 = (ushort *)
               (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x60) + lVar5 * 8) + 0x30) + 0xf0)
               )();
      if ((*puVar3 == param_2) &&
         (uVar4 = FUN_019d63e0(param_1,1,&local_48), (uint)uVar4 != DAT_04c9a0c8)) {
        return uVar4;
      }
      lVar5 = lVar5 + 1;
      local_48 = (undefined4)lVar5;
    } while (lVar5 < *(int *)(lVar2 + 0x78));
  }
  return (ulong)DAT_04c9a0c8;
}

