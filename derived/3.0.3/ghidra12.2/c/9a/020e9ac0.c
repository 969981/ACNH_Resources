
void FUN_020e9ac0(long param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  if (((param_2 ^ 0xffffffff) & 0xffff) == 0) {
    param_2 = 0xff;
    bVar2 = 0xff;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
LAB_020e9b64:
      bVar2 = (byte)(param_2 >> 8);
    }
    else {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        param_2 = 0;
        puVar3 = DAT_055c1b60;
        do {
          if (*(int *)(puVar3 + -1) == 0x6622bd46) goto LAB_020e9b64;
          puVar3 = (undefined8 *)puVar3[1];
          param_2 = param_2 + 1;
        } while (puVar3 != &DAT_055c1b58);
      }
      param_2 = 0xff;
      bVar2 = 0xff;
    }
  }
  *(char *)(param_1 + 4) = (char)param_2;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc | bVar2 & 3;
  return;
}

