
undefined8 FUN_012e4b00(long param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *__dest;
  undefined8 *puVar13;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    iVar5 = *(int *)(param_2 + 8);
    puVar13 = (undefined8 *)(param_1 + 0x28);
    plVar6 = (long *)(**(code **)*puVar13)(puVar13);
    iVar4 = (**(code **)(*plVar6 + 0x18))();
    if (iVar5 == iVar4) {
      iVar5 = *(int *)(param_2 + 0xc);
      plVar6 = (long *)(**(code **)*puVar13)(puVar13);
      iVar4 = (**(code **)(*plVar6 + 0x20))();
      if (iVar5 == iVar4) {
        __dest = *(void **)(param_2 + 0x18);
        plVar6 = (long *)(**(code **)*puVar13)(puVar13);
        if (((long *)plVar6[5] != (long *)0x0) &&
           (puVar13 = *(undefined8 **)plVar6[5], puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
        iVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
        iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
        lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,0,0);
        memcpy(__dest,(void *)(lVar7 + plVar6[1]),(long)iVar5 * (long)iVar4 * 8);
        if ((plVar6[5] != 0) &&
           (puVar13 = *(undefined8 **)(plVar6[5] + 8), puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
        *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
        puVar3 = PTR_DAT_04bb37e0;
        if (*(long *)(param_1 + 0x1b8) != 0) {
          uVar9 = 0;
          while (*(int *)(*(long *)(param_1 + 0x1b8) + uVar9 * 4) == 0) {
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar11;
            if ((uint)(*(int *)(param_1 + 0x1c0) + -1 >> 5) < uVar11) {
              return 1;
            }
          }
          uVar11 = *(uint *)(param_1 + 0x1cc);
          if ((uVar11 != 0) && (uVar10 = *(uint *)(param_1 + 0x1c8), uVar10 != 0)) {
            uVar8 = 0;
            uVar12 = 1;
            do {
              if (uVar12 != 0) {
                uVar11 = 0;
                do {
                  if (((*(long *)(param_1 + 0x1b8) != 0) && (uVar11 < uVar10)) &&
                     (uVar8 < *(uint *)(param_1 + 0x1cc))) {
                    iVar5 = *(int *)(param_1 + 0x1c4);
                    uVar12 = uVar11 + uVar8 * uVar10;
                    *(int *)(param_1 + 0x1c4) = iVar5 + 1;
                    if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x1c0) <= (int)uVar12)) {
                      *(int *)(param_1 + 0x1c4) = iVar5;
                    }
                    else {
                      uVar2 = *(uint *)(*(long *)(param_1 + 0x1b8) + (ulong)(uVar12 >> 5) * 4);
                      *(int *)(param_1 + 0x1c4) = iVar5;
                      if ((uVar2 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
                        uVar10 = uVar8 + *(int *)(param_2 + 0xc) * uVar11;
                        if (*(uint *)(param_2 + 0x10) <= uVar10) {
                          uVar10 = 0;
                        }
                        puVar1 = (undefined2 *)(*(long *)(param_2 + 0x18) + (long)(int)uVar10 * 8);
                        *puVar1 = *(undefined2 *)puVar3;
                        *(undefined *)(puVar1 + 1) = puVar3[2];
                        *(undefined *)((long)puVar1 + 3) = puVar3[3];
                        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar3 + 4);
                        uVar10 = *(uint *)(param_1 + 0x1c8);
                      }
                    }
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar10);
                uVar11 = *(uint *)(param_1 + 0x1cc);
                uVar12 = uVar10;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar11);
            return 1;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

