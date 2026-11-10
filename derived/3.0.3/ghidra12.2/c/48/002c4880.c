
undefined8 FUN_002c4880(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined8 local_7c;
  undefined4 local_74;
  int local_70 [4];
  
  puVar8 = PTR_DAT_04bce1e8;
  puVar7 = PTR_DAT_04bce1e0;
  puVar6 = PTR_DAT_04bce1d8;
  lVar1 = param_1 + 0x20;
  lVar2 = param_1 + 8;
  iVar11 = 100;
  do {
    uVar4 = *(ushort *)puVar7;
    uVar5 = *(ushort *)puVar8;
    uVar9 = FUN_0028d5ac(&DAT_04c612a0);
    uVar3 = (uint)uVar4 + (int)((ulong)((uint)uVar5 - (uint)uVar4) * (uVar9 & 0xffffffff) >> 0x20);
    uVar10 = (undefined2)uVar3;
    if ((uint)*(ushort *)puVar6 != (uVar3 & 0xffff) && (uVar3 & 0xffff) != 0) goto LAB_002c4910;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar10 = 0;
LAB_002c4910:
  *(undefined2 *)(param_1 + 0x38) = uVar10;
  FUN_00226a50(local_70,lVar2,lVar1,0xffffffff,0);
  if (local_70[0] != 0) {
    local_74 = 0;
    local_7c = 0x40000;
    FUN_00220138(lVar1,&local_7c);
    iVar11 = 100;
    do {
      uVar4 = *(ushort *)puVar7;
      uVar5 = *(ushort *)puVar8;
      uVar9 = FUN_0028d5ac(&DAT_04c612a0);
      uVar3 = (uint)uVar4 + (int)((ulong)((uint)uVar5 - (uint)uVar4) * (uVar9 & 0xffffffff) >> 0x20)
      ;
      uVar10 = (undefined2)uVar3;
      if ((uint)*(ushort *)puVar6 != (uVar3 & 0xffff) && (uVar3 & 0xffff) != 0) goto LAB_002c49a0;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    uVar10 = 0;
LAB_002c49a0:
    *(undefined2 *)(param_1 + 0x38) = uVar10;
    FUN_00226a50(local_70,lVar2,lVar1,0xffffffff,0);
    if (local_70[0] != 0) {
      local_74 = 0;
      local_7c = 0x40000;
      FUN_00220138(lVar1,&local_7c);
      iVar11 = 100;
      do {
        uVar4 = *(ushort *)puVar7;
        uVar5 = *(ushort *)puVar8;
        uVar9 = FUN_0028d5ac(&DAT_04c612a0);
        uVar3 = (uint)uVar4 +
                (int)((ulong)((uint)uVar5 - (uint)uVar4) * (uVar9 & 0xffffffff) >> 0x20);
        uVar10 = (undefined2)uVar3;
        if ((uint)*(ushort *)puVar6 != (uVar3 & 0xffff) && (uVar3 & 0xffff) != 0) goto LAB_002c4a30;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar10 = 0;
LAB_002c4a30:
      *(undefined2 *)(param_1 + 0x38) = uVar10;
      FUN_00226a50(local_70,lVar2,lVar1,0xffffffff,0);
      if (local_70[0] != 0) {
        local_74 = 0;
        local_7c = 0x40000;
        FUN_00220138(lVar1,&local_7c);
        iVar11 = 100;
        do {
          uVar4 = *(ushort *)puVar7;
          uVar5 = *(ushort *)puVar8;
          uVar9 = FUN_0028d5ac(&DAT_04c612a0);
          uVar3 = (uint)uVar4 +
                  (int)((ulong)((uint)uVar5 - (uint)uVar4) * (uVar9 & 0xffffffff) >> 0x20);
          uVar10 = (undefined2)uVar3;
          if ((uint)*(ushort *)puVar6 != (uVar3 & 0xffff) && (uVar3 & 0xffff) != 0)
          goto LAB_002c4ac0;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        uVar10 = 0;
LAB_002c4ac0:
        *(undefined2 *)(param_1 + 0x38) = uVar10;
        FUN_00226a50(local_70,lVar2,lVar1,0xffffffff,0);
        if (local_70[0] != 0) {
          local_74 = 0;
          local_7c = 0x40000;
          FUN_00220138(lVar1,&local_7c);
          iVar11 = 100;
          do {
            uVar4 = *(ushort *)puVar7;
            uVar5 = *(ushort *)puVar8;
            uVar9 = FUN_0028d5ac(&DAT_04c612a0);
            uVar3 = (uint)uVar4 +
                    (int)((ulong)((uint)uVar5 - (uint)uVar4) * (uVar9 & 0xffffffff) >> 0x20);
            uVar10 = (undefined2)uVar3;
            if ((uint)*(ushort *)puVar6 != (uVar3 & 0xffff) && (uVar3 & 0xffff) != 0)
            goto LAB_002c4b50;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar10 = 0;
LAB_002c4b50:
          *(undefined2 *)(param_1 + 0x38) = uVar10;
          FUN_00226a50(local_70,lVar2,lVar1,0xffffffff,0);
          if (local_70[0] != 0) {
            local_74 = 0;
            local_7c = 0x40000;
            FUN_00220138(lVar1,&local_7c);
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

