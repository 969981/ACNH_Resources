
void FUN_015ceb8c(long param_1,uint param_2,uint param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar6 = (undefined4 *)(*(long *)(param_4 + 2) + (long)(int)(param_2 + *param_4 * param_3) * 0x3c)
  ;
  uVar2 = *(uint *)(param_1 + 0xc00);
  uVar3 = *(uint *)(param_1 + 0xc04);
  if (param_4[1] <= param_3 || *param_4 <= param_2) {
    puVar6 = (undefined4 *)0x0;
  }
  lVar8 = (long)(int)(param_2 + uVar2 * param_3);
  if (uVar3 <= param_3 || uVar2 <= param_2) {
    lVar8 = 0;
  }
  bVar4 = *(byte *)(*(long *)(param_1 + 0xc08) + lVar8 * 2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  if (((bVar4 >> 3 & 1) == 0) || (uVar1 = param_3 + 1, (int)uVar3 <= (int)uVar1)) {
LAB_015cec5c:
    if ((bVar4 >> 5 & 1) == 0) {
      FUN_015cf3c0(param_1,puVar6,param_2,param_3,param_5);
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
      *puVar6 = *puVar5;
    }
    if ((bVar4 >> 4 & 1) == 0) {
      uVar9 = FUN_015cfa70(param_1,param_2,param_3 - 1,param_5);
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
      uVar9 = *puVar5;
    }
  }
  else {
    lVar7 = (long)(int)(param_2 + uVar2 * uVar1);
    if (uVar3 <= uVar1 || uVar2 <= param_2) {
      lVar7 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar7 * 2 + 1) & 0x48) != 0x40) goto LAB_015cec5c;
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    uVar9 = *puVar5;
    *puVar6 = uVar9;
  }
  puVar6[4] = uVar9;
  if ((0 < (int)param_2) && ((bVar4 >> 3 & 1) != 0)) {
    lVar7 = (long)(int)((param_2 - 1) + *(uint *)(param_1 + 0xc00) * param_3);
    if (*(uint *)(param_1 + 0xc04) <= param_3 || *(uint *)(param_1 + 0xc00) <= param_2 - 1) {
      lVar7 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar7 * 2) & 0x48) == 0x40) {
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
      uVar9 = *puVar5;
      puVar6[2] = uVar9;
      goto LAB_015ced90;
    }
  }
  if ((bVar4 >> 5 & 1) == 0) {
    FUN_015cf710(param_1,puVar6,param_2,param_3,param_5);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    puVar6[2] = *puVar5;
  }
  if ((bVar4 >> 4 & 1) == 0) {
    uVar9 = FUN_015cfd34(param_1,param_2 + 1,param_3,param_5);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    uVar9 = *puVar5;
  }
LAB_015ced90:
  puVar6[6] = uVar9;
  return;
}

