
bool FUN_02b820b0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  undefined *local_48;
  undefined8 local_40;
  long *local_38;
  char local_30;
  char local_2f;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x550) != 0x1f) {
    return false;
  }
  local_24 = 0;
  uVar10 = FUN_02a6cf94(param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 + 8,
                        param_1 + 0x438);
  if ((uVar10 & 1) != 0) {
    local_24 = *(undefined4 *)
                (param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 + 0x48);
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_38,&local_24,&local_48,0);
  plVar6 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bc4480 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4480), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc4478 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4480);
    }
    uVar10 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bc4478);
    if ((uVar10 & 1) == 0) {
      local_2f = '\0';
    }
  }
  puVar5 = PTR_DAT_04bb5be8;
  puVar4 = PTR_DAT_04bb5be0;
  bVar7 = false;
  if (((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    uVar2 = (uint)*(ushort *)(local_38 + 0x51) - (uint)*(ushort *)(lVar12 + 0x9f0);
    if (((uVar2 < *(uint *)(lVar12 + 0x9d0)) &&
        (puVar13 = *(uint **)(*(long *)(lVar12 + 0x9d8) + (long)(int)uVar2 * 8),
        puVar13 != (uint *)0x0)) && (uVar2 = *puVar13, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bb5be0;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar13;
        }
        else {
          uVar8 = *(uint *)(puVar5 + 0xc);
          if (-1 < (int)uVar8) {
            if ((ushort *)((ulong)uVar8 + (long)puVar13) == (ushort *)0x0) break;
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar13);
            goto LAB_02b822ac;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar3 = (uint *)(ulong)uVar2;
        uVar8 = 0;
        if ((puVar3 == (uint *)0x0) || (uVar8 = 0, puVar13 == puVar3)) goto LAB_02b822ac;
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar3)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar3);
        uVar8 = 0;
        if (lVar1 == 0) goto LAB_02b822ac;
        uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar3));
        *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0x490afe2e) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02b822a8;
        }
        uVar8 = 0;
        iVar9 = 0;
        if (*piVar11 != -1) {
          iVar9 = *piVar11;
        }
        *(int *)(puVar5 + 0xc) = iVar9;
        uVar2 = *puVar13;
        if (uVar2 == 0) goto LAB_02b822ac;
      } while( true );
    }
LAB_02b822a8:
    uVar8 = 0;
LAB_02b822ac:
    local_48 = PTR_DAT_04bc4888 + 0x10;
    uVar8 = uVar8 - *(ushort *)(lVar12 + 0x7f0);
    if (uVar8 < *(uint *)(lVar12 + 2000)) {
      local_40 = *(undefined8 *)(*(long *)(lVar12 + 0x7d8) + (long)(int)uVar8 * 8);
    }
    else {
      local_40 = 0;
    }
    iVar9 = FUN_02af77b0(&local_48);
    bVar7 = iVar9 != 1;
  }
  return bVar7;
}

