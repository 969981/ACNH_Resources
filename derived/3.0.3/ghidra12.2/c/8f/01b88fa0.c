
void FUN_01b88fa0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined **local_80 [4];
  
  FUN_01b88a30();
  puVar1 = PTR_DAT_04bb4788;
  local_80[0] = &PTR_FUN_04a39528;
  uVar7 = 0;
  lVar9 = *(long *)PTR_DAT_04bb4788;
  while( true ) {
    uVar6 = *(uint *)(lVar9 + 0x1c0);
    uVar10 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      uVar10 = 0;
      if (*(long *)(lVar9 + 0xb0) != 0) {
        puVar4 = *(uint **)(*(long *)(lVar9 + 0xb0) + 8);
        uVar10 = 0;
        if (puVar4 != (uint *)0x0) {
          uVar10 = (ulong)*puVar4;
        }
      }
    }
    if (uVar10 <= uVar7) break;
    if (uVar7 < 0x80) {
      uVar10 = uVar7 >> 3;
      uVar5 = 1 << (ulong)((uint)uVar7 & 7);
      if ((uVar5 & *(byte *)(param_1 + uVar10)) != 0) {
        if ((int)uVar6 < 1) {
          if ((((*(long *)(lVar9 + 0xb0) != 0) &&
               (puVar4 = *(uint **)(*(long *)(lVar9 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
              ((*(uint *)(lVar9 + 200) <= uVar7 ||
               (*(char *)(*(long *)(lVar9 + 0xd0) + uVar7) != '\0')))) &&
             (((uVar7 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar4 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar3 = (ulong)(puVar4[1] * (uint)uVar7 + (uint)(ushort)puVar4[2] * 8 + iVar8) +
                    (long)puVar4;
            goto joined_r0x01b890f8;
          }
        }
        else if (uVar7 < uVar6) {
          uVar2 = uVar7;
          if (*(uint *)(lVar9 + 0x1b0) <= uVar7) {
            uVar2 = 0;
          }
          lVar3 = *(long *)(*(long *)(lVar9 + 0x1b8) + uVar2 * 8);
joined_r0x01b890f8:
          if ((lVar3 != 0) && (uVar2 = (*(code *)*local_80[0])(local_80), (uVar2 & 1) == 0)) {
            *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) & ((byte)uVar5 ^ 0xff);
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
  }
  lVar9 = *(long *)puVar1;
  uVar6 = 0;
  local_80[0] = &PTR_FUN_04a39550;
  do {
    if ((int)*(uint *)(lVar9 + 0x1c0) < 1) {
      lVar3 = *(long *)(lVar9 + 0xb0);
      if (lVar3 == 0) {
        return;
      }
      uVar5 = 0;
      if (*(uint **)(lVar3 + 8) != (uint *)0x0) {
        uVar5 = **(uint **)(lVar3 + 8);
      }
      if (uVar5 <= uVar6) {
        return;
      }
      if ((((lVar3 != 0) && (puVar4 = *(uint **)(lVar3 + 8), puVar4 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 200) <= uVar6 ||
           (*(char *)(*(long *)(lVar9 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
         (((uVar6 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar3 = (ulong)(puVar4[1] * uVar6 + (uint)(ushort)puVar4[2] * 8 + iVar8) + (long)puVar4;
        goto joined_r0x01b89208;
      }
    }
    else {
      if (*(uint *)(lVar9 + 0x1c0) <= uVar6) {
        return;
      }
      uVar5 = uVar6;
      if (*(uint *)(lVar9 + 0x1b0) <= uVar6) {
        uVar5 = 0;
      }
      lVar3 = *(long *)(*(long *)(lVar9 + 0x1b8) + (ulong)uVar5 * 8);
joined_r0x01b89208:
      if (((lVar3 != 0) && (uVar7 = (*(code *)*local_80[0])(local_80), (uVar7 & 1) != 0)) &&
         (uVar6 < 0x80)) {
        *(byte *)(param_1 + (ulong)(uVar6 >> 3)) =
             *(byte *)(param_1 + (ulong)(uVar6 >> 3)) | (byte)(1 << (ulong)(uVar6 & 7));
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

