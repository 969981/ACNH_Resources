
undefined8 FUN_01f5fce0(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined *local_50;
  char *pcStack_48;
  
  iVar5 = FUN_00883634(*(undefined8 *)PTR_DAT_04bb32f0);
  if (iVar5 != 1) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x13648);
  if (*piVar1 != 0) {
    *piVar1 = *piVar1 + -1;
  }
  if (*(int *)(param_1 + 0x1365c) != 0) {
    *(int *)(param_1 + 0x1365c) = *(int *)(param_1 + 0x1365c) + -1;
  }
  uVar6 = FUN_00a904b0(*(undefined8 *)PTR_DAT_04bb30a0);
  if ((uVar6 & 1) == 0) {
    if (*piVar1 != 0) {
      return 0;
    }
    lVar7 = *(long *)(param_1 + 8);
    cVar3 = *(char *)(param_1 + 0x13680);
    *(undefined1 *)(param_1 + 0x13680) = 0;
    uVar8 = *(uint *)(lVar7 + 0x288);
    *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
    uVar8 = uVar8 ^ uVar8 << 0xb;
    *(undefined4 *)(lVar7 + 0x28c) = *(undefined4 *)(lVar7 + 0x290);
    uVar2 = *(uint *)(lVar7 + 0x294);
    *(uint *)(lVar7 + 0x290) = uVar2;
    uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2;
    *(uint *)(lVar7 + 0x294) = uVar8;
    uVar8 = (uint)((ulong)uVar8 * 100 >> 0x20);
    if ((uVar8 < 10 && *piVar1 == 0) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "FireworksApproachTalk";
      sVar4 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_50);
      if ((sVar4 == 0) && (uVar6 = FUN_01f603e0(param_1), (uVar6 & 1) != 0)) {
        return 1;
      }
    }
    if (((cVar3 == '\0') && (uVar8 < 0x14)) && (uVar6 = FUN_01f5feb0(param_1), (uVar6 & 1) != 0)) {
      return 1;
    }
  }
  FUN_01e6648c(param_1,0x69,0,0);
  if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "ApproachUpdateStop";
    FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_50,1);
  }
  if (*(char *)(param_1 + 0x13716) != '\0') {
    *(char *)(param_1 + 0x13716) = '\0';
  }
  *(undefined4 *)(param_1 + 0x1367c) = 0x69;
  return 1;
}

