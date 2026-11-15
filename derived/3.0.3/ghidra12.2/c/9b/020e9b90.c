
bool FUN_020e9b90(long param_1,ushort param_2)

{
  ushort uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0xffff) {
    param_2 = 0xffff;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        param_2 = 0;
        puVar3 = DAT_055c1b60;
        do {
          if (*(int *)(puVar3 + -1) == 0x6622bd46) goto LAB_020e9c40;
          puVar3 = (undefined8 *)puVar3[1];
          param_2 = param_2 + 1;
        } while (puVar3 != &DAT_055c1b58);
      }
      param_2 = 0xffff;
    }
  }
LAB_020e9c40:
  uVar1 = (ushort)*(byte *)(param_1 + 4) | (*(byte *)(param_1 + 5) & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfc00;
  }
  return uVar1 == param_2;
}

