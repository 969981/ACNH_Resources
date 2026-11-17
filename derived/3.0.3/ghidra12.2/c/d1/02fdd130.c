
void FUN_02fdd130(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  ulong local_28;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x220) + 0x570);
  if (lVar9 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1c1d8);
  if ((param_2 & 1) == 0) {
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    puVar4 = PTR_DAT_04bb26a8;
    lVar7 = *(long *)PTR_DAT_04bb26a8;
    if (*(char *)(param_1 + 0x1d25d) == '\0') {
      iVar8 = *(int *)(lVar7 + 0x7c0);
LAB_02fdd1fc:
      if (iVar8 != -1) {
        if (iVar8 == 0) {
LAB_02fdd208:
          lVar5 = FUN_0299a520(lVar7 + 0x7c8,param_1 + 0x1d250,4);
          if (lVar5 == 0) goto LAB_02fdd2cc;
          lVar7 = *(long *)puVar4;
          lVar5 = lVar5 + 8;
        }
        else {
          uVar3 = iVar8 - 1;
          if (*(uint *)(lVar7 + 0x2e70) <= uVar3) {
            uVar3 = 0;
          }
          lVar5 = *(long *)(lVar7 + 0x2e78) + (long)(int)uVar3 * 0x228 + 0x138;
        }
LAB_02fdd268:
        uVar2 = *(uint *)(lVar5 + 4);
        uVar3 = 0;
        if (uVar2 != 99999 && -1 < (int)uVar2) {
          uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar7 = *(long *)(lVar7 + 0x19f820); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          while (*(int *)(lVar7 + 0x20) <= (int)uVar3) {
            if ((int)uVar3 <= *(int *)(lVar7 + 0x20)) {
              local_28 = (ulong)(ushort)*(undefined4 *)(lVar7 + 0x2c);
              goto LAB_02fdd2d4;
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 == 0) goto LAB_02fdd2cc;
          }
        }
      }
    }
    else {
      iVar8 = *(int *)(lVar7 + 0x7c0);
      if (iVar8 != -1) {
        if (iVar8 == 0) {
          if ((((*(char *)(lVar7 + 0x2e6c) == '\0') ||
               (*(int *)(lVar7 + 0x2d18) != *(int *)(param_1 + 0x1d250))) ||
              (*(int *)(lVar7 + 0x2d1c) != *(int *)(param_1 + 0x1d254))) ||
             ((*(int *)(lVar7 + 0x2d0c) != 4 ||
              (*(int *)(lVar7 + 0x2d20) != *(int *)(param_1 + 0x1d258))))) goto LAB_02fdd208;
          lVar5 = lVar7 + 0x2dec;
        }
        else {
          if (*(char *)(lVar7 + 0x63578) == '\0') goto LAB_02fdd1fc;
          lVar5 = lVar7 + 0x634f8;
        }
        goto LAB_02fdd268;
      }
    }
LAB_02fdd2cc:
    local_28 = 0xfffe;
LAB_02fdd2d4:
    FUN_0277d4ac(&local_28);
    local_48 = local_28;
    if (((short)local_28 != -2) && (0 < *(int *)(param_1 + 0x1c200))) {
      uVar11 = 0;
      uVar10 = 0xffffffff;
      do {
        uVar6 = FUN_0277d7b4(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x1c208) + uVar11 * 8));
        if ((uVar6 & 1) != 0) {
          uVar10 = uVar11 & 0xffffffff;
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(param_1 + 0x1c200));
      goto LAB_02fdd35c;
    }
  }
  uVar10 = 0xffffffff;
LAB_02fdd35c:
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar10);
  FUN_02bc30b0(plVar1,lVar9);
  return;
}

