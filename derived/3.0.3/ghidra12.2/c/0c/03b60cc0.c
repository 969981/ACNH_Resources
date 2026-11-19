
void FUN_03b60cc0(float param_1,long param_2,float *param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,uint param_7)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if (((param_5 < 6) && (*(char *)(param_2 + 8) != '\0')) &&
     (lVar2 = *(long *)(param_2 + 0xd8), lVar2 != 0)) {
    if (*(byte *)(param_2 + 0x50) < 2) {
      if (param_5 < (int)(uint)*(ushort *)(lVar2 + 0x78)) {
        fStack_54 = param_3[1] * param_1;
        local_58 = *param_3 * param_1;
        fStack_4c = param_3[5] * param_1;
        local_50 = param_3[4] * param_1;
        fStack_44 = param_3[3] * param_1;
        local_48 = param_3[2] * param_1;
        FUN_03b61cc0(lVar2,param_5,&local_58);
      }
    }
    else if (param_7 != 0) {
      uVar3 = 0;
      puVar4 = (undefined1 *)(param_2 + param_5 + 0x5c);
      do {
        if (((param_7 & 1) != 0) && (uVar3 < 8)) {
          fStack_54 = param_3[1] * param_1;
          local_58 = *param_3 * param_1;
          fStack_4c = param_3[5] * param_1;
          local_50 = param_3[4] * param_1;
          fStack_44 = param_3[3] * param_1;
          local_48 = param_3[2] * param_1;
          FUN_03b61cc0(*(undefined8 *)(param_2 + 0xd8),*puVar4,&local_58);
        }
        uVar3 = uVar3 + 1;
        bVar1 = 1 < param_7;
        param_7 = param_7 >> 1;
        puVar4 = puVar4 + 0x10;
      } while (bVar1);
    }
  }
  return;
}

