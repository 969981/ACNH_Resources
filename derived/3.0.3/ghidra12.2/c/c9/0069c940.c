
undefined8 FUN_0069c940(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(uint *)(param_1 + 2);
  if (0 < (int)*(uint *)(param_1 + 2)) {
    lVar6 = 0xffffffff;
    puVar4 = (undefined8 *)(*param_1 + 8);
    do {
      if (puVar4[-1] == *param_3) {
        if (lVar6 == 0) {
          return 0;
        }
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        uVar3 = puVar4[3];
        param_2[2] = puVar4[2];
        param_2[3] = uVar3;
        *param_2 = uVar1;
        param_2[1] = uVar2;
        uVar1 = puVar4[4];
        uVar2 = puVar4[5];
        uVar3 = puVar4[7];
        param_2[6] = puVar4[6];
        param_2[7] = uVar3;
        param_2[4] = uVar1;
        param_2[5] = uVar2;
        uVar1 = puVar4[8];
        uVar2 = puVar4[9];
        uVar3 = puVar4[0xb];
        param_2[10] = puVar4[10];
        param_2[0xb] = uVar3;
        param_2[8] = uVar1;
        param_2[9] = uVar2;
        uVar1 = puVar4[0xc];
        uVar2 = puVar4[0xd];
        uVar3 = puVar4[0xf];
        param_2[0xe] = puVar4[0xe];
        param_2[0xf] = uVar3;
        param_2[0xc] = uVar1;
        param_2[0xd] = uVar2;
        return 1;
      }
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 0x11;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}

