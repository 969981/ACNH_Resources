
/* WARNING: Removing unreachable block (ram,0x036ad5d4) */
/* WARNING: Removing unreachable block (ram,0x036ad50c) */
/* WARNING: Removing unreachable block (ram,0x036ad288) */
/* WARNING: Removing unreachable block (ram,0x036ad3d0) */
/* WARNING: Removing unreachable block (ram,0x036ad324) */
/* WARNING: Removing unreachable block (ram,0x036ad478) */
/* WARNING: Removing unreachable block (ram,0x036ad4e4) */
/* WARNING: Removing unreachable block (ram,0x036ad5a8) */
/* WARNING: Removing unreachable block (ram,0x036ad66c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffba : 0x036ad5d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_036ad030(undefined8 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 local_40;
  uint local_38;
  
  puVar5 = PTR_DAT_04bc3968;
  puVar4 = PTR_DAT_04bc3960;
  if (DAT_05ab3138 == 0) {
    return;
  }
  uVar8 = (param_2 & 0xffff) - (uint)*(ushort *)(DAT_05ab3138 + 0x1f8);
  if (*(uint *)(DAT_05ab3138 + 0x1d8) <= uVar8) {
    return;
  }
  puVar9 = *(uint **)(*(long *)(DAT_05ab3138 + 0x1e0) + (long)(int)uVar8 * 8);
  if (puVar9 == (uint *)0x0) {
    return;
  }
  if (*puVar9 != 0) {
    cVar10 = *PTR_DAT_04bc3960;
    do {
      if (cVar10 != '\0') {
        uVar8 = *(uint *)(puVar5 + 0x1c);
        if ((int)uVar8 < 0) {
          if (uVar8 == 0xffffffff) goto LAB_036ad0e4;
        }
        else if ((char *)((ulong)uVar8 + (long)puVar9) != (char *)0x0) {
          bVar6 = *(char *)((ulong)uVar8 + (long)puVar9) != '\0';
          goto LAB_036ad17c;
        }
LAB_036ad178:
        bVar6 = false;
LAB_036ad17c:
        uVar8 = *puVar9;
        if (uVar8 == 0) goto LAB_036ad234;
        uVar12 = *(uint *)(puVar5 + 0x20);
        goto LAB_036ad1a0;
      }
      cVar10 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
LAB_036ad0e4:
      puVar13 = (uint *)(ulong)*puVar9;
      bVar6 = false;
      if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_036ad17c;
      lVar3 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar9 + (lVar3 - (long)puVar13);
      if (lVar3 == 0) goto LAB_036ad178;
      uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
      *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
      bVar6 = false;
      if (uVar11 == 0) goto LAB_036ad17c;
      piVar14 = (int *)(lVar3 + 4);
      while (piVar14[-1] != -0x4fb53614) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          bVar6 = false;
          goto LAB_036ad17c;
        }
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar5 + 0x1c) = iVar1;
    } while (*puVar9 != 0);
  }
  bVar7 = false;
  bVar6 = false;
LAB_036ad238:
  if ((param_3 & 1) == 0) {
    local_40 = 0;
    switch(param_2) {
    case 0:
      uVar8 = 1;
      goto LAB_036ad4d0;
    case 1:
      local_40 = 0x300000002;
      break;
    case 2:
      local_40 = 0x600000005;
      break;
    case 3:
      local_40 = 0x900000007;
      break;
    case 4:
      uVar8 = 8;
LAB_036ad4d0:
      local_40 = (ulong)uVar8;
    }
    (**(code **)*param_1)(param_1,local_40 << 0x20);
    if (bVar6) goto LAB_036ad5c0;
    local_40._4_4_ = 0;
    switch(param_2) {
    case 0:
      goto LAB_036ad594;
    case 1:
      local_40._4_4_ = 3;
      break;
    case 2:
      local_40._4_4_ = 6;
      break;
    case 3:
      local_40._4_4_ = 9;
      break;
    case 4:
LAB_036ad594:
      local_40._4_4_ = 0;
    }
    (**(code **)*param_1)(param_1,CONCAT44(local_40._4_4_,1));
LAB_036ad5c0:
    if (bVar7) {
      return;
    }
    local_38 = 0;
    switch(param_2) {
    case 0:
      break;
    case 1:
      local_38 = 4;
      break;
    case 2:
      local_38 = 10;
      break;
    case 3:
      break;
    case 4:
    }
    uVar11 = CONCAT44(local_38,2);
    goto LAB_036ad678;
  }
  local_40 = 0;
  switch(param_2) {
  case 0:
    uVar8 = 1;
    goto LAB_036ad310;
  case 1:
    local_40 = 0x300000002;
    break;
  case 2:
    local_40 = 0x600000005;
    break;
  case 3:
    local_40 = 0x900000007;
    break;
  case 4:
    uVar8 = 8;
LAB_036ad310:
    local_40 = (ulong)uVar8;
  }
  (**(code **)*param_1)(param_1,local_40 << 0x20);
  local_40 = 0;
  switch(param_2) {
  case 0:
    goto LAB_036ad3bc;
  case 1:
    local_40 = 0x300000002;
    break;
  case 2:
    local_40 = 0x600000005;
    break;
  case 3:
    local_40 = 0x900000007;
    break;
  case 4:
LAB_036ad3bc:
    local_40 = 0;
  }
  (**(code **)*param_1)(param_1,local_40 & 0xffffffff00000000 | 1);
  local_38 = 0;
  switch(param_2) {
  case 0:
    break;
  case 1:
    local_38 = 4;
    break;
  case 2:
    local_38 = 10;
    break;
  case 3:
    break;
  case 4:
  }
  uVar11 = (ulong)local_38 << 0x20 | 2;
LAB_036ad678:
  (**(code **)*param_1)(param_1,uVar11);
  return;
LAB_036ad1a0:
  if (-1 < (int)uVar12) {
    if ((char *)((long)puVar9 + (ulong)uVar12) == (char *)0x0) {
LAB_036ad234:
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)((long)puVar9 + (ulong)uVar12) != '\0';
    }
    goto LAB_036ad238;
  }
  if (uVar12 != 0xffffffff) goto LAB_036ad234;
  lVar3 = (long)puVar9 - (ulong)uVar8;
  bVar7 = false;
  if (lVar3 == 0) goto LAB_036ad238;
  lVar2 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar3 == 0) goto LAB_036ad234;
  uVar11 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
  bVar7 = false;
  if (uVar11 == 0) goto LAB_036ad238;
  puVar13 = (uint *)(lVar2 + lVar3 + 4);
  while (puVar13[-1] != 0xcc2bec37) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      bVar7 = false;
      goto LAB_036ad238;
    }
  }
  bVar7 = false;
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar5 + 0x20) = uVar12;
  uVar8 = *puVar9;
  if (uVar8 == 0) goto LAB_036ad238;
  goto LAB_036ad1a0;
}

