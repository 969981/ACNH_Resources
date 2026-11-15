
/* WARNING: Removing unreachable block (ram,0x0227cd50) */

void FUN_0227cc90(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  int local_24;
  
  local_24 = 0x10;
  if ((*(byte *)(param_1 + 0x29e) & 1) == 0) {
    fVar3 = *(float *)(param_1 + 0x2c8);
    lVar1 = FUN_02280018(param_1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0xf0) + 0xf0))();
    if (fVar3 <= *pfVar2) {
      fVar3 = 0.0013333333;
      if ((*(byte *)(param_1 + 0x29e) & 0x80) != 0) {
        fVar3 = 0.00033333333;
      }
    }
    else {
      fVar3 = 0.00066666666;
    }
    local_24 = 0;
    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x2dc,&local_24);
    if (local_24 == 0) {
      *(byte *)(param_1 + 0x29d) = *(byte *)(param_1 + 0x29d) | 2;
      if (1.3000001 < *(float *)(param_1 + 0x2c8)) {
        return;
      }
      fVar3 = fVar3 + *(float *)(param_1 + 0x2c8);
    }
    else {
      *(byte *)(param_1 + 0x29d) = *(byte *)(param_1 + 0x29d) & 0xfd;
      if (*(float *)(param_1 + 0x2c8) <= 0.4) {
        return;
      }
      fVar3 = *(float *)(param_1 + 0x2c8) - fVar3;
    }
    *(float *)(param_1 + 0x2c8) = fVar3;
  }
  return;
}

