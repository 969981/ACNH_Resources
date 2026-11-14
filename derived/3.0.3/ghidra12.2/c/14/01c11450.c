
void FUN_01c11450(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (0x1e < (int)param_2) {
    param_2 = 0x1f;
  }
  if (param_2 != 0) {
    uVar1 = *DAT_04ccdcc0 - 2;
    if (uVar1 < 8) {
      uVar2 = *(undefined8 *)(&DAT_04178628 + (long)(int)uVar1 * 8);
    }
    else {
      uVar2 = 0;
    }
    FUN_01be4af0(param_1,*DAT_04ccdcc0,param_2,2,1,uVar2);
  }
  *(uint *)(param_1 + 0x108) = param_2;
  return;
}

