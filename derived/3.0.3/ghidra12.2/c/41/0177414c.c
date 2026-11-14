
void FUN_0177414c(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int local_14;
  
  uVar1 = *(uint *)(param_2 + 0x638);
  if ((uVar1 & 0xfffffffe) == 10) {
    local_14 = *(int *)(param_2 + 0xd14);
    if ((*(long *)PTR_DAT_04bb5ce0 != 0) &&
       ((*(ushort *)(*(long *)PTR_DAT_04bb5ce0 + 0xf6c) >> 1 & 1) != 0)) {
      local_14 = 0;
    }
    if (local_14 - 1U < 4) {
      iVar3 = *(int *)(&DAT_041770b4 + (long)(int)(local_14 - 1U) * 4);
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      param_1[1] = (long)(&DAT_041770b4 + iVar3);
      return;
    }
LAB_01774268:
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    pcVar5 = *(char **)(PTR_PTR_04bb2238 + 8);
    goto LAB_017742e8;
  }
  if ((uVar1 == 1) && (*(char *)(param_2 + 0x6e8) == '\0')) {
    pcVar5 = s_RoomMdlWall_049c3337;
  }
  else {
    if (uVar1 != 7) {
      if (uVar1 != 2) goto LAB_01774268;
      if ((*(long *)PTR_DAT_04bb5ce0 == 0) ||
         (iVar3 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xe48), iVar3 == 1)) {
LAB_01774218:
        iVar3 = FUN_0180e2d0();
        if (iVar3 == 6) {
          iVar3 = *(int *)(param_2 + 0xafc);
          iVar2 = *(int *)(param_2 + 0xb00);
          if (((iVar3 != 4) || (iVar2 != 4)) && ((iVar3 != 4 || (iVar2 != 6)))) {
            if ((iVar3 != 6) || (iVar2 != 4 && iVar2 != 6)) goto LAB_017743a8;
          }
LAB_017742d4:
          pcVar5 = s_RoomMdlFloor6x6_049c3344;
          goto LAB_017742e0;
        }
      }
      else {
        if ((1 < iVar3) && (iVar3 < 6)) goto LAB_017742d4;
        if ((1 < iVar3) && (iVar3 < 6)) goto LAB_017743c4;
        if ((iVar3 < 6) || (0x10 < iVar3)) {
          if (iVar3 < 0x11) {
            if (0xfffffffd < iVar3 - 0x15U) goto LAB_017743c4;
          }
          else if ((0xfffffffd < iVar3 - 0x15U) || (iVar3 < 0x13)) {
LAB_017743c4:
            if (((iVar3 < 2) || (5 < iVar3)) &&
               ((((iVar3 < 6 || (0x10 < iVar3)) && (0x10 < iVar3)) && (iVar3 < 0x13)))) {
              pcVar5 = s_RoomMdlFloor10x6_049c3366;
              goto LAB_017742e0;
            }
            goto LAB_01774218;
          }
        }
      }
LAB_017743a8:
      pcVar5 = s_RoomMdlFloor8x8_049c3355;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_017742e8;
    }
    pcVar5 = s_RoomCurtain_049c3378;
  }
LAB_017742e0:
  puVar4 = PTR_DAT_04bb2020 + 0x10;
LAB_017742e8:
  *param_1 = (long)puVar4;
  param_1[1] = (long)pcVar5;
  return;
}

