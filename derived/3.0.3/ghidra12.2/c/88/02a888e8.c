
/* WARNING: Removing unreachable block (ram,0x02a88a68) */

void FUN_02a888e8(undefined1 *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar5 = PTR_DAT_04bc3a80;
  puVar4 = PTR_DAT_04bc39f8;
  puVar1 = PTR_DAT_04bb6298;
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar6 == 0xffffffffffffffff) {
LAB_02a88984:
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) ||
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c && (*(int *)(DAT_05351250 + 0xb0) != 0))))
    {
      uVar7 = 0;
    }
    else {
      if (uVar6 == 0xffff) {
        uVar7 = 0;
      }
      else {
        local_38 = 0x20;
        puVar1 = PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8;
        if (0xff < uVar6) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        uVar7 = *(uint *)(puVar1 + 4) & 1;
      }
      uVar7 = uVar7 ^ 1;
    }
    FUN_02a88c4c(param_1,uVar7);
    if ((*(int *)(puVar5 + 0x38) != -0x3f5c743d) &&
       ((*(int *)(puVar5 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    return;
  }
  local_38 = 0x20;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
  if (0xff < uVar6) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((puVar2[1] & 1) == 0) goto LAB_02a88984;
  *param_1 = 1;
  uVar7 = *puVar2 >> 1 & 1;
  if ((DAT_05351250 == 0) || (*(int *)(DAT_05351250 + 0xb0) != 1)) {
    local_3c[0] = (byte)uVar7 ^ 1;
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff01;
    if (-1 < DAT_0560a050) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0560a050,&local_38,local_3c,1,0);
      uVar6 = *(ushort *)puVar1;
      if (uVar6 == 0xffff) {
        return;
      }
    }
    goto LAB_02a88be4;
  }
  if (DAT_04cd19d8 == 0) {
    bVar3 = DAT_0548e140;
LAB_02a88b4c:
    uVar8 = (uint)bVar3;
    if (7 < uVar8) {
LAB_02a88b54:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar10 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar9 = (byte *)(lVar10 + 0x471);
          }
        }
        uVar8 = (uint)*pbVar9;
        if (uVar8 < 8) goto LAB_02a88bc0;
      }
      uVar8 = (uint)DAT_0548e168;
      if (7 < uVar8) goto LAB_02a88be4;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    uVar8 = (uint)*pbVar9;
    if (7 < *pbVar9) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar3 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02a88b4c;
      }
      goto LAB_02a88b54;
    }
  }
LAB_02a88bc0:
  uVar8 = 1 << (ulong)(uVar8 & 0x1f);
  if (uVar7 == 0) {
    uVar8 = *(uint *)(param_1 + 0x318) | uVar8;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x318) & (uVar8 ^ 0xffffffff);
  }
  *(uint *)(param_1 + 0x318) = uVar8;
LAB_02a88be4:
  local_38 = 1;
  puVar2 = (uint *)(puVar4 + ((long)(short)uVar6 & 0xffffffffU) * 8);
  if (0xff < uVar6) {
    puVar2 = (uint *)puVar4;
  }
  if ((*puVar2 >> 1 & 1) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  FUN_02a89150(param_1 + 0x2cc,param_1 + 0x284);
  FUN_02a89150(param_1 + 0x2d0,param_1 + 0x2a8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}

