
void FUN_02018c40(long *param_1,short *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 local_80;
  char *local_78;
  uint local_6c;
  undefined *local_68;
  short local_60;
  short local_5e;
  undefined4 local_5c;
  long local_58;
  undefined4 local_38;
  uint local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_60 = *param_2;
  if (local_60 != -2) {
    local_5e = param_2[1];
    local_58 = 0;
    local_5c = *(undefined4 *)(param_2 + 2);
    local_68 = PTR_DAT_04bc0510 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
          local_58 = lVar8;
        }
      }
    }
    local_38 = FUN_01ad78cc(&local_68);
    local_6c = 0;
    uVar5 = FUN_0172f380(&local_6c,&local_38);
    puVar3 = PTR_DAT_04bbdfa0;
    if ((uVar5 & 1) != 0) {
      if (local_6c < 0x32) {
        local_78 = *(char **)(PTR_DAT_04bbdfa0 + (ulong)local_6c * 8 + 0x188);
      }
      else {
        local_78 = "";
      }
      local_80 = PTR_DAT_04bb2020 + 0x10;
      uVar4 = 0;
      do {
        pcVar10 = "";
        if (uVar4 < 0x32) {
          pcVar10 = *(char **)(puVar3 + (ulong)uVar4 * 8 + 0x188);
        }
        (**(code **)(local_80 + 0x18))(&local_80);
        if (pcVar10 == local_78) {
LAB_02018e4c:
          local_34 = uVar4;
          if (uVar4 < *(uint *)(param_1 + 0x5f3)) {
            uVar7 = *(undefined8 *)(param_1[0x5f4] + (long)(int)uVar4 * 8);
            lVar8 = param_1[0xbe8];
            goto joined_r0x02018e6c;
          }
          break;
        }
        if (*pcVar10 == *local_78) {
          if (*pcVar10 == '\0') goto LAB_02018e4c;
          lVar8 = 0x7fffe;
          pcVar6 = local_78;
          while( true ) {
            if (pcVar10[1] != pcVar6[1]) break;
            if (pcVar10[1] == '\0') goto LAB_02018e4c;
            if (pcVar10[2] != pcVar6[2]) break;
            if (pcVar10[2] == '\0') goto LAB_02018e4c;
            if ((lVar8 == 0) || (cVar2 = pcVar10[3], cVar2 != pcVar6[3])) break;
            lVar8 = lVar8 + -3;
            pcVar6 = pcVar6 + 3;
            pcVar10 = pcVar10 + 3;
            if (cVar2 == '\0') goto LAB_02018e4c;
          }
        }
        uVar9 = 0x32;
        if ((int)uVar4 < 0x32) {
          uVar9 = uVar4 + 1;
        }
        uVar4 = uVar9;
      } while (uVar9 != 0x32);
    }
    uVar7 = 0;
    lVar8 = param_1[0xbe8];
joined_r0x02018e6c:
    if (lVar8 != 0) {
      local_80._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
      if ((param_3 & 1) == 0) {
        iVar1 = *(int *)(*(long *)(lVar8 + 0x3b0) + 0x360);
        local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar1);
        if (iVar1 != 0xe) {
          local_80._0_4_ = 4;
          *(undefined1 **)((long)param_1 + 0x160c) = &DAT_3f8000003f800000;
          (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,4);
          if (*(float *)((long)param_1 + 0x160c) == 0.001) {
            uVar4 = *(uint *)((long)param_1 + 0x15f4) | 0x10;
          }
          else {
            uVar4 = *(uint *)((long)param_1 + 0x15f4) & 0xffffffef;
          }
          *(uint *)((long)param_1 + 0x15f4) = uVar4;
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(lVar8 + 0x3b0) + 0x360);
        local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar1);
        if (iVar1 != 0xf) {
          FUN_01706aa0(0x3f800000,param_1);
        }
      }
    }
    if (local_6c == 8) {
      if ((param_3 & 1) == 0) {
        lVar8 = param_1[0x290];
      }
      else {
        lVar8 = param_1[0x292];
      }
      iVar1 = *(int *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x28);
      local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar1);
      if (iVar1 != 0) {
        FUN_02019598(param_1,&local_80,uVar7,(param_3 ^ 0xffffffff) & 1,1);
      }
    }
    else {
      local_80._0_4_ =
           *(int *)(param_1[0x290] + ((ulong)*(uint *)(param_1[0x290] + 0x10) & 1) * 0x20 + 0x28);
      if ((int)local_80 != 0) {
        FUN_02019598(param_1,&local_80,uVar7,0,0);
        uVar5 = FUN_01ad8fd0(&local_68);
        if ((uVar5 & 1) != 0) {
          lVar8 = param_1[0x291];
          iVar1 = *(int *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x28);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar1);
          if (iVar1 == 0) {
            *(undefined1 **)(lVar8 + 0x88) = &LAB_02019060;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined ***)(lVar8 + 0x78) = &PTR_LAB_04a6e818;
            *(long **)(lVar8 + 0x80) = param_1;
          }
          else {
            FUN_020192bc(&local_80,uVar7);
          }
        }
      }
    }
  }
  return;
}

