
uint FUN_03646540(long param_1,long *param_2)

{
  ulong *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  ulong uVar20;
  ulong uVar21;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined8 uVar37;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined8 uVar45;
  byte bVar52;
  byte bVar55;
  undefined8 uVar53;
  ulong uVar54;
  byte bVar60;
  undefined8 uVar56;
  ulong uVar59;
  ulong uVar58;
  ulong uVar57;
  undefined8 uVar61;
  undefined8 uVar62;
  uint local_788c;
  uint local_7888;
  uint local_7884;
  undefined8 local_7880;
  undefined8 uStack_7878;
  undefined8 uStack_7870;
  undefined8 uStack_7868;
  ulong local_7860;
  ulong uStack_7858;
  undefined8 local_7850;
  undefined8 uStack_7848;
  undefined8 uStack_7840;
  undefined8 uStack_7838;
  ulong local_7830;
  ulong uStack_7828;
  undefined8 local_7820;
  undefined8 uStack_7818;
  undefined8 uStack_7810;
  undefined8 uStack_7808;
  ulong local_7800;
  ulong uStack_77f8;
  undefined8 local_77f0;
  undefined8 uStack_77e8;
  undefined8 uStack_77e0;
  undefined8 uStack_77d8;
  ulong local_77d0;
  ulong uStack_77c8;
  byte local_74 [20];
  
  uVar7 = FUN_04002180(param_2,0x1e,0x17,&local_7888);
  if ((uVar7 & 1) == 0) goto LAB_0364833c;
  iVar3 = (int)param_2[1];
  local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 0x38));
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 0x38) = (byte)local_7880 != 0;
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x39);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x3a);
  local_788c = (uint)*(byte *)(param_1 + 0x3b);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_788c,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar17 = (local_788c & 0xff00ff00) >> 8 | (local_788c & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = local_788c;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    local_788c = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_788c = (uint)local_7880;
    }
  }
  *(char *)(param_1 + 0x3b) = (char)local_788c;
  local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 0x3c));
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 0x3c) = (byte)local_7880 != 0;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x40);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x44);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x48);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x59);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x5a);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x5c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x60);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 100);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x68);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x78);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0x7c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
  }
  local_7880._0_1_ = *(byte *)(param_1 + 0x80);
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 0x80) = (byte)local_7880 != 0;
  local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 0x81));
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 0x81) = (byte)local_7880 != 0;
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa0,0x100);
  if (local_7888 < 0x19) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x1a0),0xf000);
  }
  else if (local_7888 == 0x19) {
    lVar18 = 0;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,5);
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18) = (byte)local_7880 & 0x1f;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 1) =
           (byte)local_7880 >> 5 | (local_7880._1_1_ & 3) << 3;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 2) = local_7880._1_1_ >> 2 & 0x1f;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 3) =
           local_7880._1_1_ >> 7 | (local_7880._2_1_ & 0xf) << 1;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 4) =
           local_7880._2_1_ >> 4 | (local_7880._3_1_ & 1) << 4;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 5) = local_7880._3_1_ >> 1 & 0x1f;
      *(byte *)(*(long *)(param_1 + 0x1a0) + lVar18 + 6) =
           local_7880._3_1_ >> 6 | (local_7880._4_1_ & 7) << 2;
      lVar12 = *(long *)(param_1 + 0x1a0) + lVar18;
      lVar18 = lVar18 + 8;
      *(byte *)(lVar12 + 7) = local_7880._4_1_ >> 3;
    } while (lVar18 != 0xf000);
  }
  else if (local_7888 < 0x1c) {
    pbVar19 = *(byte **)(param_1 + 0x1a0);
    iVar16 = 0;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0xc0);
      lVar18 = 0;
      do {
        lVar12 = lVar18 + 3;
        *pbVar19 = *(byte *)((long)&local_7880 + lVar18) >> 2;
        pbVar19[1] = *(byte *)((long)&local_7880 + lVar18 + 1) >> 4 |
                     (*(byte *)((long)&local_7880 + lVar18) & 3) << 4;
        pbVar19[2] = *(byte *)((long)&local_7880 + lVar18 + 2) >> 6 |
                     (*(byte *)((long)&local_7880 + lVar18 + 1) & 0xf) << 2;
        pbVar19[3] = *(byte *)((long)&local_7880 + lVar18 + 2) & 0x3f;
        pbVar19 = pbVar19 + 4;
        lVar18 = lVar12;
      } while ((int)lVar12 != 0xc0);
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0xf0);
  }
  else {
    lVar18 = 0;
    lVar12 = *(long *)(param_1 + 0x1a0);
    if ((int)param_2[1] == 0) {
      do {
        puVar9 = (undefined8 *)(lVar12 + lVar18);
        (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0xc0);
        lVar18 = lVar18 + 0x100;
        bVar38 = (byte)((ulong)uStack_7870 >> 8);
        bVar39 = (byte)((ulong)uStack_7870 >> 0x10);
        bVar40 = (byte)((ulong)uStack_7870 >> 0x18);
        bVar41 = (byte)((ulong)uStack_7870 >> 0x20);
        bVar42 = (byte)((ulong)uStack_7870 >> 0x28);
        bVar43 = (byte)((ulong)uStack_7870 >> 0x30);
        bVar44 = (byte)((ulong)uStack_7870 >> 0x38);
        bVar46 = (byte)((ulong)uStack_7868 >> 8);
        bVar47 = (byte)((ulong)uStack_7868 >> 0x10);
        bVar48 = (byte)((ulong)uStack_7868 >> 0x18);
        bVar49 = (byte)((ulong)uStack_7868 >> 0x20);
        bVar50 = (byte)((ulong)uStack_7868 >> 0x28);
        bVar51 = (byte)((ulong)uStack_7868 >> 0x30);
        bVar52 = (byte)((ulong)uStack_7868 >> 0x38);
        bVar22 = (byte)(local_7880 >> 8);
        bVar23 = (byte)(local_7880 >> 0x10);
        bVar24 = (byte)(local_7880 >> 0x18);
        bVar25 = (byte)(local_7880 >> 0x20);
        bVar26 = (byte)(local_7880 >> 0x28);
        bVar27 = (byte)(local_7880 >> 0x30);
        bVar28 = (byte)(local_7880 >> 0x38);
        bVar30 = (byte)((ulong)uStack_7878 >> 8);
        bVar31 = (byte)((ulong)uStack_7878 >> 0x10);
        bVar32 = (byte)((ulong)uStack_7878 >> 0x18);
        bVar33 = (byte)((ulong)uStack_7878 >> 0x20);
        bVar34 = (byte)((ulong)uStack_7878 >> 0x28);
        bVar35 = (byte)((ulong)uStack_7878 >> 0x30);
        bVar36 = (byte)((ulong)uStack_7878 >> 0x38);
        uVar20 = CONCAT71((int7)(((ulong)CONCAT15(bVar28 << 4,
                                                  CONCAT14(bVar27 << 4,
                                                           CONCAT13(bVar26 << 4,
                                                                    CONCAT12(bVar25 << 4,
                                                                             CONCAT11(bVar24 << 4,
                                                                                      bVar23 << 4)))
                                                          )) << 0x10) >> 8),(byte)local_7880 << 4) &
                 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar20 >> 0x10),CONCAT11(bVar22 << 4,(char)uVar20)) &
                 0xffffffffffff30ff;
        uVar20 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar20 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar20 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar20)) &
                 0xffffffff30ffffff;
        uVar20 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar20 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar20 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar20)) &
                 0xffff30ffffffffff;
        uVar20 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar20 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        uVar21 = CONCAT71((int7)(((ulong)CONCAT15(bVar36 << 4,
                                                  CONCAT14(bVar35 << 4,
                                                           CONCAT13(bVar34 << 4,
                                                                    CONCAT12(bVar33 << 4,
                                                                             CONCAT11(bVar32 << 4,
                                                                                      bVar31 << 4)))
                                                          )) << 0x10) >> 8),(byte)uStack_7878 << 4)
                 & 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar30 << 4,(char)uVar21)) &
                 0xffffffffffff30ff;
        uVar21 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar21)) &
                 0xffffffff30ffffff;
        uVar21 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar21)) &
                 0xffff30ffffffffff;
        uVar13 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        bVar55 = (byte)(local_7860 >> 8);
        bVar60 = (byte)(uStack_7858 >> 8);
        uVar21 = local_7860 & 0xffffffffffffff3f;
        uVar54 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar55,(char)uVar21)) & 0xffffffffffff3fff
        ;
        uVar21 = CONCAT53((int5)(uVar54 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar54)) &
                 0xffffffffff3fffff;
        uVar54 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar54 >> 0x18),(int3)uVar21)) &
                 0xffffffff3fffffff;
        uVar21 = CONCAT35((int3)(uVar54 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar54)) &
                 0xffffff3fffffffff;
        uVar54 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar54 >> 0x28),(int5)uVar21)) &
                 0xffff3fffffffffff;
        uVar57 = uStack_7858 & 0xffffffffffffff3f;
        uVar58 = CONCAT62((int6)(uVar57 >> 0x10),CONCAT11(bVar60,(char)uVar57)) & 0xffffffffffff3fff
        ;
        uVar57 = CONCAT53((int5)(uVar58 >> 0x18),CONCAT12((char)(uVar57 >> 0x10),(short)uVar58)) &
                 0xffffffffff3fffff;
        uVar58 = CONCAT44((int)(uVar57 >> 0x20),CONCAT13((char)(uVar58 >> 0x18),(int3)uVar57)) &
                 0xffffffff3fffffff;
        uVar59 = CONCAT35((int3)(uVar58 >> 0x28),CONCAT14((char)(uVar57 >> 0x20),(int)uVar58)) &
                 0xffffff3fffffffff;
        uVar57 = CONCAT26((short)(uVar59 >> 0x30),CONCAT15((char)(uVar58 >> 0x28),(int5)uVar59)) &
                 0xffff3fffffffffff;
        puVar9[1] = CONCAT17(bVar36 >> 2,
                             CONCAT16(bVar35 >> 2,
                                      CONCAT15(bVar34 >> 2,
                                               CONCAT14(bVar33 >> 2,
                                                        CONCAT13(bVar32 >> 2,
                                                                 CONCAT12(bVar31 >> 2,
                                                                          CONCAT11(bVar30 >> 2,
                                                                                   (byte)uStack_7878
                                                                                   >> 2)))))));
        *puVar9 = CONCAT17(bVar28 >> 2,
                           CONCAT16(bVar27 >> 2,
                                    CONCAT15(bVar26 >> 2,
                                             CONCAT14(bVar25 >> 2,
                                                      CONCAT13(bVar24 >> 2,
                                                               CONCAT12(bVar23 >> 2,
                                                                        CONCAT11(bVar22 >> 2,
                                                                                 (byte)local_7880 >>
                                                                                 2)))))));
        puVar9[3] = CONCAT17((char)(uVar13 >> 0x38) + (bVar52 >> 4),
                             CONCAT16((char)(uVar13 >> 0x30) + (bVar51 >> 4),
                                      CONCAT15((char)(uVar13 >> 0x28) + (bVar50 >> 4),
                                               CONCAT14((char)(uVar13 >> 0x20) + (bVar49 >> 4),
                                                        CONCAT13((char)(uVar13 >> 0x18) +
                                                                 (bVar48 >> 4),
                                                                 CONCAT12((char)(uVar13 >> 0x10) +
                                                                          (bVar47 >> 4),
                                                                          CONCAT11((char)(uVar13 >>
                                                                                         8) +
                                                                                   (bVar46 >> 4),
                                                                                   (char)uVar13 +
                                                                                   ((byte)
                                                  uStack_7868 >> 4))))))));
        puVar9[2] = CONCAT17((char)(uVar20 >> 0x38) + (bVar44 >> 4),
                             CONCAT16((char)(uVar20 >> 0x30) + (bVar43 >> 4),
                                      CONCAT15((char)(uVar20 >> 0x28) + (bVar42 >> 4),
                                               CONCAT14((char)(uVar20 >> 0x20) + (bVar41 >> 4),
                                                        CONCAT13((char)(uVar20 >> 0x18) +
                                                                 (bVar40 >> 4),
                                                                 CONCAT12((char)(uVar20 >> 0x10) +
                                                                          (bVar39 >> 4),
                                                                          CONCAT11((char)(uVar20 >>
                                                                                         8) +
                                                                                   (bVar38 >> 4),
                                                                                   (char)uVar20 +
                                                                                   ((byte)
                                                  uStack_7870 >> 4))))))));
        puVar9[5] = CONCAT17((bVar52 & 0xf) * '\x04' + (byte)(uStack_7858 >> 0x3e),
                             CONCAT16((bVar51 & 0xf) * '\x04' + ((byte)(uStack_7858 >> 0x30) >> 6),
                                      CONCAT15((bVar50 & 0xf) * '\x04' +
                                               ((byte)(uStack_7858 >> 0x28) >> 6),
                                               CONCAT14((bVar49 & 0xf) * '\x04' +
                                                        ((byte)(uStack_7858 >> 0x20) >> 6),
                                                        CONCAT13((bVar48 & 0xf) * '\x04' +
                                                                 ((byte)(uStack_7858 >> 0x18) >> 6),
                                                                 CONCAT12((bVar47 & 0xf) * '\x04' +
                                                                          ((byte)(uStack_7858 >>
                                                                                 0x10) >> 6),
                                                                          CONCAT11((bVar46 & 0xf) *
                                                                                   '\x04' + (bVar60 
                                                  >> 6),((byte)uStack_7868 & 0xf) * '\x04' +
                                                        ((byte)uStack_7858 >> 6))))))));
        puVar9[4] = CONCAT17((bVar44 & 0xf) * '\x04' + (byte)(local_7860 >> 0x3e),
                             CONCAT16((bVar43 & 0xf) * '\x04' + ((byte)(local_7860 >> 0x30) >> 6),
                                      CONCAT15((bVar42 & 0xf) * '\x04' +
                                               ((byte)(local_7860 >> 0x28) >> 6),
                                               CONCAT14((bVar41 & 0xf) * '\x04' +
                                                        ((byte)(local_7860 >> 0x20) >> 6),
                                                        CONCAT13((bVar40 & 0xf) * '\x04' +
                                                                 ((byte)(local_7860 >> 0x18) >> 6),
                                                                 CONCAT12((bVar39 & 0xf) * '\x04' +
                                                                          ((byte)(local_7860 >> 0x10
                                                                                 ) >> 6),
                                                                          CONCAT11((bVar38 & 0xf) *
                                                                                   '\x04' + (bVar55 
                                                  >> 6),((byte)uStack_7870 & 0xf) * '\x04' +
                                                        ((byte)local_7860 >> 6))))))));
        puVar9[7] = CONCAT17((char)(uVar57 >> 0x38),CONCAT16((char)(uVar59 >> 0x30),(int6)uVar57)) &
                    0x3f3fffffffffffff;
        puVar9[6] = CONCAT17((char)(uVar54 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar54)) &
                    0x3f3fffffffffffff;
        bVar38 = (byte)((ulong)uStack_7840 >> 8);
        bVar39 = (byte)((ulong)uStack_7840 >> 0x10);
        bVar40 = (byte)((ulong)uStack_7840 >> 0x18);
        bVar41 = (byte)((ulong)uStack_7840 >> 0x20);
        bVar42 = (byte)((ulong)uStack_7840 >> 0x28);
        bVar43 = (byte)((ulong)uStack_7840 >> 0x30);
        bVar44 = (byte)((ulong)uStack_7840 >> 0x38);
        bVar46 = (byte)((ulong)uStack_7838 >> 8);
        bVar47 = (byte)((ulong)uStack_7838 >> 0x10);
        bVar48 = (byte)((ulong)uStack_7838 >> 0x18);
        bVar49 = (byte)((ulong)uStack_7838 >> 0x20);
        bVar50 = (byte)((ulong)uStack_7838 >> 0x28);
        bVar51 = (byte)((ulong)uStack_7838 >> 0x30);
        bVar52 = (byte)((ulong)uStack_7838 >> 0x38);
        bVar22 = (byte)((ulong)local_7850 >> 8);
        bVar23 = (byte)((ulong)local_7850 >> 0x10);
        bVar24 = (byte)((ulong)local_7850 >> 0x18);
        bVar25 = (byte)((ulong)local_7850 >> 0x20);
        bVar26 = (byte)((ulong)local_7850 >> 0x28);
        bVar27 = (byte)((ulong)local_7850 >> 0x30);
        bVar28 = (byte)((ulong)local_7850 >> 0x38);
        bVar30 = (byte)((ulong)uStack_7848 >> 8);
        bVar31 = (byte)((ulong)uStack_7848 >> 0x10);
        bVar32 = (byte)((ulong)uStack_7848 >> 0x18);
        bVar33 = (byte)((ulong)uStack_7848 >> 0x20);
        bVar34 = (byte)((ulong)uStack_7848 >> 0x28);
        bVar35 = (byte)((ulong)uStack_7848 >> 0x30);
        bVar36 = (byte)((ulong)uStack_7848 >> 0x38);
        uVar20 = CONCAT71((int7)(((ulong)CONCAT15(bVar28 << 4,
                                                  CONCAT14(bVar27 << 4,
                                                           CONCAT13(bVar26 << 4,
                                                                    CONCAT12(bVar25 << 4,
                                                                             CONCAT11(bVar24 << 4,
                                                                                      bVar23 << 4)))
                                                          )) << 0x10) >> 8),(byte)local_7850 << 4) &
                 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar20 >> 0x10),CONCAT11(bVar22 << 4,(char)uVar20)) &
                 0xffffffffffff30ff;
        uVar20 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar20 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar20 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar20)) &
                 0xffffffff30ffffff;
        uVar20 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar20 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar20 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar20)) &
                 0xffff30ffffffffff;
        uVar20 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar20 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        uVar13 = CONCAT71((int7)(((ulong)CONCAT15(bVar36 << 4,
                                                  CONCAT14(bVar35 << 4,
                                                           CONCAT13(bVar34 << 4,
                                                                    CONCAT12(bVar33 << 4,
                                                                             CONCAT11(bVar32 << 4,
                                                                                      bVar31 << 4)))
                                                          )) << 0x10) >> 8),(byte)uStack_7848 << 4)
                 & 0xffffffffffffff30;
        uVar21 = CONCAT62((int6)(uVar13 >> 0x10),CONCAT11(bVar30 << 4,(char)uVar13)) &
                 0xffffffffffff30ff;
        uVar13 = CONCAT53((int5)(uVar21 >> 0x18),CONCAT12((char)(uVar13 >> 0x10),(short)uVar21)) &
                 0xffffffffff30ffff;
        uVar21 = CONCAT44((int)(uVar13 >> 0x20),CONCAT13((char)(uVar21 >> 0x18),(int3)uVar13)) &
                 0xffffffff30ffffff;
        uVar13 = CONCAT35((int3)(uVar21 >> 0x28),CONCAT14((char)(uVar13 >> 0x20),(int)uVar21)) &
                 0xffffff30ffffffff;
        uVar21 = CONCAT26((short)(uVar13 >> 0x30),CONCAT15((char)(uVar21 >> 0x28),(int5)uVar13)) &
                 0xffff30ffffffffff;
        uVar13 = CONCAT17((char)(uVar21 >> 0x38),CONCAT16((char)(uVar13 >> 0x30),(int6)uVar21)) &
                 0x3030ffffffffffff;
        bVar55 = (byte)(local_7830 >> 8);
        bVar60 = (byte)(uStack_7828 >> 8);
        uVar21 = local_7830 & 0xffffffffffffff3f;
        uVar54 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar55,(char)uVar21)) & 0xffffffffffff3fff
        ;
        uVar21 = CONCAT53((int5)(uVar54 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar54)) &
                 0xffffffffff3fffff;
        uVar54 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar54 >> 0x18),(int3)uVar21)) &
                 0xffffffff3fffffff;
        uVar21 = CONCAT35((int3)(uVar54 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar54)) &
                 0xffffff3fffffffff;
        uVar54 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar54 >> 0x28),(int5)uVar21)) &
                 0xffff3fffffffffff;
        uVar57 = uStack_7828 & 0xffffffffffffff3f;
        uVar58 = CONCAT62((int6)(uVar57 >> 0x10),CONCAT11(bVar60,(char)uVar57)) & 0xffffffffffff3fff
        ;
        uVar57 = CONCAT53((int5)(uVar58 >> 0x18),CONCAT12((char)(uVar57 >> 0x10),(short)uVar58)) &
                 0xffffffffff3fffff;
        uVar58 = CONCAT44((int)(uVar57 >> 0x20),CONCAT13((char)(uVar58 >> 0x18),(int3)uVar57)) &
                 0xffffffff3fffffff;
        uVar57 = CONCAT35((int3)(uVar58 >> 0x28),CONCAT14((char)(uVar57 >> 0x20),(int)uVar58)) &
                 0xffffff3fffffffff;
        uVar58 = CONCAT26((short)(uVar57 >> 0x30),CONCAT15((char)(uVar58 >> 0x28),(int5)uVar57)) &
                 0xffff3fffffffffff;
        puVar9[9] = CONCAT17(bVar36 >> 2,
                             CONCAT16(bVar35 >> 2,
                                      CONCAT15(bVar34 >> 2,
                                               CONCAT14(bVar33 >> 2,
                                                        CONCAT13(bVar32 >> 2,
                                                                 CONCAT12(bVar31 >> 2,
                                                                          CONCAT11(bVar30 >> 2,
                                                                                   (byte)uStack_7848
                                                                                   >> 2)))))));
        puVar9[8] = CONCAT17(bVar28 >> 2,
                             CONCAT16(bVar27 >> 2,
                                      CONCAT15(bVar26 >> 2,
                                               CONCAT14(bVar25 >> 2,
                                                        CONCAT13(bVar24 >> 2,
                                                                 CONCAT12(bVar23 >> 2,
                                                                          CONCAT11(bVar22 >> 2,
                                                                                   (byte)local_7850
                                                                                   >> 2)))))));
        puVar9[0xb] = CONCAT17((char)(uVar13 >> 0x38) + (bVar52 >> 4),
                               CONCAT16((char)(uVar13 >> 0x30) + (bVar51 >> 4),
                                        CONCAT15((char)(uVar13 >> 0x28) + (bVar50 >> 4),
                                                 CONCAT14((char)(uVar13 >> 0x20) + (bVar49 >> 4),
                                                          CONCAT13((char)(uVar13 >> 0x18) +
                                                                   (bVar48 >> 4),
                                                                   CONCAT12((char)(uVar13 >> 0x10) +
                                                                            (bVar47 >> 4),
                                                                            CONCAT11((char)(uVar13 
                                                  >> 8) + (bVar46 >> 4),
                                                  (char)uVar13 + ((byte)uStack_7838 >> 4))))))));
        puVar9[10] = CONCAT17((char)(uVar20 >> 0x38) + (bVar44 >> 4),
                              CONCAT16((char)(uVar20 >> 0x30) + (bVar43 >> 4),
                                       CONCAT15((char)(uVar20 >> 0x28) + (bVar42 >> 4),
                                                CONCAT14((char)(uVar20 >> 0x20) + (bVar41 >> 4),
                                                         CONCAT13((char)(uVar20 >> 0x18) +
                                                                  (bVar40 >> 4),
                                                                  CONCAT12((char)(uVar20 >> 0x10) +
                                                                           (bVar39 >> 4),
                                                                           CONCAT11((char)(uVar20 >>
                                                                                          8) +
                                                                                    (bVar38 >> 4),
                                                                                    (char)uVar20 +
                                                                                    ((byte)
                                                  uStack_7840 >> 4))))))));
        puVar9[0xd] = CONCAT17((bVar52 & 0xf) * '\x04' + (byte)(uStack_7828 >> 0x3e),
                               CONCAT16((bVar51 & 0xf) * '\x04' + ((byte)(uStack_7828 >> 0x30) >> 6)
                                        ,CONCAT15((bVar50 & 0xf) * '\x04' +
                                                  ((byte)(uStack_7828 >> 0x28) >> 6),
                                                  CONCAT14((bVar49 & 0xf) * '\x04' +
                                                           ((byte)(uStack_7828 >> 0x20) >> 6),
                                                           CONCAT13((bVar48 & 0xf) * '\x04' +
                                                                    ((byte)(uStack_7828 >> 0x18) >>
                                                                    6),CONCAT12((bVar47 & 0xf) *
                                                                                '\x04' + ((byte)(
                                                  uStack_7828 >> 0x10) >> 6),
                                                  CONCAT11((bVar46 & 0xf) * '\x04' + (bVar60 >> 6),
                                                           ((byte)uStack_7838 & 0xf) * '\x04' +
                                                           ((byte)uStack_7828 >> 6))))))));
        puVar9[0xc] = CONCAT17((bVar44 & 0xf) * '\x04' + (byte)(local_7830 >> 0x3e),
                               CONCAT16((bVar43 & 0xf) * '\x04' + ((byte)(local_7830 >> 0x30) >> 6),
                                        CONCAT15((bVar42 & 0xf) * '\x04' +
                                                 ((byte)(local_7830 >> 0x28) >> 6),
                                                 CONCAT14((bVar41 & 0xf) * '\x04' +
                                                          ((byte)(local_7830 >> 0x20) >> 6),
                                                          CONCAT13((bVar40 & 0xf) * '\x04' +
                                                                   ((byte)(local_7830 >> 0x18) >> 6)
                                                                   ,CONCAT12((bVar39 & 0xf) * '\x04'
                                                                             + ((byte)(local_7830 >>
                                                                                      0x10) >> 6),
                                                                             CONCAT11((bVar38 & 0xf)
                                                                                      * '\x04' +
                                                                                      (bVar55 >> 6),
                                                                                      ((byte)
                                                  uStack_7840 & 0xf) * '\x04' +
                                                  ((byte)local_7830 >> 6))))))));
        puVar9[0xf] = CONCAT17((char)(uVar58 >> 0x38),CONCAT16((char)(uVar57 >> 0x30),(int6)uVar58))
                      & 0x3f3fffffffffffff;
        puVar9[0xe] = CONCAT17((char)(uVar54 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar54))
                      & 0x3f3fffffffffffff;
        bVar38 = (byte)((ulong)uStack_7810 >> 8);
        bVar39 = (byte)((ulong)uStack_7810 >> 0x10);
        bVar40 = (byte)((ulong)uStack_7810 >> 0x18);
        bVar41 = (byte)((ulong)uStack_7810 >> 0x20);
        bVar42 = (byte)((ulong)uStack_7810 >> 0x28);
        bVar43 = (byte)((ulong)uStack_7810 >> 0x30);
        bVar44 = (byte)((ulong)uStack_7810 >> 0x38);
        bVar46 = (byte)((ulong)uStack_7808 >> 8);
        bVar47 = (byte)((ulong)uStack_7808 >> 0x10);
        bVar48 = (byte)((ulong)uStack_7808 >> 0x18);
        bVar49 = (byte)((ulong)uStack_7808 >> 0x20);
        bVar50 = (byte)((ulong)uStack_7808 >> 0x28);
        bVar51 = (byte)((ulong)uStack_7808 >> 0x30);
        bVar52 = (byte)((ulong)uStack_7808 >> 0x38);
        bVar22 = (byte)((ulong)local_7820 >> 8);
        bVar23 = (byte)((ulong)local_7820 >> 0x10);
        bVar24 = (byte)((ulong)local_7820 >> 0x18);
        bVar25 = (byte)((ulong)local_7820 >> 0x20);
        bVar26 = (byte)((ulong)local_7820 >> 0x28);
        bVar27 = (byte)((ulong)local_7820 >> 0x30);
        bVar28 = (byte)((ulong)local_7820 >> 0x38);
        bVar30 = (byte)((ulong)uStack_7818 >> 8);
        bVar31 = (byte)((ulong)uStack_7818 >> 0x10);
        bVar32 = (byte)((ulong)uStack_7818 >> 0x18);
        bVar33 = (byte)((ulong)uStack_7818 >> 0x20);
        bVar34 = (byte)((ulong)uStack_7818 >> 0x28);
        bVar35 = (byte)((ulong)uStack_7818 >> 0x30);
        bVar36 = (byte)((ulong)uStack_7818 >> 0x38);
        uVar20 = CONCAT71((int7)(((ulong)CONCAT15(bVar28 << 4,
                                                  CONCAT14(bVar27 << 4,
                                                           CONCAT13(bVar26 << 4,
                                                                    CONCAT12(bVar25 << 4,
                                                                             CONCAT11(bVar24 << 4,
                                                                                      bVar23 << 4)))
                                                          )) << 0x10) >> 8),(byte)local_7820 << 4) &
                 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar20 >> 0x10),CONCAT11(bVar22 << 4,(char)uVar20)) &
                 0xffffffffffff30ff;
        uVar21 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar20 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar20 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar21)) &
                 0xffffffff30ffffff;
        uVar13 = CONCAT35((int3)(uVar20 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar20)) &
                 0xffffff30ffffffff;
        uVar20 = CONCAT26((short)(uVar13 >> 0x30),CONCAT15((char)(uVar20 >> 0x28),(int5)uVar13)) &
                 0xffff30ffffffffff;
        uVar20 = CONCAT17((char)(uVar20 >> 0x38),CONCAT16((char)(uVar13 >> 0x30),(int6)uVar20)) &
                 0x3030ffffffffffff;
        uVar21 = CONCAT71((int7)(((ulong)CONCAT15(bVar36 << 4,
                                                  CONCAT14(bVar35 << 4,
                                                           CONCAT13(bVar34 << 4,
                                                                    CONCAT12(bVar33 << 4,
                                                                             CONCAT11(bVar32 << 4,
                                                                                      bVar31 << 4)))
                                                          )) << 0x10) >> 8),(byte)uStack_7818 << 4)
                 & 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar30 << 4,(char)uVar21)) &
                 0xffffffffffff30ff;
        uVar21 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar21)) &
                 0xffffffff30ffffff;
        uVar21 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar21)) &
                 0xffff30ffffffffff;
        uVar13 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        bVar55 = (byte)(local_7800 >> 8);
        bVar60 = (byte)(uStack_77f8 >> 8);
        uVar21 = local_7800 & 0xffffffffffffff3f;
        uVar54 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar55,(char)uVar21)) & 0xffffffffffff3fff
        ;
        uVar21 = CONCAT53((int5)(uVar54 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar54)) &
                 0xffffffffff3fffff;
        uVar54 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar54 >> 0x18),(int3)uVar21)) &
                 0xffffffff3fffffff;
        uVar21 = CONCAT35((int3)(uVar54 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar54)) &
                 0xffffff3fffffffff;
        uVar54 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar54 >> 0x28),(int5)uVar21)) &
                 0xffff3fffffffffff;
        uVar57 = uStack_77f8 & 0xffffffffffffff3f;
        uVar58 = CONCAT62((int6)(uVar57 >> 0x10),CONCAT11(bVar60,(char)uVar57)) & 0xffffffffffff3fff
        ;
        uVar57 = CONCAT53((int5)(uVar58 >> 0x18),CONCAT12((char)(uVar57 >> 0x10),(short)uVar58)) &
                 0xffffffffff3fffff;
        uVar58 = CONCAT44((int)(uVar57 >> 0x20),CONCAT13((char)(uVar58 >> 0x18),(int3)uVar57)) &
                 0xffffffff3fffffff;
        uVar57 = CONCAT35((int3)(uVar58 >> 0x28),CONCAT14((char)(uVar57 >> 0x20),(int)uVar58)) &
                 0xffffff3fffffffff;
        uVar58 = CONCAT26((short)(uVar57 >> 0x30),CONCAT15((char)(uVar58 >> 0x28),(int5)uVar57)) &
                 0xffff3fffffffffff;
        puVar9[0x11] = CONCAT17(bVar36 >> 2,
                                CONCAT16(bVar35 >> 2,
                                         CONCAT15(bVar34 >> 2,
                                                  CONCAT14(bVar33 >> 2,
                                                           CONCAT13(bVar32 >> 2,
                                                                    CONCAT12(bVar31 >> 2,
                                                                             CONCAT11(bVar30 >> 2,
                                                                                      (byte)
                                                  uStack_7818 >> 2)))))));
        puVar9[0x10] = CONCAT17(bVar28 >> 2,
                                CONCAT16(bVar27 >> 2,
                                         CONCAT15(bVar26 >> 2,
                                                  CONCAT14(bVar25 >> 2,
                                                           CONCAT13(bVar24 >> 2,
                                                                    CONCAT12(bVar23 >> 2,
                                                                             CONCAT11(bVar22 >> 2,
                                                                                      (byte)
                                                  local_7820 >> 2)))))));
        puVar9[0x13] = CONCAT17((char)(uVar13 >> 0x38) + (bVar52 >> 4),
                                CONCAT16((char)(uVar13 >> 0x30) + (bVar51 >> 4),
                                         CONCAT15((char)(uVar13 >> 0x28) + (bVar50 >> 4),
                                                  CONCAT14((char)(uVar13 >> 0x20) + (bVar49 >> 4),
                                                           CONCAT13((char)(uVar13 >> 0x18) +
                                                                    (bVar48 >> 4),
                                                                    CONCAT12((char)(uVar13 >> 0x10)
                                                                             + (bVar47 >> 4),
                                                                             CONCAT11((char)(uVar13 
                                                  >> 8) + (bVar46 >> 4),
                                                  (char)uVar13 + ((byte)uStack_7808 >> 4))))))));
        puVar9[0x12] = CONCAT17((char)(uVar20 >> 0x38) + (bVar44 >> 4),
                                CONCAT16((char)(uVar20 >> 0x30) + (bVar43 >> 4),
                                         CONCAT15((char)(uVar20 >> 0x28) + (bVar42 >> 4),
                                                  CONCAT14((char)(uVar20 >> 0x20) + (bVar41 >> 4),
                                                           CONCAT13((char)(uVar20 >> 0x18) +
                                                                    (bVar40 >> 4),
                                                                    CONCAT12((char)(uVar20 >> 0x10)
                                                                             + (bVar39 >> 4),
                                                                             CONCAT11((char)(uVar20 
                                                  >> 8) + (bVar38 >> 4),
                                                  (char)uVar20 + ((byte)uStack_7810 >> 4))))))));
        puVar9[0x15] = CONCAT17((bVar52 & 0xf) * '\x04' + (byte)(uStack_77f8 >> 0x3e),
                                CONCAT16((bVar51 & 0xf) * '\x04' +
                                         ((byte)(uStack_77f8 >> 0x30) >> 6),
                                         CONCAT15((bVar50 & 0xf) * '\x04' +
                                                  ((byte)(uStack_77f8 >> 0x28) >> 6),
                                                  CONCAT14((bVar49 & 0xf) * '\x04' +
                                                           ((byte)(uStack_77f8 >> 0x20) >> 6),
                                                           CONCAT13((bVar48 & 0xf) * '\x04' +
                                                                    ((byte)(uStack_77f8 >> 0x18) >>
                                                                    6),CONCAT12((bVar47 & 0xf) *
                                                                                '\x04' + ((byte)(
                                                  uStack_77f8 >> 0x10) >> 6),
                                                  CONCAT11((bVar46 & 0xf) * '\x04' + (bVar60 >> 6),
                                                           ((byte)uStack_7808 & 0xf) * '\x04' +
                                                           ((byte)uStack_77f8 >> 6))))))));
        puVar9[0x14] = CONCAT17((bVar44 & 0xf) * '\x04' + (byte)(local_7800 >> 0x3e),
                                CONCAT16((bVar43 & 0xf) * '\x04' + ((byte)(local_7800 >> 0x30) >> 6)
                                         ,CONCAT15((bVar42 & 0xf) * '\x04' +
                                                   ((byte)(local_7800 >> 0x28) >> 6),
                                                   CONCAT14((bVar41 & 0xf) * '\x04' +
                                                            ((byte)(local_7800 >> 0x20) >> 6),
                                                            CONCAT13((bVar40 & 0xf) * '\x04' +
                                                                     ((byte)(local_7800 >> 0x18) >>
                                                                     6),CONCAT12((bVar39 & 0xf) *
                                                                                 '\x04' + ((byte)(
                                                  local_7800 >> 0x10) >> 6),
                                                  CONCAT11((bVar38 & 0xf) * '\x04' + (bVar55 >> 6),
                                                           ((byte)uStack_7810 & 0xf) * '\x04' +
                                                           ((byte)local_7800 >> 6))))))));
        puVar9[0x17] = CONCAT17((char)(uVar58 >> 0x38),CONCAT16((char)(uVar57 >> 0x30),(int6)uVar58)
                               ) & 0x3f3fffffffffffff;
        puVar9[0x16] = CONCAT17((char)(uVar54 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar54)
                               ) & 0x3f3fffffffffffff;
        bVar38 = (byte)((ulong)uStack_77e0 >> 8);
        bVar39 = (byte)((ulong)uStack_77e0 >> 0x10);
        bVar40 = (byte)((ulong)uStack_77e0 >> 0x18);
        bVar41 = (byte)((ulong)uStack_77e0 >> 0x20);
        bVar42 = (byte)((ulong)uStack_77e0 >> 0x28);
        bVar43 = (byte)((ulong)uStack_77e0 >> 0x30);
        bVar44 = (byte)((ulong)uStack_77e0 >> 0x38);
        bVar46 = (byte)((ulong)uStack_77d8 >> 8);
        bVar47 = (byte)((ulong)uStack_77d8 >> 0x10);
        bVar48 = (byte)((ulong)uStack_77d8 >> 0x18);
        bVar49 = (byte)((ulong)uStack_77d8 >> 0x20);
        bVar50 = (byte)((ulong)uStack_77d8 >> 0x28);
        bVar51 = (byte)((ulong)uStack_77d8 >> 0x30);
        bVar52 = (byte)((ulong)uStack_77d8 >> 0x38);
        bVar22 = (byte)((ulong)local_77f0 >> 8);
        bVar23 = (byte)((ulong)local_77f0 >> 0x10);
        bVar24 = (byte)((ulong)local_77f0 >> 0x18);
        bVar25 = (byte)((ulong)local_77f0 >> 0x20);
        bVar26 = (byte)((ulong)local_77f0 >> 0x28);
        bVar27 = (byte)((ulong)local_77f0 >> 0x30);
        bVar28 = (byte)((ulong)local_77f0 >> 0x38);
        bVar30 = (byte)((ulong)uStack_77e8 >> 8);
        bVar31 = (byte)((ulong)uStack_77e8 >> 0x10);
        bVar32 = (byte)((ulong)uStack_77e8 >> 0x18);
        bVar33 = (byte)((ulong)uStack_77e8 >> 0x20);
        bVar34 = (byte)((ulong)uStack_77e8 >> 0x28);
        bVar35 = (byte)((ulong)uStack_77e8 >> 0x30);
        bVar36 = (byte)((ulong)uStack_77e8 >> 0x38);
        uVar20 = CONCAT71((int7)(((ulong)CONCAT15(bVar28 << 4,
                                                  CONCAT14(bVar27 << 4,
                                                           CONCAT13(bVar26 << 4,
                                                                    CONCAT12(bVar25 << 4,
                                                                             CONCAT11(bVar24 << 4,
                                                                                      bVar23 << 4)))
                                                          )) << 0x10) >> 8),(byte)local_77f0 << 4) &
                 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar20 >> 0x10),CONCAT11(bVar22 << 4,(char)uVar20)) &
                 0xffffffffffff30ff;
        uVar20 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar20 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar20 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar20)) &
                 0xffffffff30ffffff;
        uVar20 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar20 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar20 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar20)) &
                 0xffff30ffffffffff;
        uVar20 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar20 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        uVar21 = CONCAT71((int7)(((ulong)CONCAT15(bVar36 << 4,
                                                  CONCAT14(bVar35 << 4,
                                                           CONCAT13(bVar34 << 4,
                                                                    CONCAT12(bVar33 << 4,
                                                                             CONCAT11(bVar32 << 4,
                                                                                      bVar31 << 4)))
                                                          )) << 0x10) >> 8),(byte)uStack_77e8 << 4)
                 & 0xffffffffffffff30;
        uVar13 = CONCAT62((int6)(uVar21 >> 0x10),CONCAT11(bVar30 << 4,(char)uVar21)) &
                 0xffffffffffff30ff;
        uVar21 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar21 >> 0x10),(short)uVar13)) &
                 0xffffffffff30ffff;
        uVar13 = CONCAT44((int)(uVar21 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar21)) &
                 0xffffffff30ffffff;
        uVar21 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar21 >> 0x20),(int)uVar13)) &
                 0xffffff30ffffffff;
        uVar13 = CONCAT26((short)(uVar21 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar21)) &
                 0xffff30ffffffffff;
        uVar13 = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar21 >> 0x30),(int6)uVar13)) &
                 0x3030ffffffffffff;
        puVar9[0x19] = CONCAT17(bVar36 >> 2,
                                CONCAT16(bVar35 >> 2,
                                         CONCAT15(bVar34 >> 2,
                                                  CONCAT14(bVar33 >> 2,
                                                           CONCAT13(bVar32 >> 2,
                                                                    CONCAT12(bVar31 >> 2,
                                                                             CONCAT11(bVar30 >> 2,
                                                                                      (byte)
                                                  uStack_77e8 >> 2)))))));
        puVar9[0x18] = CONCAT17(bVar28 >> 2,
                                CONCAT16(bVar27 >> 2,
                                         CONCAT15(bVar26 >> 2,
                                                  CONCAT14(bVar25 >> 2,
                                                           CONCAT13(bVar24 >> 2,
                                                                    CONCAT12(bVar23 >> 2,
                                                                             CONCAT11(bVar22 >> 2,
                                                                                      (byte)
                                                  local_77f0 >> 2)))))));
        puVar9[0x1b] = CONCAT17((char)(uVar13 >> 0x38) + (bVar52 >> 4),
                                CONCAT16((char)(uVar13 >> 0x30) + (bVar51 >> 4),
                                         CONCAT15((char)(uVar13 >> 0x28) + (bVar50 >> 4),
                                                  CONCAT14((char)(uVar13 >> 0x20) + (bVar49 >> 4),
                                                           CONCAT13((char)(uVar13 >> 0x18) +
                                                                    (bVar48 >> 4),
                                                                    CONCAT12((char)(uVar13 >> 0x10)
                                                                             + (bVar47 >> 4),
                                                                             CONCAT11((char)(uVar13 
                                                  >> 8) + (bVar46 >> 4),
                                                  (char)uVar13 + ((byte)uStack_77d8 >> 4))))))));
        puVar9[0x1a] = CONCAT17((char)(uVar20 >> 0x38) + (bVar44 >> 4),
                                CONCAT16((char)(uVar20 >> 0x30) + (bVar43 >> 4),
                                         CONCAT15((char)(uVar20 >> 0x28) + (bVar42 >> 4),
                                                  CONCAT14((char)(uVar20 >> 0x20) + (bVar41 >> 4),
                                                           CONCAT13((char)(uVar20 >> 0x18) +
                                                                    (bVar40 >> 4),
                                                                    CONCAT12((char)(uVar20 >> 0x10)
                                                                             + (bVar39 >> 4),
                                                                             CONCAT11((char)(uVar20 
                                                  >> 8) + (bVar38 >> 4),
                                                  (char)uVar20 + ((byte)uStack_77e0 >> 4))))))));
        puVar9[0x1d] = CONCAT17((bVar52 & 0xf) * '\x04' + (byte)(uStack_77c8 >> 0x3e),
                                CONCAT16((bVar51 & 0xf) * '\x04' +
                                         ((byte)(uStack_77c8 >> 0x30) >> 6),
                                         CONCAT15((bVar50 & 0xf) * '\x04' +
                                                  ((byte)(uStack_77c8 >> 0x28) >> 6),
                                                  CONCAT14((bVar49 & 0xf) * '\x04' +
                                                           ((byte)(uStack_77c8 >> 0x20) >> 6),
                                                           CONCAT13((bVar48 & 0xf) * '\x04' +
                                                                    ((byte)(uStack_77c8 >> 0x18) >>
                                                                    6),CONCAT12((bVar47 & 0xf) *
                                                                                '\x04' + ((byte)(
                                                  uStack_77c8 >> 0x10) >> 6),
                                                  CONCAT11((bVar46 & 0xf) * '\x04' +
                                                           ((byte)(uStack_77c8 >> 8) >> 6),
                                                           ((byte)uStack_77d8 & 0xf) * '\x04' +
                                                           ((byte)uStack_77c8 >> 6))))))));
        puVar9[0x1c] = CONCAT17((bVar44 & 0xf) * '\x04' + (byte)(local_77d0 >> 0x3e),
                                CONCAT16((bVar43 & 0xf) * '\x04' + ((byte)(local_77d0 >> 0x30) >> 6)
                                         ,CONCAT15((bVar42 & 0xf) * '\x04' +
                                                   ((byte)(local_77d0 >> 0x28) >> 6),
                                                   CONCAT14((bVar41 & 0xf) * '\x04' +
                                                            ((byte)(local_77d0 >> 0x20) >> 6),
                                                            CONCAT13((bVar40 & 0xf) * '\x04' +
                                                                     ((byte)(local_77d0 >> 0x18) >>
                                                                     6),CONCAT12((bVar39 & 0xf) *
                                                                                 '\x04' + ((byte)(
                                                  local_77d0 >> 0x10) >> 6),
                                                  CONCAT11((bVar38 & 0xf) * '\x04' +
                                                           ((byte)(local_77d0 >> 8) >> 6),
                                                           ((byte)uStack_77e0 & 0xf) * '\x04' +
                                                           ((byte)local_77d0 >> 6))))))));
        puVar9[0x1f] = uStack_77c8 & 0x3f3f3f3f3f3f3f3f;
        puVar9[0x1e] = local_77d0 & 0x3f3f3f3f3f3f3f3f;
      } while ((int)lVar18 != 0xf000);
    }
    else {
      do {
        puVar9 = (undefined8 *)(lVar12 + lVar18);
        uVar29 = puVar9[1];
        uVar10 = *puVar9;
        uVar45 = puVar9[3];
        uVar37 = puVar9[2];
        uVar56 = puVar9[5];
        uVar53 = puVar9[4];
        uVar62 = puVar9[7];
        uVar61 = puVar9[6];
        bVar22 = (byte)((ulong)uVar37 >> 8);
        bVar23 = (byte)((ulong)uVar37 >> 0x10);
        bVar24 = (byte)((ulong)uVar37 >> 0x18);
        bVar25 = (byte)((ulong)uVar37 >> 0x20);
        bVar26 = (byte)((ulong)uVar37 >> 0x28);
        bVar27 = (byte)((ulong)uVar37 >> 0x30);
        bVar28 = (byte)((ulong)uVar37 >> 0x38);
        bVar30 = (byte)((ulong)uVar45 >> 8);
        bVar31 = (byte)((ulong)uVar45 >> 0x10);
        bVar32 = (byte)((ulong)uVar45 >> 0x18);
        bVar33 = (byte)((ulong)uVar45 >> 0x20);
        bVar34 = (byte)((ulong)uVar45 >> 0x28);
        bVar35 = (byte)((ulong)uVar45 >> 0x30);
        bVar36 = (byte)((ulong)uVar45 >> 0x38);
        local_7880 = CONCAT17(bVar28 >> 4 | (char)((ulong)uVar10 >> 0x38) << 2,
                              CONCAT16(bVar27 >> 4 | (char)((ulong)uVar10 >> 0x30) << 2,
                                       CONCAT15(bVar26 >> 4 | (char)((ulong)uVar10 >> 0x28) << 2,
                                                CONCAT14(bVar25 >> 4 |
                                                         (char)((ulong)uVar10 >> 0x20) << 2,
                                                         CONCAT13(bVar24 >> 4 |
                                                                  (char)((ulong)uVar10 >> 0x18) << 2
                                                                  ,CONCAT12(bVar23 >> 4 |
                                                                            (char)((ulong)uVar10 >>
                                                                                  0x10) << 2,
                                                                            CONCAT11(bVar22 >> 4 |
                                                                                     (char)((ulong)
                                                  uVar10 >> 8) << 2,
                                                  (byte)uVar37 >> 4 | (char)uVar10 << 2)))))));
        uStack_7878 = CONCAT17(bVar36 >> 4 | (char)((ulong)uVar29 >> 0x38) << 2,
                               CONCAT16(bVar35 >> 4 | (char)((ulong)uVar29 >> 0x30) << 2,
                                        CONCAT15(bVar34 >> 4 | (char)((ulong)uVar29 >> 0x28) << 2,
                                                 CONCAT14(bVar33 >> 4 |
                                                          (char)((ulong)uVar29 >> 0x20) << 2,
                                                          CONCAT13(bVar32 >> 4 |
                                                                   (char)((ulong)uVar29 >> 0x18) <<
                                                                   2,CONCAT12(bVar31 >> 4 |
                                                                              (char)((ulong)uVar29
                                                                                    >> 0x10) << 2,
                                                                              CONCAT11(bVar30 >> 4 |
                                                                                       (char)((ulong
                                                  )uVar29 >> 8) << 2,
                                                  (byte)uVar45 >> 4 | (char)uVar29 << 2)))))));
        bVar38 = (byte)((ulong)uVar53 >> 8);
        bVar39 = (byte)((ulong)uVar53 >> 0x10);
        bVar40 = (byte)((ulong)uVar53 >> 0x18);
        bVar41 = (byte)((ulong)uVar53 >> 0x20);
        bVar42 = (byte)((ulong)uVar53 >> 0x28);
        bVar43 = (byte)((ulong)uVar53 >> 0x30);
        bVar44 = (byte)((ulong)uVar53 >> 0x38);
        bVar46 = (byte)((ulong)uVar56 >> 8);
        bVar47 = (byte)((ulong)uVar56 >> 0x10);
        bVar48 = (byte)((ulong)uVar56 >> 0x18);
        bVar49 = (byte)((ulong)uVar56 >> 0x20);
        bVar50 = (byte)((ulong)uVar56 >> 0x28);
        bVar51 = (byte)((ulong)uVar56 >> 0x30);
        bVar52 = (byte)((ulong)uVar56 >> 0x38);
        uStack_7870 = CONCAT17(bVar44 >> 2 | bVar28 << 4,
                               CONCAT16(bVar43 >> 2 | bVar27 << 4,
                                        CONCAT15(bVar42 >> 2 | bVar26 << 4,
                                                 CONCAT14(bVar41 >> 2 | bVar25 << 4,
                                                          CONCAT13(bVar40 >> 2 | bVar24 << 4,
                                                                   CONCAT12(bVar39 >> 2 |
                                                                            bVar23 << 4,
                                                                            CONCAT11(bVar38 >> 2 |
                                                                                     bVar22 << 4,
                                                                                     (byte)uVar53 >>
                                                                                     2 | (byte)
                                                  uVar37 << 4)))))));
        uStack_7868 = CONCAT17(bVar52 >> 2 | bVar36 << 4,
                               CONCAT16(bVar51 >> 2 | bVar35 << 4,
                                        CONCAT15(bVar50 >> 2 | bVar34 << 4,
                                                 CONCAT14(bVar49 >> 2 | bVar33 << 4,
                                                          CONCAT13(bVar48 >> 2 | bVar32 << 4,
                                                                   CONCAT12(bVar47 >> 2 |
                                                                            bVar31 << 4,
                                                                            CONCAT11(bVar46 >> 2 |
                                                                                     bVar30 << 4,
                                                                                     (byte)uVar56 >>
                                                                                     2 | (byte)
                                                  uVar45 << 4)))))));
        local_7860 = CONCAT17((byte)((ulong)uVar61 >> 0x38) | bVar44 << 6,
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) | bVar43 << 6,
                                       CONCAT15((byte)((ulong)uVar61 >> 0x28) | bVar42 << 6,
                                                CONCAT14((byte)((ulong)uVar61 >> 0x20) | bVar41 << 6
                                                         ,CONCAT13((byte)((ulong)uVar61 >> 0x18) |
                                                                   bVar40 << 6,
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) |
                                                                            bVar39 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) | bVar38 << 6,
                                                  (byte)uVar61 | (byte)uVar53 << 6)))))));
        uStack_7858 = CONCAT17((byte)((ulong)uVar62 >> 0x38) | bVar52 << 6,
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) | bVar51 << 6,
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) | bVar50 << 6,
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) |
                                                          bVar49 << 6,
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) |
                                                                   bVar48 << 6,
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) |
                                                                            bVar47 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) | bVar46 << 6,
                                                  (byte)uVar62 | (byte)uVar56 << 6)))))));
        uVar29 = puVar9[9];
        uVar10 = puVar9[8];
        uVar45 = puVar9[0xb];
        uVar37 = puVar9[10];
        uVar56 = puVar9[0xd];
        uVar53 = puVar9[0xc];
        uVar62 = puVar9[0xf];
        uVar61 = puVar9[0xe];
        bVar22 = (byte)((ulong)uVar37 >> 8);
        bVar23 = (byte)((ulong)uVar37 >> 0x10);
        bVar24 = (byte)((ulong)uVar37 >> 0x18);
        bVar25 = (byte)((ulong)uVar37 >> 0x20);
        bVar26 = (byte)((ulong)uVar37 >> 0x28);
        bVar27 = (byte)((ulong)uVar37 >> 0x30);
        bVar28 = (byte)((ulong)uVar37 >> 0x38);
        bVar30 = (byte)((ulong)uVar45 >> 8);
        bVar31 = (byte)((ulong)uVar45 >> 0x10);
        bVar32 = (byte)((ulong)uVar45 >> 0x18);
        bVar33 = (byte)((ulong)uVar45 >> 0x20);
        bVar34 = (byte)((ulong)uVar45 >> 0x28);
        bVar35 = (byte)((ulong)uVar45 >> 0x30);
        bVar36 = (byte)((ulong)uVar45 >> 0x38);
        local_7850 = CONCAT17(bVar28 >> 4 | (char)((ulong)uVar10 >> 0x38) << 2,
                              CONCAT16(bVar27 >> 4 | (char)((ulong)uVar10 >> 0x30) << 2,
                                       CONCAT15(bVar26 >> 4 | (char)((ulong)uVar10 >> 0x28) << 2,
                                                CONCAT14(bVar25 >> 4 |
                                                         (char)((ulong)uVar10 >> 0x20) << 2,
                                                         CONCAT13(bVar24 >> 4 |
                                                                  (char)((ulong)uVar10 >> 0x18) << 2
                                                                  ,CONCAT12(bVar23 >> 4 |
                                                                            (char)((ulong)uVar10 >>
                                                                                  0x10) << 2,
                                                                            CONCAT11(bVar22 >> 4 |
                                                                                     (char)((ulong)
                                                  uVar10 >> 8) << 2,
                                                  (byte)uVar37 >> 4 | (char)uVar10 << 2)))))));
        uStack_7848 = CONCAT17(bVar36 >> 4 | (char)((ulong)uVar29 >> 0x38) << 2,
                               CONCAT16(bVar35 >> 4 | (char)((ulong)uVar29 >> 0x30) << 2,
                                        CONCAT15(bVar34 >> 4 | (char)((ulong)uVar29 >> 0x28) << 2,
                                                 CONCAT14(bVar33 >> 4 |
                                                          (char)((ulong)uVar29 >> 0x20) << 2,
                                                          CONCAT13(bVar32 >> 4 |
                                                                   (char)((ulong)uVar29 >> 0x18) <<
                                                                   2,CONCAT12(bVar31 >> 4 |
                                                                              (char)((ulong)uVar29
                                                                                    >> 0x10) << 2,
                                                                              CONCAT11(bVar30 >> 4 |
                                                                                       (char)((ulong
                                                  )uVar29 >> 8) << 2,
                                                  (byte)uVar45 >> 4 | (char)uVar29 << 2)))))));
        bVar38 = (byte)((ulong)uVar53 >> 8);
        bVar39 = (byte)((ulong)uVar53 >> 0x10);
        bVar40 = (byte)((ulong)uVar53 >> 0x18);
        bVar41 = (byte)((ulong)uVar53 >> 0x20);
        bVar42 = (byte)((ulong)uVar53 >> 0x28);
        bVar43 = (byte)((ulong)uVar53 >> 0x30);
        bVar44 = (byte)((ulong)uVar53 >> 0x38);
        bVar46 = (byte)((ulong)uVar56 >> 8);
        bVar47 = (byte)((ulong)uVar56 >> 0x10);
        bVar48 = (byte)((ulong)uVar56 >> 0x18);
        bVar49 = (byte)((ulong)uVar56 >> 0x20);
        bVar50 = (byte)((ulong)uVar56 >> 0x28);
        bVar51 = (byte)((ulong)uVar56 >> 0x30);
        bVar52 = (byte)((ulong)uVar56 >> 0x38);
        uStack_7840 = CONCAT17(bVar44 >> 2 | bVar28 << 4,
                               CONCAT16(bVar43 >> 2 | bVar27 << 4,
                                        CONCAT15(bVar42 >> 2 | bVar26 << 4,
                                                 CONCAT14(bVar41 >> 2 | bVar25 << 4,
                                                          CONCAT13(bVar40 >> 2 | bVar24 << 4,
                                                                   CONCAT12(bVar39 >> 2 |
                                                                            bVar23 << 4,
                                                                            CONCAT11(bVar38 >> 2 |
                                                                                     bVar22 << 4,
                                                                                     (byte)uVar53 >>
                                                                                     2 | (byte)
                                                  uVar37 << 4)))))));
        uStack_7838 = CONCAT17(bVar52 >> 2 | bVar36 << 4,
                               CONCAT16(bVar51 >> 2 | bVar35 << 4,
                                        CONCAT15(bVar50 >> 2 | bVar34 << 4,
                                                 CONCAT14(bVar49 >> 2 | bVar33 << 4,
                                                          CONCAT13(bVar48 >> 2 | bVar32 << 4,
                                                                   CONCAT12(bVar47 >> 2 |
                                                                            bVar31 << 4,
                                                                            CONCAT11(bVar46 >> 2 |
                                                                                     bVar30 << 4,
                                                                                     (byte)uVar56 >>
                                                                                     2 | (byte)
                                                  uVar45 << 4)))))));
        local_7830 = CONCAT17((byte)((ulong)uVar61 >> 0x38) | bVar44 << 6,
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) | bVar43 << 6,
                                       CONCAT15((byte)((ulong)uVar61 >> 0x28) | bVar42 << 6,
                                                CONCAT14((byte)((ulong)uVar61 >> 0x20) | bVar41 << 6
                                                         ,CONCAT13((byte)((ulong)uVar61 >> 0x18) |
                                                                   bVar40 << 6,
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) |
                                                                            bVar39 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) | bVar38 << 6,
                                                  (byte)uVar61 | (byte)uVar53 << 6)))))));
        uStack_7828 = CONCAT17((byte)((ulong)uVar62 >> 0x38) | bVar52 << 6,
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) | bVar51 << 6,
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) | bVar50 << 6,
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) |
                                                          bVar49 << 6,
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) |
                                                                   bVar48 << 6,
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) |
                                                                            bVar47 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) | bVar46 << 6,
                                                  (byte)uVar62 | (byte)uVar56 << 6)))))));
        uVar29 = puVar9[0x11];
        uVar10 = puVar9[0x10];
        uVar45 = puVar9[0x13];
        uVar37 = puVar9[0x12];
        uVar56 = puVar9[0x15];
        uVar53 = puVar9[0x14];
        uVar62 = puVar9[0x17];
        uVar61 = puVar9[0x16];
        bVar22 = (byte)((ulong)uVar37 >> 8);
        bVar23 = (byte)((ulong)uVar37 >> 0x10);
        bVar24 = (byte)((ulong)uVar37 >> 0x18);
        bVar25 = (byte)((ulong)uVar37 >> 0x20);
        bVar26 = (byte)((ulong)uVar37 >> 0x28);
        bVar27 = (byte)((ulong)uVar37 >> 0x30);
        bVar28 = (byte)((ulong)uVar37 >> 0x38);
        bVar30 = (byte)((ulong)uVar45 >> 8);
        bVar31 = (byte)((ulong)uVar45 >> 0x10);
        bVar32 = (byte)((ulong)uVar45 >> 0x18);
        bVar33 = (byte)((ulong)uVar45 >> 0x20);
        bVar34 = (byte)((ulong)uVar45 >> 0x28);
        bVar35 = (byte)((ulong)uVar45 >> 0x30);
        bVar36 = (byte)((ulong)uVar45 >> 0x38);
        local_7820 = CONCAT17(bVar28 >> 4 | (char)((ulong)uVar10 >> 0x38) << 2,
                              CONCAT16(bVar27 >> 4 | (char)((ulong)uVar10 >> 0x30) << 2,
                                       CONCAT15(bVar26 >> 4 | (char)((ulong)uVar10 >> 0x28) << 2,
                                                CONCAT14(bVar25 >> 4 |
                                                         (char)((ulong)uVar10 >> 0x20) << 2,
                                                         CONCAT13(bVar24 >> 4 |
                                                                  (char)((ulong)uVar10 >> 0x18) << 2
                                                                  ,CONCAT12(bVar23 >> 4 |
                                                                            (char)((ulong)uVar10 >>
                                                                                  0x10) << 2,
                                                                            CONCAT11(bVar22 >> 4 |
                                                                                     (char)((ulong)
                                                  uVar10 >> 8) << 2,
                                                  (byte)uVar37 >> 4 | (char)uVar10 << 2)))))));
        uStack_7818 = CONCAT17(bVar36 >> 4 | (char)((ulong)uVar29 >> 0x38) << 2,
                               CONCAT16(bVar35 >> 4 | (char)((ulong)uVar29 >> 0x30) << 2,
                                        CONCAT15(bVar34 >> 4 | (char)((ulong)uVar29 >> 0x28) << 2,
                                                 CONCAT14(bVar33 >> 4 |
                                                          (char)((ulong)uVar29 >> 0x20) << 2,
                                                          CONCAT13(bVar32 >> 4 |
                                                                   (char)((ulong)uVar29 >> 0x18) <<
                                                                   2,CONCAT12(bVar31 >> 4 |
                                                                              (char)((ulong)uVar29
                                                                                    >> 0x10) << 2,
                                                                              CONCAT11(bVar30 >> 4 |
                                                                                       (char)((ulong
                                                  )uVar29 >> 8) << 2,
                                                  (byte)uVar45 >> 4 | (char)uVar29 << 2)))))));
        bVar38 = (byte)((ulong)uVar53 >> 8);
        bVar39 = (byte)((ulong)uVar53 >> 0x10);
        bVar40 = (byte)((ulong)uVar53 >> 0x18);
        bVar41 = (byte)((ulong)uVar53 >> 0x20);
        bVar42 = (byte)((ulong)uVar53 >> 0x28);
        bVar43 = (byte)((ulong)uVar53 >> 0x30);
        bVar44 = (byte)((ulong)uVar53 >> 0x38);
        bVar46 = (byte)((ulong)uVar56 >> 8);
        bVar47 = (byte)((ulong)uVar56 >> 0x10);
        bVar48 = (byte)((ulong)uVar56 >> 0x18);
        bVar49 = (byte)((ulong)uVar56 >> 0x20);
        bVar50 = (byte)((ulong)uVar56 >> 0x28);
        bVar51 = (byte)((ulong)uVar56 >> 0x30);
        bVar52 = (byte)((ulong)uVar56 >> 0x38);
        uStack_7810 = CONCAT17(bVar44 >> 2 | bVar28 << 4,
                               CONCAT16(bVar43 >> 2 | bVar27 << 4,
                                        CONCAT15(bVar42 >> 2 | bVar26 << 4,
                                                 CONCAT14(bVar41 >> 2 | bVar25 << 4,
                                                          CONCAT13(bVar40 >> 2 | bVar24 << 4,
                                                                   CONCAT12(bVar39 >> 2 |
                                                                            bVar23 << 4,
                                                                            CONCAT11(bVar38 >> 2 |
                                                                                     bVar22 << 4,
                                                                                     (byte)uVar53 >>
                                                                                     2 | (byte)
                                                  uVar37 << 4)))))));
        uStack_7808 = CONCAT17(bVar52 >> 2 | bVar36 << 4,
                               CONCAT16(bVar51 >> 2 | bVar35 << 4,
                                        CONCAT15(bVar50 >> 2 | bVar34 << 4,
                                                 CONCAT14(bVar49 >> 2 | bVar33 << 4,
                                                          CONCAT13(bVar48 >> 2 | bVar32 << 4,
                                                                   CONCAT12(bVar47 >> 2 |
                                                                            bVar31 << 4,
                                                                            CONCAT11(bVar46 >> 2 |
                                                                                     bVar30 << 4,
                                                                                     (byte)uVar56 >>
                                                                                     2 | (byte)
                                                  uVar45 << 4)))))));
        local_7800 = CONCAT17((byte)((ulong)uVar61 >> 0x38) | bVar44 << 6,
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) | bVar43 << 6,
                                       CONCAT15((byte)((ulong)uVar61 >> 0x28) | bVar42 << 6,
                                                CONCAT14((byte)((ulong)uVar61 >> 0x20) | bVar41 << 6
                                                         ,CONCAT13((byte)((ulong)uVar61 >> 0x18) |
                                                                   bVar40 << 6,
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) |
                                                                            bVar39 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) | bVar38 << 6,
                                                  (byte)uVar61 | (byte)uVar53 << 6)))))));
        uStack_77f8 = CONCAT17((byte)((ulong)uVar62 >> 0x38) | bVar52 << 6,
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) | bVar51 << 6,
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) | bVar50 << 6,
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) |
                                                          bVar49 << 6,
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) |
                                                                   bVar48 << 6,
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) |
                                                                            bVar47 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) | bVar46 << 6,
                                                  (byte)uVar62 | (byte)uVar56 << 6)))))));
        uVar29 = puVar9[0x19];
        uVar10 = puVar9[0x18];
        uVar45 = puVar9[0x1b];
        uVar37 = puVar9[0x1a];
        uVar56 = puVar9[0x1d];
        uVar53 = puVar9[0x1c];
        uVar62 = puVar9[0x1f];
        uVar61 = puVar9[0x1e];
        bVar22 = (byte)((ulong)uVar37 >> 8);
        bVar23 = (byte)((ulong)uVar37 >> 0x10);
        bVar24 = (byte)((ulong)uVar37 >> 0x18);
        bVar25 = (byte)((ulong)uVar37 >> 0x20);
        bVar26 = (byte)((ulong)uVar37 >> 0x28);
        bVar27 = (byte)((ulong)uVar37 >> 0x30);
        bVar28 = (byte)((ulong)uVar37 >> 0x38);
        bVar30 = (byte)((ulong)uVar45 >> 8);
        bVar31 = (byte)((ulong)uVar45 >> 0x10);
        bVar32 = (byte)((ulong)uVar45 >> 0x18);
        bVar33 = (byte)((ulong)uVar45 >> 0x20);
        bVar34 = (byte)((ulong)uVar45 >> 0x28);
        bVar35 = (byte)((ulong)uVar45 >> 0x30);
        bVar36 = (byte)((ulong)uVar45 >> 0x38);
        local_77f0 = CONCAT17(bVar28 >> 4 | (char)((ulong)uVar10 >> 0x38) << 2,
                              CONCAT16(bVar27 >> 4 | (char)((ulong)uVar10 >> 0x30) << 2,
                                       CONCAT15(bVar26 >> 4 | (char)((ulong)uVar10 >> 0x28) << 2,
                                                CONCAT14(bVar25 >> 4 |
                                                         (char)((ulong)uVar10 >> 0x20) << 2,
                                                         CONCAT13(bVar24 >> 4 |
                                                                  (char)((ulong)uVar10 >> 0x18) << 2
                                                                  ,CONCAT12(bVar23 >> 4 |
                                                                            (char)((ulong)uVar10 >>
                                                                                  0x10) << 2,
                                                                            CONCAT11(bVar22 >> 4 |
                                                                                     (char)((ulong)
                                                  uVar10 >> 8) << 2,
                                                  (byte)uVar37 >> 4 | (char)uVar10 << 2)))))));
        uStack_77e8 = CONCAT17(bVar36 >> 4 | (char)((ulong)uVar29 >> 0x38) << 2,
                               CONCAT16(bVar35 >> 4 | (char)((ulong)uVar29 >> 0x30) << 2,
                                        CONCAT15(bVar34 >> 4 | (char)((ulong)uVar29 >> 0x28) << 2,
                                                 CONCAT14(bVar33 >> 4 |
                                                          (char)((ulong)uVar29 >> 0x20) << 2,
                                                          CONCAT13(bVar32 >> 4 |
                                                                   (char)((ulong)uVar29 >> 0x18) <<
                                                                   2,CONCAT12(bVar31 >> 4 |
                                                                              (char)((ulong)uVar29
                                                                                    >> 0x10) << 2,
                                                                              CONCAT11(bVar30 >> 4 |
                                                                                       (char)((ulong
                                                  )uVar29 >> 8) << 2,
                                                  (byte)uVar45 >> 4 | (char)uVar29 << 2)))))));
        bVar38 = (byte)((ulong)uVar53 >> 8);
        bVar39 = (byte)((ulong)uVar53 >> 0x10);
        bVar40 = (byte)((ulong)uVar53 >> 0x18);
        bVar41 = (byte)((ulong)uVar53 >> 0x20);
        bVar42 = (byte)((ulong)uVar53 >> 0x28);
        bVar43 = (byte)((ulong)uVar53 >> 0x30);
        bVar44 = (byte)((ulong)uVar53 >> 0x38);
        bVar46 = (byte)((ulong)uVar56 >> 8);
        bVar47 = (byte)((ulong)uVar56 >> 0x10);
        bVar48 = (byte)((ulong)uVar56 >> 0x18);
        bVar49 = (byte)((ulong)uVar56 >> 0x20);
        bVar50 = (byte)((ulong)uVar56 >> 0x28);
        bVar51 = (byte)((ulong)uVar56 >> 0x30);
        bVar52 = (byte)((ulong)uVar56 >> 0x38);
        uStack_77e0 = CONCAT17(bVar44 >> 2 | bVar28 << 4,
                               CONCAT16(bVar43 >> 2 | bVar27 << 4,
                                        CONCAT15(bVar42 >> 2 | bVar26 << 4,
                                                 CONCAT14(bVar41 >> 2 | bVar25 << 4,
                                                          CONCAT13(bVar40 >> 2 | bVar24 << 4,
                                                                   CONCAT12(bVar39 >> 2 |
                                                                            bVar23 << 4,
                                                                            CONCAT11(bVar38 >> 2 |
                                                                                     bVar22 << 4,
                                                                                     (byte)uVar53 >>
                                                                                     2 | (byte)
                                                  uVar37 << 4)))))));
        uStack_77d8 = CONCAT17(bVar52 >> 2 | bVar36 << 4,
                               CONCAT16(bVar51 >> 2 | bVar35 << 4,
                                        CONCAT15(bVar50 >> 2 | bVar34 << 4,
                                                 CONCAT14(bVar49 >> 2 | bVar33 << 4,
                                                          CONCAT13(bVar48 >> 2 | bVar32 << 4,
                                                                   CONCAT12(bVar47 >> 2 |
                                                                            bVar31 << 4,
                                                                            CONCAT11(bVar46 >> 2 |
                                                                                     bVar30 << 4,
                                                                                     (byte)uVar56 >>
                                                                                     2 | (byte)
                                                  uVar45 << 4)))))));
        local_77d0 = CONCAT17((byte)((ulong)uVar61 >> 0x38) | bVar44 << 6,
                              CONCAT16((byte)((ulong)uVar61 >> 0x30) | bVar43 << 6,
                                       CONCAT15((byte)((ulong)uVar61 >> 0x28) | bVar42 << 6,
                                                CONCAT14((byte)((ulong)uVar61 >> 0x20) | bVar41 << 6
                                                         ,CONCAT13((byte)((ulong)uVar61 >> 0x18) |
                                                                   bVar40 << 6,
                                                                   CONCAT12((byte)((ulong)uVar61 >>
                                                                                  0x10) |
                                                                            bVar39 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar61 >> 8) | bVar38 << 6,
                                                  (byte)uVar61 | (byte)uVar53 << 6)))))));
        uStack_77c8 = CONCAT17((byte)((ulong)uVar62 >> 0x38) | bVar52 << 6,
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) | bVar51 << 6,
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) | bVar50 << 6,
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) |
                                                          bVar49 << 6,
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) |
                                                                   bVar48 << 6,
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) |
                                                                            bVar47 << 6,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) | bVar46 << 6,
                                                  (byte)uVar62 | (byte)uVar56 << 6)))))));
        (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0xc0);
        lVar18 = lVar18 + 0x100;
      } while ((int)lVar18 != 0xf000);
    }
  }
  iVar16 = (int)param_2[1];
  if (iVar16 == 1) {
    if (*(uint *)(param_1 + 0x1c) < 9) {
      uVar17 = *(uint *)(&DAT_04197344 + (long)(int)*(uint *)(param_1 + 0x1c) * 4);
    }
    else {
      uVar17 = 0xffffffff;
    }
    local_7884 = uVar17;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_7880 = CONCAT71(local_7880._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
      if ((int)param_2[1] == 2) {
        lVar18 = *param_2;
        puVar8 = &local_7884;
        goto LAB_03647498;
      }
      if ((int)param_2[1] != 1) goto LAB_03647448;
    }
    uVar4 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar4 = uVar17;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar4);
