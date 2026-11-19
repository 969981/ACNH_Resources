
/* WARNING: Removing unreachable block (ram,0x03b26ba8) */
/* WARNING: Removing unreachable block (ram,0x03b26bb0) */
/* WARNING: Removing unreachable block (ram,0x03b26da8) */

long FUN_03b26a00(long param_1,void *param_2,void *param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint local_168;
  uint local_160;
  undefined1 local_15c;
  char local_15b [251];
  undefined8 local_48;
  
  lVar13 = *(long *)(param_1 + 0x30);
  lVar9 = param_1 + 0x28;
  local_160 = local_160 & 0xffffff00;
  if (lVar13 == lVar9) {
LAB_03b26a74:
    local_15b[0] = '\0';
    local_15c = 0x2f;
    local_160 = 0x74796c62;
    local_168 = 5;
    lVar8 = 0;
    do {
      lVar5 = lVar8;
      lVar8 = lVar5 + 1;
    } while (*(char *)((long)param_2 + lVar5) != '\0');
    uVar6 = (uint)lVar5;
    if ((int)uVar6 < 1) {
      uVar10 = 5;
    }
    else {
      if (0xf9 < (int)uVar6) {
        uVar6 = 0xfa;
      }
      memcpy(local_15b,param_2,(ulong)uVar6);
      uVar10 = (ulong)uVar6 + 5;
      local_168 = (uint)uVar10;
      *(char *)((long)&local_160 + uVar10) = '\0';
    }
    uVar6 = 6;
    if (0xff < (int)((uint)uVar10 + 6)) {
      uVar6 = ~(uint)uVar10 + 0x100;
    }
    if (0 < (int)uVar6) {
      memcpy((char *)((long)&local_160 + (uVar10 & 0xffffffff)),".bflyt",(ulong)uVar6);
      lVar13 = (ulong)uVar6 + (uVar10 & 0xffffffff);
      *(char *)((long)&local_160 + lVar13) = '\0';
      local_168 = (uint)lVar13;
      lVar13 = *(long *)(param_1 + 0x30);
    }
    while( true ) {
      if (lVar13 == lVar9) {
        return 0;
      }
      lVar8 = lVar13 + 0x10;
      local_48 = 0;
      iVar4 = FUN_003640a0(lVar8,&local_160);
      if ((-1 < iVar4) && (lVar5 = FUN_00364024(lVar8,&local_48,iVar4), lVar5 != 0)) break;
      lVar13 = *(long *)(lVar13 + 8);
    }
    puVar12 = (uint *)"anim/";
    if (&local_160 == (uint *)"anim/") goto LAB_03b26bec;
  }
  else {
    iVar4 = 1;
    lVar8 = lVar13;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      iVar4 = iVar4 + -1;
    } while (lVar8 != lVar9);
    if (iVar4 != 0) goto LAB_03b26a74;
    lVar8 = lVar13 + 0x10;
  }
  memcpy(&local_160,"anim/",5);
  local_168 = 5;
  local_15b[0] = '\0';
  puVar12 = &local_160;
LAB_03b26bec:
  lVar9 = 0;
  do {
    pcVar1 = (char *)((long)param_2 + lVar9);
    lVar9 = lVar9 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = (int)lVar9 - 1;
  uVar6 = ~local_168 + 0x100;
  if (0xff < (int)(uVar2 + local_168)) {
    uVar2 = uVar6;
  }
  uVar11 = local_168;
  if (0 < (int)uVar2) {
    memcpy((char *)((long)puVar12 + (long)(int)local_168),param_2,(ulong)uVar2);
    uVar11 = uVar2 + local_168;
    *(char *)((long)puVar12 + (long)(int)uVar11) = '\0';
    uVar6 = ~uVar11 + 0x100;
    puVar12 = &local_160;
  }
  uVar10 = (ulong)uVar11;
  if ((int)(uVar11 + 1) < 0x100) {
    uVar6 = 1;
  }
  if (0 < (int)uVar6) {
    memcpy((char *)((long)puVar12 + (long)(int)uVar11),&DAT_040b5039,(ulong)uVar6);
    uVar10 = (long)(int)uVar11 + (long)(int)uVar6;
    *(char *)((long)puVar12 + uVar10) = '\0';
    puVar12 = &local_160;
  }
  lVar9 = 0;
  do {
    pcVar1 = (char *)((long)param_3 + lVar9);
    lVar9 = lVar9 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = (int)lVar9 - 1;
  uVar7 = (uint)uVar10;
  uVar11 = ~uVar7 + 0x100;
  if (0xff < (int)(uVar3 + (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) +
                  local_168 + (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)))) {
    uVar3 = uVar11;
  }
  if (0 < (int)uVar3) {
    memcpy((char *)((long)puVar12 + (long)(int)uVar7),param_3,(ulong)uVar3);
    uVar10 = (long)(int)uVar7 + (long)(int)uVar3;
    *(char *)((long)puVar12 + uVar10) = '\0';
    uVar11 = ~(uint)uVar10 + 0x100;
    puVar12 = &local_160;
  }
  iVar4 = (int)uVar10;
  uVar6 = 6;
  if (0xff < iVar4 + 6) {
    uVar6 = uVar11;
  }
  if (0 < (int)uVar6) {
    memcpy((char *)((long)puVar12 + (long)iVar4),".bflan",(ulong)uVar6);
    *(char *)((long)puVar12 + (long)iVar4 + (long)(int)uVar6) = '\0';
    puVar12 = &local_160;
  }
  local_48 = 0;
  iVar4 = FUN_003640a0(lVar8,puVar12);
  if (iVar4 < 0) {
    return 0;
  }
  lVar9 = FUN_00364024(lVar8,&local_48,iVar4);
  if (lVar9 == 0) {
    return 0;
  }
  if (param_4 == (undefined4 *)0x0) {
    return lVar9;
  }
  *param_4 = local_48._4_4_;
  return lVar9;
}

