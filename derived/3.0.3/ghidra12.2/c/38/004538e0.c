
undefined8 * FUN_004538e0(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  plVar1 = (long *)(param_1 + 0x1e0);
  if ((param_2 >> 4 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar3 + 1;
    iVar2 = *(int *)(param_1 + 0x1e8);
    if (iVar2 < (int)(*(uint *)(param_1 + 0x1ec) & 0x3fffffff)) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = FUN_00426720(PTR_DAT_048607c0,iVar2 + 1,8,*plVar1,iVar2,param_1 + 0x1ec);
      *plVar1 = lVar4;
    }
    puVar8 = (undefined8 *)(lVar4 + (long)iVar3 * 8);
    FUN_0043aa30(puVar8 + 1,puVar8,
                 -(ulong)((uint)(iVar2 - iVar3) >> 0x1f) & 0xfffffff800000000 |
                 (ulong)(uint)(iVar2 - iVar3) << 3);
    *(int *)(param_1 + 0x1e8) = iVar2 + 1;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x1e8);
    if (uVar7 == (*(uint *)(param_1 + 0x1ec) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607c0,plVar1,8);
      uVar7 = *(uint *)(param_1 + 0x1e8);
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)(int)uVar7 * 8);
    *(uint *)(param_1 + 0x1e8) = uVar7 + 1;
  }
  puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 8) + 0x10))((long *)(param_1 + 8),0x230,0)
  ;
  *puVar5 = &PTR_FUN_04861a58;
  lVar6 = FUN_0043c4e0(DAT_04c6f050);
  lVar4 = DAT_04c6f058;
  if (lVar6 != 0) {
    lVar4 = lVar6;
  }
  FUN_004547b0(puVar5 + 1,*(undefined8 *)(lVar4 + 0x50),0x4000);
  puVar5[0x33] = 0x8000000000000000;
  puVar5[0x34] = puVar5 + 0x36;
  puVar5[0x31] = 0x8000000000000000;
  puVar5[0x32] = 0;
  puVar5[0x35] = 0x8000000200000000;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0x8000000000000000;
  puVar5[0x43] = 0x8000000000000000;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *(undefined4 *)(puVar5 + 0x41) = 0;
  puVar5[0x42] = 0;
  puVar5[0x44] = 0;
  *(undefined2 *)(puVar5 + 0x45) = 1;
  *(undefined1 *)((long)puVar5 + 0x22a) = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x30] = 0;
  puVar5[0x3c] = puVar5 + 0x3e;
  puVar5[0x3d] = 0x8000000300000000;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x27] = 0;
  puVar5[0x28] = 0;
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  *puVar8 = puVar5;
  return puVar5;
}

