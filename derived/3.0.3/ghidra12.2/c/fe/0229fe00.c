
void FUN_0229fe00(int *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *__dest;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *local_250;
  undefined1 *local_248;
  int local_240;
  undefined1 local_23c [255];
  undefined1 local_13d;
  ulong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) || (*(char *)(lVar6 + 0x11c8) != '\0')) {
    uStack_12c = 0xc3fa0000;
  }
  else {
    uStack_12c = FUN_0093a950(lVar6 + 0x28,&local_60,0);
  }
  puVar5 = PTR_PTR_04bb2238;
  local_60 = CONCAT44(uStack_12c,(undefined4)local_60);
  local_138 = 0xb400000000;
  local_124 = 0x3f800000;
  local_100 = local_f4;
  local_f8 = 0x80;
  local_75 = 0;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_f4[0] = 0;
  local_68 = 0;
  local_6c = 0;
  local_11c = 0;
  local_114 = 0;
  local_70 = 7;
  puVar7 = *(undefined **)(PTR_PTR_04bb2238 + 8);
  local_130 = (undefined4)local_60;
  local_128 = local_58;
  if (*param_1 - 1U < 6) {
    puVar7 = (&PTR_s_WherearenObjBinder_04a7e5d8)[(int)(*param_1 - 1U)];
  }
  local_240 = 0x100;
  local_13d = 0;
  local_250 = PTR_DAT_04bb4520 + 0x10;
  local_248 = local_23c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar8 = *(undefined1 **)(puVar5 + 8);
  if (local_23c != puVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_0229ff8c;
      lVar1 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0229ff8c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0229ff8c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0229ff8c:
    iVar4 = (int)lVar6;
    if (local_240 <= (int)lVar6) {
      iVar4 = local_240 + -1;
    }
    memcpy(local_23c,puVar8,(long)iVar4);
    local_23c[iVar4] = 0;
  }
  local_250 = PTR_DAT_04bb21f8 + 0x10;
  FUN_038d1270(&local_250,"%s/None/None/%s",puVar7,puVar7);
  puVar8 = local_248;
  if (*param_1 == 2) {
    (**(code **)(local_250 + 0x18))(&local_250);
    lVar6 = 0;
    do {
      if (local_248[lVar6] == '\0') goto LAB_022a0050;
      if (local_248[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_022a0050;
      }
      if (local_248[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_022a0050;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_022a0050:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar3 = 8;
    if ((int)(local_240 - uVar2) < 9) {
      uVar3 = local_240 + ~uVar2;
    }
    if (0 < (int)uVar3) {
      memcpy(puVar8 + uVar2,"/XLinkOn",(ulong)uVar3);
      puVar8[(ulong)uVar3 + (ulong)uVar2] = 0;
    }
  }
  __dest = local_100;
  (**(code **)(local_250 + 0x18))(&local_250);
  puVar8 = local_248;
  if (__dest != local_248) {
    (**(code **)(local_250 + 0x18))(&local_250);
    lVar6 = 0;
    do {
      if (local_248[lVar6] == '\0') goto LAB_022a010c;
      if (local_248[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_022a010c;
      }
      if (local_248[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_022a010c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_022a010c:
    iVar4 = (int)lVar6;
    if (local_f8 <= (int)lVar6) {
      iVar4 = local_f8 + -1;
    }
    memcpy(__dest,puVar8,(long)iVar4);
    __dest[iVar4] = 0;
  }
  local_11c = CONCAT44(local_11c._4_4_,*param_1);
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_138,local_138 & 0xffffffff,1);
  return;
}

