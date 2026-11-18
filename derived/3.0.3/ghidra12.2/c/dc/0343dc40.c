
int FUN_0343dc40(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_68 [16];
  uint *local_58;
  undefined1 auStack_50 [16];
  uint *local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  FUN_0124f260(param_1,&local_18,1,0);
  FUN_0124f260(param_2,&local_38,1,0);
  puVar2 = PTR_DAT_04bbbc68;
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  bVar4 = false;
  if (lVar13 != 0) {
    if (((((*(long *)(lVar13 + 0xb0) == 0) || (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
         (*(long *)(lVar13 + 0x488) == 0)) ||
        ((*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0 || (*(long *)(lVar13 + 0x2b0) == 0)))) ||
       (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)) {
LAB_0343dd14:
      bVar4 = false;
    }
    else {
      uVar6 = FUN_0277d6c4(&local_18);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (*(uint *)(lVar13 + 0x1d8) <= uVar6) goto LAB_0343dd14;
      bVar4 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0;
    }
    lVar13 = *(long *)puVar2;
    if ((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
        ((*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0 ||
         (((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)) ||
          (*(long *)(lVar13 + 0x2b0) == 0)))))) || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0))
    {
      bVar5 = false;
      goto joined_r0x0343dd98;
    }
    uVar6 = FUN_0277d6c4(&local_38);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
      bVar5 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0;
      goto joined_r0x0343dd98;
    }
  }
  bVar5 = false;
joined_r0x0343dd98:
  if ((bVar4) || (bVar5)) {
    if ((bool)(bVar5 | bVar4 ^ 1U)) {
      if ((bool)(bVar4 | bVar5 ^ 1U)) {
        FUN_0124c030(auStack_50,&local_18);
        FUN_0124c030(auStack_68,&local_38);
        puVar3 = PTR_DAT_04bbbc78;
        puVar2 = PTR_DAT_04bbbc70;
        if ((local_40 != (uint *)0x0) && (uVar6 = *local_40, uVar6 != 0)) {
          cVar11 = *PTR_DAT_04bbbc70;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
              uVar6 = *local_40;
            }
            else {
              uVar7 = *(uint *)(puVar3 + 0x4c);
              if (-1 < (int)uVar7) {
                uVar10 = 0;
                if ((byte *)((ulong)uVar7 + (long)local_40) != (byte *)0x0) {
                  uVar10 = (uint)*(byte *)((ulong)uVar7 + (long)local_40);
                }
                goto LAB_0343def0;
              }
              if (uVar7 != 0xffffffff) break;
            }
            puVar1 = (uint *)(ulong)uVar6;
            uVar10 = 0;
            if ((puVar1 == (uint *)0x0) || (uVar10 = 0, local_40 == puVar1)) goto LAB_0343def0;
            lVar13 = 0xc;
            if (*(char *)((long)local_40 + (10 - (long)puVar1)) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)local_40 + (lVar13 - (long)puVar1);
            if (lVar13 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)local_40 + (8 - (long)puVar1));
            *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
            uVar10 = 0;
            if (uVar12 == 0) goto LAB_0343def0;
            piVar9 = (int *)(lVar13 + 4);
            while (piVar9[-1] != -0xa58ccc9) {
              piVar9 = piVar9 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar10 = 0;
                goto LAB_0343def0;
              }
            }
            uVar10 = 0;
            iVar8 = 0;
            if (*piVar9 != -1) {
              iVar8 = *piVar9;
            }
            *(int *)(puVar3 + 0x4c) = iVar8;
            uVar6 = *local_40;
            if (uVar6 == 0) goto LAB_0343def0;
          } while( true );
        }
        uVar10 = 0;
LAB_0343def0:
        puVar3 = PTR_DAT_04bbbc78;
        puVar2 = PTR_DAT_04bbbc70;
        if ((local_58 != (uint *)0x0) && (uVar6 = *local_58, uVar6 != 0)) {
          cVar11 = *PTR_DAT_04bbbc70;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
              uVar6 = *local_58;
            }
            else {
              uVar7 = *(uint *)(puVar3 + 0x4c);
              if (-1 < (int)uVar7) {
                if ((byte *)((ulong)uVar7 + (long)local_58) == (byte *)0x0) break;
                uVar7 = (uint)*(byte *)((ulong)uVar7 + (long)local_58);
                goto LAB_0343e010;
              }
              if (uVar7 != 0xffffffff) break;
            }
            puVar1 = (uint *)(ulong)uVar6;
            uVar7 = 0;
            if ((puVar1 == (uint *)0x0) || (uVar7 = 0, local_58 == puVar1)) goto LAB_0343e010;
            lVar13 = 0xc;
            if (*(char *)((long)local_58 + (10 - (long)puVar1)) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)local_58 + (lVar13 - (long)puVar1);
            uVar7 = 0;
            if (lVar13 == 0) goto LAB_0343e010;
            uVar12 = (ulong)*(ushort *)((long)local_58 + (8 - (long)puVar1));
            *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar9 = (int *)(lVar13 + 4);
            while (piVar9[-1] != -0xa58ccc9) {
              piVar9 = piVar9 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0343e00c;
            }
            uVar7 = 0;
            iVar8 = 0;
            if (*piVar9 != -1) {
              iVar8 = *piVar9;
            }
            *(int *)(puVar3 + 0x4c) = iVar8;
            uVar6 = *local_58;
            if (uVar6 == 0) goto LAB_0343e010;
          } while( true );
        }
LAB_0343e00c:
        uVar7 = 0;
LAB_0343e010:
        iVar8 = uVar10 - uVar7;
      }
      else {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = -1;
    }
  }
  else {
    iVar8 = 0;
  }
  return iVar8;
}

