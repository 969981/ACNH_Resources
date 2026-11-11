
void FUN_004c9a40(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  
  param_1[4] = (long)param_2;
  if (param_2[2] == param_2[3]) {
    FUN_0043bd90(&local_88,*param_2,param_2[1]);
    local_64 = *(undefined4 *)(param_2 + 4);
  }
  else {
    FUN_0043bd90(&local_88);
    local_64 = *(undefined4 *)((long)param_2 + 0x24);
  }
  FUN_004c9cd0(param_1,&local_88,&local_64);
  FUN_0043be10(&local_88);
  puVar3 = PTR_DAT_048607b8;
  lVar7 = (long)*(int *)(param_2 + 6);
  if (0 < *(int *)(param_2 + 6)) {
    lVar8 = lVar7 << 4;
    do {
      while( true ) {
        lVar7 = lVar7 + -1;
        if ((*(char *)(param_2[5] + lVar8 + -0x10) == '\a') &&
           (puVar6 = *(undefined8 **)(param_2[5] + lVar8 + -8), puVar6 != (undefined8 *)0x0)) break;
LAB_004c9c18:
        lVar8 = lVar8 + -0x10;
        if (lVar7 < 1) {
          return;
        }
      }
      uVar2 = *(undefined4 *)(puVar6 + 2);
      uVar4 = FUN_0047d060(param_1,puVar6);
      if (*(uint *)(param_1 + 1) == uVar4) {
        uVar5 = uVar4;
        if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
          FUN_00426990(puVar3,param_1,0x10);
          uVar5 = *(uint *)(param_1 + 1);
        }
        lVar1 = *param_1 + (long)(int)uVar5 * 0x10;
        FUN_0043bd90(lVar1,*puVar6,puVar6[1]);
        *(undefined4 *)(lVar1 + 8) = 0;
        *(uint *)(param_1 + 1) = uVar5 + 1;
      }
      *(undefined4 *)(*param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = uVar2;
      lStack_80 = FUN_00429910(puVar6,0x3c,0);
      if (lStack_80 != 0) {
        local_88 = *puVar6;
        uStack_70 = puVar6[1];
        local_78 = lStack_80 + 1;
        uVar2 = *(undefined4 *)(puVar6 + 2);
        uVar4 = FUN_0047d060(param_1,&local_88);
        if (*(uint *)(param_1 + 1) == uVar4) {
          uVar5 = uVar4;
          if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
            FUN_00426990(puVar3,param_1,0x10);
            uVar5 = *(uint *)(param_1 + 1);
          }
          lVar1 = *param_1 + (long)(int)uVar5 * 0x10;
          FUN_0043bd90(lVar1,local_88,lStack_80);
          *(undefined4 *)(lVar1 + 8) = 0;
          *(uint *)(param_1 + 1) = uVar5 + 1;
        }
        *(undefined4 *)(*param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = uVar2;
        goto LAB_004c9c18;
      }
      local_88 = *puVar6;
      lStack_80 = puVar6[1];
      local_78 = 0;
      uStack_70 = 0;
      lVar8 = lVar8 + -0x10;
    } while (0 < lVar7);
  }
  return;
}

