
float FUN_01473460(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = 0;
  lVar6 = param_1 + 0x288;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *(undefined8 *)(param_1 + 0x288);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(lVar6);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
        local_68 = lVar11;
      }
    }
  }
  iVar5 = FUN_0277d6c4(&local_70);
  if (((iVar5 != 0x1618) && (iVar5 = FUN_0277d6c4(&local_70), iVar5 != 0x315a)) &&
     (iVar5 = FUN_0277d6c4(&local_70), iVar5 != 0x3805)) {
    local_88 = *(undefined4 *)(param_1 + 0x288);
    uStack_84 = *(undefined4 *)(param_1 + 0x28c);
    lVar11 = *(long *)puVar2;
    local_80 = 0;
    uVar4 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(lVar6);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
          local_80 = lVar11;
        }
      }
    }
    iVar5 = FUN_0277d6c4(&local_88);
    if (iVar5 != 0x342f) {
      local_78 = puVar3 + 0x10;
      local_70 = *(undefined8 *)(param_1 + 0x288);
      lVar11 = *(long *)puVar2;
      local_68 = 0;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar2 == 0) {
        return 0.0;
      }
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
        return 0.0;
      }
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
        return 0.0;
      }
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(lVar6);
      puVar3 = PTR_DAT_04bbfe90;
      puVar2 = PTR_DAT_04bbfe88;
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
        return 0.0;
      }
      puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar10 == (uint *)0x0) {
        return 0.0;
      }
      uVar4 = *puVar10;
      if (uVar4 == 0) {
        return 0.0;
      }
      cVar12 = *PTR_DAT_04bbfe88;
      while( true ) {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *puVar2 = 1;
          memset(puVar3,0xff,0x1ac);
          uVar4 = *puVar10;
        }
        else {
          uVar1 = *(uint *)(puVar3 + 0x28);
          if (-1 < (int)uVar1) {
            if ((float *)((ulong)uVar1 + (long)puVar10) == (float *)0x0) {
              return 0.0;
            }
            return *(float *)((ulong)uVar1 + (long)puVar10);
          }
          if (uVar1 != 0xffffffff) {
            return 0.0;
          }
        }
        puVar7 = (uint *)(ulong)uVar4;
        if (puVar7 == (uint *)0x0) {
          return 0.0;
        }
        if (puVar10 == puVar7) break;
        lVar6 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar10 + (lVar6 - (long)puVar7);
        if (lVar6 == 0) {
          return 0.0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
        *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0.0;
        }
        piVar9 = (int *)(lVar6 + 4);
        while (piVar9[-1] != -0x3e783aea) {
          piVar9 = piVar9 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0.0;
          }
        }
        iVar5 = 0;
        if (*piVar9 != -1) {
          iVar5 = *piVar9;
        }
        *(int *)(puVar3 + 0x28) = iVar5;
        uVar4 = *puVar10;
        if (uVar4 == 0) {
          return 0.0;
        }
      }
      return 0.0;
    }
  }
  lVar6 = *(long *)(param_1 + 0xa80);
  if ((((*(ushort *)(lVar6 + 0x1298) & 0x101) == 0) ||
      (lVar11 = *(long *)(lVar6 + 0x1150), lVar11 == 0)) || (*(int *)(lVar11 + 0x30) < 2)) {
    local_68._0_4_ = *(float *)(lVar6 + 0x11d4) - *(float *)(lVar6 + 0x11c8);
  }
  else {
    local_78 = (undefined *)0x7f7fffff7f7fffff;
    local_70 = 0xff7fffff7f7fffff;
    local_68 = 0xff7fffffff7fffff;
    (**(code **)(**(long **)**(undefined8 **)(lVar11 + 0x38) + 0x220))
              (*(long **)**(undefined8 **)(lVar11 + 0x38),&local_78,1);
  }
  return (float)local_68;
}

