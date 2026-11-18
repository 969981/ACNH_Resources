
/* WARNING: Removing unreachable block (ram,0x033943b8) */
/* WARNING: Removing unreachable block (ram,0x0339434c) */
/* WARNING: Removing unreachable block (ram,0x03394308) */
/* WARNING: Removing unreachable block (ram,0x033942a0) */
/* WARNING: Removing unreachable block (ram,0x0339423c) */
/* WARNING: Removing unreachable block (ram,0x033941f8) */
/* WARNING: Removing unreachable block (ram,0x03394190) */
/* WARNING: Removing unreachable block (ram,0x0339412c) */
/* WARNING: Removing unreachable block (ram,0x03394170) */
/* WARNING: Removing unreachable block (ram,0x033941b4) */
/* WARNING: Removing unreachable block (ram,0x03394218) */
/* WARNING: Removing unreachable block (ram,0x03394280) */
/* WARNING: Removing unreachable block (ram,0x033942c4) */
/* WARNING: Removing unreachable block (ram,0x03394328) */
/* WARNING: Removing unreachable block (ram,0x033943a4) */
/* WARNING: Removing unreachable block (ram,0x033943fc) */

void FUN_033940c8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((param_2 != 0) && (lVar2 == 0)) {
    lVar2 = FUN_038c6d48(DAT_05740f48,&DAT_05740f38,param_2,8,1,0);
    *param_1 = lVar2;
  }
  if ((lVar2 != 0) && (param_1[4] == 0)) {
    lVar2 = FUN_038c6d48(DAT_05740fa8,&DAT_05740f98,lVar2,8,1,1);
    param_1[4] = lVar2;
  }
  FUN_03394414(param_1,0,param_1[4]);
  if ((*param_1 != 0) && (param_1[5] == 0)) {
    lVar2 = FUN_038c6d48(DAT_05740fc0,&DAT_05740fb0,*param_1,8,1,1);
    param_1[5] = lVar2;
  }
  FUN_03394414(param_1,1,param_1[5]);
  if ((*param_1 != 0) && (param_1[6] == 0)) {
    lVar2 = FUN_038c6d48(DAT_05740fd8,&DAT_05740fc8,*param_1,8,1,1);
    param_1[6] = lVar2;
  }
  FUN_03394414(param_1,2,param_1[6]);
  if ((*param_1 != 0) && (param_1[7] == 0)) {
    lVar2 = FUN_038c6d48(DAT_05740ff0,&DAT_05740fe0,*param_1,8,1,1);
    param_1[7] = lVar2;
  }
  FUN_03394414(param_1,3,param_1[7]);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (param_1[2] == 0) {
      lVar1 = FUN_038c6d48(DAT_05740f78,&DAT_05740f68,lVar2,8,1,1);
      lVar2 = *param_1;
      param_1[2] = lVar1;
      if (lVar2 == 0) {
        return;
      }
    }
    if (param_1[1] == 0) {
      lVar2 = FUN_038c6d48(DAT_05740f60,&DAT_05740f50,lVar2,8,1,1);
      param_1[1] = lVar2;
    }
  }
  return;
}

