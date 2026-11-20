
void FUN_03f165ac(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar2 = FUN_03f163a0();
  if (lVar2 != 0) {
    puVar3 = *(undefined4 **)(lVar2 + 0x18);
    if (puVar3 == (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x1b0)) {
        puVar4 = *(undefined8 **)(param_1 + 0x1a0);
        plVar1 = (long *)(param_1 + 0x188);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x1a0) = *puVar4;
        }
        lVar5 = *(long *)(param_1 + 8);
        *(undefined4 *)puVar4 = 0;
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else if (*(char *)(lVar5 + 0x15) == '\0') {
          lVar7 = *(long *)(lVar5 + 0x18);
        }
        else {
          lVar7 = (long)(DAT_05ae7888 *
                         (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                  1000 + *(long *)(lVar5 + 0x18);
        }
        plVar6 = puVar4 + 8;
        *plVar6 = 0;
        puVar4[1] = lVar7;
        puVar4[2] = lVar5;
        *(undefined4 *)(puVar4 + 7) = 0;
        puVar4[9] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        lVar5 = *plVar1;
        *plVar1 = (long)plVar6;
        *plVar6 = lVar5;
        puVar4[9] = plVar1;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar6;
        }
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
        lVar5 = puVar4[2];
        if (*(char *)(lVar5 + 0x15) == '\0') {
          lVar5 = *(long *)(lVar5 + 0x18);
        }
        else {
          lVar5 = (long)(DAT_05ae7888 *
                         (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                  1000 + *(long *)(lVar5 + 0x18);
        }
        puVar4[1] = lVar5;
        puVar4[3] = -param_3;
        *(undefined4 *)puVar4 = 2;
        *(undefined8 **)(lVar2 + 0x18) = puVar4;
      }
    }
    else {
      lVar2 = *(long *)(puVar3 + 4);
      if (*(char *)(lVar2 + 0x15) == '\0') {
        lVar2 = *(long *)(lVar2 + 0x18);
      }
      else {
        lVar2 = (long)(DAT_05ae7888 *
                       (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                1000 + *(long *)(lVar2 + 0x18);
      }
      *(long *)(puVar3 + 2) = lVar2;
      *(long *)(puVar3 + 6) = -param_3;
      *puVar3 = 2;
    }
  }
  return;
}

