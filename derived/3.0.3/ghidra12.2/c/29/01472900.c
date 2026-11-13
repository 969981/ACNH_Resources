
undefined4 FUN_01472900(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  uStack_6c = *(undefined4 *)(param_1 + 0x28c);
  local_68 = 0;
  local_70 = *(undefined4 *)(param_1 + 0x288);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x288);
      __s = PTR_DAT_04bbfe90;
      puVar3 = PTR_DAT_04bbfe88;
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         ((puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar9 != (uint *)0x0 && (uVar4 = *puVar9, uVar4 != 0)))) {
        cVar10 = *PTR_DAT_04bbfe88;
        while( true ) {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *puVar3 = 1;
            memset(__s,0xff,0x1ac);
            uVar4 = *puVar9;
          }
          else {
            uVar2 = *(uint *)(__s + 0x28);
            if (-1 < (int)uVar2) {
              if ((undefined4 *)((ulong)uVar2 + (long)puVar9) == (undefined4 *)0x0) {
                return 0;
              }
              return *(undefined4 *)((ulong)uVar2 + (long)puVar9);
            }
            if (uVar2 != 0xffffffff) {
              return 0;
            }
          }
          puVar5 = (uint *)(ulong)uVar4;
          if (puVar5 == (uint *)0x0) {
            return 0;
          }
          if (puVar9 == puVar5) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar9 + (lVar8 - (long)puVar5);
          if (lVar8 == 0) {
            return 0;
          }
          uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
          *(undefined4 *)(__s + 0x28) = 0xfffffffe;
          if (uVar6 == 0) {
            return 0;
          }
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != -0x3e783aea) {
            piVar7 = piVar7 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          *(int *)(__s + 0x28) = iVar1;
          uVar4 = *puVar9;
          if (uVar4 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

