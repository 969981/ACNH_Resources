
void FUN_039858ec(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_d8 = "agl::WorkHeap";
  uVar5 = FUN_038c6d48(param_4,&local_e0,param_2,8,1,1);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  lVar2 = DAT_05ae7600;
  if ((param_6 & 1) == 0) {
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar8 = malloc(0xe0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar2 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar8 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_039859b8;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0xe0,8);
  }
LAB_039859b8:
  *(void **)(param_1 + 0x60) = pvVar8;
  local_90[0] = 0xffffffff;
  local_58 = 0;
  pcStack_50 = "agl::TextureData";
  local_48 = 0x10000;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (undefined *)0x0;
  pcStack_d8 = (char *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_0390a734(&local_e0,1,0x1d,0x20,0x20,1,1,0,0,1);
  lVar2 = DAT_05ae7600;
  uVar3 = uStack_a8._4_4_;
  iVar4 = (int)local_a0;
  uVar1 = local_a0 & 0xffffffff;
  if (param_2 == (long *)0x0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar2 + 8);
    if (lVar6 != 0) {
      param_2 = (long *)(lVar6 + 0xa8);
    }
    param_2 = (long *)*param_2;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfe;
  if (iVar4 != 0) {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x70,param_2,uVar1,uVar3,8);
  }
  *(undefined2 *)(param_1 + 0x9a) = 8;
  FUN_038fd0e0(local_90);
  return;
}

