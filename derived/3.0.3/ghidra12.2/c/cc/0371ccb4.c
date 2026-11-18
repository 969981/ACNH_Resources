
undefined4 FUN_0371ccb4(long param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  undefined2 local_34 [2];
  
  lVar9 = DAT_05ab5ea8;
  if (DAT_05ab5ea8 == 0) {
    uVar6 = 5;
  }
  else {
    sVar2 = FUN_0376baa0(param_1 + 0x10);
    puVar1 = PTR_DAT_04bc3a48;
    if ((*(ushort *)(param_1 + 0x114) >> 5 & 1) == 0) {
      if ((*(ushort *)(param_1 + 0x114) >> 7 & 1) == 0) {
        if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
           (lVar7 = *(long *)(DAT_05ab7608 + 8), lVar7 == 0)) {
          sVar8 = *(short *)(lVar9 + 0x2a);
        }
        else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
                (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar3 == (undefined8 *)0x0)) {
          sVar8 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
        }
        else {
          uVar4 = (**(code **)*puVar3)();
          sVar8 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
             (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar3 != (undefined8 *)0x0))
          {
            (**(code **)*puVar3)();
          }
        }
        uVar6 = 5;
        if (sVar8 != -1) {
          if ((((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) ||
              (DAT_05ab7608 == 0)) || (lVar7 = *(long *)(DAT_05ab7608 + 8), lVar7 == 0)) {
            local_34[0] = *(undefined2 *)(lVar9 + 0x2a);
          }
          else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
                  (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar3 == (undefined8 *)0x0)) {
            local_34[0] = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
          }
          else {
            uVar4 = (**(code **)*puVar3)();
            local_34[0] = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
               (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar3 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar3)();
            }
          }
          uVar4 = FUN_03770770(local_34,0);
          if ((((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) ||
              (DAT_05ab7608 == 0)) || (lVar7 = *(long *)(DAT_05ab7608 + 8), lVar7 == 0)) {
            sVar8 = *(short *)(lVar9 + 0x2a);
          }
          else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
                  (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar3 == (undefined8 *)0x0)) {
            sVar8 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
          }
          else {
            uVar5 = (**(code **)*puVar3)();
            sVar8 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
               (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar3 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar3)();
            }
          }
          if ((uVar4 & 1) == 0) {
            if (sVar8 == sVar2) {
              uVar6 = 0;
            }
            else {
              if (((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) ||
                 (DAT_05ab7608 == 0)) {
                sVar8 = *(short *)(lVar9 + 0x2c);
                if ((*(ushort *)(lVar9 + 0x28) & 0x80) != 0) {
                  sVar8 = -1;
                }
              }
              else {
                lVar9 = *(long *)(DAT_05ab7608 + 0x10);
                if ((*(long **)(lVar9 + 0x11b0) == (long *)0x0) ||
                   (puVar3 = (undefined8 *)**(long **)(lVar9 + 0x11b0), puVar3 == (undefined8 *)0x0)
                   ) {
                  sVar8 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
                }
                else {
                  uVar4 = (**(code **)*puVar3)();
                  sVar8 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
                  if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x11b0) != 0)) &&
                     (puVar3 = *(undefined8 **)(*(long *)(lVar9 + 0x11b0) + 8),
                     puVar3 != (undefined8 *)0x0)) {
                    (**(code **)*puVar3)();
                  }
                }
              }
              uVar6 = 5;
              if (sVar8 == sVar2) {
                uVar6 = 1;
              }
            }
          }
          else {
            uVar6 = 0;
            if (sVar8 != sVar2) {
              uVar6 = 3;
            }
          }
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 4;
    }
  }
  return uVar6;
}

