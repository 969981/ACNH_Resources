
/* WARNING: Removing unreachable block (ram,0x022e3e38) */
/* WARNING: Removing unreachable block (ram,0x022e3e48) */

bool FUN_022e3dfc(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_78;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  float local_5c;
  undefined1 local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 auStack_14 [4];
  
  puVar6 = PTR_DAT_04bb3170;
  iVar7 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  lVar8 = *(long *)PTR_DAT_04bb27a8;
  psVar10 = (short *)PTR_DAT_04bb3170;
  if ((*(long *)(lVar8 + 0x1f8) == 0) ||
     (lVar12 = *(long *)(*(long *)(lVar8 + 0x1f8) + 0xb0), lVar12 == 0)) goto LAB_022e3f48;
  uVar9 = iVar7 - *(int *)(lVar12 + 0x28);
  uVar1 = *(uint *)(lVar12 + 0x18);
  uVar5 = iVar2 - *(int *)(lVar12 + 0x2c);
  if ((uVar9 < uVar1 && uVar5 <= *(uint *)(lVar12 + 0x1c)) &&
      (uVar1 <= uVar9 || *(uint *)(lVar12 + 0x1c) != uVar5)) {
    uVar9 = uVar9 + uVar1 * uVar5;
LAB_022e3ef0:
    if (*(uint *)(lVar12 + 0x30) <= uVar9) {
      uVar9 = 0;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar9 * 0x68);
  }
  else {
    if (*(char *)(lVar12 + 0x88) != '\0') {
      uVar1 = iVar7 - *(int *)(lVar12 + 0x98);
      uVar5 = iVar2 - *(int *)(lVar12 + 0x9c);
      uVar9 = *(uint *)(lVar12 + 0xa0);
      if ((uVar1 < uVar9 && uVar5 <= *(uint *)(lVar12 + 0xa4)) &&
          (uVar9 <= uVar1 || *(uint *)(lVar12 + 0xa4) != uVar5)) {
        uVar9 = uVar1 + uVar9 * uVar5 + *(int *)(lVar12 + 0x8c);
        goto LAB_022e3ef0;
      }
    }
    puVar11 = &DAT_051a50f0;
  }
  if (((*(byte *)((long)puVar11 + 0xe) >> 5 & 1) == 0) &&
     (cVar3 = *(char *)((long)puVar11 + 0x1e), cVar3 != -1)) {
    psVar10 = (short *)(*(long *)(lVar8 + 0x4740) + (long)(int)cVar3 * 0x70 + 0x28);
    if (*(uint *)(lVar8 + 0x4738) <= (uint)(int)cVar3) {
      psVar10 = (short *)PTR_DAT_04bb3170;
    }
  }
LAB_022e3f48:
  local_70 = (float)iVar7 * 10.0 + 5.0;
  local_68 = (float)iVar2 * 10.0 + 5.0;
  fStack_64 = local_70;
  local_5c = local_68;
  if (*psVar10 == *(short *)PTR_DAT_04bb3170) {
    FUN_007ef010(auStack_14,PTR_DAT_04bb3170);
    uVar4 = *(ushort *)puVar6;
    local_58 = 0;
    local_78 = PTR_DAT_04bc2ef8 + 0x10;
    FUN_007ef010(&local_50,puVar6);
    local_48 = 0;
    local_6c = 0;
    local_60 = 0;
    local_54 = 0;
    local_50 = (uint)uVar4;
    local_4c = 1;
    iVar7 = FUN_022e2e54(param_1,&local_78);
  }
  else {
    local_58 = 0;
    local_78 = PTR_DAT_04bc2ef8 + 0x10;
    FUN_007ef010(&local_50,PTR_DAT_04bb3170);
    local_54 = *(undefined4 *)(param_2 + 0x10);
    local_50 = *(uint *)(param_2 + 0x14);
    local_48 = 0;
    local_6c = 0;
    local_60 = 0;
    local_4c = 1;
    iVar7 = FUN_022e3504(param_1,&local_78);
  }
  return iVar7 == 0;
}

