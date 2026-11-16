
void FUN_0281a5b0(int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong local_78;
  long lStack_70;
  undefined8 local_68;
  
  plVar4 = (long *)PTR_DAT_04bb46b0;
  iVar8 = 0;
  do {
    lVar5 = *plVar4;
    local_78 = CONCAT44(local_78._4_4_,iVar8);
    if (lVar5 != 0) {
      puVar6 = *(undefined8 **)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_0281a65c:
          if ((uint)local_78 < 10) {
            lVar1 = lVar5 + 0x1962d8 + (local_78 & 0xffffffff) * 0x10d8;
            if (9 < (uint)local_78) {
              lVar1 = lVar5 + 0x1962d8;
            }
            if ((*(long *)(lVar1 + 0x28) == 0) ||
               (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x10),
               puVar6 == (undefined8 *)0x0)) {
              uVar3 = 0;
            }
            else {
              uVar3 = (**(code **)*puVar6)();
              uVar3 = uVar3 & 0xffffffff;
            }
            iVar9 = *param_1;
            if (iVar9 != 0) {
              iVar10 = 0;
              lVar5 = *(long *)(param_1 + 2);
              do {
                iVar2 = *(int *)(lVar5 + (long)iVar10 * 0x3c + 0x38);
                if ((*(long *)(lVar1 + 0x28) != 0) &&
                   (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
                  local_78 = *(ulong *)(lVar1 + 8);
                  lStack_70 = *(long *)(lVar1 + 0x10);
                  local_68 = 0x12e8;
                  (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
                }
                lVar7 = *(long *)(lVar1 + 0x10) + *(ulong *)(lVar1 + 8);
                if (iVar2 == *(char *)(lVar7 + 0x1d0)) {
                  if ((*(long *)(lVar1 + 0x28) != 0) &&
                     (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
                    local_68 = 0x12e8;
                    local_78 = *(ulong *)(lVar1 + 8);
                    lStack_70 = *(long *)(lVar1 + 0x10);
                    (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
                    lVar7 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
                  }
                  *(undefined1 *)(lVar7 + 0x1d0) = 0xff;
                }
                iVar10 = iVar10 + 1;
              } while (iVar9 != iVar10);
            }
            plVar4 = (long *)PTR_DAT_04bb46b0;
            if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18),
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)();
            }
          }
        }
      }
      else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_0281a65c;
    }
    iVar9 = 10;
    if (iVar8 < 10) {
      iVar9 = iVar8 + 1;
    }
    iVar8 = iVar9;
    if (iVar9 == 10) {
      return;
    }
  } while( true );
}

