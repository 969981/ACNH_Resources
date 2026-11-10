
long * FUN_001ed690(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = (long *)(param_1 + 8);
  if ((long *)*plVar5 != (long *)0x0) {
    plVar6 = plVar5;
    plVar7 = (long *)*plVar5;
    do {
      while( true ) {
        uVar1 = *(uint *)((long)plVar7 + 0x2c);
        uVar3 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
        uVar2 = *(uint *)(param_2 + 0xc);
        uVar4 = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
        if ((long)(uVar4 & 0xffff | (ulong)uVar2 << 0x20) <=
            (long)(uVar3 & 0xffff | (ulong)uVar1 << 0x20)) break;
LAB_001ed6c0:
        plVar7 = (long *)plVar7[1];
        if (plVar7 == (long *)0x0) goto LAB_001ed748;
      }
      uVar1 = *(uint *)((long)plVar7 + 0x2c);
      uVar3 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
      uVar2 = *(uint *)(param_2 + 0xc);
      uVar4 = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
      if (((uVar3 & 0xffff | (ulong)uVar1 << 0x20) == (uVar4 & 0xffff | (ulong)uVar2 << 0x20)) &&
         (*(uint *)(plVar7 + 0x15) < *(uint *)(param_2 + 0x88))) goto LAB_001ed6c0;
      plVar8 = (long *)*plVar7;
      plVar6 = plVar7;
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
LAB_001ed748:
    if (plVar6 != plVar5) {
      uVar1 = *(uint *)(param_2 + 0xc);
      uVar3 = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
      uVar2 = *(uint *)((long)plVar6 + 0x2c);
      uVar4 = nn::socket::InetNtohs(*(ushort *)((long)plVar6 + 0x2a));
      if ((long)(uVar4 & 0xffff | (ulong)uVar2 << 0x20) <=
          (long)(uVar3 & 0xffff | (ulong)uVar1 << 0x20)) {
        uVar1 = *(uint *)(param_2 + 0xc);
        uVar3 = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
        uVar2 = *(uint *)((long)plVar6 + 0x2c);
        uVar4 = nn::socket::InetNtohs(*(ushort *)((long)plVar6 + 0x2a));
        if ((uVar3 & 0xffff | (ulong)uVar1 << 0x20) != (uVar4 & 0xffff | (ulong)uVar2 << 0x20)) {
          return plVar6;
        }
        if (*(uint *)(plVar6 + 0x15) <= *(uint *)(param_2 + 0x88)) {
          return plVar6;
        }
      }
    }
  }
  return plVar5;
}

