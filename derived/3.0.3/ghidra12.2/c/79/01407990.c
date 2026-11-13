
long FUN_01407990(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar4 = (uint *)(ulong)*param_1;
  if (*param_1 != 0) {
    uVar5 = (ulong)param_2;
    if ((DAT_051b7168 & 1) == 0) {
      DAT_051b7168 = 1;
      DAT_051b716c = 0xffffffffffffffff;
      DAT_051b7174 = 0xffffffffffffffff;
      DAT_051b720c = 0xffffffff;
      DAT_051b717c = 0xffffffffffffffff;
      DAT_051b7184 = 0xffffffffffffffff;
      DAT_051b718c = 0xffffffffffffffff;
      DAT_051b7194 = 0xffffffffffffffff;
      DAT_051b719c = 0xffffffffffffffff;
      DAT_051b71a4 = 0xffffffffffffffff;
      DAT_051b71ac = 0xffffffffffffffff;
      DAT_051b71b4 = 0xffffffffffffffff;
      DAT_051b71bc = 0xffffffffffffffff;
      DAT_051b71c4 = 0xffffffffffffffff;
      DAT_051b71cc = 0xffffffffffffffff;
      DAT_051b71d4 = 0xffffffffffffffff;
      DAT_051b71dc = 0xffffffffffffffff;
      DAT_051b71e4 = 0xffffffffffffffff;
      DAT_051b71ec = 0xffffffffffffffff;
      DAT_051b71f4 = 0xffffffffffffffff;
      DAT_051b71fc = 0xffffffffffffffff;
      DAT_051b7204 = 0xffffffffffffffff;
    }
    uVar2 = *(uint *)((long)&DAT_051b716c + uVar5 * 4);
    while( true ) {
      if (-1 < (int)uVar2) {
        return (long)param_1 + (ulong)uVar2;
      }
      if ((uVar2 != 0xffffffff) || (param_1 == puVar4)) break;
      lVar1 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar4)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)param_1 + (lVar1 - (long)puVar4);
      if (lVar1 == 0) {
        return 0;
      }
      uVar3 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar4));
      *(undefined4 *)((long)&DAT_051b716c + uVar5 * 4) = 0xfffffffe;
      if (uVar3 == 0) {
        return 0;
      }
      puVar6 = (uint *)(lVar1 + 4);
      while (puVar6[-1] != param_3) {
        puVar6 = puVar6 + 2;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) {
          return 0;
        }
      }
      uVar2 = 0;
      if (*puVar6 != 0xffffffff) {
        uVar2 = *puVar6;
      }
      *(uint *)((long)&DAT_051b716c + uVar5 * 4) = uVar2;
    }
  }
  return 0;
}

