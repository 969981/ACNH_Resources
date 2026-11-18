
uint FUN_0360df60(long param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong *puVar3;
  ushort *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  ushort uVar14;
  short sVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  short *psVar20;
  undefined4 *puVar21;
  ulong uVar22;
  uint local_406c;
  ulong local_4068;
  undefined1 auStack_405c [4];
  undefined8 local_4058;
  undefined2 local_4050;
  undefined2 uStack_404c;
  undefined2 local_4048;
  undefined2 uStack_4044;
  undefined2 local_4040;
  undefined2 uStack_403c;
  undefined2 local_4038;
  undefined2 uStack_4034;
  undefined2 local_4030;
  undefined2 uStack_402c;
  undefined2 local_4028;
  undefined2 uStack_4024;
  undefined2 local_4020;
  undefined2 uStack_401c;
  undefined2 local_4018;
  undefined2 uStack_4014;
  undefined2 local_4010;
  undefined2 uStack_400c;
  undefined2 local_4008;
  undefined2 uStack_4004;
  undefined2 local_4000;
  undefined2 uStack_3ffc;
  undefined2 local_3ff8;
  undefined2 uStack_3ff4;
  undefined2 local_3ff0;
  undefined2 uStack_3fec;
  undefined2 local_3fe8;
  undefined2 uStack_3fe4;
  undefined2 local_3fe0;
  undefined2 uStack_3fdc;
  undefined2 local_3fd8;
  undefined2 uStack_3fd4;
  undefined2 local_3fd0;
  undefined2 uStack_3fcc;
  undefined2 local_3fc8;
  undefined2 uStack_3fc4;
  undefined2 local_3fc0;
  undefined2 uStack_3fbc;
  undefined2 local_3fb8;
  undefined2 uStack_3fb4;
  undefined2 local_3fb0;
  undefined2 uStack_3fac;
  undefined2 local_3fa8;
  undefined2 uStack_3fa4;
  undefined2 local_3fa0;
  undefined2 uStack_3f9c;
  undefined2 local_3f98;
  undefined2 uStack_3f94;
  undefined2 local_3f90;
  undefined2 uStack_3f8c;
  undefined2 local_3f88;
  undefined2 uStack_3f84;
  undefined2 local_3f80;
  undefined2 uStack_3f7c;
  undefined2 local_3f78;
  undefined2 uStack_3f74;
  undefined2 local_3f70;
  undefined2 local_3f6c;
  undefined2 local_3f68;
  undefined2 local_3f64;
  undefined2 local_3f60;
  undefined2 local_3f5c;
  undefined1 auStack_3f58 [16128];
  undefined1 auStack_58 [4];
  uint local_54;
  
  uVar11 = FUN_04002180(param_2,0x10,0x10,auStack_405c);
  if ((uVar11 & 1) == 0) goto LAB_03610848;
  iVar12 = (int)param_2[1];
  iVar16 = iVar12;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
    iVar16 = (int)param_2[1];
  }
  puVar1 = (uint *)(param_1 + 0x404);
  if (iVar16 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if (iVar16 == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x410);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x408);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x40c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
  }
  lVar17 = param_2[1];
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x418));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x418) = (char)local_4058 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x42c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar2 = (uint *)(param_1 + 0x430);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar2;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar2 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar3 = (ulong *)(param_1 + 0x420);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = *puVar3;
    uVar22 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_4058 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4058 = uVar19;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_4058);
  }
  else {
    local_4058 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,8);
    uVar22 = (local_4058 & 0xff00ff00ff00ff00) >> 8 | (local_4058 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar22 = local_4058;
    }
    *puVar3 = uVar22;
  }
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x434));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x436);
  *(bool *)(param_1 + 0x434) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  puVar4 = (ushort *)(param_1 + 0x438);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  local_4058._0_1_ = *(char *)(param_1 + 0x419);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x419) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x428);
  local_4058._0_1_ = *(char *)(param_1 + 0x43a);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x43a) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 0) {
    bVar10 = false;
    if ((*(char *)(param_1 + 0x419) != '\0') && (*(char *)(param_1 + 0x418) != '\0')) {
      bVar10 = *puVar1 != 0;
    }
    *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) & 0xfe | bVar10;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x43b);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x43c);
  local_4058._0_1_ = *(char *)(param_1 + 0x43d);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x43d) = (char)local_4058 != '\0';
  local_4058._0_1_ = *(undefined1 *)(param_1 + 0x43e);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  if ((int)param_2[1] == 0) {
    *(char *)(param_1 + 0x43e) = (char)local_4058;
  }
  if ((int)lVar17 == 0) {
    sVar15 = *(short *)(&DAT_04057c80 + (ulong)*(byte *)(param_1 + 0x43e) * 2);
    *(short *)(param_1 + 0x44a) = sVar15;
    uVar14 = (ushort)*(byte *)(param_1 + 0x419);
    if (((*(byte *)(param_1 + 0x419) != 0) && (uVar14 = 0x17f, *(char *)(param_1 + 0x418) != '\0'))
       && (*(char *)(param_1 + 0x43a) == '\0')) {
      uVar14 = 0x17f;
      if (*(char *)(param_1 + 0x447) != '\0') {
        uVar14 = sVar15 + 0x17f;
      }
    }
    *(ushort *)(param_1 + 0x4fc) = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x43f);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x440);
  local_4058._0_1_ = *(char *)(param_1 + 0x441);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x441) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x442);
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x443));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x448);
  *(bool *)(param_1 + 0x443) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x444);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x445);
  local_4058._0_1_ = *(char *)(param_1 + 0x44c);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x44c) = (char)local_4058 != '\0';
  if ((int)lVar17 == 0) {
    uVar7 = 0x7ee18180 >> (ulong)((*(byte *)(param_1 + 0x445) & 3) << 3);
    *(char *)(param_1 + 0x446) = (char)uVar7;
    uVar18 = 0;
    if ((char)local_4058 == '\0') {
      uVar18 = (uVar7 & 0xff) >> (ulong)(*(byte *)(param_1 + 0x444) & 0x1f) & 1;
    }
    *(char *)(param_1 + 0x447) = (char)uVar18;
    uVar14 = (ushort)*(byte *)(param_1 + 0x419);
    if (((*(byte *)(param_1 + 0x419) != 0) && (uVar14 = 0x17f, *(char *)(param_1 + 0x418) != '\0'))
       && (*(char *)(param_1 + 0x43a) == '\0')) {
      uVar14 = 0x17f;
      if (uVar18 != 0) {
        uVar14 = *(short *)(param_1 + 0x44a) + 0x17f;
      }
    }
    *(ushort *)(param_1 + 0x4fc) = uVar14;
  }
  lVar17 = param_2[1];
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x450));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x450) = (char)local_4058 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x464);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x468);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar3 = (ulong *)(param_1 + 0x458);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = *puVar3;
    uVar22 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_4058 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4058 = uVar19;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_4058);
  }
  else {
    local_4058 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,8);
    uVar22 = (local_4058 & 0xff00ff00ff00ff00) >> 8 | (local_4058 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar22 = local_4058;
    }
    *puVar3 = uVar22;
  }
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x46c));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x46e);
  *(bool *)(param_1 + 0x46c) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  puVar4 = (ushort *)(param_1 + 0x470);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  local_4058._0_1_ = *(char *)(param_1 + 0x451);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x451) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x460);
  local_4058._0_1_ = *(char *)(param_1 + 0x472);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x472) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 0) {
    bVar13 = 0;
    if ((*(int *)(param_1 + 0x464) != 0 && *(char *)(param_1 + 0x450) != '\0') &&
        *(char *)(param_1 + 0x451) != '\0') {
      bVar13 = 2;
    }
    *(byte *)(param_1 + 0x414) = bVar13 | *(byte *)(param_1 + 0x414) & 0xfd;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x473);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x474);
  local_4058._0_1_ = *(char *)(param_1 + 0x475);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x475) = (char)local_4058 != '\0';
  local_4058._0_1_ = *(undefined1 *)(param_1 + 0x476);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  if ((int)param_2[1] == 0) {
    *(char *)(param_1 + 0x476) = (char)local_4058;
  }
  if ((int)lVar17 == 0) {
    sVar15 = *(short *)(&DAT_04057c80 + (ulong)*(byte *)(param_1 + 0x476) * 2);
    *(short *)(param_1 + 0x482) = sVar15;
    uVar14 = (ushort)*(byte *)(param_1 + 0x451);
    if (((*(byte *)(param_1 + 0x451) != 0) && (uVar14 = 0x17f, *(char *)(param_1 + 0x450) != '\0'))
       && (*(char *)(param_1 + 0x472) == '\0')) {
      uVar14 = 0x17f;
      if (*(char *)(param_1 + 0x47f) != '\0') {
        uVar14 = sVar15 + 0x17f;
      }
    }
    *(ushort *)(param_1 + 0x4fe) = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x477);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x478);
  local_4058._0_1_ = *(char *)(param_1 + 0x479);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x479) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x47a);
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x47b));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x480);
  *(bool *)(param_1 + 0x47b) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x47c);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x47d);
  local_4058._0_1_ = *(char *)(param_1 + 0x484);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x484) = (char)local_4058 != '\0';
  if ((int)lVar17 == 0) {
    uVar7 = 0x7ee18180 >> (ulong)((*(byte *)(param_1 + 0x47d) & 3) << 3);
    *(char *)(param_1 + 0x47e) = (char)uVar7;
    uVar18 = 0;
    if ((char)local_4058 == '\0') {
      uVar18 = (uVar7 & 0xff) >> (ulong)(*(byte *)(param_1 + 0x47c) & 0x1f) & 1;
    }
    *(char *)(param_1 + 0x47f) = (char)uVar18;
    uVar14 = (ushort)*(byte *)(param_1 + 0x451);
    if (((*(byte *)(param_1 + 0x451) != 0) && (uVar14 = 0x17f, *(char *)(param_1 + 0x450) != '\0'))
       && (*(char *)(param_1 + 0x472) == '\0')) {
      uVar14 = 0x17f;
      if (uVar18 != 0) {
        uVar14 = *(short *)(param_1 + 0x482) + 0x17f;
      }
    }
    *(ushort *)(param_1 + 0x4fe) = uVar14;
  }
  lVar17 = param_2[1];
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x488));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x488) = (char)local_4058 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x49c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x4a0);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar3 = (ulong *)(param_1 + 0x490);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = *puVar3;
    uVar22 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_4058 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4058 = uVar19;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_4058);
  }
  else {
    local_4058 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,8);
    uVar22 = (local_4058 & 0xff00ff00ff00ff00) >> 8 | (local_4058 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar22 = local_4058;
    }
    *puVar3 = uVar22;
  }
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x4a4));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x4a6);
  *(bool *)(param_1 + 0x4a4) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  puVar4 = (ushort *)(param_1 + 0x4a8);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  local_4058._0_1_ = *(char *)(param_1 + 0x489);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x489) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x498);
  local_4058._0_1_ = *(char *)(param_1 + 0x4aa);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4aa) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 0) {
    bVar13 = 0;
    if ((*(int *)(param_1 + 0x49c) != 0 && *(char *)(param_1 + 0x488) != '\0') &&
        *(char *)(param_1 + 0x489) != '\0') {
      bVar13 = 4;
    }
    *(byte *)(param_1 + 0x414) = bVar13 | *(byte *)(param_1 + 0x414) & 0xfb;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4be);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4ab);
  (**(code **)(*param_2 + 0x28))(param_2,(byte *)(param_1 + 0x4ac));
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x4ad,0x10);
  local_4058._0_1_ = *(char *)(param_1 + 0x4c0);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4c0) = (char)local_4058 != '\0';
  local_4058._0_1_ = *(char *)(param_1 + 0x4c1);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4c1) = (char)local_4058 != '\0';
  local_4058._0_1_ = *(char *)(param_1 + 0x4bf);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4bf) = (char)local_4058 != '\0';
  if ((int)lVar17 == 0) {
    if (*(char *)(param_1 + 0x489) == '\0') {
      *(undefined2 *)(param_1 + 0x500) = 0;
      *(undefined1 *)(param_1 + 0x4bd) = 0;
    }
    else if ((*(char *)(param_1 + 0x488) == '\0') || (*(char *)(param_1 + 0x4aa) != '\0')) {
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      *(undefined2 *)(param_1 + 0x500) = 0x186;
    }
    else {
      uVar18 = 4;
      if ((char)local_4058 == '\0') {
        uVar18 = ((uint)*(byte *)(param_1 + 0x4ac) << 2 ^ 0xffffffff) & 4;
      }
      uVar18 = *(byte *)(param_1 + 0x4ab) >> (ulong)uVar18 & 0xf;
      *(char *)(param_1 + 0x4bd) = (char)uVar18;
      if (*(byte *)(param_1 + 0x4be) == 0) {
        sVar15 = 0x186;
      }
      else {
        sVar15 = (short)(uVar18 >>
                        (ulong)(0x2104U >> (ulong)((*(byte *)(param_1 + 0x4be) & 7) << 2) & 7)) *
                 -0x34 + 0x186;
      }
      *(short *)(param_1 + 0x500) = sVar15;
    }
  }
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x4c8));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4c8) = (char)local_4058 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x4dc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x4e0);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar3 = (ulong *)(param_1 + 0x4d0);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar3,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = *puVar3;
    uVar22 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_4058 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4058 = uVar19;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_4058);
  }
  else {
    local_4058 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,8);
    uVar22 = (local_4058 & 0xff00ff00ff00ff00) >> 8 | (local_4058 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar22 = local_4058;
    }
    *puVar3 = uVar22;
  }
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x4e4));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  puVar4 = (ushort *)(param_1 + 0x4e6);
  *(bool *)(param_1 + 0x4e4) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  puVar4 = (ushort *)(param_1 + 0x4e8);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  local_4058._0_1_ = *(char *)(param_1 + 0x4c9);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4c9) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4d8);
  local_4058._0_1_ = *(char *)(param_1 + 0x4ea);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4ea) = (char)local_4058 != '\0';
  if ((int)param_2[1] == 0) {
    bVar13 = 0;
    if ((*(int *)(param_1 + 0x4dc) != 0 && *(char *)(param_1 + 0x4c8) != '\0') &&
        *(char *)(param_1 + 0x4c9) != '\0') {
      bVar13 = 8;
    }
    *(byte *)(param_1 + 0x414) = bVar13 | *(byte *)(param_1 + 0x414) & 0xf7;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4eb);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4ec);
  local_4058._0_1_ = *(char *)(param_1 + 0x4ed);
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4ed) = (char)local_4058 != '\0';
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x4ee));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  iVar16 = (int)param_2[1];
  if (iVar16 == 0) {
    *(char *)(param_1 + 0x4ee) = (char)local_4058;
    iVar16 = (int)param_2[1];
  }
  puVar4 = (ushort *)(param_1 + 0x4f0);
  if (iVar16 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if (iVar16 == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4f2);
  local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x4f3));
  (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
  *(bool *)(param_1 + 0x4f3) = (char)local_4058 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4f4);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4ef);
  if ((int)param_2[1] == 0) {
    uVar14 = (ushort)*(byte *)(param_1 + 0x4c9);
    if (((*(byte *)(param_1 + 0x4c9) != 0) && (uVar14 = 0x17d, *(char *)(param_1 + 0x4c8) != '\0'))
       && (*(char *)(param_1 + 0x4ea) == '\0')) {
      sVar15 = *(short *)(&DAT_040579c0 + (ulong)*(byte *)(param_1 + 0x4ee) * 2);
      *(short *)(param_1 + 0x4f6) = sVar15;
      uVar14 = 0x17d;
      if ((*(ushort *)(param_1 + 0x4f0) & 1) != 0) {
        uVar14 = sVar15 + 0x17d;
      }
    }
    *(ushort *)(param_1 + 0x502) = uVar14;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4f8);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4f9);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x4fa);
  if (iVar12 == 0) {
    bVar13 = *(byte *)(param_1 + 0x4f9);
    uVar14 = (*(byte *)(param_1 + 0x4f8) >> 4 & 7) + 1;
    uVar9 = (*(byte *)(param_1 + 0x4f8) & 7) + 1;
    *(ushort *)(param_1 + 0x50c) = -(bVar13 & 1) & uVar9;
    uVar18 = (uint)bVar13;
    *(ushort *)(param_1 + 0x504) = uVar14 & (ushort)((int)((uint)bVar13 << 0x1b) >> 0x1f);
    *(ushort *)(param_1 + 0x50e) = uVar9 & (ushort)((int)(uVar18 << 0x1e) >> 0x1f);
    *(ushort *)(param_1 + 0x506) = uVar14 & (ushort)((int)(uVar18 << 0x1a) >> 0x1f);
    *(ushort *)(param_1 + 0x508) = uVar14 & (ushort)((int)(uVar18 << 0x19) >> 0x1f);
    *(ushort *)(param_1 + 0x50a) = uVar14 & (ushort)((uint)(int)(char)bVar13 >> 7);
    *(ushort *)(param_1 + 0x510) = uVar9 & (ushort)((int)((uint)bVar13 << 0x1d) >> 0x1f);
    *(ushort *)(param_1 + 0x512) = uVar9 & (ushort)((int)((uint)bVar13 << 0x1c) >> 0x1f);
  }
  puVar4 = (ushort *)(param_1 + 0x106e);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = *puVar4;
    uVar14 = uVar9 >> 8 | uVar9 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = uVar9;
    }
    local_4058 = CONCAT62(local_4058._2_6_,uVar14);
    (**(code **)(*param_2 + 0x30))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,2);
    uVar14 = (ushort)local_4058 >> 8 | (ushort)local_4058 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar14 = (ushort)local_4058;
    }
    *puVar4 = uVar14;
  }
  FUN_0360ddc0(param_1,1);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x540);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
    cVar8 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar8 != '\0') {
    local_4058._1_7_ = (undefined7)(local_4058 >> 8);
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  puVar1 = (uint *)(param_1 + 0x544);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = *puVar1;
    uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = uVar7;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar18);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar18 = (uint)local_4058;
    }
    *puVar1 = uVar18;
  }
  uVar18 = *(uint *)(param_1 + 0x514);
  uVar22 = (ulong)uVar18;
  local_4068 = uVar22;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_4068,8);
    *(int *)(param_1 + 0x514) = (int)local_4068;
  }
  else if ((int)param_2[1] == 1) {
    uVar19 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    local_4058 = (uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4058 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_4058);
    *(uint *)(param_1 + 0x514) = uVar18;
  }
  else {
    local_4058 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,8);
    uVar22 = (local_4058 & 0xff00ff00ff00ff00) >> 8 | (local_4058 & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_4068 = uVar22 >> 0x20 | uVar22 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_4068 = local_4058;
    }
    *(int *)(param_1 + 0x514) = (int)local_4068;
  }
  if (iVar12 == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x14c0));
    *(ulong *)(param_1 + 0x14a0) = (ulong)(*(uint *)(param_1 + 0x514) >> 1);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x14c0));
  }
  uVar18 = *(uint *)(param_1 + 0x530);
  local_406c = uVar18;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_4058 = CONCAT71(local_4058._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_406c,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar7 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar7 = uVar18;
    }
    local_4058 = CONCAT44(local_4058._4_4_,uVar7);
    (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
  }
  else {
    local_4058 = (ulong)local_4058._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
    uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
    local_406c = uVar18 >> 0x10 | uVar18 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_406c = (uint)local_4058;
    }
  }
  if (iVar12 == 0) {
    uVar22 = (ulong)local_406c;
    if (*(ulong *)(param_1 + 0x538) < uVar22) {
      uVar19 = uVar22;
      if (uVar22 < 5) {
        uVar19 = 4;
      }
      iVar12 = FUN_0360a5c0(param_1 + 0x518,uVar19);
      if (iVar12 != 0) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        goto LAB_036103f8;
      }
    }
    *(ulong *)(param_1 + 0x530) = uVar22;
  }
