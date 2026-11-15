
void FUN_0247fa24(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar4 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar5 = (uint *)&DAT_054f0958;
    }
    else {
      puVar5 = (uint *)&DAT_054f0958;
    }
  }
  else {
    uVar6 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar5 = (uint *)(DAT_054f5738 + 0x204);
    if (uVar6 < 8) {
      puVar5 = (uint *)(DAT_054f5738 + 0x204) + uVar6 * 2;
    }
  }
  if ((*puVar5 >> 0x12 & 1) != 0) {
    bVar3 = *(byte *)(param_1 + 0x1ee8);
    bVar2 = bVar3;
    if (7 < (ulong)bVar3) {
      bVar2 = 0xff;
    }
    lVar1 = *(long *)PTR_DAT_04bb4778 + 0x7c60 + (ulong)(uint)(int)(char)bVar2 * 0x18;
    if (7 < bVar3) {
      lVar1 = *(long *)PTR_DAT_04bb4778 + 0x7c60;
    }
    if (((*(byte *)(lVar1 + 0x10) ^ 0xff) & 3) == 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar5 = (uint *)&DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
            puVar5 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar5 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar5 = (uint *)(DAT_054f5738 + 0x204);
        if (bVar3 < 8) {
          puVar5 = puVar5 + (ulong)bVar3 * 2;
        }
      }
      *puVar5 = *puVar5 | 0x20000;
    }
  }
  return;
}

