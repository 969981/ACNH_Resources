
void FUN_02122db8(long param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte local_80 [4];
  undefined8 local_7c;
  undefined8 local_74;
  undefined2 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_54;
  
  *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) & 0xfffe;
  puVar4 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar6,0);
      if ((iVar5 == 0x758f7eaf) &&
         ((*(long *)puVar4 != 0 && (lVar9 = *(long *)(*(long *)puVar4 + 0x330), lVar9 != 0)))) {
        uVar13 = *(uint *)(lVar9 + 0x248);
        lVar9 = param_1 + 0x10;
        if (uVar13 < 8) {
          lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
        }
        goto LAB_02122e80;
      }
    }
    lVar9 = param_1 + 0x10;
  }
  else {
    lVar9 = param_1 + 0xd4;
  }
LAB_02122e80:
  puVar4 = PTR_DAT_04bb27c0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0x101;
  local_68 = 0;
  local_64 = 0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02122f08;
LAB_02122f68:
    local_80[0] = *pbVar10;
    if (7 < local_80[0]) {
      local_80[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_02122f68;
LAB_02122f08:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02122f60:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_02122f68;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_80[0] = *pbVar10;
    if (7 < local_80[0]) goto LAB_02122f60;
  }
  uVar16 = *(undefined4 *)(lVar9 + 0xc);
  if (7 < local_80[0]) {
    local_80[0] = 0xff;
  }
  uVar14 = *(undefined4 *)(lVar9 + 4);
  uVar15 = *(undefined4 *)(lVar9 + 8);
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 != 0) {
    uVar13 = *(uint *)(param_1 + 0xf0);
    if (((uVar13 == 0) ||
        (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                             ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
       (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar13)))) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar4;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_02123038;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02123038:
      uVar13 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
      uVar1 = 0;
      if ((int)lVar11 == 1) {
        uVar1 = uVar13;
      }
      if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
        lVar11 = plVar12[0xd];
        uVar14 = *(undefined4 *)(lVar11 + 0x278);
        uVar15 = *(undefined4 *)(lVar11 + 0x27c);
        uVar16 = *(undefined4 *)(lVar11 + 0x280);
      }
    }
  }
  local_7c = CONCAT44(uVar15,uVar14);
  local_74 = CONCAT44(*(undefined4 *)(lVar9 + 0x10),uVar16);
  local_64 = 1;
  local_54 = *(int *)(lVar9 + 0x14);
  local_6c = CONCAT11(local_6c._1_1_,1);
  uVar16 = 1;
  if (local_54 == 1) {
    uVar16 = 2;
  }
  local_68 = 4;
  if (local_54 != 3) {
    local_68 = uVar16;
  }
  FUN_0255c85c(local_80);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) goto LAB_02123250;
  uVar13 = *(uint *)(param_1 + 0xf0);
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02123184;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02123184:
    uVar13 = 0;
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      puVar6 = (undefined8 *)plVar12[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar6 != (undefined8 *)0x0) &&
         (uVar8 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc2278), (uVar8 & 1) != 0)) {
        local_54 = 0;
        *(uint *)(puVar6[1] + 0x69c) = *(uint *)(puVar6[1] + 0x69c) & 0xfffffbff;
        *(undefined4 *)(puVar6[1] + 0x750) = 0;
        FUN_01e39778(puVar6[1],PTR_DAT_04bb2150,&local_54,0);
        *(uint *)(puVar6[1] + 0x69c) = *(uint *)(puVar6[1] + 0x69c) | 0x400;
      }
    }
  }
LAB_02123250:
  FUN_02123320(param_1);
  return;
}

