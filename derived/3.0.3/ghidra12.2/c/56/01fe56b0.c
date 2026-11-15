
undefined8 FUN_01fe56b0(long *param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  long local_98;
  undefined1 local_8c [4];
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = 0;
  iStack_64 = 0;
  local_8c[0] = 0;
  lVar6 = *param_1;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  iStack_74 = 0;
  if (*param_2 != 0) {
    puVar8 = *(undefined8 **)(param_2 + 2);
    lVar9 = (long)*param_2 << 3;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puStack_70 = puStack_80;
    do {
      if (*(uint *)*puVar8 < *(uint *)param_1[2]) {
        puVar7 = *(undefined2 **)
                  (*(long *)((uint *)param_1[2] + 2) + (long)(int)*(uint *)*puVar8 * 8);
      }
      else {
        puVar7 = (undefined2 *)0x0;
      }
      lVar10 = *(long *)puVar2;
      local_a0 = *puVar7;
      local_9e = *(undefined1 *)(puVar7 + 1);
      local_9d = *(undefined1 *)((long)puVar7 + 3);
      local_9c = *(undefined4 *)(puVar7 + 2);
      local_98 = 0;
      local_a8 = puVar1;
      uVar3 = FUN_0277d6c4(&local_a0);
      if (*(long *)puVar2 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(puVar7);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8), lVar10 != 0)) {
            local_98 = lVar10;
          }
        }
      }
      FUN_01afb480(&local_a8,&local_88);
      local_78 = local_78 + *(int *)(puVar7 + 8);
      iStack_74 = iStack_74 + *(int *)(puVar7 + 10);
      local_68 = local_68 + *(int *)(puVar7 + 8);
      iStack_64 = iStack_64 + *(int *)(puVar7 + 10);
      uVar4 = FUN_01fab8b0(lVar6,&local_88);
      if (((uVar4 & 1) == 0) &&
         (uVar4 = FUN_021f4650(puVar7,&local_88,lVar6 + 0x188,local_8c), (uVar4 & 1) != 0)) {
        puVar5 = (undefined2 *)param_1[1];
        *puVar5 = *puVar7;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar7 + 2);
        lVar6 = param_1[1];
        *(int *)(lVar6 + 0x28) = local_78;
        *(int *)(lVar6 + 0x2c) = iStack_74;
        *(int *)(lVar6 + 0x38) = local_68;
        *(int *)(lVar6 + 0x3c) = iStack_64;
        *(undefined1 *)(param_1[1] + 0x14) = local_8c[0];
        return 1;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return 0;
}

