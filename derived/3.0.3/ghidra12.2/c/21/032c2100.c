
void FUN_032c2100(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long local_38;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_2c._0_4_ = 4;
  uVar9 = (uint)*(ushort *)(param_1 + 0x50);
  if ((*(ushort *)(param_1 + 0x50) >> 4 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      local_2c = 0;
      local_24 = 0;
      local_38 = *(long *)(param_1 + 0x20);
      FUN_032d3460(&local_38,&local_2c);
      puVar4 = PTR_DAT_04bc9358;
      uVar5 = (int)local_2c;
      local_2c._0_4_ = 3;
      uVar6 = (int)local_2c;
      puVar11 = *(uint **)PTR_DAT_04bc9358;
      local_2c._0_4_ = 3;
      if (*puVar11 < 4) {
        local_2c._0_4_ = 0;
      }
      puVar12 = (undefined4 *)(*(long *)(puVar11 + 2) + (long)(int)local_2c * 0xc);
      *puVar12 = uVar5;
      puVar12[1] = local_2c._4_4_;
      puVar3 = PTR_DAT_04bb4fb0;
      iVar2 = 3;
      if (*puVar11 < 4) {
        iVar2 = 0;
      }
      *(undefined1 *)(*(long *)(puVar11 + 2) + (long)iVar2 * 0xc + 8) = 1;
      lVar13 = *(long *)puVar3;
      local_2c._0_4_ = uVar6;
      uVar7 = FUN_03368ef0(*(undefined8 *)puVar4,3);
      lVar10 = *(long *)(lVar13 + 8);
      if (lVar10 != 0) {
        lVar1 = 0;
        if (*(char *)(lVar10 + 0x38) != '\0') {
          lVar1 = lVar10 + 8;
        }
        FUN_03366350(lVar13,lVar1,s_TouchUnselect_04b20a24,1,uVar7,0);
      }
    }
    if (*(long **)(param_1 + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
    }
    uVar9 = *(ushort *)(param_1 + 0x50) & 0xffffffef;
    *(short *)(param_1 + 0x50) = (short)uVar9;
  }
  uVar8 = (ushort)uVar9;
  local_2c._0_4_ = 3;
  if ((uVar9 >> 3 & 1) != 0) {
    if (*(long **)(param_1 + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
      uVar9 = (uint)*(ushort *)(param_1 + 0x50);
    }
    uVar8 = (ushort)uVar9;
    if ((((uVar9 >> 4 & 1) != 0) && (local_2c = CONCAT44(local_2c._4_4_,1), (uVar9 >> 1 & 1) == 0))
       && (*(long **)(param_1 + 0xf0) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
      uVar8 = *(ushort *)(param_1 + 0x50);
    }
    uVar8 = uVar8 & 0xffe7;
  }
  *(undefined2 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x21e) = 0;
  *(ushort *)(param_1 + 0x50) = uVar8 & 0xfffb;
  return;
}

