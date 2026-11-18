
void FUN_03651424(long *param_1,long *param_2)

{
  ushort *puVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong local_18;
  
  local_18 = CONCAT71(local_18._1_7_,(char)param_1[1]);
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  puVar1 = (ushort *)((long)param_1 + 10);
  *(bool *)(param_1 + 1) = (char)local_18 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar1;
    uVar3 = uVar5 >> 8 | uVar5 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar3 = uVar5;
    }
    local_18 = CONCAT62(local_18._2_6_,uVar3);
    (**(code **)(*param_2 + 0x30))(param_2,&local_18);
  }
  else {
    local_18 = (ulong)local_18._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_18,2);
    uVar3 = (ushort)local_18 >> 8 | (ushort)local_18 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar3 = (ushort)local_18;
    }
    *puVar1 = uVar3;
  }
  local_18._0_1_ = *(char *)((long)param_1 + 0xc);
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)((long)param_1 + 0xc) = (char)local_18 != '\0';
  local_18 = CONCAT71(local_18._1_7_,*(undefined1 *)((long)param_1 + 0xd));
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)((long)param_1 + 0xd) = (char)local_18 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_18 = CONCAT71(local_18._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_18,1);
  }
  puVar2 = (ulong *)(param_1 + 3);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar11 = *puVar2;
    uVar6 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_18 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_18 = uVar11;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_18);
  }
  else {
    local_18 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_18,8);
    uVar6 = (local_18 & 0xff00ff00ff00ff00) >> 8 | (local_18 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_18;
    }
    *puVar2 = uVar6;
  }
  local_18._0_1_ = *(char *)((long)param_1 + 0xe);
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)((long)param_1 + 0xe) = (char)local_18 != '\0';
  local_18._0_1_ = *(char *)((long)param_1 + 0xf);
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)((long)param_1 + 0xf) = (char)local_18 != '\0';
  local_18._0_1_ = (char)param_1[2];
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)(param_1 + 2) = (char)local_18 != '\0';
  local_18 = CONCAT71(local_18._1_7_,*(undefined1 *)((long)param_1 + 0x11));
  (**(code **)(*param_2 + 0x28))(param_2,&local_18);
  *(bool *)((long)param_1 + 0x11) = (char)local_18 != '\0';
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 4,3);
  (**(code **)(*param_2 + 0x20))(param_2,(long)param_1 + 0x23,0xc);
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x8000,*(undefined8 *)(lVar9 + 0x4c0),0x2000,
               *(int *)(lVar9 + 0x738) - 1U & (uint)*(byte *)(param_1 + 4) << 0xd,
               *(char *)(lVar9 + 0x4b8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0xa000,*(undefined8 *)(lVar9 + 0x540),0x2000,
               *(int *)(lVar9 + 0x758) - 1U & (uint)*(byte *)((long)param_1 + 0x21) << 0xd,
               *(char *)(lVar9 + 0x538) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0xc000,*(undefined8 *)(lVar9 + 0x5c0),0x2000,
               *(int *)(lVar9 + 0x778) - 1U & (uint)*(byte *)((long)param_1 + 0x22) << 0xd,
               *(char *)(lVar9 + 0x5b8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0,*(undefined8 *)(lVar9 + 0x2c0),0x400,
               *(int *)(lVar9 + 0x6b8) - 1U & (uint)*(byte *)((long)param_1 + 0x23) << 10,
               *(char *)(lVar9 + 0x2b8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x400,*(undefined8 *)(lVar9 + 0x2d0),0x400,
               *(int *)(lVar9 + 0x6bc) - 1U & (uint)*(byte *)((long)param_1 + 0x24) << 10,
               *(char *)(lVar9 + 0x2c8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x800,*(undefined8 *)(lVar9 + 0x2e0),0x400,
               *(int *)(lVar9 + 0x6c0) - 1U & (uint)*(byte *)((long)param_1 + 0x25) << 10,
               *(char *)(lVar9 + 0x2d8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0xc00,*(undefined8 *)(lVar9 + 0x2f0),0x400,
               *(int *)(lVar9 + 0x6c4) - 1U & (uint)*(byte *)((long)param_1 + 0x26) << 10,
               *(char *)(lVar9 + 0x2e8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x1000,*(undefined8 *)(lVar9 + 0x300),0x400,
               *(int *)(lVar9 + 0x6c8) - 1U & (uint)*(byte *)((long)param_1 + 0x27) << 10,
               *(char *)(lVar9 + 0x2f8) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x1400,*(undefined8 *)(lVar9 + 0x310),0x400,
               *(int *)(lVar9 + 0x6cc) - 1U & (uint)*(byte *)(param_1 + 5) << 10,
               *(char *)(lVar9 + 0x308) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x1800,*(undefined8 *)(lVar9 + 800),0x400,
               *(int *)(lVar9 + 0x6d0) - 1U & (uint)*(byte *)((long)param_1 + 0x29) << 10,
               *(char *)(lVar9 + 0x318) == '\0');
  lVar9 = *param_1;
  FUN_03653cb0(lVar9 + 0x2a8,0x1c00,*(undefined8 *)(lVar9 + 0x330),0x400,
               *(int *)(lVar9 + 0x6d4) - 1U & (uint)*(byte *)((long)param_1 + 0x2a) << 10,
               *(char *)(lVar9 + 0x328) == '\0');
  lVar9 = *param_1;
  uVar8 = (uint)*(byte *)((long)param_1 + 0x2b);
  uVar10 = uVar8 & 1;
  if (uVar8 < 0xe0) {
    uVar10 = (uint)*(byte *)((long)param_1 + 0x2b);
  }
  iVar12 = 0x7ff;
  if (uVar8 < 0xe0) {
    iVar12 = 0x3ffff;
  }
  FUN_03653cb0(lVar9 + 0x2a8,0x2000,*(undefined8 *)(lVar9 + 0x340),0x400,
               *(int *)(lVar9 + 0x6d8) + iVar12 & uVar10 << 10,*(char *)(lVar9 + 0x338) == '\0');
  uVar10 = (uint)*(byte *)((long)param_1 + 0x2c);
  lVar9 = *param_1;
  if (*(byte *)((long)param_1 + 0x2c) < 0xe0) {
    cVar4 = *(char *)(lVar9 + 0x348);
    uVar7 = *(undefined8 *)(lVar9 + 0x350);
    iVar12 = *(int *)(lVar9 + 0x6dc);
  }
  else {
    cVar4 = *(char *)(lVar9 + 0x338);
    uVar10 = uVar10 & 1;
    uVar7 = *(undefined8 *)(lVar9 + 0x340);
    iVar12 = *(int *)(lVar9 + 0x6d8);
  }
  FUN_03653cb0(lVar9 + 0x2a8,0x2400,uVar7,0x400,iVar12 - 1U & uVar10 << 10,cVar4 == '\0');
  uVar10 = (uint)*(byte *)((long)param_1 + 0x2d);
  lVar9 = *param_1;
  if (*(byte *)((long)param_1 + 0x2d) < 0xe0) {
    cVar4 = *(char *)(lVar9 + 0x358);
    uVar7 = *(undefined8 *)(lVar9 + 0x360);
    iVar12 = *(int *)(lVar9 + 0x6e0);
  }
  else {
    cVar4 = *(char *)(lVar9 + 0x338);
    uVar10 = uVar10 & 1;
    uVar7 = *(undefined8 *)(lVar9 + 0x340);
    iVar12 = *(int *)(lVar9 + 0x6d8);
  }
  FUN_03653cb0(lVar9 + 0x2a8,0x2800,uVar7,0x400,iVar12 - 1U & uVar10 << 10,cVar4 == '\0');
  uVar10 = (uint)*(byte *)((long)param_1 + 0x2e);
  lVar9 = *param_1;
  if (*(byte *)((long)param_1 + 0x2e) < 0xe0) {
    cVar4 = *(char *)(lVar9 + 0x368);
    uVar7 = *(undefined8 *)(lVar9 + 0x370);
    iVar12 = *(int *)(lVar9 + 0x6e4);
  }
  else {
    cVar4 = *(char *)(lVar9 + 0x338);
    uVar10 = uVar10 & 1;
    uVar7 = *(undefined8 *)(lVar9 + 0x340);
    iVar12 = *(int *)(lVar9 + 0x6d8);
  }
  FUN_03653cb0(lVar9 + 0x2a8,0x2c00,uVar7,0x400,iVar12 - 1U & uVar10 << 10,cVar4 == '\0');
  return;
}

