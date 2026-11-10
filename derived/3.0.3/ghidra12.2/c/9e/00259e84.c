
undefined8 FUN_00259e84(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_c0 [20];
  short local_ac;
  short local_aa;
  uint local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  long local_90;
  byte local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  ushort local_4c;
  ushort local_4a;
  char local_34 [4];
  
  FUN_0025ef58(auStack_c0,*param_2,*(undefined2 *)((long)param_2 + 0xc),0,0,0,0,param_1);
  uVar10 = FUN_0025f018(auStack_c0);
  if ((uVar10 & 1) != 0) {
    lVar1 = param_1 + 0x2c8;
    uVar10 = FUN_0021fea0(lVar1);
    if ((uVar10 & 1) != 0) {
      uVar10 = FUN_0021fea0(param_1 + 0x2a8);
      if (((uVar10 & 1) != 0) && (uVar10 = FUN_002200e4(param_1 + 0x2a8,lVar1), (uVar10 & 1) != 0))
      {
        return 0;
      }
    }
    if ((*(short *)((long)param_2 + 0xc) == (short)(local_aa + local_ac)) &&
       (*(char *)(param_1 + 0x571) != '\0')) {
      if (local_a4 <= *(uint *)(param_1 + 0x58)) {
        FUN_0025f174(auStack_60,param_1 + 0x578,0x5d8,0x21);
        FUN_0025f1a0(auStack_60);
        FUN_0025f20c(auStack_78,param_1 + 0x1128,0x5d8);
        FUN_0025f220(auStack_78,local_58,(uint)local_4a + (uint)local_4c,0x21);
        FUN_00259cfc(param_1,auStack_78);
        return 0;
      }
      if (*(int *)(param_1 + 0x1700) == local_9c) {
        iVar2 = *(int *)(param_1 + 0x1704);
      }
      else {
        *(int *)(param_1 + 0x1700) = local_9c;
        iVar2 = *(int *)(param_1 + 0x1704);
      }
      if (iVar2 == local_98) {
        lVar11 = *(long *)(param_1 + 0x1708);
      }
      else {
        *(int *)(param_1 + 0x1704) = local_98;
        lVar11 = *(long *)(param_1 + 0x1708);
      }
      if (lVar11 != local_90) {
        *(long *)(param_1 + 0x1708) = local_90;
      }
      FUN_0025ee74(auStack_c0,param_1 + 0xa8);
      iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(param_1 + 0xa8);
      FUN_0025ee74(auStack_c0,param_1 + 0xe8);
      iVar3 = (**(code **)(*(long *)(param_1 + 0xe8) + 0x20))(param_1 + 0xe8);
      FUN_0025ee74(auStack_c0,param_1 + 0x128);
      iVar4 = (**(code **)(*(long *)(param_1 + 0x128) + 0x20))(param_1 + 0x128);
      FUN_0025ee74(auStack_c0,param_1 + 0x168);
      iVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 0x20))(param_1 + 0x168);
      FUN_0025ee74(auStack_c0,param_1 + 0x1a8);
      iVar6 = (**(code **)(*(long *)(param_1 + 0x1a8) + 0x20))(param_1 + 0x1a8);
      FUN_0025ee74(auStack_c0,param_1 + 0x1e8);
      iVar7 = (**(code **)(*(long *)(param_1 + 0x1e8) + 0x20))(param_1 + 0x1e8);
      FUN_0025ee74(auStack_c0,param_1 + 0x228);
      iVar8 = (**(code **)(*(long *)(param_1 + 0x228) + 0x20))(param_1 + 0x228);
      FUN_0025ee74(auStack_c0,param_1 + 0x268);
      iVar9 = (**(code **)(*(long *)(param_1 + 0x268) + 0x20))(param_1 + 0x268);
      FUN_0025a2a0(param_1);
      local_34[0] = '\0';
      *(undefined4 *)(param_1 + 0x37c) = local_a0;
      *(uint *)(param_1 + 0x474) = (uint)local_88;
      FUN_0025ef38(auStack_c0,local_34,iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2
                   ,1);
      *(bool *)(param_1 + 0x470) = local_34[0] == '\x01';
      uVar10 = FUN_002200e4(lVar1,param_3 + 8);
      if ((uVar10 & 1) == 0) {
        FUN_0021f54c(lVar1,param_3 + 8);
      }
      *(uint *)(param_1 + 0x58) = local_a4;
      FUN_0025f174(auStack_60,param_1 + 0x578,0x5d8,0x21);
      FUN_0025f1a0(auStack_60);
      FUN_0025f20c(auStack_78,param_1 + 0x1128,0x5d8);
      FUN_0025f220(auStack_78,local_58,(uint)local_4a + (uint)local_4c,0x21);
      FUN_00259cfc(param_1,auStack_78);
      return 1;
    }
  }
  return 0;
}

