
void FUN_004d1050(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_f0 [48];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  FUN_004385d0(auStack_50);
  FUN_00438690(auStack_50,param_1 + 2);
  FUN_004385d0(&local_80);
  fVar1 = (float)param_1[4];
  fVar2 = (float)((ulong)param_1[4] >> 0x20);
  uStack_70 = CONCAT44(fVar2 * (float)((ulong)DAT_0413f4d0 >> 0x20),fVar1 * (float)DAT_0413f4d0);
  fVar3 = (float)param_1[5];
  fVar4 = (float)((ulong)param_1[5] >> 0x20);
  uStack_68 = CONCAT44(fVar4 * (float)((ulong)DAT_0413f4d8 >> 0x20),fVar3 * (float)DAT_0413f4d8);
  local_80 = CONCAT44((float)((ulong)DAT_0413f4c0 >> 0x20) * fVar2,(float)DAT_0413f4c0 * fVar1);
  uStack_78 = CONCAT44((float)((ulong)DAT_0413f4c8 >> 0x20) * fVar4,(float)DAT_0413f4c8 * fVar3);
  local_60 = CONCAT44(fVar2 * (float)((ulong)DAT_0413f4e0 >> 0x20),fVar1 * (float)DAT_0413f4e0);
  uStack_58 = CONCAT44(fVar4 * (float)((ulong)DAT_0413f4e8 >> 0x20),fVar3 * (float)DAT_0413f4e8);
  FUN_004385d0(auStack_b0);
  FUN_0047f770(auStack_b0,auStack_50,&local_80);
  FUN_004385d0(auStack_f0);
  FUN_00438670(auStack_f0,auStack_b0);
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  FUN_004823a0(auStack_f0,param_2);
  FUN_004385e0(auStack_f0);
  FUN_004385e0(auStack_b0);
  FUN_004385e0(&local_80);
  FUN_004385e0(auStack_50);
  return;
}

