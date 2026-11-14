
void FUN_01bf13ec(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_3138;
  undefined1 auStack_3130 [8];
  undefined **local_3128;
  undefined8 *puStack_3120;
  code *local_3118;
  undefined8 uStack_3110;
  undefined **local_30f8;
  undefined1 auStack_30e0 [6192];
  undefined **local_18b0;
  undefined1 auStack_1898 [6200];
  undefined8 local_60;
  int *local_58;
  long local_50;
  undefined1 uStack_48;
  
  iVar3 = param_2[1];
  if (*param_2 == 1 && iVar3 - 1U < 0xfffffffe) {
    iVar4 = param_2[2];
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    uVar1 = iVar2 + iVar3 * 0x80;
    if (0x7f < iVar4 || 0x3ff < iVar3) {
      uVar1 = 0xffffffff;
    }
    if (-1 < (int)uVar1) {
      lVar7 = param_1[0x61d];
      uVar6 = 1 << (ulong)(uVar1 & 0x1f);
      uVar5 = *(uint *)(lVar7 + (ulong)(uVar1 >> 5) * 4);
      if ((uVar5 & uVar6) == 0) {
        if (uVar1 >> 0x11 == 0) {
          *(uint *)(lVar7 + (ulong)(uVar1 >> 5) * 4) = uVar5 | uVar6;
          lVar7 = param_1[0x61d];
        }
        local_3138 = *param_1;
        uVar8 = param_1[0x61b];
        FUN_01bf1db8(auStack_3130);
        local_3118 = FUN_01bf13ec;
        uStack_3110 = 0;
        uStack_48 = 0;
        local_3128 = &PTR_LAB_04a3e180;
        puStack_3120 = &local_3138;
        local_60 = uVar8;
        local_58 = param_2;
        local_50 = lVar7;
        FUN_01bf1510(&local_3138);
        *(undefined1 *)(param_1 + 0x61e) = uStack_48;
        local_18b0 = &PTR_LAB_04a3d2e0;
        FUN_01be6b58(auStack_1898);
        local_30f8 = &PTR_LAB_04a3d2e0;
        FUN_01be6b58(auStack_30e0);
      }
    }
  }
  return;
}

