
undefined8 FUN_01586490(long param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  undefined1 *__dest;
  undefined1 *__src;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_2f8;
  int local_2f0;
  undefined8 local_2ec;
  undefined *local_2e0;
  undefined *local_2c0;
  undefined *local_2a0;
  undefined1 *local_298;
  int local_290;
  undefined1 local_28c [255];
  undefined1 local_18d;
  long local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  local_18d = 0;
  local_2ec = 0;
  local_28c[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_2f8 = PTR_DAT_04bc3810 + 0x10;
  local_290 = 0x100;
  local_2a0 = PTR_DAT_04bb21f8 + 0x10;
  local_298 = local_28c;
  local_2e0 = PTR_DAT_04bc3808 + 0x10;
  lVar7 = *(long *)(param_1 + 0x8d8);
  local_2f0 = 1 << (ulong)(*param_3 & 0x1f);
  local_168 = 0x100;
  local_65 = 0;
  local_164[0] = 0;
  local_170 = local_164;
  local_2c0 = local_2e0;
  local_178 = local_2a0;
  FUN_007d6ff0(param_2,&local_178);
  __dest = local_298;
  (**(code **)(local_178 + 0x18))(&local_178);
  __src = local_170;
  if (__dest != local_170) {
    (**(code **)(local_178 + 0x18))(&local_178);
    lVar5 = 0;
    do {
      if (local_170[lVar5] == '\0') goto LAB_015865dc;
      if (local_170[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_015865dc;
      }
      if (local_170[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_015865dc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_015865dc:
    iVar1 = (int)lVar5;
    if (local_290 <= (int)lVar5) {
      iVar1 = local_290 + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
  local_180 = 0;
  if (lVar7 != 0) {
    local_180 = 0x19400;
  }
  local_188 = lVar7;
  if ((param_4 & 1) == 0) {
    FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_2f8);
LAB_015866ac:
    uVar4 = *param_3;
LAB_015866b0:
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x8e0) = *param_2;
    }
    uVar3 = 1;
  }
  else {
    uVar4 = *param_3;
    if (uVar4 == 0) {
      uVar2 = FUN_016c7db8(param_2);
      uVar6 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) != 0) {
        FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_2f8);
      }
      uVar4 = *param_3;
    }
    else {
      uVar6 = 1;
    }
    if (uVar4 == 1) {
      FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_2f8);
      FUN_016c7f78(param_2,1);
      uVar4 = *param_3;
    }
    if (uVar4 == 2) {
      uVar2 = FUN_016c7db8(param_2);
      if ((uVar2 & 1) != 0) {
        FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_2f8);
        FUN_016c7f78(param_2,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        goto LAB_015866ac;
      }
    }
    else if ((uVar6 & 1) != 0) goto LAB_015866b0;
    uVar3 = 0;
  }
  return uVar3;
}

