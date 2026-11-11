
void FUN_00453f00(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 *param_9,
                 long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  *param_1 = 0x30800f;
  param_1[1] = 0;
  uVar6 = 8;
  if (param_3 != 0) {
    uVar6 = 0x28;
  }
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[2] = (long)(int)(uVar6 | param_3 << 8);
  param_1[3] = param_2;
  param_1[7] = (ulong)(param_4 & 0xffff | (param_5 & 0xfff) << 0x10);
  param_1[8] = param_8 & 0xffffffff;
  lVar2 = (param_10 - (long)param_9) * 0x10000000 >> 0x20;
  iVar4 = (int)((ulong)(param_10 - (long)param_9) >> 4);
  if (3 < iVar4) {
    lVar2 = 4;
  }
  param_1[0xb] = lVar2;
  param_1[10] = 0;
  param_1[6] = param_1 + 10;
  if (0 < iVar4) {
    param_1[0xc] = *param_9;
    *(undefined8 *)(param_1[6] + 0x18) = param_9[1];
    if (1 < lVar2) {
      lVar5 = 0;
      lVar7 = 1;
      do {
        *(undefined8 *)(param_1[6] + lVar5 + 0x20) = *(undefined8 *)((long)param_9 + lVar5 + 0x10);
        lVar3 = lVar5 + 0x18;
        lVar7 = lVar7 + 1;
        lVar1 = param_1[6] + lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((long)param_9 + lVar3);
      } while (lVar7 < lVar2);
    }
  }
  return;
}

