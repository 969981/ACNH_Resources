
void FUN_031044f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined **local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined4 local_48;
  
  uVar1 = *(uint *)(param_1 + 0x388);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < 0x10e) {
      lVar4 = *(long *)(param_1 + 0x2d8) + 8;
      lVar5 = lVar4 + (ulong)uVar1 * 0x1a8;
      if (*(int *)(lVar5 + 0x1a0) != 0) {
        lVar4 = lVar4 + (ulong)uVar1 * 0x1a8;
        **(undefined1 **)(lVar4 + 0x60) = 0;
        *(undefined1 *)(lVar4 + 0xf0) = 0;
        if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar4 + 0x140) == -1)) {
          *(undefined4 *)(lVar4 + 0x140) = 1;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
    lVar4 = *(long *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x38c) = 0;
    *(undefined2 *)(param_1 + 0x282) = 0xffff;
    puVar2 = PTR_DAT_04bc0cb8;
    if (lVar4 != 0) {
      plVar7 = *(long **)(lVar4 + 0x290);
      if (plVar7 != (long *)0x0) {
        local_50 = PTR_DAT_04bc0cb8 + 0x10;
        local_48 = 0x1f;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
        (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,lVar4 + 0x2d0);
      }
      plVar7 = *(long **)(lVar4 + 0x288);
      if (plVar7 != (long *)0x0) {
        local_50 = puVar2 + 0x10;
        local_48 = 0x1f;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
        (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,lVar4 + 0x2f0);
      }
    }
  }
  local_50 = PTR_DAT_04bc06f0 + 0x10;
  local_48 = CONCAT22(local_48._2_2_,*(ushort *)(param_1 + 0x282));
  uVar1 = (uint)*(ushort *)(param_1 + 0x282) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
  if ((uVar1 < *(uint *)(DAT_05336138 + 0x1d8)) &&
     (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
    lVar4 = *(long *)(param_1 + 0x2d8);
    pcStack_58 = (char *)FUN_01b84e70(&local_50);
    local_60 = &PTR_LAB_048f9770;
    if ((lVar4 != 0) && ((*pcStack_58 != '\0' || (*(short *)PTR_DAT_04bb37e0 != -2)))) {
      iVar6 = 0;
      iVar3 = 0;
      lVar4 = lVar4 + 8;
      do {
        if ((*(int *)(lVar4 + (long)iVar3 * 0x1a8 + 0x1a0) == 0) &&
           (lVar5 = lVar4 + (long)iVar3 * 0x1a8, (*(byte *)(lVar5 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar5,&local_60,PTR_DAT_04bb37e0,7);
          *(int *)(param_1 + 0x388) = -iVar6;
          if (iVar6 != 1) {
            *(undefined1 *)(param_1 + 0x38c) = 0;
            return;
          }
          goto LAB_031046c4;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar3 != 0x10e);
    }
    *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
LAB_031046c4:
    *(undefined1 *)(param_1 + 0x38c) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x38c) = 1;
  }
  return;
}

