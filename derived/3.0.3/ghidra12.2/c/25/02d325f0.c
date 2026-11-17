
/* WARNING: Removing unreachable block (ram,0x02d32638) */

void FUN_02d325f0(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  byte local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  
  local_d0 = CONCAT44(local_d0._4_4_,3);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_6d = 0;
  local_b0 = 0x40;
  uStack_c8 = 0xffffffffffffffff;
  local_5c = 0xffffffffffffffff;
  local_68 = *(byte *)(param_1 + 0x1f8);
  local_ac[0] = 0;
  local_64 = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_60 = 0;
  if (7 < local_68) {
    local_68 = 0xff;
  }
  local_d0 = 0xffffffff00000004;
  local_b8 = local_ac;
  (**(code **)(DAT_05678558 + 0x18))(&DAT_05678558);
  puVar1 = DAT_05678560;
  if (local_ac != DAT_05678560) {
    (**(code **)(DAT_05678558 + 0x18))(&DAT_05678558);
    lVar4 = 0;
    do {
      if (DAT_05678560[lVar4] == '\0') goto LAB_02d3274c;
      if (DAT_05678560[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_02d3274c;
      }
      if (DAT_05678560[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_02d3274c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02d3274c:
    iVar2 = (int)lVar4;
    if (local_b0 <= (int)lVar4) {
      iVar2 = local_b0 + -1;
    }
    memcpy(local_ac,puVar1,(long)iVar2);
    local_ac[iVar2] = 0;
  }
  FUN_02ee2b00(puVar5,&local_d0,1);
  puVar6 = local_b8;
  local_d0 = CONCAT44(local_d0._4_4_,6);
  (**(code **)(DAT_05678578 + 0x18))(&DAT_05678578);
  puVar1 = DAT_05678580;
  if (puVar6 != DAT_05678580) {
    (**(code **)(DAT_05678578 + 0x18))(&DAT_05678578);
    lVar4 = 0;
    do {
      if (DAT_05678580[lVar4] == '\0') goto LAB_02d3280c;
      if (DAT_05678580[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_02d3280c;
      }
      if (DAT_05678580[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_02d3280c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02d3280c:
    iVar2 = (int)lVar4;
    if (local_b0 <= (int)lVar4) {
      iVar2 = local_b0 + -1;
    }
    memcpy(puVar6,puVar1,(long)iVar2);
    puVar6[iVar2] = 0;
  }
  FUN_02ee2b00(puVar5,&local_d0,1);
  puVar1 = local_b8;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar4 == 0) {
    return;
  }
  local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar4 + 0x14));
  if ((param_2 & 1) == 0) {
    (**(code **)(DAT_05678568 + 0x18))(&DAT_05678568);
    puVar6 = DAT_05678570;
    if (puVar1 == DAT_05678570) goto LAB_02d32974;
    (**(code **)(DAT_05678568 + 0x18))(&DAT_05678568);
    lVar4 = 0;
    do {
      if (DAT_05678570[lVar4] == '\0') goto LAB_02d3294c;
      if (DAT_05678570[lVar4 + 1] == '\0') goto LAB_02d32940;
      if (DAT_05678570[lVar4 + 2] == '\0') goto LAB_02d32948;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    (**(code **)(DAT_05678588 + 0x18))(&DAT_05678588);
    puVar6 = DAT_05678590;
    if (puVar1 == DAT_05678590) goto LAB_02d32974;
    (**(code **)(DAT_05678588 + 0x18))(&DAT_05678588);
    lVar4 = 0;
    do {
      if (DAT_05678590[lVar4] == '\0') goto LAB_02d3294c;
      if (DAT_05678590[lVar4 + 1] == '\0') goto LAB_02d32940;
      if (DAT_05678590[lVar4 + 2] == '\0') goto LAB_02d32948;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_02d3294c:
  iVar2 = (int)lVar4;
  if (local_b0 <= (int)lVar4) {
    iVar2 = local_b0 + -1;
  }
  memcpy(puVar1,puVar6,(long)iVar2);
  puVar1[iVar2] = 0;
LAB_02d32974:
  FUN_02ee2b00(puVar5,&local_d0,1);
  return;
LAB_02d32940:
  lVar4 = lVar4 + 1;
  goto LAB_02d3294c;
LAB_02d32948:
  lVar4 = lVar4 + 2;
  goto LAB_02d3294c;
}

