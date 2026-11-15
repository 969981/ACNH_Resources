
void FUN_0208f470(undefined8 param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *****pppppuVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  undefined1 local_236;
  int local_234;
  undefined8 *****local_230;
  undefined8 *****local_228;
  undefined4 local_220;
  undefined8 *****local_218;
  int *piStack_210;
  undefined4 local_208;
  int local_200;
  undefined4 uStack_1fc;
  undefined8 *****local_1f8;
  undefined8 *****local_1f0;
  undefined8 *****apppppuStack_1e8 [3];
  undefined8 *****local_1d0 [3];
  undefined8 *****local_1b8 [3];
  undefined8 *****local_1a0 [3];
  undefined8 *****local_188 [3];
  undefined8 *****local_170 [3];
  undefined8 *****local_158 [3];
  undefined8 *****local_140 [3];
  undefined8 *****local_128 [3];
  undefined8 *****local_110 [3];
  undefined8 *****local_f8 [3];
  undefined8 ****local_e0 [3];
  undefined8 ***local_c8 [3];
  undefined8 **local_b0 [3];
  undefined8 *local_98 [3];
  undefined8 local_80 [4];
  
  local_234 = param_3;
  lVar5 = FUN_021c9770(param_2,1);
  if (lVar5 == 0) {
    return;
  }
  local_240 = FUN_0208bb48();
  local_23c = FUN_0208db10();
  local_238 = 1;
  local_236 = 0;
  local_80[0] = 0;
  local_208 = 0x11;
  *(undefined8 *)(lVar5 + 0x1f8) = 0x1244db4da;
  uStack_1fc = (undefined4)((ulong)apppppuStack_1e8 >> 0x20);
  uVar4 = uStack_1fc;
  _local_200 = CONCAT44(uStack_1fc,param_2);
  local_220 = 1;
  if ((int)DAT_05453fec == param_2) {
    DAT_05453fec._0_4_ = -1;
  }
  if (DAT_05453fec._4_4_ == param_2) {
    DAT_05453fec._4_4_ = -1;
  }
  iVar7 = *(int *)(lVar5 + 0x40);
  pppppuVar9 = &local_228;
  iVar3 = *(int *)(lVar5 + 0x38);
  if (iVar7 < iVar3) {
LAB_0208f624:
    *(int *)(lVar5 + 0x40) = iVar7 + 1;
    iVar7 = *(int *)(lVar5 + 0x3c) + iVar7;
    iVar2 = 0;
    if (iVar3 <= iVar7) {
      iVar2 = iVar3;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)(iVar7 - iVar2) * 0x10);
    *puVar1 = 0x300000000;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 0;
  }
  else {
    if (0 < iVar7) {
      iVar2 = 0;
      if (*(int *)(lVar5 + 0x3c) + 1 < iVar3) {
        iVar2 = *(int *)(lVar5 + 0x3c) + 1;
      }
      *(int *)(lVar5 + 0x3c) = iVar2;
      *(int *)(lVar5 + 0x40) = iVar7 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar7 < iVar3) goto LAB_0208f624;
  }
  local_230 = &local_1f8;
  local_228 = &local_1f8;
  local_218 = apppppuStack_1e8;
  piStack_210 = &local_200;
  local_1f8 = &local_230;
  local_1f0 = &local_230;
  apppppuStack_1e8[0] = local_1d0;
  local_1d0[0] = local_1b8;
  local_1b8[0] = local_1a0;
  local_1a0[0] = local_188;
  local_188[0] = local_170;
  local_170[0] = local_158;
  local_158[0] = local_140;
  local_140[0] = local_128;
  local_128[0] = local_110;
  local_110[0] = local_f8;
  local_f8[0] = local_e0;
  local_e0[0] = local_c8;
  local_c8[0] = local_b0;
  local_b0[0] = local_98;
  local_98[0] = local_80;
  FUN_0208bea0(param_1,&local_230,&local_240);
  pppppuVar6 = pppppuVar9;
  do {
    pppppuVar8 = (undefined8 *****)*pppppuVar6;
    pppppuVar6 = pppppuVar8 + 1;
  } while ((undefined8 ******)pppppuVar8 != &local_230);
  if (local_234 != 3) {
    FUN_020939a8(lVar5 + 0x10,local_234,1,0);
    if (local_234 == 2) {
      local_80[0] = 0;
      _local_200 = CONCAT44(uVar4,param_2);
      local_208 = 0x11;
      local_220 = 1;
      local_230 = &local_1f8;
      local_228 = &local_1f8;
      local_218 = apppppuStack_1e8;
      piStack_210 = &local_200;
      local_1f8 = &local_230;
      local_1f0 = &local_230;
      apppppuStack_1e8[0] = local_1d0;
      local_1d0[0] = local_1b8;
      local_1b8[0] = local_1a0;
      local_1a0[0] = local_188;
      local_188[0] = local_170;
      local_170[0] = local_158;
      local_158[0] = local_140;
      local_140[0] = local_128;
      local_128[0] = local_110;
      local_110[0] = local_f8;
      local_f8[0] = local_e0;
      local_e0[0] = local_c8;
      local_c8[0] = local_b0;
      local_b0[0] = local_98;
      local_98[0] = local_80;
      FUN_02090590(param_1,&local_230,&local_240);
      do {
        pppppuVar6 = (undefined8 *****)*pppppuVar9;
        pppppuVar9 = pppppuVar6 + 1;
      } while ((undefined8 ******)pppppuVar6 != &local_230);
    }
    else {
      *(undefined4 *)(lVar5 + 0x1fc) = 1;
      *(undefined4 *)(lVar5 + 0x1f8) = 0x244db4da;
      if ((int)DAT_05453fec == param_2) {
        DAT_05453fec._0_4_ = -1;
      }
      if (DAT_05453fec._4_4_ == param_2) {
        DAT_05453fec._4_4_ = -1;
      }
    }
    goto LAB_0208f924;
  }
  local_80[0] = 0;
  local_208 = 0x11;
  local_1f8 = &local_230;
  _local_200 = CONCAT44(uVar4,param_2);
  *(undefined4 *)(lVar5 + 0x1f8) = 0x244db4da;
  *(undefined4 *)(lVar5 + 0x1fc) = 1;
  local_220 = 1;
  if ((int)DAT_05453fec == param_2) {
    DAT_05453fec._0_4_ = -1;
  }
  if (DAT_05453fec._4_4_ == param_2) {
    DAT_05453fec._4_4_ = -1;
  }
  iVar7 = *(int *)(lVar5 + 0x40);
  iVar3 = *(int *)(lVar5 + 0x38);
  if (iVar7 < iVar3) {
LAB_0208f7a4:
    *(int *)(lVar5 + 0x40) = iVar7 + 1;
    iVar7 = *(int *)(lVar5 + 0x3c) + iVar7;
    iVar2 = 0;
    if (iVar3 <= iVar7) {
      iVar2 = iVar3;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)(iVar7 - iVar2) * 0x10);
    *puVar1 = 0x300000000;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 0;
  }
  else {
    if (0 < iVar7) {
      iVar2 = 0;
      if (*(int *)(lVar5 + 0x3c) + 1 < iVar3) {
        iVar2 = *(int *)(lVar5 + 0x3c) + 1;
      }
      *(int *)(lVar5 + 0x3c) = iVar2;
      *(int *)(lVar5 + 0x40) = iVar7 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar7 < iVar3) goto LAB_0208f7a4;
  }
  local_230 = &local_1f8;
  local_228 = &local_1f8;
  local_218 = apppppuStack_1e8;
  piStack_210 = &local_200;
  local_1f0 = local_1f8;
  apppppuStack_1e8[0] = local_1d0;
  local_1d0[0] = local_1b8;
  local_1b8[0] = local_1a0;
  local_1a0[0] = local_188;
  local_188[0] = local_170;
  local_170[0] = local_158;
  local_158[0] = local_140;
  local_140[0] = local_128;
  local_128[0] = local_110;
  local_110[0] = local_f8;
  local_f8[0] = local_e0;
  local_e0[0] = local_c8;
  local_c8[0] = local_b0;
  local_b0[0] = local_98;
  local_98[0] = local_80;
  FUN_0208bea0(param_1,&local_230,&local_240);
  do {
    pppppuVar6 = (undefined8 *****)*pppppuVar9;
    pppppuVar9 = pppppuVar6 + 1;
  } while ((undefined8 ******)pppppuVar6 != &local_230);
LAB_0208f924:
  FUN_0208cbd0(lVar5 + 0x10);
  return;
}

