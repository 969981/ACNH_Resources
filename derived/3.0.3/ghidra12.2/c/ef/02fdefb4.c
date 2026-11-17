
void FUN_02fdefb4(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  
  if ((int)param_1[2] < (int)param_1[1]) {
    iVar6 = FUN_0277d6c4(param_2);
    puVar5 = PTR_DAT_04bb43c0;
    if (iVar6 == 0x1c2a) {
      FUN_007ef010(auStack_22,param_3);
      FUN_00805ba8(&local_58,auStack_22);
      iVar6 = (int)param_1[2];
      iVar4 = (int)param_1[1];
      if (iVar6 < iVar4) {
        *(int *)(param_1 + 2) = iVar6 + 1;
        iVar6 = *(int *)((long)param_1 + 0xc) + iVar6;
        iVar3 = 0;
        if (iVar4 <= iVar6) {
          iVar3 = iVar4;
        }
        puVar1 = (undefined2 *)(*param_1 + (long)(iVar6 - iVar3) * 8);
        *puVar1 = (undefined2)local_58;
        *(undefined1 *)(puVar1 + 1) = local_58._2_1_;
        *(undefined1 *)((long)puVar1 + 3) = local_58._3_1_;
        *(undefined4 *)(puVar1 + 2) = local_58._4_4_;
      }
    }
    else {
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(param_2);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
            local_48 = lVar8;
          }
        }
      }
      FUN_007ef010(auStack_24,param_3);
      FUN_01b08ab4(&local_58,auStack_24);
      iVar6 = (int)param_1[2];
      iVar4 = (int)param_1[1];
      if (iVar6 < iVar4) {
        *(int *)(param_1 + 2) = iVar6 + 1;
        iVar6 = *(int *)((long)param_1 + 0xc) + iVar6;
        iVar3 = 0;
        if (iVar4 <= iVar6) {
          iVar3 = iVar4;
        }
        puVar2 = (undefined4 *)(*param_1 + (long)(iVar6 - iVar3) * 8);
        *puVar2 = local_50;
        puVar2[1] = uStack_4c;
      }
    }
  }
  return;
}

