
void FUN_011d26ec(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar6 = malloc(0x2e0);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_011d2778;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e0,8);
  }
LAB_011d2778:
  FUN_00705c50(plVar6);
  plVar6[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar6[0x50] = 0;
  plVar6[0x53] = -0x100000000;
  plVar6[0x52] = (long)(plVar6 + 0x51);
  plVar6[0x51] = (long)(plVar6 + 0x51);
  *plVar6 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar6 + 0x54);
  pcVar8 = (char *)plVar6[0xc];
  if (pcVar8 != "Family") {
    iVar1 = 6;
    if ((int)plVar6[0xd] < 7) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(pcVar8,"Family",(long)iVar1);
    pcVar8[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar6 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    plVar6 = malloc(0x2a8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar7 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar6 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_011d287c;
    }
    plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2a8,8);
  }
LAB_011d287c:
  FUN_00705c50(plVar6);
  *(undefined4 *)(plVar6 + 0x51) = 0;
  puVar3 = PTR_DAT_04bb35d0;
  pcVar8 = (char *)plVar6[0xc];
  *(undefined4 *)(plVar6 + 0x52) = 0;
  plVar6[0x53] = 0;
  *(undefined2 *)(plVar6 + 0x54) = 0;
  plVar6[0x50] = (long)(plVar6 + 0x4f);
  plVar6[0x4f] = (long)(plVar6 + 0x4f);
  *plVar6 = (long)(puVar3 + 0x10);
  if (pcVar8 != "ModelResLoader") {
    iVar1 = 0xe;
    if ((int)plVar6[0xd] < 0xf) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(pcVar8,"ModelResLoader",(long)iVar1);
    pcVar8[iVar1] = '\0';
  }
  *(undefined4 *)((long)plVar6 + 0x28c) = 8;
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  local_118 = 0;
  local_114 = 0x3f800000;
  local_128 = 0xffffffff00000000;
  uStack_120 = 0;
  puStack_f0 = local_e4;
  local_e8 = 0x80;
  local_65 = 0;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_e4[0] = 0;
  local_58 = 0;
  local_5c = 0;
  local_10c = 0;
  local_104 = 0;
  local_60 = 7;
  if (DAT_050dfb2c == 0) {
    local_128 = 0x6800000000;
    DAT_050dfb2c = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,
                                *(undefined4 *)(param_1 + 0x230),0);
  }
  if (DAT_050dfb30 == 0) {
    local_10c = CONCAT44(local_10c._4_4_,1);
    DAT_050dfb30 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,
                                *(undefined4 *)(param_1 + 0x230),0);
  }
  return;
}

