
float FUN_00a8e054(long param_1)

{
  float fVar1;
  undefined2 extraout_var;
  float fVar2;
  ulong local_20;
  ulong local_18;
  
  if (*(int *)(param_1 + 0x65410) == 0) {
    return (float)(int)*(char *)(param_1 + 0x651e5) / 60.0 +
           (float)(int)*(char *)(param_1 + 0x651e6) / 3600.0;
  }
  fVar2 = 0.0;
  switch(*(undefined4 *)(param_1 + 0x65410)) {
  case 1:
  case 8:
  case 9:
  case 0x10:
    fVar1 = (float)(int)*(char *)(param_1 + 0x6543d);
    fVar2 = (float)(int)*(char *)(param_1 + 0x6543e);
    break;
  case 2:
  case 10:
    fVar1 = (float)(int)(char)((ulong)*(undefined8 *)(param_1 + 0x65438) >> 0x28);
    fVar2 = (float)(int)(char)((ulong)*(undefined8 *)(param_1 + 0x65438) >> 0x30);
    break;
  case 3:
  case 0xb:
    local_18 = *(ulong *)(param_1 + 0x65438);
    local_20 = local_18 & 0xff0000ffffffffff;
    goto LAB_00a8e13c;
  default:
    goto switchD_00a8e098_caseD_4;
  case 5:
  case 0xd:
    fVar2 = *(float *)(param_1 + 0x653fc);
    goto switchD_00a8e098_caseD_4;
  case 7:
  case 0xf:
    local_20 = *(ulong *)(param_1 + 0x65438);
    local_18 = local_20 & 0xff0000ffffffffff;
LAB_00a8e13c:
    FUN_00a829b0(*(float *)(param_1 + 0x653fc),*(undefined8 *)PTR_DAT_04bb32e8,&local_18,&local_20);
    fVar1 = (float)(int)(char)extraout_var;
    fVar2 = (float)(int)(char)((ushort)extraout_var >> 8);
  }
  fVar2 = fVar1 / 60.0 + fVar2 / 3600.0;
switchD_00a8e098_caseD_4:
  if (1.0 <= fVar2) {
    fVar2 = 0.999;
  }
  return fVar2;
}

