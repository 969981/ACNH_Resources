
bool FUN_003d12e0(long *param_1,undefined4 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_88 [28];
  undefined4 local_6c [2];
  char local_64;
  
  uVar5 = FUN_003b8448(param_1[1]);
  if (((param_4 >> 2 & 1) != 0) &&
     (lVar6 = FUN_003d1610(param_1,uVar5,param_3,param_5,0), lVar6 == 0)) {
    return false;
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar6 = (**(code **)(*param_1 + 0x20))(param_1,uVar5);
    if (lVar6 == 0) {
      puVar7 = (uint *)FUN_003b8a10(param_1[1],param_2);
      if (*puVar7 != 0) {
        uVar9 = 1;
        do {
          uVar5 = FUN_003b8448(param_1[1],puVar7[uVar9]);
          lVar6 = FUN_003d1610(param_1,uVar5,param_3,param_5,1);
          if (lVar6 == 0) {
            return false;
          }
          bVar4 = uVar9 < *puVar7;
          uVar9 = uVar9 + 1;
        } while (bVar4);
        return lVar6 != 0;
      }
    }
    else {
      FUN_003c91bc(auStack_88,lVar6);
      puVar7 = (uint *)FUN_003c94ac(auStack_88);
      if (puVar7 == (uint *)0x0) {
        return false;
      }
      if (*puVar7 != 0) {
        uVar9 = 0;
        puVar3 = puVar7;
        do {
          uVar1 = puVar3[1];
          uVar2 = puVar3[2];
          local_6c[0] = 0xffffffff;
          local_64 = '\0';
          uVar8 = FUN_003b8858(param_1[1],uVar1,local_6c);
          if ((uVar8 & 1) == 0) {
            return false;
          }
          if (local_64 == '\0') {
            uVar5 = FUN_003b8448(param_1[1],uVar1);
            uVar8 = FUN_003d1610(param_1,uVar5,param_3,param_5,1);
          }
          else {
            uVar8 = FUN_003d1728(param_1,uVar1,uVar2,param_3,param_5);
            uVar8 = uVar8 & 1;
          }
          if (uVar8 == 0) {
            return false;
          }
          uVar9 = uVar9 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar9 < *puVar7);
      }
    }
  }
  return true;
}

