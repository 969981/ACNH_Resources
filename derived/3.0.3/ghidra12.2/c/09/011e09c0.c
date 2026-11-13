
undefined8 FUN_011e09c0(float *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float local_109c [2];
  float local_1094;
  undefined1 auStack_1090 [8];
  uint local_1088;
  uint uStack_1084;
  undefined *local_1080;
  uint local_1078 [1028];
  float *local_68;
  
  do {
    local_1080 = PTR_DAT_04bbdd38 + 0x10;
    memset(local_1078,0,0x1000);
    FUN_016961e0(&local_1080,param_2);
    if ((param_3 & 1) != 0) {
      FUN_01696270(&local_1080,&DAT_05145e10);
    }
    puVar4 = PTR_DAT_04bb59d8;
    puVar3 = PTR_DAT_04bb47e0;
    lVar6 = 0;
    iVar7 = 0;
    local_68 = param_1;
    if ((param_4 & 1) == 0) {
      while( true ) {
        do {
          uVar2 = local_1078[lVar6];
          lVar6 = lVar6 + 1;
          uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          iVar7 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar7;
        } while (lVar6 != 0x400);
        if (iVar7 == 0) break;
        FUN_01696be0(auStack_1090,&local_1080);
        uVar1 = uStack_1084;
        uVar2 = local_1088;
        local_109c[0] = (float)(int)local_1088 * 5.0 + 5.0;
        local_1094 = (float)(int)uStack_1084 * 5.0 + 5.0;
        if ((*(char *)(*(long *)puVar3 + 0x638) != '\0') ||
           (uVar5 = FUN_035a2340(local_109c,&DAT_0418f444), (uVar5 & 1) == 0)) goto LAB_011e0d40;
        if (((DAT_05233970 <= (int)uVar2) &&
            ((((int)uVar2 <= DAT_05233980 && (DAT_05233974 <= (int)uVar1)) &&
             ((int)uVar1 <= DAT_05233984)))) &&
           (uVar1 = (uVar1 & 0x1fffffe) * 0x80 + ((int)uVar2 >> 1), uVar1 >> 0xf == 0)) {
          uVar1 = uVar1 >> 5;
          local_1078[uVar1] = local_1078[uVar1] & (1 << (ulong)(uVar2 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        lVar6 = 0;
        iVar7 = 0;
      }
    }
    else {
      while( true ) {
        do {
          uVar2 = local_1078[lVar6];
          lVar6 = lVar6 + 1;
          uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          iVar7 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar7;
        } while (lVar6 != 0x400);
        if (iVar7 == 0) break;
        FUN_01696be0(auStack_1090,&local_1080);
        uVar1 = uStack_1084;
        uVar2 = local_1088;
        local_109c[0] = (float)(int)local_1088 * 5.0 + 5.0;
        local_1094 = (float)(int)uStack_1084 * 5.0 + 5.0;
        if ((((*(char *)(*(long *)puVar3 + 0x638) != '\0') ||
             (uVar5 = FUN_035a2340(local_109c,&DAT_0418f444), (uVar5 & 1) == 0)) &&
            ((lVar6 = *(long *)puVar4, *(int *)(lVar6 + 0x28) <= (int)uVar2 &&
             (((int)uVar2 <= *(int *)(lVar6 + 0x38) && (*(int *)(lVar6 + 0x2c) <= (int)uVar1))))))
           && ((int)uVar1 <= *(int *)(lVar6 + 0x3c))) {
LAB_011e0d40:
          fVar8 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,local_109c,0);
          *local_68 = local_109c[0];
          local_68[1] = fVar8;
          local_68[2] = local_1094;
          return 1;
        }
        if ((((DAT_05233970 <= (int)uVar2) && ((int)uVar2 <= DAT_05233980)) &&
            (DAT_05233974 <= (int)uVar1)) &&
           (((int)uVar1 <= DAT_05233984 &&
            (uVar1 = (uVar1 & 0x1fffffe) * 0x80 + ((int)uVar2 >> 1), uVar1 >> 0xf == 0)))) {
          uVar1 = uVar1 >> 5;
          local_1078[uVar1] = local_1078[uVar1] & (1 << (ulong)(uVar2 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        lVar6 = 0;
        iVar7 = 0;
      }
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    param_4 = 0;
    param_3 = param_3 & 1;
    param_1 = local_68;
  } while( true );
}

