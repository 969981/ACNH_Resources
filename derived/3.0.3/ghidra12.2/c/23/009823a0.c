
long FUN_009823a0(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  uint *puVar7;
  int *piVar8;
  
  if (*param_1 != 0) {
    cVar6 = DAT_04cfab80;
    uVar2 = 0;
    if (param_2 < 0xe) {
      uVar2 = (ulong)param_2;
    }
    while( true ) {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        DAT_04cfab84 = 0xffffffffffffffff;
        DAT_04cfab8c = 0xffffffffffffffff;
        DAT_04cfab80 = '\x01';
        DAT_04cfabb4 = 0xffffffffffffffff;
        DAT_04cfab94 = 0xffffffffffffffff;
        DAT_04cfab9c = 0xffffffffffffffff;
        DAT_04cfaba4 = 0xffffffffffffffff;
        DAT_04cfabac = 0xffffffffffffffff;
      }
      uVar4 = *(uint *)((long)&DAT_04cfab84 + uVar2 * 4);
      if (-1 < (int)uVar4) {
        return (ulong)uVar4 + (long)param_1;
      }
      if (((uVar4 != 0xffffffff) || (puVar7 = (uint *)(ulong)*param_1, *param_1 == 0)) ||
         (param_1 == puVar7)) break;
      lVar3 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar7)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_1 + (lVar3 - (long)puVar7);
      if (lVar3 == 0) {
        return 0;
      }
      uVar5 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar7));
      *(undefined4 *)((long)&DAT_04cfab84 + uVar2 * 4) = 0xfffffffe;
      if (uVar5 == 0) {
        return 0;
      }
      piVar8 = (int *)(lVar3 + 4);
      while (piVar8[-1] != param_3) {
        piVar8 = piVar8 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar8 != -1) {
        iVar1 = *piVar8;
      }
      *(int *)((long)&DAT_04cfab84 + uVar2 * 4) = iVar1;
      if (*param_1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