LAB_036103f8:
  if (local_406c != 0) {
    FUN_03611b50(param_2,*(long *)(param_1 + 0x528),
                 *(long *)(param_1 + 0x528) + (ulong)local_406c * 2);
  }
  uVar22 = FUN_04002180(param_2,4,0,&local_54);
  if ((uVar22 & 1) != 0) {
    iVar12 = (int)param_2[1];
    iVar16 = iVar12;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_4058 = CONCAT71(local_4058._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_4058,1);
      iVar16 = (int)param_2[1];
    }
    puVar1 = (uint *)(param_1 + 0x950);
    if (iVar16 == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    }
    else if (iVar16 == 1) {
      uVar7 = *puVar1;
      uVar18 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = uVar7;
      }
      local_4058 = CONCAT44(local_4058._4_4_,uVar18);
      (**(code **)(*param_2 + 0x38))(param_2,&local_4058);
    }
    else {
      local_4058 = (ulong)local_4058._4_4_ << 0x20;
      (**(code **)(*param_2 + 0x20))(param_2,&local_4058,4);
      uVar18 = ((uint)local_4058 & 0xff00ff00) >> 8 | ((uint)local_4058 & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar18 = (uint)local_4058;
      }
      *puVar1 = uVar18;
    }
    if (local_54 < 3) {
      FUN_03611e60(param_2,&local_4058,auStack_3f58);
      *(short *)(param_1 + 0x550) = (short)local_4058;
      *(short *)(param_1 + 0x554) = (short)(local_4058 >> 0x20);
      *(undefined2 *)(param_1 + 0x558) = local_4050;
      *(undefined2 *)(param_1 + 0x55c) = uStack_404c;
      *(undefined2 *)(param_1 + 0x560) = local_4048;
      *(undefined2 *)(param_1 + 0x564) = uStack_4044;
      *(undefined2 *)(param_1 + 0x568) = local_4040;
      *(undefined2 *)(param_1 + 0x56c) = uStack_403c;
      *(undefined2 *)(param_1 + 0x570) = local_4038;
      *(undefined2 *)(param_1 + 0x574) = uStack_4034;
      *(undefined2 *)(param_1 + 0x578) = local_4030;
      *(undefined2 *)(param_1 + 0x57c) = uStack_402c;
      *(undefined2 *)(param_1 + 0x580) = local_4028;
      *(undefined2 *)(param_1 + 0x584) = uStack_4024;
      *(undefined2 *)(param_1 + 0x588) = local_4020;
      *(undefined2 *)(param_1 + 0x58c) = uStack_401c;
      *(undefined2 *)(param_1 + 0x590) = local_4018;
      *(undefined2 *)(param_1 + 0x594) = uStack_4014;
      *(undefined2 *)(param_1 + 0x598) = local_4010;
      *(undefined2 *)(param_1 + 0x59c) = uStack_400c;
      *(undefined2 *)(param_1 + 0x5a0) = local_4008;
      *(undefined2 *)(param_1 + 0x5a4) = uStack_4004;
      *(undefined2 *)(param_1 + 0x5a8) = local_4000;
      *(undefined2 *)(param_1 + 0x5ac) = uStack_3ffc;
      *(undefined2 *)(param_1 + 0x5b0) = local_3ff8;
      *(undefined2 *)(param_1 + 0x5b4) = uStack_3ff4;
      *(undefined2 *)(param_1 + 0x5b8) = local_3ff0;
      *(undefined2 *)(param_1 + 0x5bc) = uStack_3fec;
      *(undefined2 *)(param_1 + 0x5c0) = local_3fe8;
      *(undefined2 *)(param_1 + 0x5c4) = uStack_3fe4;
      *(undefined2 *)(param_1 + 0x5c8) = local_3fe0;
      *(undefined2 *)(param_1 + 0x5cc) = uStack_3fdc;
      *(undefined2 *)(param_1 + 0x5d0) = local_3fd8;
      *(undefined2 *)(param_1 + 0x5d4) = uStack_3fd4;
      *(undefined2 *)(param_1 + 0x5d8) = local_3fd0;
      *(undefined2 *)(param_1 + 0x5dc) = uStack_3fcc;
      *(undefined2 *)(param_1 + 0x5e0) = local_3fc8;
      *(undefined2 *)(param_1 + 0x5e4) = uStack_3fc4;
      *(undefined2 *)(param_1 + 0x5e8) = local_3fc0;
      *(undefined2 *)(param_1 + 0x5ec) = uStack_3fbc;
      *(undefined2 *)(param_1 + 0x5f0) = local_3fb8;
      *(undefined2 *)(param_1 + 0x5f4) = uStack_3fb4;
      *(undefined2 *)(param_1 + 0x5f8) = local_3fb0;
      *(undefined2 *)(param_1 + 0x5fc) = uStack_3fac;
      *(undefined2 *)(param_1 + 0x600) = local_3fa8;
      *(undefined2 *)(param_1 + 0x604) = uStack_3fa4;
      *(undefined2 *)(param_1 + 0x608) = local_3fa0;
      *(undefined2 *)(param_1 + 0x60c) = uStack_3f9c;
      *(undefined2 *)(param_1 + 0x610) = local_3f98;
      *(undefined2 *)(param_1 + 0x614) = uStack_3f94;
      *(undefined2 *)(param_1 + 0x618) = local_3f90;
      *(undefined2 *)(param_1 + 0x61c) = uStack_3f8c;
      *(undefined2 *)(param_1 + 0x620) = local_3f88;
      *(undefined2 *)(param_1 + 0x624) = uStack_3f84;
      *(undefined2 *)(param_1 + 0x628) = local_3f80;
      *(undefined2 *)(param_1 + 0x62c) = uStack_3f7c;
      *(undefined2 *)(param_1 + 0x630) = local_3f78;
      *(undefined2 *)(param_1 + 0x634) = uStack_3f74;
      *(undefined2 *)(param_1 + 0x638) = local_3f70;
      *(undefined2 *)(param_1 + 0x63c) = local_3f6c;
      *(undefined2 *)(param_1 + 0x640) = local_3f68;
      *(undefined2 *)(param_1 + 0x644) = local_3f64;
      *(undefined2 *)(param_1 + 0x648) = local_3f60;
      *(undefined2 *)(param_1 + 0x64c) = local_3f5c;
      if (local_54 == 2) goto LAB_03610710;
      FUN_03611e60(param_2,&local_4058,auStack_58);
      memcpy((void *)(param_1 + 0x750),&local_4058,0x100);
      if (iVar12 == 0) {
        lVar17 = 0;
        puVar21 = (undefined4 *)(param_1 + 0x754);
        do {
          puVar6 = (undefined2 *)(param_1 + 0x650 + lVar17);
          lVar17 = lVar17 + 4;
          *puVar6 = (short)puVar21[-1];
          puVar6[1] = (short)*puVar21;
          puVar21 = puVar21 + 2;
        } while (lVar17 != 0x80);
      }
LAB_036107d0:
      if (iVar12 == 0) {
        lVar17 = 0;
        puVar21 = (undefined4 *)(param_1 + 0x850);
        do {
          puVar6 = (undefined2 *)(param_1 + 0x6d0 + lVar17);
          lVar17 = lVar17 + 2;
          *puVar21 = puVar21[-0x40];
          *puVar6 = puVar6[-0x40];
          puVar21 = puVar21 + 1;
        } while (lVar17 != 0x80);
      }
      if (local_54 == 0) {
        *(undefined1 *)(param_1 + 0x954) = 0;
        goto LAB_0361083c;
      }
    }
    else {
      FUN_03611b50(param_2,param_1 + 0x550,param_1 + 0x650);
      if (local_54 == 3) {
LAB_03610710:
        FUN_03611e60(param_2,param_1 + 0x750,param_1 + 0x850);
        if (iVar12 == 0) {
          lVar17 = 0;
          puVar21 = (undefined4 *)(param_1 + 0x754);
          do {
            puVar6 = (undefined2 *)(param_1 + 0x650 + lVar17);
            lVar17 = lVar17 + 4;
            *puVar6 = (short)puVar21[-1];
            puVar6[1] = (short)*puVar21;
            puVar21 = puVar21 + 2;
          } while (lVar17 != 0x80);
          goto LAB_036107d0;
        }
      }
      else {
        FUN_03611b50(param_2,param_1 + 0x650,param_1 + 0x6d0);
        if (iVar12 == 0) {
          lVar17 = 0;
          psVar20 = (short *)(param_1 + 0x652);
          do {
            piVar5 = (int *)(param_1 + 0x750 + lVar17);
            lVar17 = lVar17 + 8;
            *piVar5 = (int)psVar20[-1];
            sVar15 = *psVar20;
            psVar20 = psVar20 + 2;
            piVar5[1] = (int)sVar15;
          } while (lVar17 != 0x100);
          goto LAB_036107d0;
        }
      }
    }
    local_4058 = CONCAT71(local_4058._1_7_,*(undefined1 *)(param_1 + 0x954));
    (**(code **)(*param_2 + 0x28))(param_2,&local_4058);
    *(undefined1 *)(param_1 + 0x954) = (char)local_4058 != '\0';
  }
LAB_0361083c:
  FUN_03ffcda0(param_1 + 0x960,param_2);
LAB_03610848:
  return uVar11 & 1;
}

