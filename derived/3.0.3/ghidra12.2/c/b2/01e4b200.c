
void FUN_01e4b200(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 local_40;
  char *pcStack_38;
  
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x180))();
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x358) + 0x690);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x358) + 0x750) != 0) {
    return;
  }
  uVar3 = FUN_01e5d2a4(0x3e800000,param_1,lVar7);
  if ((uVar3 & 1) != 0) {
    bVar1 = *(byte *)(lVar7 + 3);
    *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x314) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined1 *)(param_1 + 0x328) = 0;
    *(uint *)(param_1 + 800) = (uint)bVar1 << 0x18;
    iVar2 = *(int *)(param_1 + 0x56c);
    local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    plVar9 = &DAT_05390500 + (long)iVar2 * 2;
    lVar7 = *(long *)(*(long *)(param_1 + 0x340) + 0x1138);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x88);
      plVar8 = (long *)(lVar7 + 0x60);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcVar10 = *(char **)(lVar7 + 0x68);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      pcVar6 = (char *)(&DAT_05390508)[(long)iVar2 * 2];
      if (pcVar10 == pcVar6) {
        return;
      }
      pcVar10 = *(char **)(lVar7 + 0x68);
      if (*pcVar10 == *pcVar6) {
        if (*pcVar10 == '\0') {
          return;
        }
        uVar3 = 0;
        do {
          uVar4 = uVar3;
          if ((uVar4 == 0x80000) || (pcVar10[uVar4 + 1] != pcVar6[uVar4 + 1])) goto LAB_01e4b38c;
          if (pcVar10[uVar4 + 1] == '\0') goto LAB_01e4b384;
          if (pcVar10[uVar4 + 2] != pcVar6[uVar4 + 2]) goto LAB_01e4b38c;
          uVar3 = uVar4 + 2;
        } while (pcVar10[uVar4 + 2] != '\0');
        uVar4 = uVar4 + 1;
LAB_01e4b384:
        if (uVar4 < 0x80000) {
          return;
        }
      }
    }
LAB_01e4b38c:
    FUN_017081d0(*(undefined8 *)(param_1 + 0x340),plVar9,6,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x56c);
  local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
  lVar7 = *(long *)(param_1 + 0x340);
  if (*(long *)(lVar7 + 0x1138) != 0) {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x1138) + 0x88);
    plVar9 = (long *)(lVar7 + 0x60);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar10 = *(char **)(lVar7 + 0x68);
    (**(code **)((&DAT_05390500)[(long)iVar2 * 2] + 0x18))(&DAT_05390500 + (long)iVar2 * 2);
    pcVar6 = (char *)(&DAT_05390508)[(long)iVar2 * 2];
    if (pcVar10 != pcVar6) {
      pcVar10 = *(char **)(lVar7 + 0x68);
      if ((*pcVar10 == *pcVar6) && (*pcVar10 != '\0')) {
        lVar7 = 0;
        do {
          if ((lVar7 == 0x80000) || (pcVar10[lVar7 + 1] != pcVar6[lVar7 + 1])) goto LAB_01e4b4b8;
          if (pcVar10[lVar7 + 1] == '\0') break;
          lVar5 = lVar7 + 2;
          if (pcVar10[lVar5] != pcVar6[lVar7 + 2]) goto LAB_01e4b4b8;
          lVar7 = lVar7 + 2;
        } while (pcVar10[lVar5] != '\0');
        lVar7 = *(long *)(param_1 + 0x340);
        goto LAB_01e4b4c0;
      }
    }
LAB_01e4b4b8:
    lVar7 = *(long *)(param_1 + 0x340);
  }
LAB_01e4b4c0:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NpcMoveAccelRate";
  if (((*(long *)(lVar7 + 0x1138) != 0) &&
      (lVar5 = *(long *)(*(long *)(lVar7 + 0x1138) + 0x78), lVar5 != 0)) &&
     (plVar9 = *(long **)(lVar5 + 0x48), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar9,&local_40);
    lVar7 = *(long *)(param_1 + 0x340);
  }
  FUN_017081d0(lVar7,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
  return;
}

