
uint FUN_027b78b0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long local_58 [2];
  uint local_48;
  char local_44;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    puVar3 = *(uint **)(param_1 + 0x10);
    local_58[0] = 0;
    local_58[1] = 0;
    if ((puVar3 != (uint *)0x0) && ((*puVar3 & 0xfe) == 0xc0)) {
      uVar6 = *puVar3 >> 8;
      if (**(short **)(param_1 + 8) == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *puVar3 >> 0x18 | (uVar6 & 0xff) << 0x10;
      }
      if (uVar6 != 0) {
        iVar5 = 0;
        uVar4 = uVar6 - 1 >> 1;
        uVar6 = uVar6 - 1;
        while (FUN_03ea9348(local_58,(undefined8 *)(param_1 + 8),uVar4), local_58[0] != 0) {
          (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
          local_48 = 0;
          local_44 = '\0';
          uVar2 = FUN_03ea9450(local_58,&local_48,DAT_0558d448);
          if ((uVar2 & 1) == 0) {
            return 0xffffffff;
          }
          if (local_44 == -1) {
            return 0xffffffff;
          }
          if (local_44 == -0x2f) {
            if ((int)local_48 < 0) {
              return 0xffffffff;
            }
          }
          else if (local_44 != -0x2d) {
            return 0xffffffff;
          }
          if (local_48 == param_2) {
            return uVar4;
          }
          uVar1 = uVar4 - 1;
          if (local_48 < param_2) {
            iVar5 = uVar4 + 1;
            uVar1 = uVar6;
          }
          uVar4 = iVar5 + ((int)(uVar1 - iVar5) >> 1);
          uVar6 = uVar1;
          if ((int)uVar1 < iVar5) {
            return 0xffffffff;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

