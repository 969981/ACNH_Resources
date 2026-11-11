
void FUN_004c9de0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  lVar2 = FUN_00426d90(param_2);
  lVar3 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],0x70,0);
  if (lVar2 == 0) {
    FUN_00453c80(lVar3,0,&DAT_040f28c8,0);
    *(long *)(lVar3 + 0x20) = param_1[5];
  }
  else {
    FUN_00453c80(lVar3,0x22222222,&DAT_040f28c8,0);
    *(long *)(lVar3 + 0x20) = param_1[5];
    uVar4 = FUN_00428440(lVar2);
    if ((uVar4 & 0x1f) == 7) {
      lVar2 = *param_1;
      uVar5 = FUN_00426d90(param_2);
      uVar6 = *(uint *)(lVar2 + 0xd0);
      if (uVar6 == (*(uint *)(lVar2 + 0xd4) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,lVar2 + 200,0x20);
        uVar6 = *(uint *)(lVar2 + 0xd0);
      }
      *(uint *)(lVar2 + 0xd0) = uVar6 + 1;
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 200) + (long)(int)uVar6 * 0x20);
      *puVar1 = 0;
      FUN_0043be10(puVar1);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1[2] = uVar5;
      puVar1[3] = lVar3 + 0x18;
      lVar7 = *param_1;
      uVar5 = FUN_00426d90(param_2);
      lVar2 = FUN_004270a0(lVar3);
      uVar6 = *(uint *)(lVar7 + 0xd0);
      if (uVar6 == (*(uint *)(lVar7 + 0xd4) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,lVar7 + 200,0x20);
        uVar6 = *(uint *)(lVar7 + 0xd0);
      }
      *(uint *)(lVar7 + 0xd0) = uVar6 + 1;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 200) + (long)(int)uVar6 * 0x20);
      *puVar1 = 0;
      FUN_0043be10(puVar1);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1[2] = uVar5;
      puVar1[3] = lVar2 + 0x10;
    }
    else {
      uVar5 = FUN_00426d90(param_2);
      FUN_004c88b0(param_1,uVar5,lVar3 + 0x18);
      uVar5 = FUN_00426d90(param_2);
      lVar2 = FUN_004270a0(lVar3);
      FUN_004c88b0(param_1,uVar5,lVar2 + 0x10);
    }
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return;
}

