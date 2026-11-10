
undefined8 FUN_0031e500(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  *(undefined8 *)(param_1 + 0x170) = param_2[4];
  *(undefined8 *)(param_1 + 0x178) = param_2[5];
  uVar4 = (param_2[3] - 0x20) / 0x38;
  *(int *)(param_1 + 0x1b4) = (int)uVar4;
  lVar8 = uVar4 << 0x20;
  puVar5 = (undefined4 *)param_2[2];
  if (lVar8 != 0) {
    lVar8 = (lVar8 >> 0x1a) - (lVar8 >> 0x1d);
    uVar4 = lVar8 - 0x38;
    puVar6 = puVar5;
    if ((uVar4 / 0x38 & 1) == 0) {
      *(undefined4 **)(puVar5 + 6) = puVar5 + 6;
      *(undefined4 **)(puVar5 + 8) = puVar5 + 6;
      puVar6 = puVar5 + 0xe;
      *(undefined4 **)(puVar5 + 10) = puVar5 + 10;
      *(undefined4 **)(puVar5 + 0xc) = puVar5 + 10;
      *puVar5 = 2;
      *(undefined8 *)(puVar5 + 2) = 0;
      *(undefined8 *)(puVar5 + 4) = 0;
    }
    if (0x37 < uVar4) {
      do {
        *(undefined8 *)(puVar6 + 2) = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        *puVar6 = 2;
        puVar6[0xe] = 2;
        *(undefined4 **)(puVar6 + 6) = puVar6 + 6;
        *(undefined4 **)(puVar6 + 8) = puVar6 + 6;
        *(undefined4 **)(puVar6 + 10) = puVar6 + 10;
        *(undefined4 **)(puVar6 + 0xc) = puVar6 + 10;
        *(undefined4 **)(puVar6 + 0x14) = puVar6 + 0x14;
        *(undefined4 **)(puVar6 + 0x16) = puVar6 + 0x14;
        *(undefined4 **)(puVar6 + 0x18) = puVar6 + 0x18;
        *(undefined4 **)(puVar6 + 0x1a) = puVar6 + 0x18;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0x12) = 0;
        puVar6 = puVar6 + 0x1c;
      } while (puVar6 != (undefined4 *)((long)puVar5 + lVar8));
    }
  }
  *(undefined4 **)(param_1 + 0x1a8) = puVar5;
  *(undefined4 **)(param_1 + 0x1d0) = puVar5;
  plVar7 = *(long **)(param_1 + 0x188);
  while (plVar7 != (long *)(param_1 + 0x180)) {
    plVar2 = (long *)plVar7[1];
    lVar8 = *plVar2;
    *(long **)(*plVar7 + 8) = plVar2;
    *plVar2 = *plVar7;
    *(long **)(lVar8 + 8) = plVar7;
    *plVar7 = lVar8;
    plVar7 = *(long **)(param_1 + 0x188);
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_0034fb74(&local_50);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 1));
  FUN_003490a4(*param_2,&local_50);
  local_48 = param_2[4];
  local_40 = param_2[5];
  lVar8 = param_1 + 0x50;
  local_50 = CONCAT44((int)local_40,(undefined4)local_50);
  FUN_003490c4(lVar8,*param_2,&local_50);
  FUN_003491ac(lVar8,*param_2,"NnVfx2GfxMemoryPool");
  local_60 = 0;
  uStack_58 = 0;
  FUN_0034fb50(&local_60);
  lVar1 = param_1 + 8;
  local_60 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),(int)param_2[5]);
  FUN_00347b9c(lVar1,*param_2,&local_60,lVar8,0);
  FUN_00347d50(lVar1,*param_2,"NnVfx2GfxBuffer");
  uVar3 = FUN_00347a58(*param_2,&local_60);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  uVar3 = FUN_00347cc4(lVar1);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 2;
  FUN_00347d1c(lVar1,param_1 + 0x1d8);
  return 1;
}

