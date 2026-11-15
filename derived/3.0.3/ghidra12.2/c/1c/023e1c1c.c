
void FUN_023e1c1c(long param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xf7ffffff | 0x80000000;
  if (param_2 != 0x48) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar1 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar2 = (uint *)&DAT_054f0958;
      }
      else {
        puVar2 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar2 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar2 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    *puVar2 = *puVar2 & 0xffdfffff;
  }
  *(undefined8 *)(param_1 + 0x1fc0) = 0;
  *(undefined2 *)(param_1 + 0x1fcc) = 0x100;
  *(undefined4 *)(param_1 + 0x1fc8) = 10;
  return;
}

