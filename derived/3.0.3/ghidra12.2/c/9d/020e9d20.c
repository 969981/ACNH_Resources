
void FUN_020e9d20(undefined1 *param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  param_1[3] = param_2[3];
  param_1[7] = param_1[7] & 0xf3 | param_2[5] & 0xc;
  uVar3 = (uint)*param_2 | (param_2[1] & 0xf) << 8;
  if ((param_2[1] & 8) != 0) {
    uVar3 = uVar3 | 0xfffff000;
  }
  bVar4 = (byte)((uint)(int)(float)(int)uVar3 >> 8);
  *param_1 = (char)(int)(float)(int)uVar3;
  param_1[1] = param_1[1] & 0xf0 | bVar4 & 0xf;
  uVar2 = (uint)(param_2[1] >> 4) | (uint)param_2[2] << 4;
  uVar3 = uVar2 | 0xfffff000;
  if (-1 < (char)param_2[2]) {
    uVar3 = uVar2;
  }
  param_1[1] = bVar4 & 0xf | (byte)((int)(float)(int)uVar3 << 4);
  param_1[2] = (char)((uint)(int)(float)(int)uVar3 >> 4);
  uVar3 = (uint)param_2[4] | (param_2[5] & 3) << 8;
  if (0x1ff < uVar3) {
    uVar3 = uVar3 | 0xfffffc00;
  }
  if (uVar3 == 0xffffffff) {
    uVar3 = 0xff;
    bVar4 = 0xff;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if ((uVar3 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
LAB_020e9e64:
      bVar4 = (byte)(uVar3 >> 8);
    }
    else {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar3 = 0;
        puVar5 = DAT_055c1b60;
        do {
          if (*(int *)(puVar5 + -1) == 0x6622bd46) goto LAB_020e9e64;
          puVar5 = (undefined8 *)puVar5[1];
          uVar3 = uVar3 + 1;
        } while (puVar5 != &DAT_055c1b58);
      }
      uVar3 = 0xff;
      bVar4 = 0xff;
    }
  }
  param_1[4] = (char)uVar3;
  param_1[5] = param_1[5] & 0xfc | bVar4 & 3;
  return;
}

