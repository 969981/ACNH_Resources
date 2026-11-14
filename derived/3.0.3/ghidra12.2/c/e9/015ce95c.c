
void FUN_015ce95c(long param_1,uint param_2,uint param_3,uint *param_4,undefined8 param_5)

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
LAB_015cea30:
    if ((bVar4 >> 5 & 1) == 0) {
      FUN_015cf3c0(param_1,puVar6,param_2,param_3,param_5);
      if ((bVar4 >> 4 & 1) == 0) goto LAB_015cea8c;
LAB_015cea50:
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
      puVar6[4] = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
      *puVar6 = *puVar5;
      if ((bVar4 >> 4 & 1) != 0) goto LAB_015cea50;
LAB_015cea8c:
      uVar9 = FUN_015cfa70(param_1,param_2,param_3 - 1,param_5);
      puVar6[4] = uVar9;
    }
    if ((bVar4 >> 3 & 1) != 0) goto LAB_015ceaa8;
  }
  else {
    lVar7 = (long)(int)(param_2 + uVar2 * uVar1);
    if (uVar3 <= uVar1 || uVar2 <= param_2) {
      lVar7 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar7 * 2 + 1) & 0x48) != 0x40) goto LAB_015cea30;
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    uVar9 = *puVar5;
    *puVar6 = uVar9;
    puVar6[4] = uVar9;
LAB_015ceaa8:
    uVar3 = *(uint *)(param_1 + 0xc00);
    uVar2 = param_2 + 1;
    if ((int)uVar2 < (int)uVar3) {
      lVar7 = (long)(int)(uVar2 + uVar3 * param_3);
      if (*(uint *)(param_1 + 0xc04) <= param_3 || uVar3 <= uVar2) {
        lVar7 = 0;
      }
      if ((*(byte *)(*(long *)(param_1 + 0xc08) + lVar7 * 2) & 0x48) == 0x40) {
        puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
        uVar9 = *puVar5;
        puVar6[1] = uVar9;
        goto LAB_015ceb70;
      }
    }
  }
  if ((bVar4 >> 5 & 1) == 0) {
    FUN_015cf564(param_1,puVar6,param_2,param_3,param_5);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    puVar6[1] = *puVar5;
  }
  if ((bVar4 >> 4 & 1) == 0) {
    uVar9 = FUN_015cfbd4(param_1,param_2 - 1,param_3,param_5);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0xbe0) + 0xf0))(lVar8 + 0xbe0);
    uVar9 = *puVar5;
  }
LAB_015ceb70:
  puVar6[5] = uVar9;
  return;
}

