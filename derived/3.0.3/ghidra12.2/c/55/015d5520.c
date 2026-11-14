
undefined8 FUN_015d5520(long param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *__dest;
  undefined1 *__src;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_300;
  int local_2f8;
  undefined8 local_2f4;
  undefined *local_2e8;
  undefined *local_2c8;
  undefined *local_2a8;
  undefined1 *local_2a0;
  int local_298;
  undefined1 local_294 [255];
  undefined1 local_195;
  long local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  local_195 = 0;
  local_2f4 = 0;
  local_294[0] = 0;
  local_2a0 = local_294;
  local_190 = 0;
  local_298 = 0x100;
  lVar1 = param_1 + 0xb40;
  local_300 = PTR_DAT_04bc39a0 + 0x10;
  local_2a8 = PTR_DAT_04bb21f8 + 0x10;
  local_188 = 0;
  local_2e8 = PTR_DAT_04bc3808 + 0x10;
  local_168 = 0x100;
  local_65 = 0;
  local_164[0] = 0;
  local_180 = 0;
  local_2f8 = 1 << (ulong)(*param_3 & 0x1f);
  local_170 = local_164;
  local_2c8 = local_2e8;
  local_178 = local_2a8;
  FUN_008308a0(param_2,&local_178);
  __dest = local_2a0;
  (**(code **)(local_178 + 0x18))(&local_178);
  __src = local_170;
  if (__dest != local_170) {
    (**(code **)(local_178 + 0x18))(&local_178);
    lVar6 = 0;
    do {
      if (local_170[lVar6] == '\0') goto LAB_015d566c;
      if (local_170[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_015d566c;
      }
      if (local_170[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_015d566c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_015d566c:
    iVar2 = (int)lVar6;
    if (local_298 <= (int)lVar6) {
      iVar2 = local_298 + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  local_188 = 0x19400;
  local_190 = lVar1;
  if ((param_4 & 1) == 0) {
    FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_300);
LAB_015d5734:
    uVar5 = *param_3;
LAB_015d5738:
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0x19f40) = *param_2;
    }
    uVar4 = 1;
  }
  else {
    uVar5 = *param_3;
    if (uVar5 == 0) {
      uVar3 = FUN_03769900(param_2);
      uVar7 = uVar3 & 0xffffffff;
      if ((uVar3 & 1) != 0) {
        FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_300);
      }
      uVar5 = *param_3;
    }
    else {
      uVar7 = 1;
    }
    if (uVar5 == 1) {
      FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_300);
      FUN_03769d70(param_2,1);
      uVar5 = *param_3;
    }
    if (uVar5 == 2) {
      uVar3 = FUN_03769900(param_2);
      if ((uVar3 & 1) != 0) {
        FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_300);
        FUN_03769d70(param_2,0);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        goto LAB_015d5734;
      }
    }
    else if ((uVar7 & 1) != 0) goto LAB_015d5738;
    uVar4 = 0;
  }
  return uVar4;
}

