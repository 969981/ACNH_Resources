
void FUN_039fa1b0(long param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_24;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar1 = *(uint *)(*(long *)(lVar3 + 0x10) + 0x1c);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        FUN_039be208(*(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10) + lVar3),param_2);
        lVar3 = lVar3 + 8;
      } while ((ulong)uVar1 * 8 != lVar3);
    }
    return;
  }
  plVar6 = (long *)(*(long *)(lVar3 + 0x118) + (ulong)*(ushort *)(param_1 + 0x14) * 0x70 + 0x20);
  lVar5 = 0;
  if (*plVar6 != 0) {
    lVar5 = *plVar6 + ((ulong)*(byte *)(lVar3 + 0x2e5) & 3) * 0x48;
  }
  lVar3 = FUN_00347cc4(lVar5);
  lVar5 = **(long **)(*(long *)PTR_DAT_04bbd580 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar5 + 0x38) * 4];
  local_24 = param_2;
  (**(code **)(*(long *)(*(long *)PTR_DAT_04bbd580 + 0x80) + 0x18))();
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar3 + (ulong)*(ushort *)(lVar5 + 0x34)),&local_24,(ulong)bVar2 << 2);
  }
  uVar4 = (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2e5);
  uVar4 = (uVar4 & 3) << 3 | (uVar4 & 3) << 6;
  lVar3 = 0;
  if (*plVar6 != 0) {
    lVar3 = *plVar6 + uVar4;
  }
  FUN_00347cdc(lVar3,0,0x100);
  lVar3 = 0;
  if (*plVar6 != 0) {
    lVar3 = *plVar6 + uVar4;
  }
  FUN_00347cd8(lVar3);
  return;
}

