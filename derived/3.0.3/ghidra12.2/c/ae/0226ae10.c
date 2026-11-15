
void FUN_0226ae10(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *__src;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined *local_1c8;
  undefined1 *puStack_1c0;
  int local_1b8;
  undefined1 local_1b4 [127];
  undefined1 local_135;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  long local_120;
  undefined1 *local_118;
  
  uVar4 = *param_1;
  uVar8 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if ((uVar8 != 2) && (uVar8 != 6)) {
      if (uVar8 == 3) {
        fVar11 = 6.0;
        uVar5 = 0xc0000000;
        fVar10 = 158.0;
        fVar9 = 124.5;
      }
      else {
        uVar5 = 0;
        fVar9 = 0.0;
        fVar11 = 0.0;
        fVar10 = 0.0;
      }
      uVar6 = 0;
      if (fVar10 == 0.0) {
        uVar6 = (uint)(fVar11 == 0.0);
      }
      uVar3 = 0;
      if (fVar9 == 0.0) {
        uVar3 = uVar6;
      }
      FUN_0074fda4(&local_120,"%s/None/None/%s",
                   (&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[(int)uVar8],
                   (&PTR_s_IdrObjMuseumCafeCoffeeCup_04c48778)[(int)uVar8]);
      local_135 = 0;
      local_1f8 = 0xcb00000000;
      local_1e4 = 0x3f800000;
      local_1b4[0] = 0;
      local_1b8 = 0x80;
      local_128 = 0;
      local_12c = 0;
      local_1f0 = 0.0;
      fStack_1ec = 0.0;
      local_1e8 = 0.0;
      local_1dc = 0;
      uStack_1d4 = 0;
      local_130 = 7;
      local_1c8 = puVar1;
      puStack_1c0 = local_1b4;
      (**(code **)(local_120 + 0x18))(&local_120);
      __src = local_118;
      if (local_1b4 != local_118) {
        (**(code **)(local_120 + 0x18))(&local_120);
        lVar7 = 0;
        do {
          if (local_118[lVar7] == '\0') goto LAB_0226ae78;
          if (local_118[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_0226ae78;
          }
          if (local_118[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_0226ae78;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_0226ae78:
        iVar2 = (int)lVar7;
        if (local_1b8 <= (int)lVar7) {
          iVar2 = local_1b8 + -1;
        }
        memcpy(local_1b4,__src,(long)iVar2);
        local_1b4[iVar2] = 0;
      }
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar4);
      local_1e4 = CONCAT44(uVar5,(undefined4)local_1e4);
      local_1dc = CONCAT44(uVar8,(uint)(uVar8 != 3));
      uStack_1d4 = CONCAT44(1,uVar3);
      local_1f0 = fVar10;
      fStack_1ec = fVar11;
      local_1e8 = fVar9;
      uVar5 = FUN_007402e0(DAT_04c93e08,&local_1f8,uVar4,1);
      lVar7 = DAT_053e4ff0 + 0x344 + (ulong)uVar8 * 8;
      if (6 < uVar8) {
        lVar7 = DAT_053e4ff0 + 0x344;
      }
      *(undefined4 *)(lVar7 + 4) = uVar5;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 7) {
      return;
    }
  } while( true );
}

