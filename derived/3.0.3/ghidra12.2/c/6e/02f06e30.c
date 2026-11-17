
/* WARNING: Removing unreachable block (ram,0x02f06ec4) */

void FUN_02f06e30(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  byte local_64 [4];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0xd);
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc73c0);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1);
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_50 = 0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar1 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        local_48 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          local_48 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar10 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_48 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   local_48 < 0xbd)) goto LAB_02f07084;
              }
            }
            local_48 = 0;
          }
        }
        goto LAB_02f07084;
      }
    }
  }
  local_48 = 0xbc;
LAB_02f07084:
  local_44 = 0x86;
  if (local_48 == 0x86) {
    *(undefined1 *)(puVar9 + 0x56) = 1;
    local_64[0] = *param_2;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    FUN_0311a6e0(puVar9[0x45],param_1,local_64);
  }
  return;
}

