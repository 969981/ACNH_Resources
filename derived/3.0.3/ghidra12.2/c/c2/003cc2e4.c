
void FUN_003cc2e4(long param_1,long param_2,long param_3,int param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  lVar4 = FUN_003c0150(param_5);
  lVar1 = (long)param_4 + (long)param_4 * 2;
  uVar5 = lVar4 + 3U & 0xfffffffffffffffc;
  lVar6 = uVar5 * (long)param_4;
  *(ulong *)(param_1 + 0x40) = uVar5;
  lVar4 = 0;
  if (uVar5 != 0) {
    lVar4 = lVar1 * -8 + -0x30;
  }
  lVar4 = (param_3 - lVar6) + lVar4;
  uVar3 = FUN_003bd810(param_1,param_2,lVar4,0x400,0x40);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (uVar5 != 0) {
    puVar2 = (undefined8 *)(param_2 + lVar4);
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_003bd740(*(undefined8 *)(param_1 + 0x30),puVar2 + 3,lVar1 * 8,0x18);
    puVar2 = puVar2 + 3 + lVar1;
    *(undefined8 **)(param_1 + 0x38) = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = FUN_003c0150(param_5);
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    FUN_003bd740(uVar7,puVar2 + 3,lVar6,uVar5);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x48) = *param_5;
  return;
}