LAB_03647430:
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else if (iVar16 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03647394:
      local_7880 = local_7880 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
      uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar17 = (uint)local_7880;
      }
    }
    else {
      local_7880 = CONCAT71(local_7880._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_7884,4);
        uVar17 = local_7884;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_03647394;
        uVar17 = (local_7884 & 0xff00ff00) >> 8 | (local_7884 & 0xff00ff) << 8;
        uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar17 = local_7884;
        }
        local_7880 = CONCAT44(local_7880._4_4_,uVar17);
        (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
        uVar17 = local_7884;
      }
    }
    if (uVar17 < 8) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(&DAT_040577c0 + (long)(int)uVar17 * 4);
    }
  }
  else {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_7880 = CONCAT71(local_7880._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
      iVar16 = (int)param_2[1];
    }
    if (iVar16 != 2) {
      if (iVar16 != 1) {
LAB_03647448:
        local_7880 = local_7880 & 0xffffffff00000000;
        goto LAB_0364744c;
      }
      goto LAB_03647430;
    }
LAB_0364744c:
    lVar18 = *param_2;
    puVar8 = (uint *)&local_7880;
LAB_03647498:
    (**(code **)(lVar18 + 0x20))(param_2,puVar8,4);
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar2 = (uint *)(param_1 + 0xf1a8);
  puVar8 = (uint *)(param_1 + 0xf310);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf314);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf315);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf316);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf317);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf319);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf31a);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf31b);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf31d);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf31e);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf31f);
  if (iVar3 == 0) {
    uVar17 = *(uint *)(&DAT_04197304 + ((ulong)*(byte *)(param_1 + 0xf31a) & 0xf) * 4);
    iVar16 = *(int *)(&DAT_04197304 + ((ulong)*(byte *)(param_1 + 0xf31b) & 0xf) * 4);
    uVar4 = *(uint *)(&DAT_04197304 + ((ulong)(*(byte *)(param_1 + 0xf31e) >> 2) & 0x3c));
    iVar5 = *(int *)(&DAT_04197304 + ((ulong)(*(byte *)(param_1 + 0xf31f) >> 2) & 0x3c));
    *(uint *)(param_1 + 0xf300) =
         *(uint *)(&DAT_04197304 + ((ulong)(*(byte *)(param_1 + 0xf31a) >> 2) & 0x3c)) |
         *(int *)(&DAT_04197304 + ((ulong)(*(byte *)(param_1 + 0xf31b) >> 2) & 0x3c)) << 1;
    *(uint *)(param_1 + 0xf304) = uVar17 | iVar16 << 1;
    uVar17 = *(uint *)(&DAT_04197304 + ((ulong)*(byte *)(param_1 + 0xf31e) & 0xf) * 4);
    iVar16 = *(int *)(&DAT_04197304 + ((ulong)*(byte *)(param_1 + 0xf31f) & 0xf) * 4);
    *(uint *)(param_1 + 0xf308) = uVar4 | iVar5 << 1;
    *(uint *)(param_1 + 0xf30c) = uVar17 | iVar16 << 1;
  }
  local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 0xf2f8));
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 0xf2f8) = (byte)local_7880 != 0;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0xf2fc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0xf330);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar1 = (ulong *)(param_1 + 0xf328);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar13 = *puVar1;
    uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    local_7880 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_7880 = uVar13;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,8);
    uVar20 = (local_7880 & 0xff00ff00ff00ff00) >> 8 | (local_7880 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar20 = local_7880;
    }
    *puVar1 = uVar20;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar1 = (ulong *)(param_1 + 0x70);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar13 = *puVar1;
    uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    local_7880 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_7880 = uVar13;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,8);
    uVar20 = (local_7880 & 0xff00ff00ff00ff00) >> 8 | (local_7880 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar20 = local_7880;
    }
    *puVar1 = uVar20;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar8 = (uint *)(param_1 + 0xf33c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar8;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar8 = uVar17;
    cVar6 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar6 != '\0') {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar13 = *puVar1;
    uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    local_7880 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_7880 = uVar13;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_7880);
  }
  else {
    local_7880 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,8);
    uVar20 = (local_7880 & 0xff00ff00ff00ff00) >> 8 | (local_7880 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar20 = local_7880;
    }
    *puVar1 = uVar20;
  }
  local_7880._0_1_ = *(byte *)(param_1 + 1);
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 1) = (byte)local_7880 != 0;
  local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 2));
  (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
  *(bool *)(param_1 + 2) = (byte)local_7880 != 0;
  uVar17 = *(uint *)(param_1 + 0x68) % 0x155;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x68) / 0x155;
  *(uint *)(param_1 + 0x24) = uVar17;
  if (((iVar3 == 0) && (*(int *)(param_1 + 0x1c) == 1)) && (uVar17 == 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  iVar16 = (int)param_2[1];
  if (local_7888 < 0x1b) {
    if (local_7888 < 0x18) {
      lVar18 = *param_2;
      puVar9 = (undefined8 *)(param_1 + 0x1a8);
      uVar10 = 0xf000;
LAB_03647e64:
      (**(code **)(lVar18 + 0x20))(param_2,puVar9,uVar10);
      if (iVar16 != 0) goto LAB_0364801c;
    }
    else {
      if (iVar16 != 0) {
        lVar18 = 0;
        pbVar19 = (byte *)(param_1 + 0x1a9);
        do {
          *(byte *)((long)&local_7880 + lVar18) =
               *pbVar19 & 0xe0 | pbVar19[-1] & 1 | (pbVar19[-1] >> 5) << 1 | (*pbVar19 & 1) << 4;
          lVar18 = lVar18 + 1;
          pbVar19 = pbVar19 + 2;
        } while (lVar18 != 0x7800);
        lVar18 = *param_2;
        puVar9 = &local_7880;
        uVar10 = 0x7800;
        goto LAB_03647e64;
      }
      lVar18 = 0x7800;
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0x7800);
      pbVar19 = (byte *)(param_1 + 0x1a9);
      pbVar14 = (byte *)&local_7880;
      do {
        bVar22 = *pbVar14;
        lVar18 = lVar18 + -1;
        pbVar19[-1] = bVar22 & 1 | (bVar22 >> 1) << 5;
        *pbVar19 = bVar22 & 0xe0 | bVar22 >> 4 & 1;
        pbVar19 = pbVar19 + 2;
        pbVar14 = pbVar14 + 1;
      } while (lVar18 != 0);
    }
    *(undefined8 *)(param_1 + 0xf28c) = 0;
    *(undefined8 *)(param_1 + 0xf294) = 0;
    *(undefined8 *)(param_1 + 0xf27c) = 0;
    *(undefined8 *)(param_1 + 0xf284) = 0;
    *(undefined8 *)(param_1 + 0xf26c) = 0;
    *(undefined8 *)(param_1 + 0xf274) = 0;
    *(undefined8 *)(param_1 + 0xf25c) = 0;
    *(undefined8 *)(param_1 + 0xf264) = 0;
    *(undefined8 *)(param_1 + 0xf24c) = 0;
    *(undefined8 *)(param_1 + 0xf254) = 0;
    *(undefined8 *)(param_1 + 0xf23c) = 0;
    *(undefined8 *)(param_1 + 0xf244) = 0;
    *(undefined8 *)(param_1 + 0xf22c) = 0;
    *(undefined8 *)(param_1 + 0xf234) = 0;
    *(undefined8 *)(param_1 + 0xf21c) = 0;
    *(undefined8 *)(param_1 + 0xf224) = 0;
    *(undefined8 *)(param_1 + 0xf20c) = 0;
    *(undefined8 *)(param_1 + 0xf214) = 0;
    *(undefined8 *)(param_1 + 0xf1fc) = 0;
    *(undefined8 *)(param_1 + 0xf204) = 0;
    *(undefined8 *)(param_1 + 0xf1ec) = 0;
    *(undefined8 *)(param_1 + 0xf1f4) = 0;
    *(undefined8 *)(param_1 + 0xf1dc) = 0;
    *(undefined8 *)(param_1 + 0xf1e4) = 0;
    *(undefined8 *)(param_1 + 0xf1cc) = 0;
    *(undefined8 *)(param_1 + 0xf1d4) = 0;
    *(undefined8 *)(param_1 + 0xf1bc) = 0;
    *(undefined8 *)(param_1 + 0xf1c4) = 0;
    *(undefined8 *)(param_1 + 0xf1ac) = 0;
    *(undefined8 *)(param_1 + 0xf1b4) = 0;
  }
  else if (iVar16 == 0) {
    lVar18 = 0;
    pbVar19 = (byte *)(param_1 + 0x1a9);
    do {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_7884 = CONCAT31(local_7884._1_3_,1);
        (**(code **)(*param_2 + 0x20))(param_2,&local_7884,1);
      }
      (**(code **)(*param_2 + 0x28))(param_2,&local_7884);
      if ((local_7884 & 0xff) == 0) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0x80);
        lVar12 = 0;
        pbVar14 = pbVar19;
        do {
          bVar22 = *(byte *)((long)&local_7880 + lVar12);
          lVar12 = lVar12 + 1;
          pbVar14[-1] = bVar22 & 1 | (bVar22 >> 1) << 5;
          *pbVar14 = bVar22 & 0xe0 | bVar22 >> 4 & 1;
          pbVar14 = pbVar14 + 2;
        } while (lVar12 != 0x80);
        uVar11 = 0;
      }
      else {
        lVar12 = param_1 + lVar18 * 0x100;
        lVar15 = ((ulong)(local_7884 & 1 | (local_7884 & 0xff) << 4) & 0xe1) * 0x101010101010101;
        uVar11 = 1;
        *(long *)(lVar12 + 0x2a0) = lVar15;
        *(long *)(lVar12 + 0x298) = lVar15;
        *(long *)(lVar12 + 0x290) = lVar15;
        *(long *)(lVar12 + 0x288) = lVar15;
        *(long *)(lVar12 + 0x280) = lVar15;
        *(long *)(lVar12 + 0x278) = lVar15;
        *(long *)(lVar12 + 0x270) = lVar15;
        *(long *)(lVar12 + 0x268) = lVar15;
        *(long *)(lVar12 + 0x260) = lVar15;
        *(long *)(lVar12 + 600) = lVar15;
        *(long *)(lVar12 + 0x250) = lVar15;
        *(long *)(lVar12 + 0x248) = lVar15;
        *(long *)(lVar12 + 0x240) = lVar15;
        *(long *)(lVar12 + 0x238) = lVar15;
        *(long *)(lVar12 + 0x230) = lVar15;
        *(long *)(lVar12 + 0x228) = lVar15;
        *(long *)(lVar12 + 0x220) = lVar15;
        *(long *)(lVar12 + 0x218) = lVar15;
        *(long *)(lVar12 + 0x210) = lVar15;
        *(long *)(lVar12 + 0x208) = lVar15;
        *(long *)(lVar12 + 0x1f8) = lVar15;
        *(long *)(lVar12 + 0x200) = lVar15;
        *(long *)(lVar12 + 0x1e8) = lVar15;
        *(long *)(lVar12 + 0x1f0) = lVar15;
        *(long *)(lVar12 + 0x1d8) = lVar15;
        *(long *)(lVar12 + 0x1e0) = lVar15;
        *(long *)(lVar12 + 0x1c8) = lVar15;
        *(long *)(lVar12 + 0x1d0) = lVar15;
        *(long *)(lVar12 + 0x1b8) = lVar15;
        *(long *)(lVar12 + 0x1c0) = lVar15;
        *(long *)(lVar12 + 0x1a8) = lVar15;
        *(long *)(lVar12 + 0x1b0) = lVar15;
      }
      lVar12 = param_1 + lVar18;
      lVar18 = lVar18 + 1;
      pbVar19 = pbVar19 + 0x100;
      *(undefined1 *)(lVar12 + 0xf1ac) = uVar11;
    } while (lVar18 != 0xf0);
  }
  else {
    lVar18 = 0;
    pbVar19 = (byte *)(param_1 + 0x1a9);
    do {
      if (*(char *)(param_1 + lVar18 + 0xf1ac) == '\0') {
        local_74[0] = 0;
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_7884 = CONCAT31(local_7884._1_3_,1);
          (**(code **)(*param_2 + 0x20))(param_2,&local_7884,1);
        }
        (**(code **)(*param_2 + 0x28))(param_2,local_74);
        lVar12 = 0;
        pbVar14 = pbVar19;
        do {
          *(byte *)((long)&local_7880 + lVar12) =
               *pbVar14 & 0xe0 | pbVar14[-1] & 1 | (pbVar14[-1] >> 5) << 1 | (*pbVar14 & 1) << 4;
          lVar12 = lVar12 + 1;
          pbVar14 = pbVar14 + 2;
        } while (lVar12 != 0x80);
        (**(code **)(*param_2 + 0x20))(param_2,&local_7880,0x80);
      }
      else {
        bVar22 = *(byte *)(param_1 + lVar18 * 0x100 + 0x1a8);
        local_74[0] = bVar22 & 1 | (bVar22 >> 5) << 1 | 0x80;
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_7884 = CONCAT31(local_7884._1_3_,1);
          (**(code **)(*param_2 + 0x20))(param_2,&local_7884,1);
        }
        (**(code **)(*param_2 + 0x28))(param_2,local_74);
      }
      lVar18 = lVar18 + 1;
      pbVar19 = pbVar19 + 0x100;
    } while (lVar18 != 0xf0);
  }
