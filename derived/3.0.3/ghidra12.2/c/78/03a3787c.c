
void FUN_03a3787c(long param_1,undefined4 param_2,long param_3,undefined8 param_4,byte param_5,
                 ulong param_6,uint param_7,undefined8 param_8)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  FUN_03af5780(*(undefined8 *)(param_1 + 0x248));
  bVar2 = 0;
  if ((*(char *)(*(long *)(param_1 + 8) + 0x990) != '\0') &&
     (bVar2 = 2, *(float *)(param_1 + 0xe30) <= 0.0 || *(char *)(param_1 + 0xbf8) == '\0')) {
    bVar2 = 0;
  }
  if (*(char *)(param_3 + 0x202) == '\0') {
    local_70 = *(undefined8 *)(param_3 + 0x58);
    local_68 = *(undefined8 *)(param_3 + 0x60);
    local_60 = (uint)*(undefined8 *)(param_3 + 0x68);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
    uStack_58 = *(undefined4 *)(param_3 + 0x70);
  }
  else {
    local_68 = 0xff7fffffff7fffff;
    local_70 = 0x7f7fffff7f7fffff;
    local_60 = *(uint *)PTR_DAT_04bd0ea8;
    uStack_5c = 0;
    uStack_58 = 0x3f800000;
    if (local_60 < 6) {
      if ((1 << (ulong)(local_60 & 0x1f) & 0x39U) == 0) {
        fVar5 = *(float *)(param_3 + 0x38c);
        fVar6 = *(float *)(param_3 + 0x388);
      }
      else {
        fVar5 = *(float *)(param_3 + 0x388);
        fVar6 = *(float *)(param_3 + 0x38c);
      }
      fVar8 = fVar5;
      fVar1 = 0.0;
      if (fVar5 <= 0.0) {
        fVar8 = 0.0;
        fVar1 = fVar5;
      }
      fVar7 = fVar6;
      fVar5 = 0.0;
      if (fVar6 <= 0.0) {
        fVar7 = 0.0;
        fVar5 = fVar6;
      }
      local_70 = CONCAT44(fVar5,fVar1);
      local_68 = CONCAT44(fVar7,fVar8);
    }
  }
  local_78 = PTR_DAT_04bd0f08 + 0x10;
  bVar3 = 4;
  if ((param_6 & 1) == 0) {
    bVar3 = 0;
  }
  bVar4 = 8;
  if ((param_7 & 1) == 0) {
    bVar4 = 0;
  }
  FUN_03af5c30(*(undefined8 *)(param_1 + 0x248),param_2,param_4,&local_78,
               bVar3 | param_5 & 1 | bVar4 | bVar2,param_8);
  return;
}

