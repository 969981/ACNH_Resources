
int FUN_01d39660(undefined4 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 local_288 [2];
  char *local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined1 local_270;
  undefined *local_268;
  undefined8 uStack_260;
  undefined *local_258;
  char *local_250;
  int local_248;
  char local_244 [511];
  undefined1 local_45;
  
  local_244[0] = '\0';
  local_288[0] = 0;
  local_270 = 0;
  local_280 = local_244;
  local_248 = 0x200;
  lVar7 = 0;
  local_258 = PTR_DAT_04bb2d90 + 0x10;
  local_278 = 0x200;
  uStack_260 = *(undefined8 *)(param_2 + 8);
  local_268 = PTR_DAT_04bb2020 + 0x10;
  local_45 = 0;
  do {
    if (local_244[lVar7] == '\0') goto LAB_01d39710;
    if (local_244[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01d39710;
    }
    if (local_244[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_01d39710;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_01d39710:
  local_274 = (undefined4)lVar7;
  local_250 = local_280;
  iVar5 = FUN_01d39820(local_288);
  pcVar4 = local_250;
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  else {
    (**(code **)(local_258 + 0x18))(&local_258);
    lVar7 = 0;
    do {
      if (local_250[lVar7] == '\0') goto LAB_01d39784;
      if (local_250[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01d39784;
      }
      if (local_250[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01d39784;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01d39784:
    uVar1 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
    uVar2 = 2;
    if ((int)(local_248 - uVar1) < 3) {
      uVar2 = local_248 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy(pcVar4 + uVar1,&DAT_040ec4d5,(ulong)uVar2);
      pcVar4[(ulong)uVar2 + (ulong)uVar1] = '\0';
    }
    iVar6 = FUN_01d3aee0(*(long *)(param_1 + 2) + (long)(int)param_1[5],param_1[4] - param_1[5],
                         &local_258,*param_1,0);
    iVar3 = 0;
    if (-1 < iVar6) {
      iVar3 = param_1[5];
    }
    iVar5 = iVar3 + iVar6;
    if (iVar5 < 0 != SCARRY4(iVar3,iVar6)) {
      iVar5 = -1;
    }
  }
  return iVar5;
}

