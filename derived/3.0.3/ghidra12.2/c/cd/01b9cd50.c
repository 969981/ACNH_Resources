
void FUN_01b9cd50(long param_1,undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  uint local_16c;
  undefined8 local_158;
  undefined6 uStack_150;
  undefined2 local_14a;
  undefined6 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  long local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  uint local_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  undefined8 local_70;
  
  bVar7 = true;
  local_16c = 2;
  switch(param_2) {
  case 1:
  case 2:
  case 0xe:
  case 0xf:
  case 0x14:
    break;
  case 3:
  case 4:
  case 0x10:
  case 0x11:
  case 0x15:
    local_16c = 3;
    break;
  case 5:
  case 6:
  case 0x12:
  case 0x13:
  case 0x16:
    local_16c = 4;
    break;
  case 7:
  case 8:
    local_16c = 5;
    break;
  case 9:
  case 10:
    local_16c = 6;
    break;
  default:
    bVar7 = false;
    local_16c = 0;
    break;
  case 0x17:
    local_16c = 7;
  }
  iVar5 = *(int *)(param_4 + 4);
  local_b0 = 0;
  iVar6 = *(int *)(param_4 + 8);
  local_c0 = (undefined1 *)0x0;
  local_b8 = 0;
  local_c8 = 0;
  puVar11 = (uint *)(param_1 + 8);
  *puVar11 = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x38))((long *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 400) + 0x38))(param_1 + 400);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x310) + 0x38))(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x490) + 0x38))(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x610) + 0x38))(param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x790) + 0x38))(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x910) + 0x38))(param_1 + 0x910);
  *(undefined8 *)(param_1 + 0xa70) = 0;
  *(undefined4 *)(param_1 + 0xa7c) = 0;
  *(undefined8 *)(param_1 + 0xa88) = 0xffffffff00000000;
  if (bVar7) {
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    uVar9 = 0;
    do {
      uVar1 = uVar9 + 1;
      local_110 = 0x40;
      local_cd = 0;
      uStack_128 = 0;
      local_10c[0] = 0;
      local_138 = 3;
      iStack_134 = iVar5;
      local_130 = iVar6;
      local_12c = uVar1;
      local_120 = puVar2;
      local_118 = local_10c;
      if (iVar5 != -1) {
        uVar10 = uVar9 + 0x61;
        if (0x19 < uVar9) {
          uVar10 = 0x61;
        }
        if (iVar6 + 1U < 2) {
          FUN_038d1270(&local_120,"%03d_%c",iVar5,uVar10 & 0xff);
        }
        else {
          FUN_038d1270(&local_120,"%03d_%02d_%c",iVar5,iVar6,uVar10 & 0xff);
        }
      }
      uStack_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_14a = 0;
      local_140 = 0;
      FUN_01b970f0(&local_158,param_3);
      FUN_01b9735c(&local_158,param_3,&local_120);
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar12 = param_3[1];
      (**(code **)(local_120 + 0x18))(&local_120);
      puVar8 = local_118;
      local_b8 = (ulong)uVar9;
      local_c0 = local_118;
      uVar10 = (uint)local_158._4_2_;
      if ((int)local_158 != 1) {
        uVar10 = 0;
      }
      puVar4 = puVar11 + (ulong)*(uint *)(param_1 + 0xa88) * 0x60;
      if (6 < *(uint *)(param_1 + 0xa88)) {
        puVar4 = puVar11;
      }
      *puVar4 = 0xffffffff;
      local_c8 = lVar12;
      local_b0 = uVar10;
      (**(code **)(*(long *)(puVar4 + 2) + 0x38))();
      puVar4[0x5d] = 0;
      *puVar4 = uVar10;
      puVar4[0x5a] = uVar9;
      puVar4[0x5b] = 0;
      FUN_01b9be60(puVar4,&local_c8);
      local_70 = 0;
      puStack_a0 = puVar8;
      local_88 = 0;
      uStack_80 = 0;
      local_7a = 0;
      uStack_78 = 0;
      local_a8 = puVar3;
      local_98 = puVar3;
      lStack_90 = lVar12;
      FUN_01b970f0(&local_88,&local_98);
      FUN_01b9735c(&local_88,&local_98,&local_a8);
      uVar9 = FUN_01b97400(&local_88);
      puVar4[0x5c] = uVar9;
      *(int *)(param_1 + 0xa88) = *(int *)(param_1 + 0xa88) + 1;
      uVar9 = uVar1;
    } while (local_16c != uVar1);
  }
  return;
}

