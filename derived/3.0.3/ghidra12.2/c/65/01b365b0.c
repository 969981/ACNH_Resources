
void FUN_01b365b0(void)

{
  uint *puVar1;
  long *plVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  ushort uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 auStack_7c [31];
  undefined1 local_5d;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb2a08;
  lVar7 = *(long *)PTR_DAT_04bb8460;
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x3c) == '\0' || *(char *)(lVar7 + 0x3d) == '\0')) {
    local_c0 = CONCAT17((char)((ulong)local_c0 >> 0x38),0x1010000);
    local_b8 = 0;
    local_a6 = 0;
    local_a4 = 0x101;
    local_a0 = 0;
    local_9e = 0;
    uVar6 = *(ushort *)PTR_DAT_04bbdeb0;
    local_9c = 0x101;
    local_98 = 0;
    local_94 = 0;
    uVar10 = *(ushort *)PTR_DAT_04bb6298;
    if (uVar6 != 0xffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
      if (0xff < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0xf & 1) != 0) {
        return;
      }
    }
    if (uVar10 != 0xffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar10 * 8);
      if (0xff < uVar10) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0xf & 1) != 0) {
        return;
      }
    }
    bVar4 = DAT_055c1b60 == &DAT_055c1b58;
    plVar8 = DAT_055c1b60 + -8;
    if ((uVar6 != 0) && (puVar9 = DAT_055c1b60, plVar8 != &DAT_055c1b18)) {
      do {
        puVar9 = (undefined8 *)puVar9[1];
        uVar6 = uVar6 - 1;
        bVar4 = puVar9 == &DAT_055c1b58;
      } while (!bVar4 && uVar6 != 0);
      plVar8 = puVar9 + -8;
    }
    local_80 = 0x20;
    plVar2 = &DAT_055c04a0;
    if (!bVar4) {
      plVar2 = plVar8;
    }
    local_5d = 0;
    local_90 = PTR_DAT_04bb2a08 + 0x10;
    puStack_88 = auStack_7c;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if (auStack_7c != (undefined1 *)plVar2[1]) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if ((int)plVar2[7] != -0x2f1ac06c && (int)plVar2[7] != -0x8b34a75) {
      bVar4 = DAT_055c1b60 == &DAT_055c1b58;
      plVar8 = DAT_055c1b60 + -8;
      if ((uVar10 != 0) && (puVar9 = DAT_055c1b60, plVar8 != &DAT_055c1b18)) {
        do {
          puVar9 = (undefined8 *)puVar9[1];
          uVar10 = uVar10 - 1;
          bVar4 = puVar9 == &DAT_055c1b58;
        } while (!bVar4 && uVar10 != 0);
        plVar8 = puVar9 + -8;
      }
      local_5d = 0;
      local_80 = 0x20;
      local_90 = puVar3 + 0x10;
      plVar2 = &DAT_055c04a0;
      if (!bVar4) {
        plVar2 = plVar8;
      }
      puStack_88 = auStack_7c;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      if (auStack_7c != (undefined1 *)plVar2[1]) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if ((((((int)plVar2[7] != -0x2f1ac06c && (int)plVar2[7] != -0x8b34a75) &&
            (*(int *)(PTR_DAT_04bc3a78 + 0x38) != -0x3f5c743d)) &&
           (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d)) &&
          (plVar8 = *(long **)PTR_DAT_04bb27d0, *(byte *)(*plVar8 + 0x476) < 2)) &&
         ((plVar8[5] == 0 || ((int)plVar8[0x10] != 1)))) {
        local_90 = (undefined *)CONCAT44(local_90._4_4_,0x20);
        uVar5 = FUN_0291731c(&local_90);
        if ((uVar5 & 1) == 0) {
          local_34 = 0x20;
          uVar5 = FUN_0290cbcc(&local_34);
          if ((((uVar5 & 1) == 0) && (uVar5 = FUN_0252cf54(), (uVar5 & 1) != 0)) &&
             (uVar5 = FUN_02640eb0(), (uVar5 & 1) != 0)) {
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_c0 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            uVar5 = FUN_01b3694c(&local_c0);
            if ((uVar5 & 1) != 0) {
              FUN_02f07944(1);
              FUN_02f07bc0();
              lVar7 = *(long *)PTR_DAT_04bb46b0;
              if (lVar7 != 0) {
                FUN_026f5d48(lVar7);
                FUN_01b36e64(&local_c0);
                FUN_026f5e30(lVar7);
              }
              FUN_02f07a14();
            }
          }
        }
      }
    }
  }
  return;
}

