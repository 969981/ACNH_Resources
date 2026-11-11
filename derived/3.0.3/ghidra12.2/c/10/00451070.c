
undefined4 FUN_00451070(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_38 [2];
  
  puVar3 = (undefined8 *)FUN_004270a0(param_2);
  if ((puVar3 != (undefined8 *)0x0) && (*(short *)(puVar3 + 1) != 0)) {
    uVar6 = 0;
    puVar1 = puVar3;
    do {
      puVar7 = puVar1 + 2;
      if (*(char *)puVar1[3] == 't') {
        if ((((*(byte *)*puVar7 >> 3 & 1) != 0) &&
            (plVar4 = (long *)FUN_00426db0((byte *)*puVar7,8), plVar4 != (long *)0x0)) &&
           (lVar5 = *plVar4, lVar5 != 0)) {
          iVar2 = FUN_0043a2d0(lVar5);
          param_1 = FUN_00451c50(param_1,lVar5,(long)iVar2);
        }
        param_1 = FUN_00451070(param_1,*puVar7);
      }
      else {
        local_38[0] = (undefined4)*puVar7;
        param_1 = FUN_00451c50(param_1,local_38,4);
      }
      uVar6 = uVar6 + 1;
      puVar1 = puVar7;
    } while (uVar6 < *(ushort *)(puVar3 + 1));
  }
  return param_1;
}

