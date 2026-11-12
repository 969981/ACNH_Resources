
undefined2 FUN_0088b600(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  long lVar10;
  undefined1 auStack_38 [8];
  
  FUN_0088a148(auStack_38);
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(auStack_38);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0088aaf0(param_1,auStack_38,param_3);
      if ((int)*(uint *)(param_1 + 0xc28) < 1) {
        if (*(long *)(param_1 + 0xb18) == 0) {
          return 0;
        }
        puVar7 = *(uint **)(*(long *)(param_1 + 0xb18) + 8);
        if (puVar7 == (uint *)0x0) {
          return 0;
        }
        if ((uVar3 < *(uint *)(param_1 + 0xb30)) &&
           (*(char *)(*(long *)(param_1 + 0xb38) + (long)(int)uVar3) == '\0')) {
          return 0;
        }
        if (*puVar7 <= uVar3) {
          return 0;
        }
        if (puVar7[1] == 0) {
          return 0;
        }
        if ((ushort)puVar7[2] == 0) {
          return 0;
        }
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar3 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
      }
      else {
        if (*(uint *)(param_1 + 0xc28) <= uVar3) {
          return 0;
        }
        if (*(uint *)(param_1 + 0xc18) <= uVar3) {
          uVar3 = 0;
        }
        puVar7 = *(uint **)(*(long *)(param_1 + 0xc20) + (ulong)uVar3 * 8);
      }
      if ((puVar7 != (uint *)0x0) && (uVar3 = *puVar7, uVar3 != 0)) {
        cVar9 = DAT_04ce9780;
        while( true ) {
          if (cVar9 == '\0') {
            DAT_04ce9784 = 0xffffffffffffffff;
            cVar9 = '\x01';
            DAT_04ce978c = 0xffffffff;
            uVar3 = *puVar7;
            DAT_04ce9780 = '\x01';
          }
          else {
            if (-1 < (int)DAT_04ce9784) {
              puVar1 = (undefined2 *)((DAT_04ce9784 & 0xffffffff) + (long)puVar7);
              if (puVar1 == (undefined2 *)0x0) {
                return 0;
              }
              return *puVar1;
            }
            if ((int)DAT_04ce9784 != -1) {
              return 0;
            }
          }
          puVar5 = (uint *)(ulong)uVar3;
          if (puVar5 == (uint *)0x0) {
            return 0;
          }
          if (puVar7 == puVar5) break;
          lVar10 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar7 + (lVar10 - (long)puVar5);
          if (lVar10 == 0) {
            return 0;
          }
          uVar4 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
          DAT_04ce9784 = CONCAT44(DAT_04ce9784._4_4_,0xfffffffe);
          if (uVar4 == 0) {
            return 0;
          }
          piVar6 = (int *)(lVar10 + 4);
          while (piVar6[-1] != 0x736adca8) {
            piVar6 = piVar6 + 2;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              return 0;
            }
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          DAT_04ce9784 = CONCAT44(DAT_04ce9784._4_4_,iVar8);
          uVar3 = *puVar7;
          if (uVar3 == 0) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

