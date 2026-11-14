
void FUN_0153cf8c(long param_1,long param_2,undefined8 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [8];
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  if (*(long *)(param_1 + 0x290) != 0) {
    iVar2 = *param_4;
    iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 0x68) + 0x2b4);
    FUN_01476a50(&local_b8);
    puVar4 = PTR_DAT_04bb43c0;
    local_78 = 0;
    local_88 = PTR_DAT_04bc0510 + 0x10;
    local_80 = (float)local_b8;
    uStack_7c = local_b8._4_4_;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar4 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_b8);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
          local_78 = lVar6;
        }
      }
    }
    FUN_01afade0(&local_88);
    local_a8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_a0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_98 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    local_90 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_b8 = *(undefined8 *)PTR_DAT_04bb2f80;
    local_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    FUN_0153cdf4(param_1,&local_b8,param_3,param_4,param_5);
    fVar7 = local_b0._4_4_ + local_b8._4_4_ * 0.0 + (float)local_b8 * 0.0 + (float)local_b0 * 0.0;
    fVar8 = local_90._4_4_ + local_98._4_4_ * 0.0 + (float)local_98 * 0.0 + (float)local_90 * 0.0;
    FUN_01473944(auStack_c8,*(undefined8 *)(param_1 + 0x290));
    iVar1 = local_c0;
    if ((iVar3 + iVar2 + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar1 = iStack_bc;
      iStack_bc = local_c0;
    }
    fVar7 = fVar7 - ((float)iStack_bc * 0.5 * 5.0 + -2.5);
    fVar8 = fVar8 - ((float)iVar1 * 0.5 * 5.0 + -2.5);
    *(undefined4 *)(param_2 + 8) = local_80;
    *(undefined4 *)(param_2 + 0xc) = uStack_7c;
    *(uint *)(param_2 + 0x18) = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    *(uint *)(param_2 + 0x1c) = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  }
  return;
}

