
undefined8 FUN_002205f0(long *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  ushort local_130 [8];
  undefined1 auStack_120 [16];
  undefined4 local_110 [37];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined1 *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  uint local_44;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  
  local_40 = 0;
  local_110[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_110);
  local_44 = 0;
  memset((void *)*param_1,0,0x728);
  memset((void *)param_1[1],0,0x768);
  memset((void *)param_1[2],0,0x2750);
  uVar4 = 1;
  local_60 = 0xc;
  local_70[0] = 1;
  local_50 = 0x10;
  if (param_2 == 2) {
    uVar4 = 2;
LAB_002206d8:
    FUN_002255b0(&DAT_04c5f470,uVar4);
LAB_002206e4:
    memcpy(&DAT_04c5f480,PTR_DAT_04bccf00,0x390);
    if ((param_3 & 1) == 0) {
      memcpy(&DAT_04c5f810,PTR_DAT_04bccf10,0x388);
    }
    else {
      FUN_002257c0(&DAT_04c5f810);
      DAT_04c5f812 = DAT_04c5f812 & 0xfb;
    }
    puVar7 = &DAT_04c5f470;
    DAT_04c5f472 = DAT_04c5f472 & 0xfc;
    FUN_00225648(local_110,&DAT_04c5f470,*param_1,&local_44,0x728);
  }
  else {
    if (param_2 == 1) goto LAB_002206d8;
    if (param_2 != 0) goto LAB_002206e4;
    puVar7 = &DAT_04c5f0d0;
    FUN_002252b4(&DAT_04c5f0d0,0);
    memcpy(&DAT_04c5f0e0,PTR_DAT_04bccf00,0x390);
    DAT_04c5f0d2 = DAT_04c5f0d2 & 0xfc;
    FUN_0022533c(local_110,&DAT_04c5f0d0,*param_1,&local_44,0x728);
  }
  FUN_00229780(&local_40,local_110);
  local_75 = puVar7[0xd];
  local_76 = puVar7[0xc];
  local_7b = puVar7[7];
  local_7c = puVar7[6];
  local_74 = 0xfa85d05b;
  local_7a = puVar7[8];
  local_79 = puVar7[9];
  local_78 = puVar7[10];
  local_77 = puVar7[0xb];
  local_58 = &UNK_0410d2b2 + ((ulong)(byte)puVar7[0xe] & 0xf) * 0x10;
  local_68 = &local_7c;
  if (local_40 != 0) {
    return 2;
  }
  if (local_44 == 0) {
    return 2;
  }
  if (local_44 < 0x11) {
    return 2;
  }
  FUN_002291a0(local_110);
  FUN_002291b4(auStack_120,local_110,param_1[2],0x2750);
  FUN_00229780(&local_40,auStack_120);
  if (local_40 == 0) {
    FUN_00229244(auStack_120,local_110,param_1[1],0x768,9,9,2);
    FUN_00229780(&local_40,auStack_120);
    if (local_40 == 0) {
      FUN_0022939c(auStack_120,local_110,*param_1 + 0x10,local_44 - 0x10);
      FUN_00229780(&local_40,auStack_120);
      if (local_40 == 0) {
        FUN_002294cc(auStack_120,local_110,local_130);
        FUN_00229780(&local_40,auStack_120);
        uVar5 = (uint)local_130[0];
        if (local_40 != 0) {
          uVar5 = 0;
        }
        FUN_00229378(local_110);
        FUN_00229238(local_110);
        if (uVar5 != 0) {
          uVar2 = uVar5 & 0xfff0;
          if (0x4a0 < uVar2) {
            uVar4 = 1;
            goto LAB_00220850;
          }
          uVar1 = uVar2 + 0x10;
          FUN_002284a0(*param_1 + 4,uVar5);
          if (uVar5 < uVar1) {
            bVar3 = *(byte *)(param_1[1] + (ulong)(uVar5 - 1));
            uVar6 = (ulong)uVar5;
            do {
              *(byte *)(param_1[1] + uVar6) = ~bVar3;
              uVar6 = uVar6 + 1;
            } while (uVar1 != uVar6);
          }
          memset((void *)(*param_1 + 0x10),0,0x718);
          FUN_00221dc8(local_130,*param_1 + 0x10,param_1[1],uVar1,auStack_120,0x10,local_70);
          FUN_00229780(&local_40,local_130);
          if (local_40 == 0) {
            memcpy((void *)(*param_1 + (ulong)uVar1 + 0x10),auStack_120,0x10);
            uVar4 = 0;
            *(uint *)(param_1 + 3) = uVar2 + 0x30;
            goto LAB_00220850;
          }
        }
        goto LAB_0022084c;
      }
    }
    FUN_00229378(local_110);
    FUN_00229238(local_110);
  }
LAB_0022084c:
  uVar4 = 2;
LAB_00220850:
  FUN_002291b0(local_110);
  return uVar4;
}

