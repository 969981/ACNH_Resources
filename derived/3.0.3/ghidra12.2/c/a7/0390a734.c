
void FUN_0390a734(undefined4 *param_1,undefined2 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined1 param_8,
                 undefined1 param_9,byte param_10)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_b0 [128];
  
  *param_1 = 0;
  lVar1 = (ulong)param_3 * 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(short *)(param_1 + 0x26) = (short)param_3;
  *(char *)((long)param_1 + 0x4a) = (char)*(undefined4 *)(&DAT_041b2884 + lVar1);
  *(char *)((long)param_1 + 0x4b) = (char)*(undefined4 *)(&DAT_041b2888 + lVar1);
  *(char *)(param_1 + 0x13) = (char)*(undefined4 *)(&DAT_041b288c + lVar1);
  uVar4 = *(undefined4 *)(&DAT_041b2890 + lVar1);
  *(undefined1 *)((long)param_1 + 0x4e) = param_8;
  *(undefined2 *)((long)param_1 + 0x3a) = param_2;
  *(char *)((long)param_1 + 0x4d) = (char)uVar4;
  uVar4 = (&DAT_041b3598)[param_3];
  *(undefined1 *)(param_1 + 0xe) = param_9;
  *(char *)((long)param_1 + 0x39) = (char)param_7;
  *(short *)((long)param_1 + 0x36) = (short)uVar4;
  FUN_0390a8a0(param_1,param_4,param_5,param_6);
  if (*(ushort *)((long)param_1 + 0x3a) - 5 < 2) {
    *(undefined1 *)((long)param_1 + 0x39) = 1;
  }
  else {
    uVar5 = param_7;
    if ((int)(uint)*(byte *)((long)param_1 + 0x9a) <= (int)param_7) {
      uVar5 = (uint)*(byte *)((long)param_1 + 0x9a);
    }
    uVar2 = (undefined1)uVar5;
    if ((int)param_7 < 1) {
      uVar2 = 1;
    }
    *(undefined1 *)((long)param_1 + 0x39) = uVar2;
  }
  if ((param_10 & 1) != 0) {
    FUN_038f8f90(param_1 + 0xc,auStack_b0);
    uVar3 = (**(code **)PTR_DAT_04bcf770)(auStack_b0);
    *(undefined2 *)(param_1 + 0x12) = uVar3;
    uVar4 = (**(code **)PTR_DAT_04bcf740)(auStack_b0);
    param_1[0x10] = uVar4;
    uVar4 = (**(code **)PTR_DAT_04bcf0b0)(auStack_b0);
    param_1[0xf] = uVar4;
    if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
      (**(code **)PTR_DAT_04bcf780)(auStack_b0);
    }
  }
  return;
}

