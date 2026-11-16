
undefined4 FUN_0299a690(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar1 = PTR_DAT_04bb26a8;
  local_60 = *param_3;
  local_6c = 0;
  local_64 = 0.0;
  local_58 = *(undefined4 *)(param_3 + 1);
  FUN_02a1e144(*(undefined8 *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510),&local_6c,param_2,&local_60,0);
  lVar6 = *(long *)(param_1 + 0x100);
  if (lVar6 == param_1 + 0xf8) {
    uVar5 = 0xffffffff;
  }
  else {
    fVar9 = 3.4028235e+38;
    uVar5 = 0xffffffff;
    do {
      lVar7 = *(long *)(lVar6 + -8);
      if ((param_4 == 4) != (*(int *)(lVar7 + 0x18) != 4)) {
        local_78 = 0;
        local_70 = 0.0;
        FUN_02a1e144(*(undefined8 *)(*(long *)puVar1 + 0xb4510),&local_78,lVar7 + 0x48,&local_60,0);
        fVar8 = (local_78._4_4_ - local_6c._4_4_) * (local_78._4_4_ - local_6c._4_4_) +
                ((float)local_78 - (float)local_6c) * ((float)local_78 - (float)local_6c) +
                (local_70 - local_64) * (local_70 - local_64);
        bVar2 = false;
        bVar3 = true;
        bVar4 = false;
        if (fVar8 <= *(float *)(lVar7 + 0x20) * *(float *)(lVar7 + 0x20)) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar9) && !NAN(fVar8)) {
            bVar2 = fVar9 < fVar8;
            bVar3 = fVar9 == fVar8;
            bVar4 = false;
          }
        }
        if (!bVar3 && bVar2 == bVar4) {
          uVar5 = *(undefined4 *)(lVar7 + 4);
          fVar9 = fVar8;
        }
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 + -8 != param_1 + 0xf0);
  }
  return uVar5;
}

