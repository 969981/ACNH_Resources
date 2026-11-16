
void FUN_0269add0(long *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_6c;
  undefined *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  int local_5c;
  long local_58;
  undefined4 local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar3;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_60 = *(undefined2 *)param_2;
      local_5e = *(undefined1 *)((long)param_2 + 2);
      local_5d = *(undefined1 *)((long)param_2 + 3);
      local_38 = *param_2;
      local_5c = param_2[1];
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_58 = 0;
      local_34 = local_5c;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
            local_58 = lVar8;
          }
        }
      }
      uVar5 = FUN_01ae59b0(&local_68);
      if ((uVar5 & 1) != 0) {
        local_74 = 0;
        FUN_01afbaa4(&local_70,param_2,&local_74);
        local_38 = local_70;
        local_34 = iStack_6c;
      }
      puVar2 = PTR_DAT_04bb37e0;
      if (0 < *(int *)param_1[1]) {
        lVar8 = 0;
        uVar5 = 0;
        do {
          lVar7 = *(long *)puVar3;
          lVar9 = *param_1 + lVar8;
          if (0x37 < uVar5) {
            lVar9 = *param_1;
          }
          uVar4 = FUN_0277d6c4(lVar9);
          if (*(long *)puVar3 != 0) {
            lVar9 = *(long *)(lVar7 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar9 = *param_1 + lVar8;
              if (0x37 < uVar5) {
                lVar9 = *param_1;
              }
              uVar6 = FUN_0277d7b4(lVar9,&local_38);
              if ((((uVar6 & 1) != 0) && (*(char *)(lVar9 + 3) == local_38._3_1_)) &&
                 (*(int *)(lVar9 + 4) == local_34)) {
                puVar1 = (undefined2 *)(*param_1 + lVar8);
                if (0x37 < uVar5) {
                  puVar1 = (undefined2 *)*param_1;
                }
                *puVar1 = *(undefined2 *)puVar2;
                *(undefined *)(puVar1 + 1) = puVar2[2];
                *(undefined *)((long)puVar1 + 3) = puVar2[3];
                *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 4);
              }
            }
          }
          uVar5 = uVar5 + 1;
          lVar8 = lVar8 + 8;
        } while ((long)uVar5 < (long)*(int *)param_1[1]);
      }
    }
  }
  return;
}

