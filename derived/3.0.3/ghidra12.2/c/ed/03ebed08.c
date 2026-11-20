
undefined8
FUN_03ebed08(long param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5,uint param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [4];
  long local_168;
  undefined1 local_6d;
  
  plVar10 = (long *)(param_1 + 0x10);
  lVar12 = *plVar10;
  *plVar10 = (long)&DAT_0407ebb1;
  plVar11 = (long *)(param_1 + 8);
  *plVar11 = 0;
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x178))
                    (*(long **)(param_1 + 0x18),param_2,plVar11,plVar10);
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar4 + 8) + 0x10);
    uVar8 = iVar3 + 1;
    if ((iVar3 < (int)(*(uint *)(lVar4 + 0x38) - 1) && uVar8 < *(uint *)(lVar4 + 0x38)) &&
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + (long)(int)uVar8 * 8), lVar4 != 0)) {
      uVar9 = FUN_03ed4c40(lVar4,param_1,param_2,plVar10);
      if (((uVar9 & 1) == 0) && ((param_6 & 1) == 0)) {
        lVar5 = *(long *)(param_1 + 0x18);
LAB_03ebede4:
        local_6d = 0;
        local_170 = 0x100;
        puStack_178 = local_16c;
        local_16c[0] = 0;
        local_180 = PTR_DAT_04bb21f8 + 0x10;
        lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
        FUN_038d1270(&local_180,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
        return 0;
      }
      if ((uVar9 & 1) != 0) goto LAB_03ebed7c;
    }
    else if ((param_6 & 1) == 0) goto LAB_03ebede4;
LAB_03ebeeb4:
    uVar6 = 0;
  }
  else {
LAB_03ebed7c:
    if (((param_4 & 1) != 0) && (lVar5 = *plVar11, lVar5 != 0)) {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x5a);
      if ((short)uVar1 < 0) {
        lVar7 = 0;
        uVar8 = *(uint *)(lVar5 + 0xc);
        if (-1 < (int)uVar8) goto LAB_03ebedac;
LAB_03ebee78:
        uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x118))
                          (*(long **)(param_1 + 0x18),*(undefined8 *)(lVar7 + 0x10),uVar8 & 0xffff);
        iVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x128))(*(long **)(param_1 + 0x20),uVar2)
        ;
      }
      else {
        uVar9 = (ulong)uVar1;
        if (3 < uVar1) {
          uVar9 = 0;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x70) + uVar9 * 8);
        uVar8 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar8 < 0) goto LAB_03ebee78;
LAB_03ebedac:
        iVar3 = *(int *)(lVar5 + 0x10);
      }
      if ((iVar3 != 0) && (*plVar10 == lVar12)) goto LAB_03ebeeb4;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0xf0) = uVar2;
    local_170 = 0x3f800000;
    local_180 = *(undefined **)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x48) = 0;
    *(undefined4 *)(param_3 + 0xa0) = 0;
    *(undefined4 *)(param_3 + 0x54) = 0;
    *(undefined4 *)(param_3 + 0xb0) = 0;
    *(undefined1 *)(param_3 + 0x58) = 0;
    *(undefined8 *)(param_3 + 0xa8) = uVar6;
    *(undefined2 *)(param_3 + 0x50) = 0xffff;
    lVar12 = *(long *)(param_1 + 0x98);
    *(undefined4 *)(lVar12 + 0xb0) = 0;
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x98) = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined8 *)(lVar12 + 0xa0) = 0;
    *(undefined8 *)(lVar12 + 0xa8) = 0;
    lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    puStack_178 = (undefined1 *)param_1;
    local_168 = param_3;
    FUN_03ed9d40(*(undefined8 *)
                  (*(long *)(lVar12 + 0x40) + (long)*(int *)(*(long *)(lVar12 + 8) + 0x10) * 8),
                 &local_180,*(undefined8 *)(param_1 + 0x70),lVar4,param_5 & 1);
    FUN_03ebef90(0x3f800000,param_1,param_3);
    uVar6 = 1;
  }
  return uVar6;
}

