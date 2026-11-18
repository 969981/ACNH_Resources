
void FUN_034afab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined *local_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bc4e68;
  uVar7 = 0;
  puVar1 = PTR_DAT_04bc4e68 + 0x10;
  do {
    if ((int)(uint)uVar7 < 10) {
      plVar8 = (long *)(*(long *)(param_1 + 0x228) + 0x570);
      plVar10 = plVar8 + uVar7;
      if (9 < (uint)uVar7) {
        plVar10 = plVar8;
      }
      lVar9 = *plVar10;
      if ((lVar9 != 0) &&
         (plVar8 = *(long **)(param_1 + 0x1cdf8 + uVar7 * 8), plVar8 != (long *)0x0)) {
        if (*(char *)(param_1 + 0x1ce8c) == '\0') {
          plVar10 = *(long **)(*(long *)(lVar9 + 0x2f0) + (ulong)(1 < *(uint *)(lVar9 + 0x2e8)) * 8)
          ;
          if (plVar10 != (long *)0x0) {
LAB_034afbf4:
            local_68 = 7;
            local_70 = puVar1;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
            puVar4 = (undefined8 *)(plVar10[3] + 0x1c0);
            goto LAB_034afc18;
          }
        }
        else {
          uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
          plVar10 = *(long **)(*(long *)(lVar9 + 0x2f0) + (ulong)(1 < *(uint *)(lVar9 + 0x2e8)) * 8)
          ;
          if (plVar10 != (long *)0x0) {
            if ((uVar3 & 1) != 0) goto LAB_034afbf4;
            local_70 = puVar2 + 0x10;
            local_68 = 6;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
            puVar4 = (undefined8 *)(plVar10[3] + 0x1b8);
LAB_034afc18:
            (*(code *)*puVar4)(plVar10[1]);
          }
        }
        lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((lVar9 != 0) &&
           (uVar3 = (ulong)*(uint *)(param_1 + 0x1cde0), 0 < (int)*(uint *)(param_1 + 0x1cde0))) {
          lVar5 = *(long *)(param_1 + 0x1cde8);
          plVar10 = (long *)(lVar5 + 8);
          uVar6 = uVar3;
          do {
            if (*plVar10 == lVar9) goto LAB_034afb2c;
            plVar10 = plVar10 + 0x6506;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          do {
            if (*(long *)(lVar5 + 8) == 0) {
              *(long *)(lVar5 + 8) = lVar9;
              *(undefined4 *)(lVar5 + 0x19410) = 1;
              *(undefined4 *)(lVar5 + 0x32820) = 1;
              break;
            }
            lVar5 = lVar5 + 0x32830;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
LAB_034afb2c:
        FUN_034afcb0(param_1,plVar8,uVar7 & 0xffffffff);
      }
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == 10) {
      return;
    }
  } while( true );
}

