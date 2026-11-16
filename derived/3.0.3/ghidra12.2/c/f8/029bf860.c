
void FUN_029bf860(float param_1,float param_2,long param_3,long param_4,long param_5,char *param_6,
                 char *param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  ulong local_70;
  undefined8 local_68;
  
  cVar1 = *param_7;
  uVar2 = (int)cVar1 - 1;
  uVar3 = (int)cVar1;
  if (0 < cVar1) {
    *param_7 = (char)uVar2;
    uVar3 = uVar2;
  }
  local_73 = (uVar3 & 0xff) == 0;
  local_72 = 0;
  local_70 = 0xffffffffffffffff;
  local_74 = 1;
  FUN_029b1a78(param_4,&local_74);
  local_68 = 0xffffffffffffffff;
  local_73 = *param_6 == '\x01';
  local_74 = 1;
  *param_6 = '\0';
  local_70 = CONCAT44((int)(local_70 >> 0x20),*(undefined4 *)(param_6 + 4)) & 0xffffff00ffffffff;
  FUN_029b44a8(param_5,&local_74);
  fVar4 = 0.0;
  if ((*(ulong *)(param_6 + 0x28) & 0x800000000) != 0) {
    fVar4 = 1.9;
  }
  fVar4 = exp2f(fVar4 + param_1);
  fVar5 = exp2f(*(float *)(param_4 + 0xc) + *(float *)(param_5 + 0x18));
  *(float *)(param_3 + 0x2060) = fVar4 + -1.0 + fVar5 + -1.0 + 1.0;
  fVar4 = exp2f(*(float *)(param_4 + 0x24) + 0.0);
  fVar5 = fVar4 + param_2 + -1.0;
  fVar4 = 1.0;
  if ((fVar5 <= 1.0) && (fVar4 = fVar5, fVar5 < 0.0)) {
    fVar4 = 0.0;
  }
  *(float *)(param_3 + 0x2064) = fVar4;
  return;
}

