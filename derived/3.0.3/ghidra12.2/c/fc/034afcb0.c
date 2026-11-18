
void FUN_034afcb0(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_24;
  
  local_24 = -1;
  iVar9 = -1;
  if ((*(char *)(param_1 + 0x1ce8c) != '\0') &&
     (lVar4 = (**(code **)(*param_2 + 0xc0))(param_2), lVar4 != 0)) {
    uVar5 = FUN_01d77c78();
    if (((uVar5 & 1) != 0) && (*(char *)(lVar4 + 0xc) == '\0')) {
      bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar4 + 0xd,lVar4);
      *(byte *)(lVar4 + 0xc) = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        FUN_0083075c(&local_24,*(undefined4 *)(lVar4 + 4),0);
        iVar9 = local_24;
        if (local_24 != -1) {
          iVar9 = 0;
          iVar7 = 0;
          lVar4 = param_1 + 0x1c1b8;
          do {
            iVar10 = local_24;
            if (((*(ushort *)(lVar4 + (long)iVar7 * 0x30 + 4) & 1) == 0) &&
               (piVar8 = (int *)(lVar4 + (long)iVar7 * 0x30 + 0x20), *piVar8 == -1)) {
              *piVar8 = local_24;
              lVar4 = lVar4 + (long)iVar7 * 0x30;
              *(undefined1 *)(lVar4 + 0x24) = 0;
              *(undefined4 *)(lVar4 + 0x28) = 0;
              goto LAB_034afd38;
            }
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar9 != 0x40);
          iVar9 = -1;
          goto LAB_034afd38;
        }
        goto LAB_034afd34;
      }
    }
    iVar9 = -1;
  }
LAB_034afd34:
  iVar10 = iVar9;
LAB_034afd38:
  if ((int)param_3 < 10) {
    plVar1 = (long *)(*(long *)(param_1 + 0x228) + 0x570);
    plVar2 = plVar1 + param_3;
    if (9 < param_3) {
      plVar2 = plVar1;
    }
    lVar4 = *plVar2;
    if (iVar9 == -1) {
      uVar6 = 1;
    }
    else {
      if (lVar4 != 0) {
        FUN_03464520(*(undefined8 *)(lVar4 + 0x318),0);
      }
      uVar6 = 2;
    }
  }
  else {
    lVar4 = 0;
    uVar6 = 1;
    if (iVar9 != -1) {
      uVar6 = 2;
    }
  }
  plVar1 = (long *)(param_1 + 0x1cf68) + (ulong)param_3 * 3;
  if (9 < param_3) {
    plVar1 = (long *)(param_1 + 0x1cf68);
  }
  *plVar1 = lVar4;
  *(int *)(plVar1 + 1) = iVar9;
  *(int *)((long)plVar1 + 0xc) = iVar10;
  *(undefined4 *)(plVar1 + 2) = uVar6;
  return;
}

