
void FUN_0023aee8(uint *param_1,void *param_2,uint param_3,uint param_4,short param_5,uint param_6,
                 byte param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_5c;
  undefined4 local_54;
  
  local_54 = 0;
  local_5c = 0x200000000;
  FUN_00220138(param_8 + 8,&local_5c);
  if ((((param_1[0x178] != param_4) || ((short)param_1[0x179] != param_5)) ||
      (*(byte *)((long)param_1 + 0x5e7) != param_7)) ||
     (uVar3 = FUN_0022740c(param_8,param_1 + 0x17a), (uVar3 & 1) == 0)) {
    memset(param_1 + 1,0,0x5dc);
    param_1[0x178] = 0;
    param_1[0x179] = 0;
    FUN_00227284(param_1 + 0x17a);
    param_1[0x178] = param_4;
    *(short *)(param_1 + 0x179) = param_5;
    *(byte *)((long)param_1 + 0x5e7) = param_7;
    FUN_00227418(param_1 + 0x17a,param_8);
  }
  uVar1 = *param_1;
  if (((param_3 <= uVar1 && param_7 - 1 == (param_6 & 0xff)) || (uVar1 == param_3)) &&
     (iVar2 = uVar1 * (param_6 & 0xff), iVar2 + param_3 < 0x5dd)) {
    memcpy((void *)((long)param_1 + (long)iVar2 + 4),param_2,(ulong)param_3);
    *(byte *)((long)param_1 + 0x5e6) =
         *(byte *)((long)param_1 + 0x5e6) | (byte)(1 << (ulong)(param_6 & 0x1f));
  }
  return;
}

