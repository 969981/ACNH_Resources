
bool FUN_003d2694(long param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = FUN_003d27a4(*(undefined8 *)(param_1 + 8),param_3);
  puVar5 = (uint *)FUN_003d2800(uVar4,param_4);
  puVar6 = (uint *)FUN_003d27e8(*(undefined8 *)(param_1 + 8));
  uVar1 = *puVar5;
  uVar2 = *puVar6;
  if (uVar1 < uVar2) {
    *param_2 = puVar6[(ulong)uVar1 * 2 + 1];
    param_2[1] = puVar6[(ulong)uVar1 * 2 + 2];
    uVar7 = FUN_003d2acc(puVar5);
    param_2[5] = uVar7;
    puVar6 = (uint *)FUN_003d2afc(puVar5);
    uVar7 = puVar6[1];
    param_2[2] = *puVar6;
    *(char *)(param_2 + 3) = (char)uVar7;
    uVar3 = FUN_003d2a40(puVar5);
    *(undefined1 *)((long)param_2 + 0xd) = uVar3;
    uVar3 = FUN_003d2a78(puVar5);
    *(undefined1 *)((long)param_2 + 0xe) = uVar3;
    uVar3 = FUN_003d2aa0(puVar5);
    *(undefined1 *)((long)param_2 + 0xf) = uVar3;
    uVar3 = FUN_003d2a58(puVar5);
    *(undefined1 *)(param_2 + 4) = uVar3;
  }
  return uVar1 < uVar2;
}

