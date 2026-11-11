
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_004278a0(ulong *param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  
  if (param_1 != (ulong *)0x0) {
    param_3 = param_3 - param_2;
    if ((param_4 & 1) != 0) {
      bVar1 = (byte)*param_1;
      do {
        if ((bVar1 & 1) == 0) {
          param_1 = (ulong *)param_1[1];
        }
        else {
          puVar5 = param_1;
          while( true ) {
            uVar4 = (uint)*puVar5;
            if ((uVar4 >> 0x17 & 1) != 0) break;
            if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
            goto LAB_004279ec;
          }
          if (((puVar5 != (ulong *)0x0) &&
              (uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555),
              uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
              uVar6 = puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
              uVar6 != 0)) && (sVar2 = *(short *)(uVar6 + 4), (long)sVar2 != 0)) {
            puVar8 = (undefined8 *)(uVar6 + 8);
            do {
              puVar5 = (ulong *)*puVar8;
              if (puVar5 != (ulong *)0x0) {
                puVar7 = puVar5;
                do {
                  uVar4 = (uint)*puVar7;
                  if ((uVar4 >> 0x10 & 1) != 0) {
                    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 1 & 0x5555);
                    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
                    uVar3 = FUN_0043a700(param_2,param_3,
                                         puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) *
                                                        0x1010101 >> 0x18) + 2]);
                    goto joined_r0x004279e4;
                  }
                } while (((*puVar7 & 1) == 0) &&
                        (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0));
              }
              uVar3 = FUN_0043a700(param_2,param_3,0);
joined_r0x004279e4:
              if ((uVar3 & 1) != 0) {
                return puVar5;
              }
              puVar8 = puVar8 + 1;
            } while (puVar8 != (undefined8 *)(uVar6 + (long)sVar2 * 8 + 8));
          }
LAB_004279ec:
          param_1 = (ulong *)param_1[1];
          if (param_1 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
        }
        bVar1 = (byte)*param_1;
      } while( true );
    }
    for (; (*param_1 & 1) == 0; param_1 = (ulong *)param_1[1]) {
    }
    while( true ) {
      uVar4 = (uint)*param_1;
      if ((uVar4 >> 0x17 & 1) != 0) break;
      if ((*param_1 & 1) != 0) {
        return (ulong *)0x0;
      }
      param_1 = (ulong *)param_1[1];
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    if (((param_1 != (ulong *)0x0) &&
        (uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555),
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
        uVar6 = param_1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
        uVar6 != 0)) && (sVar2 = *(short *)(uVar6 + 4), (long)sVar2 != 0)) {
      puVar8 = (undefined8 *)(uVar6 + 8);
      do {
        puVar5 = (ulong *)*puVar8;
        if (puVar5 != (ulong *)0x0) {
          puVar7 = puVar5;
          do {
            uVar4 = (uint)*puVar7;
            if ((uVar4 >> 0x10 & 1) != 0) {
              uVar4 = (uVar4 & 0xffff) - (uVar4 >> 1 & 0x5555);
              uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
              uVar3 = FUN_0043a700(param_2,param_3,
                                   puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                 0x18) + 2]);
              goto joined_r0x00427af8;
            }
          } while (((*puVar7 & 1) == 0) && (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0));
        }
        uVar3 = FUN_0043a700(param_2,param_3,0);
joined_r0x00427af8:
        if ((uVar3 & 1) != 0) {
          return puVar5;
        }
        puVar8 = puVar8 + 1;
        if (puVar8 == (undefined8 *)(uVar6 + (long)sVar2 * 8 + 8)) {
          return (ulong *)0x0;
        }
      } while( true );
    }
  }
  return (ulong *)0x0;
}

