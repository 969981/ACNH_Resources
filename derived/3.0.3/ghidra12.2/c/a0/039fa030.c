
void FUN_039fa030(long param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 local_24;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + 0x1c);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10) + lVar4);
        FUN_039be208(lVar3,*(undefined4 *)
                            ((long)&DAT_05ae9b60 +
                            (ulong)*(byte *)(*(long *)(lVar3 + 8) + (long)param_2 * 0x20 + 0x10) * 4
                            ));
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar1 * 8 != lVar4);
    }
    return;
  }
  plVar6 = (long *)(*(long *)(lVar4 + 0x118) + (ulong)*(ushort *)(param_1 + 0x14) * 0x70 + 0x20);
  lVar3 = 0;
  if (*plVar6 != 0) {
    lVar3 = *plVar6 + ((ulong)*(byte *)(lVar4 + 0x2e5) & 3) * 0x48;
  }
  lVar4 = FUN_00347cc4(lVar3);
  local_24 = *(undefined4 *)((long)&DAT_05ae9b08 + (ulong)(param_3 + 0x16) * 4);
  lVar3 = **(long **)(DAT_05ae9330 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar3 + 0x38) * 4];
  (**(code **)(*(long *)(DAT_05ae9330 + 0x80) + 0x18))();
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar4 + (ulong)*(ushort *)(lVar3 + 0x34)),&local_24,(ulong)bVar2 << 2);
  }
  uVar5 = (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2e5);
  uVar5 = (uVar5 & 3) << 3 | (uVar5 & 3) << 6;
  lVar4 = 0;
  if (*plVar6 != 0) {
    lVar4 = *plVar6 + uVar5;
  }
  FUN_00347cdc(lVar4,0,0x100);
  lVar4 = 0;
  if (*plVar6 != 0) {
    lVar4 = *plVar6 + uVar5;
  }
  FUN_00347cd8(lVar4);
  return;
}

