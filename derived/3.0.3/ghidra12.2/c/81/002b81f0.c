
void FUN_002b81f0(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = (ulong)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_002236b0();
  puVar7 = param_1 + 3;
  *puVar7 = 0;
  param_1[4] = 0;
  FUN_002236b0(puVar7);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_002214b4(param_1 + 0xb,param_3);
  FUN_0028d4cc(param_1 + 0xf);
  FUN_0022b6dc(param_1 + 0x11);
  param_1[0xdd] = 0;
  FUN_0022b7ac(param_1 + 0x11);
  FUN_002b7f84(param_1 + 0xde);
  param_1[8] = 0;
  if (param_2 != 0) {
    uVar3 = param_2 * 0x678;
    uVar4 = FUN_0021f454();
    lVar5 = FUN_00285d10((ulong)uVar3,uVar4);
    if ((uVar3 == 0) || (lVar5 == 0)) {
      param_1[8] = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)(lVar5 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while (uVar3 != uVar6);
      param_1[8] = lVar5;
    }
    lVar9 = 0;
    param_1[6] = lVar5;
    *(uint *)(param_1 + 7) = param_2;
    do {
      iVar2 = *(int *)((long)param_1 + 0x2c);
      puVar1 = (undefined8 *)(param_1[6] + lVar9);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_002236bc(puVar7,puVar7,(long)puVar1 + (long)iVar2);
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + 0x678;
    } while (uVar8 != 0);
  }
  return;
}

