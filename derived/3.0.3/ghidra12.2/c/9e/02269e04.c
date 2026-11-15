
byte FUN_02269e04(uint param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  undefined8 local_50;
  undefined4 local_48;
  uint local_28;
  uint local_24;
  
  local_24 = param_1 & 0xff;
  local_28 = param_2 & 0xff;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x11889761) {
LAB_0226a01c:
    bVar4 = 0;
    goto LAB_0226a020;
  }
  bVar11 = *param_3;
  uVar5 = *(uint *)PTR_DAT_04bb3238;
  if (local_28 == 2) {
LAB_02269e70:
    uVar5 = FUN_020e7d28(*(undefined8 *)PTR_DAT_04bb4128,param_3);
    plVar2 = (long *)PTR_DAT_04bb27c0;
  }
  else if (local_28 == 1) {
    uVar5 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,param_3);
    plVar2 = (long *)PTR_DAT_04bb27c0;
  }
  else {
    plVar2 = (long *)PTR_DAT_04bb27c0;
    if (local_28 == 0) goto LAB_02269e70;
  }
  if (uVar5 == 0) {
    lVar10 = *(long *)PTR_DAT_04bb4128 + 0x344 + (ulong)local_28 * 8;
    if (6 < local_28) {
      lVar10 = *(long *)PTR_DAT_04bb4128 + 0x344;
    }
    uVar5 = *(uint *)(lVar10 + 4);
  }
  lVar10 = *plVar2;
  PTR_DAT_04bb27c0 = (undefined *)plVar2;
  if (lVar10 == 0) goto LAB_0226a01c;
  if ((((uVar5 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8),
       plVar12 == (long *)0x0)) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar5)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *plVar2;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_02269f4c;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02269f4c:
    uVar5 = 0;
  }
  if (plVar12 == (long *)0x0) goto LAB_0226a01c;
  lVar10 = plVar12[0x2a];
  if (((*PTR_DAT_04bb4160 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4160);
  }
  uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb4158);
  bVar4 = 0;
  uVar1 = 0;
  if ((int)lVar10 == 1) {
    uVar1 = uVar5;
  }
  if (((uVar8 & 1) == 0) || (uVar1 == 0)) goto LAB_0226a020;
  switch(local_24) {
  case 0:
    if (*param_3 < 8) {
      local_48 = 0;
      local_50 = 0;
      iVar6 = FUN_02269800(param_3,&local_28,&local_50,PTR_DAT_04bb2ce8,0,0);
    }
    else {
      iVar6 = FUN_022691b8(&local_28,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8);
    }
    bVar4 = iVar6 != 0;
    goto LAB_0226a020;
  case 1:
    if (*param_3 < 8) {
      bVar4 = FUN_02269c10(param_3,&local_28);
    }
    else {
      bVar4 = FUN_02269394(&local_28);
    }
    goto LAB_0226a020;
  case 2:
    if (bVar11 < 8) {
      *(uint *)(plVar12 + 0x83) = *(uint *)(plVar12 + 0x83) | 1;
      puVar3 = PTR_DAT_04bb32e0;
      bVar4 = 1;
      *(undefined4 *)(plVar12 + 0x8e) = 1;
      bVar11 = *puVar3;
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      *(byte *)((long)plVar12 + 0x474) = bVar11;
      goto LAB_0226a020;
    }
    uVar5 = *(uint *)(plVar12 + 0x83) | 4;
    break;
  case 3:
    if (bVar11 < 8) {
      uVar5 = *(uint *)(plVar12 + 0x83) | 2;
    }
    else {
      uVar5 = *(uint *)(plVar12 + 0x83) | 8;
    }
    break;
  case 4:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x200;
    break;
  case 5:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x20;
    break;
  case 6:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x10;
    break;
  case 7:
    uVar9 = 3;
    goto LAB_0226a0d8;
  case 8:
    uVar9 = 2;
LAB_0226a0d8:
    *(undefined4 *)((long)plVar12 + 0x49c) = uVar9;
    *(undefined4 *)((long)plVar12 + 0x4a4) = 0;
    goto switchD_02269fbc_default;
  case 9:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x400;
    break;
  case 10:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x800;
    break;
  case 0xb:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x1000;
    break;
  case 0xc:
    *(uint *)(plVar12 + 0x83) = *(uint *)(plVar12 + 0x83) | 0x2000;
    *(uint *)((long)plVar12 + 0x41c) = *(uint *)((long)plVar12 + 0x41c) & 0xfffffffb;
    goto switchD_02269fbc_default;
  case 0xd:
    uVar5 = *(uint *)(plVar12 + 0x83) | 0x4000;
    break;
  default:
    goto switchD_02269fbc_default;
  }
  *(uint *)(plVar12 + 0x83) = uVar5;
switchD_02269fbc_default:
  bVar4 = 1;
LAB_0226a020:
  return bVar4 & 1;
}

