
undefined8 FUN_001680a0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  plVar7 = *(long **)(param_1 + 0x10);
  lVar8 = 0;
  lVar9 = 0;
  param_3 = param_2 + param_3;
  lVar6 = param_2;
  do {
    uVar10 = param_3 - lVar6;
    do {
      if (lVar6 == param_3) {
        if (lVar8 == 0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          return 0;
        }
        puVar3 = (undefined8 *)FUN_001689e8(param_4,lVar9 + lVar8 * 0x10);
        if (puVar3 == (undefined8 *)0x0) {
          return 0xfffffc7b;
        }
        puVar5 = puVar3 + lVar8 * 2;
        *plVar7 = lVar8;
        plVar7[1] = (long)puVar3;
        while (param_2 != param_3) {
          uVar2 = FUN_0016852c(param_2);
          param_2 = param_2 + 2;
          if (uVar2 != 0) {
            *puVar3 = puVar5;
            puVar3[1] = (ulong)uVar2;
            puVar4 = (undefined1 *)FUN_00168980(puVar5,param_2);
            param_2 = param_2 + (ulong)uVar2;
            puVar5 = (undefined8 *)(puVar4 + 1);
            *puVar4 = 0;
            puVar3 = puVar3 + 2;
          }
        }
        return 0;
      }
      uVar1 = uVar10 - 2;
      if ((long)uVar10 < 2) {
        return 0xfffffdf6;
      }
      uVar2 = FUN_0016852c(lVar6);
      lVar6 = lVar6 + 2;
      uVar10 = uVar1;
    } while (uVar2 == 0);
    if (uVar1 < uVar2) {
      return 0xfffffdf6;
    }
    lVar8 = lVar8 + 1;
    lVar6 = lVar6 + (ulong)uVar2;
    lVar9 = lVar9 + (ulong)uVar2 + 1;
  } while( true );
}

