
void FUN_0221bf70(long param_1)

{
  undefined4 uVar1;
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
  int iVar15;
  undefined8 local_a0;
  undefined8 *local_98;
  int *local_90;
  int local_80 [4];
  undefined8 local_70 [2];
  
  puVar9 = PTR_DAT_04bb5d40;
  puVar8 = PTR_DAT_04bb37e0;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = local_80;
  if (local_70 != (undefined8 *)0x0) {
    local_a0 = 0x200000000;
    local_98 = local_70;
  }
  lVar11 = -0x9d8;
  iVar13 = 6;
  do {
    piVar10 = local_90;
    if ((*(char *)(lVar11 + 0x545c334) != '\0') && (*(char *)(lVar11 + 0x545c371) != '\0')) {
      if ((int)local_a0 < local_a0._4_4_) {
        if (local_90 != (int *)0x0) {
          local_90 = *(int **)local_90;
        }
        *piVar10 = iVar13;
        if ((int)local_a0 < local_a0._4_4_) {
          local_98[(int)local_a0] = piVar10;
          local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + 1);
        }
      }
      uVar5 = puVar8[2];
      *(char *)(lVar11 + 0x545c371) = '\0';
      uVar7 = *(undefined2 *)puVar8;
      *(undefined4 *)(lVar11 + 0x545c350) = 0;
      *(undefined4 *)(lVar11 + 0x545c3bc) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x545c356) = uVar5;
      uVar6 = puVar8[3];
      *(undefined2 *)(lVar11 + 0x545c354) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c374) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c37c) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c384) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c38c) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c394) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c39c) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c3a4) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c3ac) = uVar7;
      *(undefined2 *)(lVar11 + 0x545c3b4) = uVar7;
      uVar3 = *(undefined4 *)(puVar8 + 4);
      *(undefined1 *)(lVar11 + 0x545c37e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c358) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c357) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c376) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c378) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c386) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c380) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c38e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c388) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c396) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c390) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c39e) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c398) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c3a6) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3a0) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c3ae) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3a8) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c3b6) = uVar5;
      *(undefined4 *)(lVar11 + 0x545c3b0) = uVar3;
      uVar1 = *(undefined4 *)(puVar9 + 8);
      uVar2 = *(undefined4 *)(puVar9 + 0xc);
      *(undefined4 *)(lVar11 + 0x545c3b8) = uVar3;
      *(undefined1 *)(lVar11 + 0x545c338) = 0;
      *(undefined4 *)(lVar11 + 0x545c368) = uVar1;
      *(undefined8 *)(lVar11 + 0x545c348) = 0xffffffff00000000;
      *(undefined4 *)(lVar11 + 0x545c36c) = uVar2;
      *(undefined1 *)(lVar11 + 0x545c370) = 1;
      *(undefined1 *)(lVar11 + 0x545c377) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c37f) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c387) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c38f) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c397) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c39f) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c3a7) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c3af) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c3b7) = uVar6;
      *(undefined1 *)(lVar11 + 0x545c372) = 0;
    }
    lVar11 = lVar11 + 0x118;
    iVar13 = iVar13 + 1;
  } while (lVar11 != 0);
  uVar12 = local_a0 & 0xffffffff;
  if (0 < (int)local_a0) {
    iVar13 = *(int *)(param_1 + 0x1218);
    iVar15 = *(int *)(param_1 + 0x121c);
    do {
      iVar4 = *(int *)*local_98;
      if (iVar4 == iVar13 || iVar4 == iVar15) {
        iVar14 = -1;
        if (iVar15 == iVar4) {
          iVar14 = 1;
        }
        if (iVar4 == iVar13) {
          iVar14 = 0;
        }
        if (iVar14 != 1) {
          if (iVar14 != 0) goto LAB_0221c1c8;
          *(int *)(param_1 + 0x1218) = iVar15;
          iVar13 = iVar15;
        }
        iVar15 = -1;
        *(undefined4 *)(param_1 + 0x121c) = 0xffffffff;
      }
LAB_0221c1c8:
      uVar12 = uVar12 - 1;
      local_98 = local_98 + 1;
    } while (uVar12 != 0);
  }
  return;
}

