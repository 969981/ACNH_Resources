
void FUN_03444090(uint *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  *param_1 = 0xffffffff;
  if (param_2 != (byte *)0x0) {
    (**(code **)(DAT_05753330 + 0x18))(&DAT_05753330);
    (**(code **)(DAT_05753330 + 0x18))(&DAT_05753330);
    if (DAT_05753338 != param_2) {
      bVar1 = *DAT_05753338;
      uVar3 = (uint)bVar1;
      if (bVar1 == *param_2) {
        if (bVar1 == 0) goto LAB_034442a8;
        uVar2 = 0;
        do {
          uVar4 = uVar2;
          if ((uVar4 == 0x80000) || (DAT_05753338[uVar4 + 1] != param_2[uVar4 + 1]))
          goto LAB_03444158;
          if (DAT_05753338[uVar4 + 1] == 0) goto LAB_03444150;
          if (DAT_05753338[uVar4 + 2] != param_2[uVar4 + 2]) goto LAB_03444158;
          uVar2 = uVar4 + 2;
        } while (DAT_05753338[uVar4 + 2] != 0);
        uVar4 = uVar4 + 1;
LAB_03444150:
        if (uVar4 < 0x80000) goto LAB_034442a4;
      }
LAB_03444158:
      (**(code **)(DAT_05753398 + 0x18))(&DAT_05753398);
      (**(code **)(DAT_05753398 + 0x18))(&DAT_05753398);
      if (DAT_057533a0 != param_2) {
        if (*DAT_057533a0 != *param_2) {
LAB_03444200:
          (**(code **)(DAT_05753400 + 0x18))(&DAT_05753400);
          (**(code **)(DAT_05753400 + 0x18))(&DAT_05753400);
          if (DAT_05753408 != param_2) {
            if (*DAT_05753408 != *param_2) goto LAB_034442a4;
            if (*DAT_05753408 != 0) {
              uVar2 = 0;
              do {
                uVar4 = uVar2;
                if ((uVar4 == 0x80000) || (DAT_05753408[uVar4 + 1] != param_2[uVar4 + 1]))
                goto LAB_034442a4;
                if (DAT_05753408[uVar4 + 1] == 0) goto LAB_03444294;
                if (DAT_05753408[uVar4 + 2] != param_2[uVar4 + 2]) goto LAB_034442a4;
                uVar2 = uVar4 + 2;
              } while (DAT_05753408[uVar4 + 2] != 0);
              uVar4 = uVar4 + 1;
LAB_03444294:
              if (0x7ffff < uVar4) goto LAB_034442a4;
            }
          }
          uVar3 = 2;
          goto LAB_034442a8;
        }
        if (*DAT_057533a0 != 0) {
          uVar2 = 0;
          do {
            uVar4 = uVar2;
            if ((uVar4 == 0x80000) || (DAT_057533a0[uVar4 + 1] != param_2[uVar4 + 1]))
            goto LAB_03444200;
            if (DAT_057533a0[uVar4 + 1] == 0) goto LAB_034441f0;
            if (DAT_057533a0[uVar4 + 2] != param_2[uVar4 + 2]) goto LAB_03444200;
            uVar2 = uVar4 + 2;
          } while (DAT_057533a0[uVar4 + 2] != 0);
          uVar4 = uVar4 + 1;
LAB_034441f0:
          if (0x7ffff < uVar4) goto LAB_03444200;
        }
      }
      uVar3 = 1;
      goto LAB_034442a8;
    }
  }
LAB_034442a4:
  uVar3 = 0;
LAB_034442a8:
  *param_1 = uVar3;
  return;
}

