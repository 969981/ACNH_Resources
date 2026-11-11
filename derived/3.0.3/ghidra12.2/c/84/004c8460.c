
ulong * FUN_004c8460(ulong *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_1 | (ulong)param_3;
  uVar4 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  lVar1 = 0x10;
  if (uVar5 != 0) {
    lVar1 = ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x35 & 0x7f8) + 0x10;
  }
  puVar2 = (ulong *)(**(code **)(*param_2 + 0x10))(param_2,lVar1,0);
  FUN_0043a3b0(puVar2,param_1,0x10);
  uVar6 = 0;
  *puVar2 = uVar5;
  do {
    uVar4 = (ulong)(uint)(1 << (ulong)(uVar6 & 0x1f));
    if ((*param_1 & uVar4) != 0) {
      puVar3 = (undefined8 *)FUN_00426db0(param_1,uVar4);
      if (puVar3 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar3;
      }
      puVar3 = (undefined8 *)FUN_00426d40(puVar2,uVar4);
      *puVar3 = uVar7;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x20);
  puVar3 = (undefined8 *)FUN_00426d40(puVar2,param_3);
  *puVar3 = param_4;
  return puVar2;
}

