
uint FUN_014437c0(long param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  if (*param_2 < 8) {
    if (uVar3 != 0xffff) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
      if (0xff < uVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar2 >> 6 & 1) != 0) && (uVar4 = FUN_02915598(param_2), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_0144388c;
      }
    }
  }
  else if (uVar3 != 0xffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar5 = *puVar2 >> 6 & 1;
    goto LAB_0144388c;
  }
  uVar5 = 0;
LAB_0144388c:
  uVar1 = 0;
  if (*(char *)(param_1 + 0x540) != '\0') {
    uVar1 = uVar5;
  }
  return uVar1;
}

