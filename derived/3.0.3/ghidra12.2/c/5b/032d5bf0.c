
void FUN_032d5bf0(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  puVar2 = PTR_DAT_04bc95c8;
  lVar1 = *param_1 + 0x20;
  lVar4 = *(long *)(*param_1 + 0x28);
  if (lVar4 != lVar1) {
    fVar8 = 0.0;
    uVar3 = (undefined4)param_1[1];
    do {
      FUN_032d5da0(&local_80,lVar4 + -8,puVar2,param_2,uVar3,param_3 & 1,param_4,1);
      fVar5 = local_78 - local_80;
      if ((fVar5 == 0.0) && (local_74 - local_7c == 0.0)) goto switchD_032d5d38_default;
      switch(uVar3) {
      case 0:
        fVar6 = *(float *)(lVar4 + 0x28);
        fVar7 = (fVar8 - local_74) + *(float *)(lVar4 + 0x2c);
        break;
      default:
        fVar6 = *(float *)(lVar4 + 0x28);
        fVar7 = *(float *)(lVar4 + 0x2c);
        break;
      case 2:
        fVar6 = local_80;
        goto LAB_032d5d04;
      case 3:
        fVar6 = local_78;
LAB_032d5d04:
        fVar7 = *(float *)(lVar4 + 0x2c);
        fVar6 = (fVar8 - fVar6) + *(float *)(lVar4 + 0x28);
      }
      *(float *)(lVar4 + 0x28) = fVar6;
      *(float *)(lVar4 + 0x2c) = fVar7;
      *(byte *)(lVar4 + 0x50) = *(byte *)(lVar4 + 0x50) | 0x10;
      uVar3 = (undefined4)param_1[1];
      switch(uVar3) {
      case 0:
        uVar3 = 0;
        fVar8 = fVar8 - (local_74 - local_7c);
        break;
      case 1:
        uVar3 = 1;
        fVar8 = fVar8 + (local_74 - local_7c);
        break;
      case 2:
        fVar8 = fVar8 + fVar5;
        uVar3 = 2;
        break;
      case 3:
        fVar8 = fVar8 - fVar5;
        uVar3 = 3;
      }
switchD_032d5d38_default:
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != lVar1);
  }
  return;
}

