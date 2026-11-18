
uint FUN_035ee3f0(byte *param_1,long *param_2)

{
  ushort *puVar1;
  ulong *puVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  ushort uVar14;
  byte local_50 [4];
  undefined1 auStack_4c [4];
  ulong local_48;
  
  uVar9 = FUN_04002180(param_2,0x12,0x12,auStack_4c);
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    if ((int)param_2[1] == 0) {
      param_1[0x162] = (*param_1 << 3 ^ 0xff) & 0x80;
      *(ushort *)(param_1 + 0x160) = ((*param_1 ^ 0xffff) & 0x10) << 7;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 1);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 2);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 3);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 4);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 5);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 6);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 7);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 9);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 10);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xb);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xc);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xd);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf);
    local_48._0_1_ = param_1[0x11];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x11] = (byte)local_48 != 0;
    local_48._0_1_ = param_1[0x12];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x12] = (byte)local_48 != 0;
    local_48._0_1_ = param_1[0x15];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x15] = (byte)local_48 != 0;
    local_48._0_1_ = param_1[0x16];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x16] = (byte)local_48 != 0;
    local_48._0_1_ = param_1[0x17];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x17] = (byte)local_48 != 0;
    local_48 = CONCAT71(local_48._1_7_,param_1[0x18]);
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x18] = (byte)local_48 != '\0';
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x19,4);
    pcVar12 = *(code **)(*param_2 + 0x20);
    if (param_1[-0x1ee] < 3) {
      pbVar10 = param_1 + 0x66;
      uVar11 = 8;
    }
    else {
      (*pcVar12)(param_2,param_1 + 0x26,0x40);
      (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x66,8);
      pbVar10 = param_1 + 0x6e;
      uVar11 = 0x40;
      pcVar12 = *(code **)(*param_2 + 0x20);
    }
    (*pcVar12)(param_2,pbVar10,uVar11);
    FUN_035eef60(param_2,param_1 + 0xd8);
    FUN_035eef60(param_2,param_1 + 0xd9);
    FUN_035ef130(param_2,param_1 + 0xdc);
    FUN_035ef130(param_2,param_1 + 0xe0);
    puVar1 = (ushort *)(param_1 + 0xe6);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar1;
      uVar14 = uVar4 >> 8 | uVar4 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar14 = uVar4;
      }
      local_48 = CONCAT62(local_48._2_6_,uVar14);
      (**(code **)(*param_2 + 0x30))(param_2,&local_48);
    }
    else {
      local_48 = (ulong)local_48._2_6_ << 0x10;
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,2);
      uVar14 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar14 = (ushort)local_48;
      }
      *puVar1 = uVar14;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xe5);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x108);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x109);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_48 = CONCAT71(local_48._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,1);
    }
    puVar2 = (ulong *)(param_1 + 0xf8);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar2,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar13 = *puVar2;
      uVar9 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      local_48 = uVar9 >> 0x20 | uVar9 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_48 = uVar13;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_48);
    }
    else {
      local_48 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,8);
      uVar9 = (local_48 & 0xff00ff00ff00ff00) >> 8 | (local_48 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar9 = local_48;
      }
      *puVar2 = uVar9;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10a);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10b);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10c);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_48 = CONCAT71(local_48._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,1);
    }
    puVar2 = (ulong *)(param_1 + 0x100);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar2,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar13 = *puVar2;
      uVar9 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      local_48 = uVar9 >> 0x20 | uVar9 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_48 = uVar13;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_48);
    }
    else {
      local_48 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,8);
      uVar9 = (local_48 & 0xff00ff00ff00ff00) >> 8 | (local_48 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar9 = local_48;
      }
      *puVar2 = uVar9;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10d);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10e);
    local_48 = CONCAT71(local_48._1_7_,param_1[0x10f]);
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    puVar1 = (ushort *)(param_1 + 0x112);
    param_1[0x10f] = (byte)local_48 != '\0';
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
    }
    else if ((int)param_2[1] == 1) {
      uVar4 = *puVar1;
      uVar14 = uVar4 >> 8 | uVar4 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar14 = uVar4;
      }
      local_48 = CONCAT62(local_48._2_6_,uVar14);
      (**(code **)(*param_2 + 0x30))(param_2,&local_48);
    }
    else {
      local_48 = (ulong)local_48._2_6_ << 0x10;
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,2);
      uVar14 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar14 = (ushort)local_48;
      }
      *puVar1 = uVar14;
    }
    bVar3 = param_1[0x114];
    local_48 = CONCAT71(local_48._1_7_,bVar3 >> 5) & 0xffffffffffffff01;
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    cVar5 = (byte)local_48;
    local_48 = CONCAT71(local_48._1_7_,bVar3 >> 6) & 0xffffffffffffff01;
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    cVar6 = (byte)local_48;
    local_48 = CONCAT71(local_48._1_7_,bVar3 >> 3) & 0xffffffffffffff01;
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    cVar7 = (byte)local_48;
    local_48._0_1_ = bVar3 >> 7;
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    if ((int)param_2[1] == 0) {
      local_50[0] = (cVar5 != '\0') << 5 | (cVar6 != '\0') << 6 | (cVar7 != '\0') << 3 |
                    ((byte)local_48 != 0) << 7;
      param_1[0x114] = local_50[0];
    }
    else {
      local_50[0] = param_1[0x114];
    }
    local_50[0] = local_50[0] & 7;
    (**(code **)(*param_2 + 0x28))(param_2,local_50);
    if ((int)param_2[1] == 0) {
      param_1[0x114] = param_1[0x114] | local_50[0];
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x119);
    FUN_035efdb0(param_2,param_1 + 0x120,param_1 + 0x160);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x115);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x116);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x117);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x118);
    local_48._0_1_ = param_1[0x163];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x163] = (byte)local_48 != 0;
    local_48._0_1_ = param_1[0xe9];
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0xe9] = (byte)local_48 != 0;
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xe);
    local_48 = CONCAT71(local_48._1_7_,param_1[0x164]);
    (**(code **)(*param_2 + 0x28))(param_2,&local_48);
    param_1[0x164] = (byte)local_48 != '\0';
    if ((int)param_2[1] == 0) {
      *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_1 + (ulong)param_1[0x19] * 2 + 0x26);
      *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + (ulong)param_1[0x1a] * 2 + 0x26);
      *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + (ulong)param_1[0x1b] * 2 + 0x26);
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + (ulong)param_1[0x1c] * 2 + 0x26);
    }
    uVar8 = FUN_035bf980(param_1 + 0x178,param_2);
    if ((uVar8 & 1) != 0) {
      FUN_035ef300(param_2,param_1 + 0x168);
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x16a);
      (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x16b,10);
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x175);
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xe4);
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_48 = CONCAT71(local_48._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,&local_48,1);
      }
      puVar2 = (ulong *)(param_1 + 0xf0);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar2,8);
      }
      else if ((int)param_2[1] == 1) {
        uVar13 = *puVar2;
        uVar9 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        local_48 = uVar9 >> 0x20 | uVar9 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          local_48 = uVar13;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_48);
      }
      else {
        local_48 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_48,8);
        uVar9 = (local_48 & 0xff00ff00ff00ff00) >> 8 | (local_48 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          uVar9 = local_48;
        }
        *puVar2 = uVar9;
      }
      local_48._0_1_ = param_1[0x13];
      (**(code **)(*param_2 + 0x28))(param_2,&local_48);
      param_1[0x13] = (byte)local_48 != 0;
      (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10);
      local_48._0_1_ = param_1[0x14];
      (**(code **)(*param_2 + 0x28))(param_2,&local_48);
      param_1[0x14] = (byte)local_48 != 0;
      local_48 = CONCAT71(local_48._1_7_,param_1[0xe8]);
      (**(code **)(*param_2 + 0x28))(param_2,&local_48);
      param_1[0xe8] = (byte)local_48 != '\0';
      if ((int)param_2[1] == 0) {
        uVar14 = (ushort)param_1[2] + (ushort)param_1[4];
        if (param_1[0x163] != 0) {
          uVar14 = (ushort)param_1[0xd];
        }
        *(ushort *)(param_1 + 0x166) = uVar14;
        param_1[0x110] = param_1[0x10b] ^ param_1[0x162];
      }
    }
  }
  return uVar8 & 1;
}

