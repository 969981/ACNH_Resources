
/* WARNING: Removing unreachable block (ram,0x0172e2d8) */

undefined8 FUN_0172e26c(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  
  lVar7 = *param_1;
  cVar1 = *(char *)((long)param_1 + 0x14);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(long *)(lVar7 + 0x1138) == 0) {
    local_34 = 6;
    uVar3 = 0;
  }
  else {
    local_34 = *(uint *)(lVar7 + 0x1698) >> 1 & 1;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0xb);
    uVar3 = FUN_03850a90(*(long *)(lVar7 + 0x1138),0xb,&local_58,local_34);
    if ((uVar3 & 1) != 0) goto LAB_0172e380;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0xb);
    local_34 = 6;
    uVar3 = 0;
    if (*(long *)(lVar7 + 0x1138) != 0) {
      uVar3 = FUN_03850a90(*(long *)(lVar7 + 0x1138),0xb,0,6);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((cVar1 == '\0') && ((uVar3 & 1) == 0)) {
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 1;
      local_68 = puVar2 + 0x10;
      pcStack_60 = "EyeWink";
      FUN_01707310(lVar7,&local_68,0,5,0);
      FUN_01707750(lVar7,&local_68);
      return 0;
    }
    return 0;
  }
LAB_0172e380:
  if ((int)param_1[2] == 1) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  puVar2 = local_68;
  local_68._0_4_ = 5;
  lVar4 = *(long *)(lVar7 + 0x1138);
  if (lVar4 == 0) {
    puVar5 = &DAT_04c931a0;
  }
  else {
    uVar6 = 0;
    if (*(long *)(lVar4 + 0x78) != 0) {
      uVar6 = *(uint *)(*(long *)(lVar4 + 0x78) + 0x18);
    }
    if (uVar6 < 6) {
      local_68._0_4_ = 0;
    }
    if (*(uint *)(lVar4 + 0x80) <= (uint)local_68) {
      local_68._0_4_ = 0;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x88) + (long)(int)(uint)local_68 * 0xe8 + 0x60);
  }
  if (*(char *)puVar5[1] != '\0') {
    local_68 = puVar2;
    FUN_01707f58(lVar7,0,5,0);
  }
  return 0;
}

