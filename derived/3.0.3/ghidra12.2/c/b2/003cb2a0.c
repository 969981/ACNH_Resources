
void FUN_003cb2a0(char *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (*param_1 != '\0') {
    return;
  }
  lVar5 = FUN_003c0150(param_4);
  uVar3 = 0x298;
  if (lVar5 != 0) {
    uVar3 = lVar5 + 0x2b0;
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = param_3 / uVar3;
  }
  if (0 < (int)uVar8) {
    plVar1 = (long *)(param_1 + 0x18);
    do {
      puVar2 = param_2 + 0x53;
      lVar5 = FUN_003c0150(param_4);
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)0x0;
        puVar7 = puVar2;
      }
      else {
        *puVar2 = 0;
        param_2[0x54] = 0;
        param_2[0x55] = 0;
        FUN_003c01b0(puVar2,param_2 + 0x56,lVar5,param_4);
        puVar7 = (undefined8 *)((long)(param_2 + 0x56) + lVar5);
        puVar6 = puVar2;
      }
      FUN_003c098c(param_2,puVar6);
      lVar5 = param_2[0x51];
      uVar4 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar4;
      param_2[0x51] = *plVar1;
      *(long **)(lVar5 + 8) = plVar1;
      *(undefined8 **)(*plVar1 + 8) = param_2 + 0x51;
      *plVar1 = lVar5;
      param_2 = puVar7;
    } while (uVar4 != 0);
  }
  *param_1 = '\x01';
  return;
}

