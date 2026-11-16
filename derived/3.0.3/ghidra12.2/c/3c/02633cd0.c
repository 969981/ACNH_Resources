
long FUN_02633cd0(uint *param_1,uint param_2,int param_3)

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
    cVar6 = DAT_055576f0;
    uVar2 = 0;
    if (param_2 < 0x1c) {
      uVar2 = (ulong)param_2;
    }
    while( true ) {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = 0xffffffffffffffff;
        DAT_0555771c = 0xffffffffffffffff;
        DAT_05557724 = 0xffffffffffffffff;
        DAT_0555772c = 0xffffffffffffffff;
        DAT_05557734 = 0xffffffffffffffff;
        DAT_0555773c = 0xffffffffffffffff;
        DAT_05557744 = 0xffffffffffffffff;
        DAT_0555774c = 0xffffffffffffffff;
        DAT_05557754 = 0xffffffffffffffff;
        DAT_0555775c = 0xffffffffffffffff;
      }
      uVar4 = *(uint *)((long)&DAT_055576f4 + uVar2 * 4);
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
      *(undefined4 *)((long)&DAT_055576f4 + uVar2 * 4) = 0xfffffffe;
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
      *(int *)((long)&DAT_055576f4 + uVar2 * 4) = iVar1;
      if (*param_1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