LAB_0364801c:
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_7880 = CONCAT71(local_7880._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar2,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar2;
    uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = uVar4;
    }
    local_7880 = CONCAT44(local_7880._4_4_,uVar17);
    (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
  }
  else {
    local_7880 = (ulong)local_7880._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
    uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar17 = (uint)local_7880;
    }
    *puVar2 = uVar17;
  }
  if (0x1c < local_7888) {
    local_7880._1_7_ = (undefined7)(local_7880 >> 8);
    local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 0x58));
    (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
    *(bool *)(param_1 + 0x58) = (byte)local_7880 != 0;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_7880 = CONCAT71(local_7880._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
    }
    puVar1 = (ulong *)(param_1 + 0x50);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar13 = *puVar1;
      uVar20 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      local_7880 = uVar20 >> 0x20 | uVar20 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_7880 = uVar13;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_7880);
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_7880 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,8);
      uVar20 = (local_7880 & 0xff00ff00ff00ff00) >> 8 | (local_7880 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar20 = local_7880;
      }
      *puVar1 = uVar20;
      cVar6 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar6 != '\0') {
      local_7880._1_7_ = (undefined7)(local_7880 >> 8);
      local_7880 = CONCAT71(local_7880._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,1);
    }
    puVar8 = (uint *)(param_1 + 0x4c);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar8,4);
      uVar20 = local_7880;
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar8;
      uVar17 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar17 = uVar4;
      }
      local_7880 = CONCAT44(local_7880._4_4_,uVar17);
      (**(code **)(*param_2 + 0x38))(param_2,&local_7880);
      uVar20 = local_7880;
    }
    else {
      local_7880 = (ulong)local_7880._4_4_ << 0x20;
      (**(code **)(*param_2 + 0x20))(param_2,&local_7880,4);
      uVar17 = ((uint)local_7880 & 0xff00ff00) >> 8 | ((uint)local_7880 & 0xff00ff) << 8;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar17 = (uint)local_7880;
      }
      *puVar8 = uVar17;
      uVar20 = local_7880;
    }
    if (0x1d < local_7888) {
      local_7880._0_1_ = *(byte *)(param_1 + 3);
      local_7880._1_7_ = (undefined7)(uVar20 >> 8);
      (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
      *(bool *)(param_1 + 3) = (byte)local_7880 != 0;
      local_7880 = CONCAT71(local_7880._1_7_,*(undefined1 *)(param_1 + 4));
      (**(code **)(*param_2 + 0x28))(param_2,&local_7880);
      *(bool *)(param_1 + 4) = (byte)local_7880 != 0;
      goto LAB_0364833c;
    }
  }
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 3) = 0;
  }
LAB_0364833c:
  return uVar7 & 1;
}

