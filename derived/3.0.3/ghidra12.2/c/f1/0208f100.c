
void FUN_0208f100(undefined8 param_1,int param_2,byte param_3,int param_4,byte param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  undefined4 local_224;
  undefined4 local_220;
  byte local_21c;
  undefined1 local_21b;
  byte local_21a;
  undefined8 *****local_218;
  undefined8 *****local_210;
  undefined4 local_208;
  undefined8 *****local_200;
  int *piStack_1f8;
  undefined4 local_1f0;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined8 *****pppppuStack_1e0;
  undefined8 *****local_1d8;
  undefined8 *****apppppuStack_1d0 [3];
  undefined8 *****local_1b8 [3];
  undefined8 *****local_1a0 [3];
  undefined8 *****local_188 [3];
  undefined8 *****local_170 [3];
  undefined8 *****local_158 [3];
  undefined8 *****local_140 [3];
  undefined8 *****local_128 [3];
  undefined8 *****local_110 [3];
  undefined8 *****local_f8 [3];
  undefined8 *****local_e0 [3];
  undefined8 ****local_c8 [3];
  undefined8 ***local_b0 [3];
  undefined8 **local_98 [3];
  undefined8 *local_80 [3];
  undefined8 local_68 [3];
  
  lVar4 = FUN_021c9770(param_2,1);
  if (lVar4 == 0) {
    return;
  }
  local_224 = FUN_0208bb48();
  local_220 = FUN_0208db10();
  local_21b = 0;
  local_21c = param_3 & 1;
  local_21a = param_5 & 1;
  if (param_4 != 3) {
    FUN_020939a8(lVar4 + 0x10,param_4,1,0);
    if (param_4 == 2) {
      local_1a0[0] = local_188;
      local_1b8[0] = local_1a0;
      local_68[0] = 0;
      local_188[0] = local_170;
      piStack_1f8 = &local_1e8;
      local_200 = apppppuStack_1d0;
      local_170[0] = local_158;
      local_158[0] = local_140;
      local_128[0] = local_110;
      local_218 = &pppppuStack_1e0;
      pppppuVar7 = &local_210;
      local_140[0] = local_128;
      local_f8[0] = local_e0;
      local_110[0] = local_f8;
      local_c8[0] = local_b0;
      local_e0[0] = local_c8;
      local_98[0] = local_80;
      local_b0[0] = local_98;
      local_80[0] = local_68;
      local_1f0 = 0x11;
      apppppuStack_1d0[0] = local_1b8;
      local_208 = 1;
      uStack_1e4 = (undefined4)((ulong)local_200 >> 0x20);
      _local_1e8 = CONCAT44(uStack_1e4,param_2);
      local_210 = local_218;
      pppppuStack_1e0 = &local_218;
      local_1d8 = &local_218;
      FUN_02090590(param_1,&local_218,&local_224);
      do {
        pppppuVar5 = (undefined8 *****)*pppppuVar7;
        pppppuVar7 = pppppuVar5 + 1;
      } while ((undefined8 ******)pppppuVar5 != &local_218);
    }
    else {
      *(undefined8 *)(lVar4 + 0x1f8) = 0x1244db4da;
      if ((int)DAT_05453fec == param_2) {
        DAT_05453fec._0_4_ = -1;
      }
      if (DAT_05453fec._4_4_ == param_2) {
        DAT_05453fec._4_4_ = -1;
      }
    }
    goto LAB_0208f440;
  }
  pppppuStack_1e0 = &local_218;
  local_1b8[0] = local_1a0;
  local_1a0[0] = local_188;
  piStack_1f8 = &local_1e8;
  local_68[0] = 0;
  local_188[0] = local_170;
  local_200 = apppppuStack_1d0;
  local_158[0] = local_140;
  local_170[0] = local_158;
  local_128[0] = local_110;
  local_f8[0] = local_e0;
  local_140[0] = local_128;
  local_c8[0] = local_b0;
  local_110[0] = local_f8;
  local_98[0] = local_80;
  local_e0[0] = local_c8;
  local_b0[0] = local_98;
  local_1f0 = 0x11;
  apppppuStack_1d0[0] = local_1b8;
  local_80[0] = local_68;
  local_218 = &pppppuStack_1e0;
  uStack_1e4 = (undefined4)((ulong)local_200 >> 0x20);
  _local_1e8 = CONCAT44(uStack_1e4,param_2);
  *(undefined8 *)(lVar4 + 0x1f8) = 0x1244db4da;
  local_208 = 1;
  if ((int)DAT_05453fec == param_2) {
    DAT_05453fec._0_4_ = -1;
  }
  if (DAT_05453fec._4_4_ == param_2) {
    DAT_05453fec._4_4_ = -1;
  }
  pppppuVar7 = &local_210;
  iVar6 = *(int *)(lVar4 + 0x40);
  iVar3 = *(int *)(lVar4 + 0x38);
  if (iVar6 < iVar3) {
LAB_0208f2a8:
    *(int *)(lVar4 + 0x40) = iVar6 + 1;
    iVar6 = *(int *)(lVar4 + 0x3c) + iVar6;
    iVar2 = 0;
    if (iVar3 <= iVar6) {
      iVar2 = iVar3;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(iVar6 - iVar2) * 0x10);
    *puVar1 = 0x300000000;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined2 *)((long)puVar1 + 0xc) = 0;
  }
  else {
    if (0 < iVar6) {
      iVar2 = 0;
      if (*(int *)(lVar4 + 0x3c) + 1 < iVar3) {
        iVar2 = *(int *)(lVar4 + 0x3c) + 1;
      }
      *(int *)(lVar4 + 0x3c) = iVar2;
      *(int *)(lVar4 + 0x40) = iVar6 + -1;
      iVar6 = iVar6 + -1;
    }
    if (iVar6 < iVar3) goto LAB_0208f2a8;
  }
  local_210 = local_218;
  local_1d8 = pppppuStack_1e0;
  FUN_0208bea0(param_1,&local_218,&local_224);
  do {
    pppppuVar5 = (undefined8 *****)*pppppuVar7;
    pppppuVar7 = pppppuVar5 + 1;
  } while ((undefined8 ******)pppppuVar5 != &local_218);
LAB_0208f440:
  FUN_0208c220(lVar4 + 0x10,param_5 & 1);
  return;
}

