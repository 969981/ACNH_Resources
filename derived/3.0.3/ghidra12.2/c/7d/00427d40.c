
long FUN_00427d40(ulong *param_1,char *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  short *psVar6;
  long *plVar7;
  long lVar8;
  
  if ((param_2 != (char *)0x0) && (param_1 != (ulong *)0x0)) {
    if ((param_3 & 1) == 0) {
      while( true ) {
        uVar4 = (uint)*param_1;
        if ((uVar4 >> 0x17 & 1) != 0) break;
        if ((*param_1 & 1) != 0) {
          return 0;
        }
        param_1 = (ulong *)param_1[1];
        if (param_1 == (ulong *)0x0) {
          return 0;
        }
      }
      uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      psVar6 = (short *)param_1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
      ;
      if ((psVar6 != (short *)0x0) &&
         (sVar1 = *psVar6, sVar2 = psVar6[1], 0 < (int)sVar2 + (int)sVar1)) {
        lVar8 = 0;
        do {
          plVar7 = (long *)(psVar6 + lVar8 * 4 + 4);
          puVar5 = (ulong *)*plVar7;
          if (puVar5 != (ulong *)0x0) {
            while( true ) {
              uVar4 = (uint)*puVar5;
              if ((uVar4 >> 0x10 & 1) != 0) break;
              if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
              goto LAB_00427fd4;
            }
            uVar4 = (uVar4 & 0xffff) - (uVar4 >> 1 & 0x5555);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            if (((char *)puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                 != (char *)0x0) &&
               (iVar3 = strcmp(param_2,(char *)puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) *
                                                              0x1010101 >> 0x18) + 2]), iVar3 == 0))
            {
LAB_00427fe8:
              return *plVar7;
            }
          }
LAB_00427fd4:
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)sVar2 + (int)sVar1);
      }
    }
    else {
      do {
        puVar5 = param_1;
        while( true ) {
          uVar4 = (uint)*puVar5;
          if ((uVar4 >> 0x17 & 1) != 0) break;
          if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
          goto LAB_00427e94;
        }
        uVar4 = (uVar4 & 0x7fffff) - (uVar4 >> 1 & 0x155555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        psVar6 = (short *)puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
        if ((psVar6 != (short *)0x0) &&
           (sVar1 = *psVar6, sVar2 = psVar6[1], 0 < (int)sVar2 + (int)sVar1)) {
          lVar8 = 0;
          do {
            plVar7 = (long *)(psVar6 + lVar8 * 4 + 4);
            puVar5 = (ulong *)*plVar7;
            if (puVar5 != (ulong *)0x0) {
              while( true ) {
                uVar4 = (uint)*puVar5;
                if ((uVar4 >> 0x10 & 1) != 0) break;
                if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
                goto LAB_00427e88;
              }
              uVar4 = (uVar4 & 0xffff) - (uVar4 >> 1 & 0x5555);
              uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
              if (((char *)puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                  2] != (char *)0x0) &&
                 (iVar3 = strcmp(param_2,(char *)puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) *
                                                                0x1010101 >> 0x18) + 2]), iVar3 == 0
                 )) goto LAB_00427fe8;
            }
LAB_00427e88:
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)sVar2 + (int)sVar1);
        }
LAB_00427e94:
        param_1 = (ulong *)FUN_0044f1b0(param_1[1]);
      } while (param_1 != (ulong *)0x0);
    }
  }
  return 0;
}

