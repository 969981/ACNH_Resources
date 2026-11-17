
int FUN_02a86ce0(void)

{
  undefined *puVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_200;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined *local_1d0;
  long lStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_13d;
  undefined4 local_138;
  undefined2 local_134;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  undefined4 local_11c;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_128 = CONCAT44(local_128._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((((*(uint *)(puVar1 + 4) & 1) != 0) && (lVar7 = *(long *)PTR_DAT_04bb4948, lVar7 != 0)) &&
        (lVar8 = *(long *)PTR_DAT_04bb27a8, lVar8 != 0)) && ((*(ushort *)(lVar8 + 0x4b68) & 1) != 0)
       ) {
      iVar5 = *(int *)(lVar8 + 0x4b6c);
      iVar2 = *(int *)(lVar8 + 0x4b70);
      piVar6 = (int *)(**(code **)(*(long *)(lVar7 + 0x100) + 0xf0))(lVar7 + 0x100);
      puVar4 = PTR_DAT_04bb27c0;
      local_128 = 0xe600000000;
      local_114 = 0x3f800000;
      local_e8 = 0x80;
      local_65 = 0;
      local_e4[0] = 0;
      local_60 = 7;
      puStack_f0 = local_e4;
      local_58 = 0;
      local_5c = 0;
      local_10c = 0;
      local_104 = 0;
      local_11c = 0;
      puVar1 = PTR_DAT_04bb2d88 + 0x10;
      fVar10 = (float)(*piVar6 + iVar5 * 0x20) * 5.0;
      fVar9 = (float)(piVar6[1] + iVar2 * 0x20) * 5.0;
      local_120 = fVar10;
      local_118 = fVar9;
      local_f8 = puVar1;
      iVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,0,1);
      if (iVar5 == 0) {
        return 0;
      }
      local_200 = 0x9300000000;
      local_1ec = 0x3f800000;
      local_13d = 0;
      local_1c0 = 0x6574614700000080;
      local_138 = 7;
      lStack_1c8 = (long)&local_1c0 + 4;
      local_130 = 0;
      local_134 = 0;
      local_1e4 = 0;
      local_1dc = 0;
      local_1b8 = 0;
      local_1f4 = 0;
      local_1f8 = fVar10;
      local_1f0 = fVar9;
      local_1d0 = puVar1;
      FUN_007402e0(*(undefined8 *)puVar4,&local_200,0,1);
      return iVar5;
    }
  }
  return *(int *)PTR_DAT_04bb3238;
}

