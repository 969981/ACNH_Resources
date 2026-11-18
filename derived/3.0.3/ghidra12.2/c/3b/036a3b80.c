
long FUN_036a3b80(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  int *piVar7;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    if (param_2 < 0x3b) {
      uVar2 = (ulong)param_2;
    }
    if ((DAT_05ab0f10 & 1) == 0) {
      DAT_05ab0f10 = 1;
      DAT_05ab0f14 = 0xffffffffffffffff;
      DAT_05ab0f1c = 0xffffffffffffffff;
      DAT_05ab0ff4 = 0xffffffffffffffff;
      DAT_05ab0ffc = 0xffffffff;
      DAT_05ab0f24 = 0xffffffffffffffff;
      DAT_05ab0f2c = 0xffffffffffffffff;
      DAT_05ab0f34 = 0xffffffffffffffff;
      DAT_05ab0f3c = 0xffffffffffffffff;
      DAT_05ab0f44 = 0xffffffffffffffff;
      DAT_05ab0f4c = 0xffffffffffffffff;
      DAT_05ab0f54 = 0xffffffffffffffff;
      DAT_05ab0f5c = 0xffffffffffffffff;
      DAT_05ab0f64 = 0xffffffffffffffff;
      DAT_05ab0f6c = 0xffffffffffffffff;
      DAT_05ab0f74 = 0xffffffffffffffff;
      DAT_05ab0f7c = 0xffffffffffffffff;
      DAT_05ab0f84 = 0xffffffffffffffff;
      DAT_05ab0f8c = 0xffffffffffffffff;
      DAT_05ab0f94 = 0xffffffffffffffff;
      DAT_05ab0f9c = 0xffffffffffffffff;
      DAT_05ab0fa4 = 0xffffffffffffffff;
      DAT_05ab0fac = 0xffffffffffffffff;
      DAT_05ab0fb4 = 0xffffffffffffffff;
      DAT_05ab0fbc = 0xffffffffffffffff;
      DAT_05ab0fc4 = 0xffffffffffffffff;
      DAT_05ab0fcc = 0xffffffffffffffff;
      DAT_05ab0fd4 = 0xffffffffffffffff;
      DAT_05ab0fdc = 0xffffffffffffffff;
      DAT_05ab0fe4 = 0xffffffffffffffff;
      DAT_05ab0fec = 0xffffffffffffffff;
    }
    while( true ) {
      uVar4 = *(uint *)((long)&DAT_05ab0f14 + uVar2 * 4);
      if (-1 < (int)uVar4) {
        return (ulong)uVar4 + (long)param_1;
      }
      if (((uVar4 != 0xffffffff) || (puVar6 = (uint *)(ulong)*param_1, *param_1 == 0)) ||
         (param_1 == puVar6)) break;
      lVar3 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar6)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_1 + (lVar3 - (long)puVar6);
      if (lVar3 == 0) {
        return 0;
      }
      uVar5 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar6));
      *(undefined4 *)((long)&DAT_05ab0f14 + uVar2 * 4) = 0xfffffffe;
      if (uVar5 == 0) {
        return 0;
      }
      piVar7 = (int *)(lVar3 + 4);
      while (piVar7[-1] != param_3) {
        piVar7 = piVar7 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)((long)&DAT_05ab0f14 + uVar2 * 4) = iVar1;
      if (*param_1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

