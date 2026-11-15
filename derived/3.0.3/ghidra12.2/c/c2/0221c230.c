
void FUN_0221c230(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 local_b0;
  undefined8 *local_a8;
  int *local_a0;
  int local_90 [6];
  undefined8 local_78 [3];
  
  puVar9 = PTR_DAT_04bb5d40;
  puVar8 = PTR_DAT_04bb37e0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = local_90;
  if (local_78 != (undefined8 *)0x0) {
    local_b0 = 0x300000000;
    local_a8 = local_78;
  }
  lVar11 = -0x9d8;
  iVar13 = 6;
  do {
    piVar10 = local_a0;
    if ((*(char *)(lVar11 + 0x545c334) != '\0') && (*(char *)(lVar11 + 0x545c372) != '\0')) {
      if ((int)local_b0 < local_b0._4_4_) {
        if (local_a0 != (int *)0x0) {
          local_a0 = *(int **)local_a0;
        }
        *piVar10 = iVar13;
        if ((int)local_b0 < local_b0._4_4_) {
          local_a8[(int)local_b0] = piVar10;
          local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
        }
      }
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *(undefined1 *)(lVar11 + 0x545c338) = 0;
      *(undefined8 *)(lVar11 + 0x545c348) = 0xffffffff00000000;
      uVar7 = *(undefined2 *)puVar8;
      *(char *)(lVar11 + 0x545c372) = '\0';
      *(undefined4 *)(lVar11 + 0x545c350) = 0;
      *(undefined1 *)(lVar11 + 0x545c356) = uVar5;
      *(undefined1 *)(lVar11 + 0x545c357) = uVar6;
      *(undefined4 *)(lVar11 + 0x545c3bc) = 0xffffffff;
      uVar2 = *(undefined4 *)(puVar9 + 8);
      uVar3 = *(undefined4 *)(puVar9 + 0xc);
      *(undefined2 *)(lVar11 + 0x545c354) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c377) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c374) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c37e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c368) = uVar2;
      uVar2 = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)(lVar11 + 0x545c36c) = uVar3;
      *(undefined2 *)(lVar11 + 0x545c370) = 1;
      *(undefined1 *)(lVar11 + 0x545c376) = uVar5;
      *(undefined2 *)(lVar11 + 0x545c37c) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c37f) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c384) = uVar7;
      *(undefined4 *)(lVar11 + 0x545c358) = uVar2;
      *(undefined4 *)(lVar11 + 0x545c378) = uVar2;
      *(undefined4 *)(lVar11 + 0x545c380) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c386) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c388) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c387) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c38c) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c38e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c390) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c38f) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c394) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c396) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c398) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c397) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c39c) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c39e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3a0) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c39f) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c3a4) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c3a6) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3a8) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c3a7) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c3ac) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c3ae) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3b0) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c3af) = uVar6;
      *(undefined2 *)(lVar11 + 0x545c3b4) = uVar7;
      *(undefined1 *)(lVar11 + 0x545c3b6) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3b8) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c3b7) = uVar6;
    }
    lVar11 = lVar11 + 0x118;
    iVar13 = iVar13 + 1;
  } while (lVar11 != 0);
  uVar12 = local_b0 & 0xffffffff;
  if (0 < (int)local_b0) {
    iVar13 = *(int *)(param_1 + 0x1218);
    iVar16 = *(int *)(param_1 + 0x121c);
    do {
      iVar4 = *(int *)*local_a8;
      if (iVar4 == iVar13 || iVar4 == iVar16) {
        iVar14 = -1;
        if (iVar16 == iVar4) {
          iVar14 = 1;
        }
        if (iVar4 == iVar13) {
          iVar14 = 0;
        }
        puVar17 = (undefined4 *)(param_1 + 0x121c);
        if (iVar14 == 1) {
          iVar16 = -1;
        }
        else {
          if (iVar14 != 0) goto LAB_0221c494;
          *(int *)(param_1 + 0x1218) = iVar16;
          iVar13 = iVar16;
          iVar16 = -1;
        }
LAB_0221c48c:
        *puVar17 = 0xffffffff;
      }
      else {
        uVar15 = 0xffffffff;
        if (iVar4 == *(int *)(param_1 + 0x1224)) {
          uVar15 = 1;
        }
        uVar1 = 0;
        if (iVar4 != *(int *)(param_1 + 0x1220)) {
          uVar1 = uVar15;
        }
        if (uVar1 != 0xffffffff) {
          puVar17 = (undefined4 *)(param_1 + 0x1220 + (ulong)uVar1 * 4);
          goto LAB_0221c48c;
        }
      }
LAB_0221c494:
      uVar12 = uVar12 - 1;
      local_a8 = local_a8 + 1;
    } while (uVar12 != 0);
  }
  return;
}

