
undefined * FUN_017c0eb0(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  puVar2 = PTR_DAT_04bbe400;
  puVar10 = PTR_DAT_04bbe3f8;
  if ((int)*(uint *)(param_1 + 0x3c8) < 1) {
    if (*(long *)(param_1 + 0x2b8) == 0) {
      return (undefined *)0x0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x2b8) + 8);
    if (puVar5 == (uint *)0x0) {
      return (undefined *)0x0;
    }
    if ((param_2 < *(uint *)(param_1 + 0x2d0)) &&
       (*(char *)(*(long *)(param_1 + 0x2d8) + (long)(int)param_2) == '\0')) {
      return (undefined *)0x0;
    }
    if (*puVar5 <= param_2) {
      return (undefined *)0x0;
    }
    if (puVar5[1] == 0) {
      return (undefined *)0x0;
    }
    if ((ushort)puVar5[2] == 0) {
      return (undefined *)0x0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(param_1 + 0x3c8) <= param_2) {
      return (undefined *)0x0;
    }
    if (*(uint *)(param_1 + 0x3b8) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x3c0) + (ulong)param_2 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 == 0) {
LAB_017c1038:
      uVar8 = 0;
    }
    else {
      cVar7 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar10 = 1;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar2 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar2 + 0x28);
          if (-1 < (int)uVar8) {
            if ((ushort *)((ulong)uVar8 + (long)puVar5) == (ushort *)0x0) goto LAB_017c1038;
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar5);
            goto LAB_017c103c;
          }
          if (uVar8 != 0xffffffff) goto LAB_017c1038;
        }
        puVar3 = (uint *)(ulong)*puVar5;
        uVar8 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar3)) goto LAB_017c103c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar3)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar3);
        if (lVar1 == 0) goto LAB_017c1038;
        uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar3));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        uVar8 = 0;
        if (uVar9 == 0) goto LAB_017c103c;
        piVar4 = (int *)(lVar1 + 4);
        while (piVar4[-1] != -0x1c5d79ea) {
          piVar4 = piVar4 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            uVar8 = 0;
            goto LAB_017c103c;
          }
        }
        iVar6 = 0;
        if (*piVar4 != -1) {
          iVar6 = *piVar4;
        }
        *(int *)(puVar2 + 0x28) = iVar6;
      } while (*puVar5 != 0);
      uVar8 = 0;
    }
LAB_017c103c:
    uVar8 = uVar8 - *(ushort *)(param_1 + 0x600);
    if ((uVar8 < *(uint *)(param_1 + 0x5e0)) &&
       (puVar5 = *(uint **)(*(long *)(param_1 + 0x5e8) + (long)(int)uVar8 * 8),
       puVar5 != (uint *)0x0)) {
      if (*puVar5 != 0) {
        cVar7 = DAT_05292f60;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            DAT_05292f64 = 0xffffffffffffffff;
            DAT_05292f6c = -1;
            DAT_05292f60 = '\x01';
            DAT_05292f74 = 0xffffffff;
          }
          else {
            if (-1 < DAT_05292f6c) {
              puVar10 = (undefined *)((ulong)DAT_05292f6c._4_4_ + (long)puVar5);
              goto LAB_017c112c;
            }
            if (DAT_05292f6c._4_4_ != 0xffffffff) break;
          }
          puVar3 = (uint *)(ulong)*puVar5;
          puVar10 = (undefined *)0x0;
          if ((*puVar5 == 0) || (puVar5 == puVar3)) goto LAB_017c112c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar3)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar5 + (lVar1 - (long)puVar3);
          if (lVar1 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar3));
          DAT_05292f6c = CONCAT44(0xfffffffe,(undefined4)DAT_05292f6c);
          puVar10 = (undefined *)0x0;
          if (uVar9 == 0) goto LAB_017c112c;
          piVar4 = (int *)(lVar1 + 4);
          while (piVar4[-1] != 0x4b9c4229) {
            piVar4 = piVar4 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              puVar10 = (undefined *)0x0;
              goto LAB_017c112c;
            }
          }
          iVar6 = 0;
          if (*piVar4 != -1) {
            iVar6 = *piVar4;
          }
          DAT_05292f6c = CONCAT44(iVar6,(undefined4)DAT_05292f6c);
        } while (*puVar5 != 0);
      }
      puVar10 = (undefined *)0x0;
LAB_017c112c:
      puVar2 = PTR_DAT_04c483e8;
      if (puVar10 != (undefined *)0x0) {
        puVar2 = puVar10;
      }
      return puVar2;
    }
  }
  return (undefined *)0x0;
}

