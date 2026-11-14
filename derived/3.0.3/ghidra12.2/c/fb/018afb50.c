
ulong FUN_018afb50(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  int iStack_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  lVar4 = DAT_052d2598;
  if (DAT_052d2598 == 0) {
    uVar3 = (ulong)DAT_04c9a0c8;
  }
  else {
    local_108 = *(undefined4 *)(param_2 + 1);
    local_d8 = 0x80;
    local_55 = 0;
    local_d4[0] = 0;
    local_e0 = local_d4;
    local_48 = 0;
    local_4c = 0;
    local_fc = 0;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    local_f4 = 0;
    local_50 = 7;
    uStack_110 = *param_2;
    local_118 = 0x5400000000;
    iStack_100 = (int)*(float *)((long)param_2 + 0xc);
    local_104 = 0x3f800000;
    local_104 = FUN_01a12580(DAT_052d2598,*(undefined4 *)(param_2 + 2));
    __src = (undefined1 *)FUN_01a113c0(lVar4,*(undefined4 *)(param_2 + 2));
    puVar2 = local_e0;
    if (local_e0 != __src) {
      lVar4 = 0;
      do {
        if (__src[lVar4] == '\0') goto LAB_018afc6c;
        if (__src[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_018afc6c;
        }
        if (__src[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_018afc6c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_018afc6c:
      iVar1 = (int)lVar4;
      if (local_d8 <= (int)lVar4) {
        iVar1 = local_d8 + -1;
      }
      memcpy(local_e0,__src,(long)iVar1);
      puVar2[iVar1] = 0;
    }
    local_fc = CONCAT44(*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14));
    local_f4 = CONCAT44(*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c));
    uVar3 = FUN_007402e0(DAT_04c93e08,&local_118,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),
                         1);
  }
  return uVar3;
}

