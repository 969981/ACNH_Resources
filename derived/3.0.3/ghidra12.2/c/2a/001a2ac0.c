
void FUN_001a2ac0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  uint uVar1;
  size_t __n;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  uVar3 = param_1[2];
  puVar6 = (undefined1 *)*param_1;
  if (param_4 <= uVar3 - (long)puVar6) {
    uVar3 = (long)param_1[1] - (long)puVar6;
    if (param_4 <= uVar3) {
      __n = (long)param_3 - (long)param_2;
      if (__n != 0) {
        memmove(puVar6,param_2,__n);
      }
      param_1[1] = puVar6 + __n;
      return;
    }
    if ((undefined1 *)param_1[1] != puVar6) {
      memmove(puVar6,param_2,uVar3);
      puVar6 = (undefined1 *)param_1[1];
    }
    if (param_2 + uVar3 != param_3) {
      puVar2 = puVar6;
      puVar5 = param_2 + uVar3;
      do {
        puVar7 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar5;
        puVar2 = puVar2 + 1;
        puVar5 = puVar7;
      } while (puVar7 != param_3);
    }
    param_1[1] = puVar6;
    return;
  }
  if (puVar6 != (undefined1 *)0x0) {
    param_1[1] = puVar6;
    FUN_00187e4c(puVar6);
    uVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (-1 < (long)param_4) {
    uVar4 = uVar3 * 2;
    if (uVar3 * 2 <= param_4) {
      uVar4 = param_4;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar4) {
      puVar6 = (undefined1 *)FUN_00187df4(uVar4);
      param_1[2] = puVar6 + uVar4;
      *param_1 = puVar6;
      param_1[1] = puVar6;
      if (param_2 != param_3) {
        uVar1 = (int)param_3 - (int)param_2;
        uVar4 = ~(ulong)param_2;
        uVar3 = (ulong)uVar1 & 3;
        puVar2 = puVar6;
        puVar5 = param_2;
        if ((uVar1 & 3) != 0) {
          do {
            param_2 = puVar5 + 1;
            uVar3 = uVar3 - 1;
            puVar6 = puVar2 + 1;
            *puVar2 = *puVar5;
            puVar2 = puVar6;
            puVar5 = param_2;
          } while (uVar3 != 0);
        }
        if ((undefined1 *)0x2 < param_3 + uVar4) {
          do {
            *puVar6 = *param_2;
            puVar6[1] = param_2[1];
            puVar6[2] = param_2[2];
            puVar2 = param_2 + 3;
            param_2 = param_2 + 4;
            puVar6[3] = *puVar2;
            puVar6 = puVar6 + 4;
          } while (param_2 != param_3);
        }
      }
      param_1[1] = puVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c6e7e8(param_1);
}

