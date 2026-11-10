
long * FUN_001ece00(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar6;
  if ((long *)*plVar6 == (long *)0x0) {
    plVar7 = plVar6;
  }
  else {
    do {
      while( true ) {
        plVar7 = plVar3;
        uVar1 = *(uint *)(param_3 + 0xc);
        uVar4 = nn::socket::InetNtohs(*(ushort *)(param_3 + 10));
        uVar2 = *(uint *)((long)plVar7 + 0x2c);
        uVar5 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
        if ((long)(uVar4 & 0xffff | (ulong)uVar1 << 0x20) <
            (long)(uVar5 & 0xffff | (ulong)uVar2 << 0x20)) break;
        uVar1 = *(uint *)(param_3 + 0xc);
        uVar4 = nn::socket::InetNtohs(*(ushort *)(param_3 + 10));
        uVar2 = *(uint *)((long)plVar7 + 0x2c);
        uVar5 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
        if (((uVar4 & 0xffff | (ulong)uVar1 << 0x20) == (uVar5 & 0xffff | (ulong)uVar2 << 0x20)) &&
           (*(uint *)(param_3 + 0x88) < *(uint *)(plVar7 + 0x15))) break;
        uVar1 = *(uint *)((long)plVar7 + 0x2c);
        uVar4 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
        uVar2 = *(uint *)(param_3 + 0xc);
        uVar5 = nn::socket::InetNtohs(*(ushort *)(param_3 + 10));
        if ((long)(uVar5 & 0xffff | (ulong)uVar2 << 0x20) <=
            (long)(uVar4 & 0xffff | (ulong)uVar1 << 0x20)) {
          uVar1 = *(uint *)((long)plVar7 + 0x2c);
          uVar4 = nn::socket::InetNtohs(*(ushort *)((long)plVar7 + 0x2a));
          uVar2 = *(uint *)(param_3 + 0xc);
          uVar5 = nn::socket::InetNtohs(*(ushort *)(param_3 + 10));
          if (((uVar4 & 0xffff | (ulong)uVar1 << 0x20) != (uVar5 & 0xffff | (ulong)uVar2 << 0x20))
             || (*(uint *)(param_3 + 0x88) <= *(uint *)(plVar7 + 0x15))) goto LAB_001ecf34;
        }
        plVar6 = plVar7 + 1;
        plVar3 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_001ecf34;
      }
      plVar3 = (long *)*plVar7;
      plVar6 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_001ecf34:
  *param_2 = plVar7;
  return plVar6;
}

