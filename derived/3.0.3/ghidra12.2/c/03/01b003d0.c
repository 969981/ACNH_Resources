
void FUN_01b003d0(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  iVar5 = FUN_01ad7260();
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_01ad7260(param_1);
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  if (iVar5 <= param_3) {
    return;
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    local_34 = 0xbc;
  }
  else {
    uVar2 = *puVar7;
    local_34 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      local_34 = 0;
      if (*puVar8 != 0) {
        uVar2 = puVar8[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar2);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
               , local_34 < 0xbd)) goto LAB_01b004ac;
          }
        }
        local_34 = 0;
      }
    }
  }
LAB_01b004ac:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= local_34 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)local_34) != '\0')))) &&
       (((local_34 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
      iVar5 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * local_34 + (uint)(ushort)puVar7[2] * 8 + iVar5) +
                       (long)puVar7);
      goto joined_r0x01b00658;
    }
  }
  else if (local_34 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    uVar2 = local_34;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= local_34) {
      uVar2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x01b00658:
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar9 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
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
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x70);
            if (-1 < (int)uVar2) {
              lVar11 = (ulong)uVar2 + (long)puVar7;
              goto LAB_01b005d8;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)*puVar7;
          lVar11 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar8)) goto LAB_01b005d8;
          lVar11 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar13 = (long)puVar7 + (lVar11 - (long)puVar8);
          if (lVar13 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
          *(undefined4 *)(puVar4 + 0x70) = 0xfffffffe;
          lVar11 = 0;
          if (uVar10 == 0) goto LAB_01b005d8;
          piVar12 = (int *)(lVar13 + 4);
          while (piVar12[-1] != -0x7840ff18) {
            piVar12 = piVar12 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              lVar11 = 0;
              goto LAB_01b005d8;
            }
          }
          iVar5 = 0;
          if (*piVar12 != -1) {
            iVar5 = *piVar12;
          }
          *(int *)(puVar4 + 0x70) = iVar5;
        } while (*puVar7 != 0);
      }
      lVar11 = 0;
LAB_01b005d8:
      lVar13 = *(long *)PTR_PTR_04bbfea8;
      if (lVar11 != 0) {
        lVar13 = lVar11;
      }
      goto LAB_01b00668;
    }
  }
  lVar13 = *(long *)(PTR_PTR_04bb2238 + 8);
LAB_01b00668:
  local_3c = *(undefined4 *)(param_1 + 8);
  uStack_38 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = FUN_0277d6c4(&local_3c);
  FUN_038d1270(param_2,"%s_%05d_%d",lVar13,uVar6,param_3);
  return;
}

