
void FUN_015cedac(long param_1,uint param_2,uint param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar4 = *(long *)(param_4 + 2) + (long)(int)(param_2 + *param_4 * param_3) * 0x3c;
  uVar1 = *(uint *)(param_1 + 0xc00);
  if (param_4[1] <= param_3 || *param_4 <= param_2) {
    lVar4 = 0;
  }
  lVar6 = (long)(int)(uVar1 * param_3 + param_2);
  if (*(uint *)(param_1 + 0xc04) <= param_3 || uVar1 <= param_2) {
    lVar6 = 0;
  }
  bVar2 = *(byte *)(*(long *)(param_1 + 0xc08) + lVar6 * 2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  if (((int)param_2 < 1) || ((bVar2 >> 3 & 1) == 0)) {
LAB_015cee7c:
    if ((bVar2 >> 5 & 1) == 0) {
      FUN_015cf710(param_1,lVar4,param_2,param_3,param_5);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
      *(undefined4 *)(lVar4 + 8) = *puVar3;
    }
    if ((bVar2 >> 4 & 1) == 0) {
      uVar7 = FUN_015cfd34(param_1,param_2 + 1,param_3,param_5);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
      uVar7 = *puVar3;
    }
  }
  else {
    lVar5 = (long)(int)(uVar1 * param_3 + (param_2 - 1));
    if (*(uint *)(param_1 + 0xc04) <= param_3 || uVar1 <= param_2 - 1) {
      lVar5 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar5 * 2) & 0x48) != 0x40) goto LAB_015cee7c;
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
    uVar7 = *puVar3;
    *(undefined4 *)(lVar4 + 8) = uVar7;
  }
  *(undefined4 *)(lVar4 + 0x18) = uVar7;
  if ((0 < (int)param_3) && ((bVar2 >> 3 & 1) != 0)) {
    lVar5 = (long)(int)(param_2 + *(uint *)(param_1 + 0xc00) * (param_3 - 1));
    if (*(uint *)(param_1 + 0xc04) <= param_3 - 1 || *(uint *)(param_1 + 0xc00) <= param_2) {
      lVar5 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar5 * 2) & 0x48) == 0x40) {
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
      uVar7 = *puVar3;
      *(undefined4 *)(lVar4 + 0xc) = uVar7;
      goto LAB_015cefb0;
    }
  }
  if ((bVar2 >> 5 & 1) == 0) {
    FUN_015cf8c4(param_1,lVar4,param_2,param_3,param_5);
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
    *(undefined4 *)(lVar4 + 0xc) = *puVar3;
  }
  if ((bVar2 >> 4 & 1) == 0) {
    uVar7 = FUN_015cfe9c(param_1,param_2,param_3 + 1,param_5);
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0xbe0) + 0xf0))(lVar6 + 0xbe0);
    uVar7 = *puVar3;
  }
LAB_015cefb0:
  *(undefined4 *)(lVar4 + 0x1c) = uVar7;
  return;
}

