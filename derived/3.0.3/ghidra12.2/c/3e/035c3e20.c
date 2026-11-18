
void FUN_035c3e20(long *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  ulong uVar8;
  
  lVar5 = *param_1;
  uVar3 = *(ulong *)(lVar5 + 0x110);
  param_1[3] = uVar3;
  if (*(char *)(lVar5 + 0xd2) == '\x03' || *(char *)(lVar5 + 0xd5) != '\0') {
    if ((char)param_1[5] != '\0') {
      pvVar2 = (void *)param_1[0xcc];
      if (pvVar2 != (void *)0x0) {
        if (*(char *)((long)param_1 + 0x2c) == '\0') {
          lVar5 = param_1[0xcd];
          lVar6 = lVar5 - (long)pvVar2 >> 1;
          uVar3 = 0x5a00 - lVar6;
          param_1[0xcd] = (long)pvVar2 + 0xb400;
          if (lVar5 - (long)pvVar2 != 0xb400) {
            uVar1 = *(undefined2 *)((long)param_1 + 0x3c);
            uVar8 = uVar3 & 3;
            if (lVar6 - 0x59fdU < 3) {
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              puVar7 = (undefined2 *)((long)pvVar2 + lVar6 * 2 + 4);
              do {
                lVar5 = lVar5 + -4;
                puVar7[-2] = uVar1;
                puVar7[-1] = uVar1;
                *puVar7 = uVar1;
                puVar7[1] = uVar1;
                puVar7 = puVar7 + 4;
              } while (-lVar5 != (uVar3 & 0xfffffffffffffffc));
              lVar5 = -lVar5;
            }
            if (uVar8 != 0) {
              puVar7 = (undefined2 *)((long)pvVar2 + lVar5 * 2 + lVar6 * 2);
              do {
                uVar8 = uVar8 - 1;
                *puVar7 = uVar1;
                puVar7 = puVar7 + 1;
              } while (uVar8 != 0);
            }
          }
          memset((void *)(param_1[0xce] + lVar6),0,uVar3);
        }
        else {
          uVar4 = (int)param_1[0xcb] - 1U & 7;
          memcpy(pvVar2,(void *)param_1[(ulong)uVar4 * 0x17 + 0x1c],0xb400);
          memcpy((void *)param_1[0xce],(void *)param_1[(ulong)uVar4 * 0x17 + 0x1b],0x5a00);
          param_1[0xcd] = param_1[0xcc] + 0xb400;
        }
        uVar3 = param_1[3];
        param_1[0xcf] = param_1[0xce] + 0x5a00;
      }
      FUN_035c3b90(param_1,uVar3,2);
      lVar5 = *param_1;
      uVar3 = param_1[3];
    }
    lVar6 = 0x720;
    if (-1 < *(char *)(lVar5 + 0x200)) {
      lVar6 = 0x71c;
    }
    uVar8 = lVar6 + param_1[1];
    if (uVar3 < uVar8) {
      param_1[4] = uVar8;
    }
    else {
      param_1[4] = uVar8 + 0x11110;
      if (uVar8 + 0x11110 < uVar3) {
        *(undefined8 *)(lVar5 + 0x118) = *(undefined8 *)(lVar5 + 0x110);
        if ((int)param_1[(ulong)((int)param_1[0xcb] - 1U & 7) * 0x17 + 0xe] != 4) {
          lVar5 = param_1[3];
          FUN_035c34e0(param_1,1,lVar5);
          FUN_035c3b90(param_1,lVar5,4);
        }
        uVar3 = param_1[4];
        do {
          uVar3 = uVar3 + 0x11110;
        } while (uVar3 <= (ulong)param_1[3]);
        param_1[4] = uVar3;
      }
    }
  }
  else {
    if ((char)param_1[5] == '\0') {
      *(undefined8 *)(lVar5 + 0x118) = *(undefined8 *)(lVar5 + 0x110);
      FUN_035c34e0(param_1,1,*(undefined8 *)(*param_1 + 0x110));
    }
    else {
      pvVar2 = (void *)param_1[0xcc];
      if (pvVar2 != (void *)0x0) {
        if (*(char *)((long)param_1 + 0x2c) == '\0') {
          puVar7 = (undefined2 *)((long)pvVar2 + 6);
          lVar5 = 0x5a00;
          param_1[0xcd] = (long)pvVar2 + 0xb400;
          uVar1 = *(undefined2 *)((long)param_1 + 0x3c);
          do {
            puVar7[-3] = uVar1;
            lVar5 = lVar5 + -6;
            puVar7[-2] = uVar1;
            puVar7[-1] = uVar1;
            *puVar7 = uVar1;
            puVar7[1] = uVar1;
            puVar7[2] = uVar1;
            puVar7 = puVar7 + 6;
          } while (lVar5 != 0);
          memset((void *)param_1[0xce],0,0x5a00);
        }
        else {
          uVar4 = (int)param_1[0xcb] - 1U & 7;
          memcpy(pvVar2,(void *)param_1[(ulong)uVar4 * 0x17 + 0x1c],0xb400);
          memcpy((void *)param_1[0xce],(void *)param_1[(ulong)uVar4 * 0x17 + 0x1b],0x5a00);
          param_1[0xcd] = param_1[0xcc] + 0xb400;
        }
        param_1[0xcf] = param_1[0xce] + 0x5a00;
      }
    }
    FUN_035c3b90(param_1,param_1[3],2);
  }
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  return;
}

