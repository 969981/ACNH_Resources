
void FUN_020fcff0(undefined2 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_30;
  long lStack_28;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  *param_1 = 0x23;
  *(undefined1 *)(param_1 + 1) = 8;
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  lVar7 = *(long *)PTR_DAT_04bb4138;
  if (lVar7 != 0) {
    if ((int)*(uint *)(lVar7 + 0x1c0) < 1) {
      if (*(long *)(lVar7 + 0xb0) == 0) {
        return;
      }
      puVar6 = *(uint **)(*(long *)(lVar7 + 0xb0) + 8);
      if (puVar6 == (uint *)0x0) {
        return;
      }
      if ((param_2 < *(uint *)(lVar7 + 200)) &&
         (*(char *)(*(long *)(lVar7 + 0xd0) + (long)(int)param_2) == '\0')) {
        return;
      }
      if (*puVar6 <= param_2) {
        return;
      }
      if (puVar6[1] == 0) {
        return;
      }
      if ((ushort)puVar6[2] == 0) {
        return;
      }
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(lVar7 + 0x1c0) <= param_2) {
        return;
      }
      if (*(uint *)(lVar7 + 0x1b0) <= param_2) {
        param_2 = 0;
      }
      puVar6 = *(uint **)(*(long *)(lVar7 + 0x1b8) + (ulong)param_2 * 8);
    }
    if (puVar6 != (uint *)0x0) {
      local_4 = 0;
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bb40b0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x80);
            if (-1 < (int)uVar2) {
              lVar7 = (ulong)uVar2 + (long)puVar6;
              goto LAB_020fd148;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          lVar7 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_020fd148;
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar1 = (long)puVar6 + (lVar7 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar5 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x80) = 0xfffffffe;
          lVar7 = 0;
          if (uVar5 == 0) goto LAB_020fd148;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x2f1b930d) {
            piVar11 = piVar11 + 2;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              lVar7 = 0;
              goto LAB_020fd148;
            }
          }
          iVar8 = 0;
          if (*piVar11 != -1) {
            iVar8 = *piVar11;
          }
          *(int *)(puVar4 + 0x80) = iVar8;
        } while (*puVar6 != 0);
      }
      lVar7 = 0;
LAB_020fd148:
      lStack_28 = *(long *)PTR_PTR_04bc1178;
      if (lVar7 != 0) {
        lStack_28 = lVar7;
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_020fc100(&local_4,local_8,&local_30);
      if ((uVar5 & 1) != 0) {
        FUN_020fd218(param_1,local_4,local_8[0]);
      }
    }
  }
  return;
}

