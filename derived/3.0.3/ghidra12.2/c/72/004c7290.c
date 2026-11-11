
void FUN_004c7290(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_048607b8;
  lVar2 = *(long *)(param_1 + 0x70);
  local_38 = 0x50000000;
  local_48 = lVar2;
  FUN_00470440(*(long *)(param_1 + 0x18) + 0x68,PTR_DAT_048607b8,&local_48,&local_38);
  lVar2 = FUN_0047b390(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x110),lVar2);
  if (lVar2 != 0) {
    do {
      local_48 = *(long *)(lVar2 + 0x10);
      lStack_40 = *(long *)(lVar2 + 0x18);
      if (local_48 != lStack_40) {
        local_48 = FUN_0047b100(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x110),&local_48,
                                *(undefined4 *)(lVar2 + 0x24));
        local_38 = 0x50000000;
        FUN_00470440(*(long *)(param_1 + 0x18) + 0x68,puVar1,&local_48,&local_38);
        local_48 = *(long *)(lVar2 + 0x10);
        lStack_40 = *(long *)(lVar2 + 0x18);
      }
      lVar2 = FUN_0047a610(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x110),&local_48,
                           *(undefined4 *)(lVar2 + 0x24));
    } while (lVar2 != 0);
  }
  return;
}

