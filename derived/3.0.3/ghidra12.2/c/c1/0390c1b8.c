
void FUN_0390c1b8(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,uint param_6,undefined1 param_7)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_b0 [128];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  lVar1 = (ulong)param_2 * 0x10;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(short *)(param_1 + 0x26) = (short)param_2;
  *(char *)((long)param_1 + 0x4a) = (char)*(undefined4 *)(&DAT_041b2884 + lVar1);
  *(char *)((long)param_1 + 0x4b) = (char)*(undefined4 *)(&DAT_041b2888 + lVar1);
  *(char *)(param_1 + 0x13) = (char)*(undefined4 *)(&DAT_041b288c + lVar1);
  uVar3 = *(undefined4 *)(&DAT_041b2890 + lVar1);
  *(undefined1 *)((long)param_1 + 0x4e) = param_7;
  *(char *)((long)param_1 + 0x4d) = (char)uVar3;
  *(undefined2 *)((long)param_1 + 0x3a) = 9;
  uVar3 = (&DAT_041b3598)[param_2];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(char *)((long)param_1 + 0x39) = (char)param_6;
  *(short *)((long)param_1 + 0x36) = (short)uVar3;
  FUN_0390a8a0(param_1,param_3,param_4,param_5 * 6);
  if (*(ushort *)((long)param_1 + 0x3a) - 5 < 2) {
    uVar4 = 1;
  }
  else {
    uVar5 = param_6;
    if ((int)(uint)*(byte *)((long)param_1 + 0x9a) <= (int)param_6) {
      uVar5 = (uint)*(byte *)((long)param_1 + 0x9a);
    }
    uVar4 = (undefined1)uVar5;
    if ((int)param_6 < 1) {
      uVar4 = 1;
    }
  }
  *(undefined1 *)((long)param_1 + 0x39) = uVar4;
  FUN_038f8f90(param_1 + 0xc,auStack_b0);
  uVar2 = (**(code **)PTR_DAT_04bcf770)(auStack_b0);
  *(undefined2 *)(param_1 + 0x12) = uVar2;
  uVar3 = (**(code **)PTR_DAT_04bcf740)(auStack_b0);
  param_1[0x10] = uVar3;
  uVar3 = (**(code **)PTR_DAT_04bcf0b0)(auStack_b0);
  param_1[0xf] = uVar3;
  if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
    (**(code **)PTR_DAT_04bcf780)(auStack_b0);
  }
  return;
}

