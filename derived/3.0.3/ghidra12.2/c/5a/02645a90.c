
void FUN_02645a90(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 != (long *)0x0) {
    lVar7 = *param_3;
    if ((lVar7 != 0) && (lVar12 = *(long *)(param_1 + 8), lVar12 != 0)) {
      if (*(long **)(lVar12 + 0x28) == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)**(long **)(lVar12 + 0x28);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = (**(code **)*puVar4)();
          lVar7 = *param_3;
        }
      }
      lVar9 = 0;
      plVar1 = (long *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
      do {
        uVar2 = *(uint *)((long)plVar1 + lVar9 * 4 + 0xaf00);
        plVar6 = plVar1 + (ulong)uVar2 * 0xe;
        if (399 < uVar2) {
          plVar6 = plVar1;
        }
        if ((*plVar6 != 0) &&
           ((*(int *)((long)plVar6 + 0x2c) != 0 && (int)plVar6[2] != 0) && *plVar6 == lVar7)) {
          if (-1 < (int)(uint)lVar9) {
            plVar6 = plVar1;
            if (((uint)lVar9 < 400) &&
               (uVar2 = *(uint *)((long)plVar1 + lVar9 * 4 + 0xaf00),
               plVar6 = plVar1 + (ulong)uVar2 * 0xe, 399 < uVar2)) {
              plVar6 = plVar1;
            }
            lVar7 = plVar6[1];
            *param_2 = *plVar6;
            param_2[1] = lVar7;
            lVar11 = plVar6[4];
            lVar7 = plVar6[2];
            lVar9 = plVar6[3];
            *(char *)(param_2 + 5) = (char)plVar6[5];
            param_2[3] = lVar9;
            param_2[4] = lVar11;
            param_2[2] = lVar7;
            uVar8 = *(undefined8 *)((long)plVar6 + 0x2c);
            uVar10 = *(undefined8 *)((long)plVar6 + 0x34);
            *(undefined8 *)((long)param_2 + 0x3c) = *(undefined8 *)((long)plVar6 + 0x3c);
            *(undefined8 *)((long)param_2 + 0x34) = uVar10;
            *(undefined8 *)((long)param_2 + 0x2c) = uVar8;
            uVar2 = *(uint *)((long)plVar6 + 0x44);
            if (1 < uVar2) {
              uVar2 = 0;
            }
            *(uint *)((long)param_2 + 0x44) = uVar2;
            param_2[9] = plVar6[9];
            param_2[10] = plVar6[10];
            param_2[0xb] = plVar6[0xb];
            *(char *)(param_2 + 0xc) = (char)plVar6[0xc];
            *(undefined1 *)((long)param_2 + 0x61) = *(undefined1 *)((long)plVar6 + 0x61);
            *(undefined1 *)((long)param_2 + 0x62) = *(undefined1 *)((long)plVar6 + 0x62);
            *(undefined1 *)((long)param_2 + 99) = *(undefined1 *)((long)plVar6 + 99);
            *(undefined1 *)((long)param_2 + 100) = *(undefined1 *)((long)plVar6 + 100);
            *(undefined1 *)((long)param_2 + 0x65) = *(undefined1 *)((long)plVar6 + 0x65);
            *(undefined1 *)((long)param_2 + 0x66) = *(undefined1 *)((long)plVar6 + 0x66);
            *(undefined1 *)((long)param_2 + 0x67) = *(undefined1 *)((long)plVar6 + 0x67);
            *(char *)(param_2 + 0xd) = (char)plVar6[0xd];
            *(undefined2 *)((long)param_2 + 0x6a) = *(undefined2 *)((long)plVar6 + 0x6a);
            uVar3 = *(undefined2 *)((long)plVar6 + 0x6c);
            *(undefined1 *)((long)param_2 + 0x6e) = *(undefined1 *)((long)plVar6 + 0x6e);
            *(undefined2 *)((long)param_2 + 0x6c) = uVar3;
            if ((uVar5 & 1) == 0) {
              return;
            }
            if (*(long *)(lVar12 + 0x28) == 0) {
              return;
            }
            puVar4 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8);
            if (puVar4 == (undefined8 *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x02645c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)*puVar4)();
            return;
          }
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 400);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_2 + 5) = 2;
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0x2c) = 0;
    *(undefined8 *)((long)param_2 + 0x34) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    *(undefined4 *)((long)param_2 + 0x44) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined4 *)((long)param_2 + 0x52) = 0x101;
    *(undefined1 *)((long)param_2 + 0x56) = 0;
    param_2[0xb] = 0;
    *(undefined1 *)((long)param_2 + 0x6c) = 0;
    *(undefined2 *)((long)param_2 + 0x6d) = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}

