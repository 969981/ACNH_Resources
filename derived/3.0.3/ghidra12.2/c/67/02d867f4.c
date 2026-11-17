
void FUN_02d867f4(long param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  uint local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 *local_258;
  undefined8 ******ppppppuStack_250;
  undefined8 ******local_248;
  undefined8 ******local_240 [2];
  undefined8 ******local_230 [2];
  undefined8 ******local_220 [2];
  undefined8 ******local_210 [2];
  undefined8 *****local_200 [2];
  undefined8 ****local_1f0 [2];
  undefined8 ***local_1e0 [2];
  undefined8 **local_1d0 [2];
  undefined8 *local_1c0 [2];
  undefined8 local_1b0 [2];
  undefined1 auStack_1a0 [80];
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 ******local_140;
  undefined8 ******local_138;
  undefined8 ******local_130 [2];
  undefined8 ******local_120 [2];
  undefined8 ******local_110 [2];
  undefined8 ******local_100 [2];
  undefined8 *****local_f0 [2];
  undefined8 ****local_e0 [2];
  undefined8 ***local_d0 [2];
  undefined8 **local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 local_a0 [2];
  undefined1 auStack_90 [80];
  
  puVar1 = (uint *)(param_1 + 0x360) + (ulong)param_2 * 0xe;
  if (2 < param_2) {
    puVar1 = (uint *)(param_1 + 0x360);
  }
  if (((char)puVar1[0xc] != '\0') && (puVar1[4] != 3)) {
    pcVar2 = (char *)(param_1 + 0x680) + param_2;
    if (2 < param_2) {
      pcVar2 = (char *)(param_1 + 0x680);
    }
    if (puVar1[4] == 2 && *pcVar2 == '\0') {
      local_1b0[0] = 0;
      local_230[0] = local_220;
      ppppppuStack_250 = local_240;
      local_210[0] = local_200;
      local_220[0] = local_210;
      local_1f0[0] = local_1e0;
      local_200[0] = local_1f0;
      local_1e0[0] = local_1d0;
      local_1d0[0] = local_1c0;
      local_1c0[0] = local_1b0;
      local_240[0] = local_230;
      local_258 = (undefined1 *)0x0;
      local_268 = 0;
      uStack_260 = 0;
      if (auStack_1a0 != (undefined1 *)0x0) {
        uStack_260 = 0xa00000000;
        local_258 = auStack_1a0;
      }
      local_140 = local_130;
      local_130[0] = local_120;
      local_a0[0] = 0;
      local_120[0] = local_110;
      local_110[0] = local_100;
      local_100[0] = local_f0;
      local_f0[0] = local_e0;
      local_e0[0] = local_d0;
      local_d0[0] = local_c0;
      local_c0[0] = local_b0;
      local_b0[0] = local_a0;
      local_150 = 0;
      local_148 = (undefined1 *)0x0;
      if (auStack_90 != (undefined1 *)0x0) {
        local_150 = 0xa00000000;
        local_148 = auStack_90;
      }
      local_26c = 0;
      plVar6 = (long *)*DAT_053512e0;
      if ((plVar6 != (long *)0x0) && (*plVar6 != 0)) {
        plVar3 = plVar6 + 1 + (ulong)*puVar1 * 0x2d;
        if (3 < *puVar1) {
          plVar3 = plVar6 + 1;
        }
        if ((((*(char *)((long)plVar3 + 0x161) == '\0') || ((char)plVar3[0x2c] != '\0')) &&
            ((char)plVar3[0x26] != '\0')) &&
           (((local_248 = ppppppuStack_250, local_138 = local_140,
             uVar5 = FUN_01c70150(&local_268,(long)plVar3 + 0x5c), (uVar5 & 1) != 0 &&
             (plVar6 = (long *)*DAT_053512e0, plVar6 != (long *)0x0)) && (*plVar6 != 0)))) {
          plVar3 = plVar6 + 1 + (ulong)*puVar1 * 0x2d;
          if (3 < *puVar1) {
            plVar3 = plVar6 + 1;
          }
          if (*(char *)((long)plVar3 + 0x161) == '\0') {
            if ((char)plVar3[0xb] == '\0') {
              return;
            }
            bVar4 = *(byte *)((long)plVar3 + 0x51);
          }
          else {
            if ((char)plVar3[0x2c] == '\0') {
              return;
            }
            if ((char)plVar3[0xb] == '\0') {
              return;
            }
            bVar4 = *(byte *)((long)plVar3 + 0x51);
            if ((char)plVar3[0x2c] == '\0') {
              return;
            }
          }
          local_26c = (uint)bVar4;
          uVar5 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
          FUN_030d58a0(**(undefined8 **)(*(long *)(param_1 + 0x5f8) + uVar5),&local_268,&local_26c,
                       (char)plVar3[10]);
          FUN_030d696c(**(undefined8 **)(*(long *)(param_1 + 0x5f8) + uVar5));
        }
      }
    }
  }
  return;
}

