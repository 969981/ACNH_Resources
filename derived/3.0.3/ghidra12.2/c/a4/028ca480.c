
void FUN_028ca480(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  long local_58;
  long lStack_50;
  uint local_48;
  char local_44;
  
  puVar4 = (uint *)param_2[1];
  local_58 = 0;
  lStack_50 = 0;
  if ((puVar4 != (uint *)0x0) && ((*puVar4 & 0xfe) == 0xc0)) {
    uVar1 = *puVar4 >> 8;
    if (*(short *)*param_2 == 0x5942) {
      uVar1 = uVar1 & 0xff00 | *puVar4 >> 0x18 | (uVar1 & 0xff) << 0x10;
    }
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        FUN_03ea9348(&local_58,param_2,uVar5);
        if (local_58 != 0) {
          (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
          local_48 = 0;
          local_44 = '\0';
          uVar2 = FUN_03ea9450(&local_58,&local_48,DAT_0558d448);
          if (((((uVar2 & 1) != 0) && (local_44 != -1)) &&
              ((uVar3 = local_48, local_44 == -0x2d ||
               ((local_44 == -0x2f &&
                (uVar3 = local_48 & ((int)local_48 >> 0x1f ^ 0xffffffffU), -1 < (int)local_48))))))
             && (uVar3 == param_3)) {
            if (param_1 == (long *)0x0) {
              return;
            }
            *param_1 = local_58;
            param_1[1] = lStack_50;
            return;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return;
}

