
undefined8 FUN_003d41bc(long *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((char)param_1[4] == '\x01') {
    FUN_003d43e8(param_1 + 3,param_2);
    return 1;
  }
  if ((char)param_1[4] == '\0') {
    uVar2 = *(uint *)((byte *)param_1[1] + 0x14);
    uVar8 = (uint)*(byte *)param_1[1];
    param_2[2] = uVar2;
    if (1 < uVar8) {
      uVar8 = 2;
    }
    *param_2 = uVar8;
    param_2[3] = *(uint *)(param_1[1] + 4);
    *(bool *)(param_2 + 1) = *(char *)(param_1[1] + 1) == '\x01';
    *(ulong *)(param_2 + 4) = (ulong)*(uint *)(param_1[1] + 8);
    *(ulong *)(param_2 + 6) = (ulong)*(uint *)(param_1[1] + 0xc);
    *(ulong *)(param_2 + 10) = (ulong)*(uint *)(*param_1 + 0xc) - 0x20;
    lVar4 = 0x10;
    if (*(uint *)(*param_1 + 8) >> 9 < 0x81) {
      lVar4 = 8;
    }
    *(ulong *)(param_2 + 8) = (ulong)*(uint *)(param_1[1] + lVar4);
    if (0 < (int)uVar2) {
      lVar4 = FUN_003d44f4(param_1[1],0);
      if (*(int *)(lVar4 + 0xc) != 0) {
        puVar5 = (undefined8 *)FUN_003d4524(lVar4);
        *(undefined8 *)(param_2 + 0xf) = *puVar5;
        uVar9 = *(undefined8 *)((long)puVar5 + 0x1e);
        uVar6 = puVar5[2];
        uVar1 = puVar5[3];
        *(undefined8 *)(param_2 + 0x11) = puVar5[1];
        *(undefined8 *)((long)param_2 + 0x5a) = uVar9;
        *(undefined8 *)(param_2 + 0x15) = uVar1;
        *(undefined8 *)(param_2 + 0x13) = uVar6;
        uVar3 = *(undefined2 *)((long)puVar5 + 0x2a);
        *(undefined4 *)((long)param_2 + 0x62) = *(undefined4 *)((long)puVar5 + 0x26);
        *(undefined2 *)((long)param_2 + 0x66) = uVar3;
      }
      uVar6 = FUN_003d4518(lVar4,param_1[2]);
      *(undefined8 *)(param_2 + 0xc) = uVar6;
      lVar4 = FUN_003d44f4(param_1[1],uVar2 - 1);
      lVar7 = FUN_003d44b0(*param_1);
      param_2[0xe] = (*(int *)(lVar7 + 4) - *(int *)(lVar4 + 4)) - 8;
      if (uVar2 != 1) {
        lVar4 = FUN_003d44f4(param_1[1],1);
        if (*(int *)(lVar4 + 0xc) != 0) {
          puVar5 = (undefined8 *)FUN_003d4524(lVar4);
          *(undefined8 *)(param_2 + 0x1d) = *puVar5;
          uVar9 = *(undefined8 *)((long)puVar5 + 0x1e);
          uVar6 = puVar5[2];
          uVar1 = puVar5[3];
          *(undefined8 *)(param_2 + 0x1f) = puVar5[1];
          *(undefined8 *)((long)param_2 + 0x92) = uVar9;
          *(undefined8 *)(param_2 + 0x23) = uVar1;
          *(undefined8 *)(param_2 + 0x21) = uVar6;
          uVar3 = *(undefined2 *)((long)puVar5 + 0x2a);
          *(undefined4 *)((long)param_2 + 0x9a) = *(undefined4 *)((long)puVar5 + 0x26);
          *(undefined2 *)((long)param_2 + 0x9e) = uVar3;
        }
        uVar6 = FUN_003d4518(lVar4,param_1[2]);
        *(undefined8 *)(param_2 + 0x1a) = uVar6;
        lVar4 = FUN_003d44f4(param_1[1],uVar2 - 1);
        lVar7 = FUN_003d44b0(*param_1);
        param_2[0x1c] = (*(int *)(lVar7 + 4) - *(int *)(lVar4 + 4)) - 8;
      }
    }
  }
  return 1;
}

