
void FUN_034f3f0c(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *local_90;
  uint local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined4 local_70;
  undefined8 local_6c;
  byte local_64;
  undefined *local_60;
  undefined4 local_58;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x238) + 0x570);
  if (lVar7 == 0) {
    return;
  }
  if (param_2 - 1U < 2) goto switchD_034f40a0_default;
  iVar1 = *(int *)(param_1 + 0x1cf60);
  if (iVar1 - 3U < 2) {
    uVar8 = 10;
    goto LAB_034f3f74;
  }
  lVar3 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x68) == 0)) {
switchD_034f40a0_default:
    uVar8 = 0;
    goto LAB_034f3f74;
  }
  switch(iVar1) {
  case 0:
    uVar8 = *(uint *)(lVar3 + 0x170);
    break;
  case 1:
    uVar8 = *(uint *)(lVar3 + 0x180);
    break;
  case 2:
    lVar4 = *(long *)(lVar3 + 0x1b8);
    uVar8 = *(uint *)(lVar3 + 0x1b0);
    goto LAB_034f40d4;
  case 3:
    uVar8 = *(uint *)(lVar3 + 0x610) & ((int)*(uint *)(lVar3 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar4 = *(long *)(lVar3 + 0x1e0);
    uVar8 = *(uint *)(lVar3 + 0x1d8);
LAB_034f40d4:
    if (lVar4 == 0) {
      uVar8 = 0xffffffff;
    }
    break;
  default:
    goto switchD_034f40a0_default;
  }
LAB_034f3f74:
  local_7a = 0x101000001;
  local_70 = 0;
  local_84 = 0;
  local_90 = PTR_DAT_04bc9c78 + 0x10;
  local_6c = 0x60000000c;
  local_64 = *(byte *)(param_1 + 0x1f8);
  local_7c = 0;
  if (7 < local_64) {
    local_64 = 0xff;
  }
  if (param_2 == 0) {
    local_84 = CONCAT44(*(undefined4 *)(param_1 + 0x1ce30),*(undefined4 *)(param_1 + 0x1ce34));
    local_70 = 2;
  }
  local_88 = uVar8;
  FUN_03864290(lVar7,&local_90);
  if (uVar8 == 0) {
    FUN_0345b550(lVar7,0);
  }
  uVar9 = 0;
  if (param_2 == 1) goto LAB_034f4128;
  if (param_2 == 2) {
    uVar9 = 0x3f800000;
    goto LAB_034f4128;
  }
  iVar1 = *(int *)(param_1 + 0x1cf60);
  if (iVar1 - 3U < 2) goto LAB_034f4128;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar1);
  lVar7 = *(long *)PTR_DAT_04bb7bc0;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
    switch(iVar1) {
    case 0:
      uVar8 = *(uint *)(lVar7 + 0x170);
      break;
    case 1:
      uVar8 = *(uint *)(lVar7 + 0x180);
      break;
    case 2:
      if (*(long *)(lVar7 + 0x1b8) == 0) goto LAB_034f4128;
      uVar8 = *(uint *)(lVar7 + 0x1b0);
      break;
    case 3:
      uVar8 = *(uint *)(lVar7 + 0x610) & ((int)*(uint *)(lVar7 + 0x610) >> 0x1f ^ 0xffffffffU);
      break;
    case 4:
      if (*(long *)(lVar7 + 0x1e0) == 0) goto LAB_034f4128;
      uVar8 = *(uint *)(lVar7 + 0x1d8);
      break;
    default:
      goto switchD_034f4058_default;
    }
    if (uVar8 != 0) goto LAB_034f4128;
  }
switchD_034f4058_default:
  uVar9 = 0;
  if (1 < *(uint *)(param_1 + 0x1ce38)) {
    uVar9 = 0x3f800000;
  }
LAB_034f4128:
  puVar5 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x238) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  plVar6 = *(long **)(puVar5[0x45] + (ulong)(2 < *(uint *)(puVar5 + 0x44)) * 0x10);
  if (plVar6 != (long *)0x0) {
    local_60 = PTR_DAT_04bc4f00 + 0x10;
    local_58 = 0x14;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
    (**(code **)(plVar6[3] + 0x158))(uVar9,plVar6[1]);
  }
  return;
}

