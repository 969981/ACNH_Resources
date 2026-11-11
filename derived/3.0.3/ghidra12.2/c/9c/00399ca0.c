
void FUN_00399ca0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  undefined8 local_28;
  
  local_28 = 0;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  fStack_2c = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc));
  local_30 = *(float *)(param_1 + 0x50) - fStack_2c;
  uVar1 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde));
  uVar2 = (undefined2)uVar1;
  uVar3 = (undefined2)((uint)uVar1 >> 0x10);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  local_38 = FUN_0037d114();
  uStack_34 = CONCAT22(uVar3,uVar2);
  if (*(char *)(param_1 + 0x109) == '\x02') {
    FUN_0039be90(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
    return;
  }
  if (*(char *)(param_1 + 0x109) == '\x01') {
    FUN_0039ba70(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
  }
  return;
}

