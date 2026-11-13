
undefined8 FUN_011e0db0(float *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float local_409c [2];
  float local_4094;
  undefined1 auStack_4090 [8];
  uint local_4088;
  int iStack_4084;
  undefined *local_4080;
  uint local_4078 [4100];
  float *local_68;
  
  do {
    local_4080 = PTR_DAT_04bbbc40 + 0x10;
    memset(local_4078,0,0x4000);
    FUN_016955a0(&local_4080,param_2);
    if ((param_3 & 1) != 0) {
      FUN_01695630(&local_4080,&DAT_05141e08);
    }
    puVar4 = PTR_DAT_04bb59d8;
    puVar3 = PTR_DAT_04bb47e0;
    lVar6 = 0;
    iVar7 = 0;
    local_68 = param_1;
    if ((param_4 & 1) == 0) {
      while( true ) {
        do {
          uVar2 = local_4078[lVar6];
          lVar6 = lVar6 + 1;
          uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          iVar7 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar7;
        } while (lVar6 != 0x1000);
        if (iVar7 == 0) break;
        FUN_01695da0(auStack_4090,&local_4080);
        iVar7 = iStack_4084;
        uVar2 = local_4088;
        local_409c[0] = (float)(int)local_4088 * 5.0 + 5.0;
        local_4094 = (float)iStack_4084 * 5.0 + 5.0;
        if ((*(char *)(*(long *)puVar3 + 0x638) != '\0') ||
           (uVar5 = FUN_035a2340(local_409c,&DAT_0418f444), (uVar5 & 1) == 0)) goto LAB_011e1114;
        if (((DAT_05233970 <= (int)uVar2) &&
            ((((int)uVar2 <= DAT_05233980 && (DAT_05233974 <= iVar7)) && (iVar7 <= DAT_05233984))))
           && (uVar1 = uVar2 + iVar7 * 0x200, uVar1 >> 0x11 == 0)) {
          uVar1 = uVar1 >> 5;
          local_4078[uVar1] = local_4078[uVar1] & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
        }
        lVar6 = 0;
        iVar7 = 0;
      }
    }
    else {
      while( true ) {
        do {
          uVar2 = local_4078[lVar6];
          lVar6 = lVar6 + 1;
          uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          iVar7 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar7;
        } while (lVar6 != 0x1000);
        if (iVar7 == 0) break;
        FUN_01695da0(auStack_4090,&local_4080);
        iVar7 = iStack_4084;
        uVar2 = local_4088;
        local_409c[0] = (float)(int)local_4088 * 5.0 + 5.0;
        local_4094 = (float)iStack_4084 * 5.0 + 5.0;
        if ((((*(char *)(*(long *)puVar3 + 0x638) != '\0') ||
             (uVar5 = FUN_035a2340(local_409c,&DAT_0418f444), (uVar5 & 1) == 0)) &&
            ((lVar6 = *(long *)puVar4, *(int *)(lVar6 + 0x28) <= (int)uVar2 &&
             (((int)uVar2 <= *(int *)(lVar6 + 0x38) && (*(int *)(lVar6 + 0x2c) <= iVar7)))))) &&
           (iVar7 <= *(int *)(lVar6 + 0x3c))) {
LAB_011e1114:
          fVar8 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,local_409c,0);
          *local_68 = local_409c[0];
          local_68[1] = fVar8;
          local_68[2] = local_4094;
          return 1;
        }
        if ((((DAT_05233970 <= (int)uVar2) && ((int)uVar2 <= DAT_05233980)) &&
            (DAT_05233974 <= iVar7)) &&
           ((iVar7 <= DAT_05233984 && (uVar1 = uVar2 + iVar7 * 0x200, uVar1 >> 0x11 == 0)))) {
          uVar1 = uVar1 >> 5;
          local_4078[uVar1] = local_4078[uVar1] & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
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

