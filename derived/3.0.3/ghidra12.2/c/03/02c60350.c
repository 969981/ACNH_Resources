
void FUN_02c60350(long param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 *local_88 [4];
  uint local_64;
  
  *(undefined8 *)(param_1 + 8) = 0;
  bVar6 = *param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_88[0] = (undefined8 *)CONCAT71(local_88[0]._1_7_,bVar6);
  uVar3 = FUN_02669430(local_88);
  if ((uVar3 & 1) != 0) {
    local_88[0] = &DAT_04ab2518;
    uVar1 = 0xffffffff;
    while( true ) {
      uVar4 = uVar1;
      if (uVar4 == 0xffffffff) goto LAB_02c603d0;
      if (uVar4 == 0xb) break;
      if (DAT_0565e880 == uVar4) {
        lVar5 = 0;
LAB_02c60510:
        uVar7 = (&DAT_0565e884)[lVar5 * 2];
      }
      else {
        if (DAT_0565e888 == uVar4) {
          lVar5 = 1;
          goto LAB_02c60510;
        }
        if (DAT_0565e890 == uVar4) {
          lVar5 = 2;
          goto LAB_02c60510;
        }
        if (DAT_0565e898 == uVar4) {
          lVar5 = 3;
          goto LAB_02c60510;
        }
        if (DAT_0565e8a0 == uVar4) {
          lVar5 = 4;
          goto LAB_02c60510;
        }
        if (DAT_0565e8a8 == uVar4) {
          lVar5 = 5;
          goto LAB_02c60510;
        }
        if (DAT_0565e8b0 == uVar4) {
          lVar5 = 6;
          goto LAB_02c60510;
        }
        if (DAT_0565e8b8 == uVar4) {
          lVar5 = 7;
          goto LAB_02c60510;
        }
        if (DAT_0565e8c0 == uVar4) {
          lVar5 = 8;
          goto LAB_02c60510;
        }
        if (DAT_0565e8c8 == uVar4) {
          lVar5 = 9;
          goto LAB_02c60510;
        }
        if (DAT_0565e8d0 == uVar4) {
          lVar5 = 10;
          goto LAB_02c60510;
        }
        uVar7 = 0;
      }
      local_64 = uVar4;
      uVar2 = FUN_02582fe0(param_2);
      uVar3 = FUN_01b168d0(uVar7,uVar2);
      if ((uVar3 & 1) != 0) {
        if ((uVar4 == 1) && (uVar3 = (*(code *)*local_88[0])(local_88), (uVar3 & 1) == 0))
        goto LAB_02c603d0;
        *(ulong *)(param_1 + 8) = 1L << ((ulong)uVar4 & 0x3f) | *(ulong *)(param_1 + 8);
      }
      uVar1 = 0xb;
      if ((int)uVar4 < 0xb) {
LAB_02c603d0:
        uVar1 = uVar4 + 1;
      }
    }
  }
  return;
}

